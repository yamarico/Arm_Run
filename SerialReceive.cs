//using System.Collections;
//using System.Collections.Generic;
//using UnityEngine;

//public class SerialReceive : MonoBehaviour
//{
//    //https://qiita.com/yjiro0403/items/54e9518b5624c0030531
//    //��LURL��SerialHandler.c�̃N���X
//    public SerialHandler serialHandler;

//    void Start()
//    {
//        //�M������M�����Ƃ��ɁA���̃��b�Z�[�W�̏������s��
//        serialHandler.OnDataReceived += OnDataReceived;
//    }

//    //��M�����M��(message)�ɑ΂��鏈��
//    void OnDataReceived(string message)
//    {
//        var data = message.Split(
//                new string[] { "\n" }, System.StringSplitOptions.None);
//        try
//        {
//            Debug.Log(data[0]);//Unity�̃R���\�[���Ɏ�M�f�[�^��\��
//        }
//        catch (System.Exception e)
//        {
//            Debug.LogWarning(e.Message);//�G���[��\��
//        }
//    }
//}