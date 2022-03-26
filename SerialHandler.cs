using UnityEngine;
using System.Collections;
using System.IO.Ports;
using System.Threading;

public class SerialHandler : MonoBehaviour
{
    public delegate void SerialDataReceivedEventHandler(string message);
    public event SerialDataReceivedEventHandler OnDataReceived;

    public string portName_l = "COM6";
    public string portName_r = "COM7";// ポート名(Macだと/dev/tty.usbmodem1421など)
    public int baudRate = 115200;  // ボーレート(Arduinoに記述したものに合わせる)

    //private SerialPort serialPort_;
    private SerialPort left_serialPort;
    private SerialPort right_serialPort;

    private Thread thread_;
    private bool isRunning_ = false;

    private string message_;
    private bool isNewMessageReceived_ = false;

    void Awake()
    {
        Open();
        Debug.Log("here!");
    }

    void Update()
    {
        if (isNewMessageReceived_)
        {
            OnDataReceived(message_);
        }
        isNewMessageReceived_ = false;
    }

    void OnDestroy()
    {
        Debug.Log("OnDestroy");
        Close();
    }

    private void Open()
    {
        //serialPort_ = new SerialPort(portName, baudRate, Parity.None, 8, StopBits.One);
        left_serialPort = new SerialPort(portName_l, baudRate, Parity.None, 8, StopBits.One);
        right_serialPort = new SerialPort(portName_r, baudRate, Parity.None, 8, StopBits.One);
        //または
        //serialPort_ = new SerialPort(portName, baudRate);

        //serialPort_.Open();
        left_serialPort.Open();
        right_serialPort.Open();

        isRunning_ = true;

        thread_ = new Thread(Read);
        thread_.Start();
    }

    private void Close()
    {
        isNewMessageReceived_ = false;
        isRunning_ = false;

        if (thread_ != null && thread_.IsAlive)
        {
            thread_.Join();
        }
        if (left_serialPort != null && left_serialPort.IsOpen)
        {
            left_serialPort.Close();
            left_serialPort.Dispose();
        }
        if (right_serialPort != null && right_serialPort.IsOpen)
        {
            right_serialPort.Close();
            right_serialPort.Dispose();
        }
        Debug.Log("Here! Yay!");
    }

    private void Read()
    {
        while (isRunning_ && right_serialPort != null && right_serialPort.IsOpen)
        {
            try
            {
                message_ = right_serialPort.ReadLine();
                isNewMessageReceived_ = true;
            }
            catch (System.Exception e)
            {
                Debug.LogWarning(e.Message);
            }
        }

        while (isRunning_ && left_serialPort != null && left_serialPort.IsOpen)
        {
            try
            {
                message_ = left_serialPort.ReadLine();
                isNewMessageReceived_ = true;
            }
            catch (System.Exception e)
            {
                Debug.LogWarning(e.Message);
            }
        }
    }

    public void Write(string message ,int lor)
    {
        try
        {
            //serialPort_.Write(message);
            if(lor == 0)
            {
                left_serialPort.Write(message);
            }
            else if(lor == 1)
            {
                right_serialPort.Write(message);
            }
        }
        catch (System.Exception e)
        {
            Debug.LogWarning(e.Message);
        }
    }
}