// vibration_motor_sample1
#include <time.h>

const int pin_5 = 5;
const int pin_6 = 6;
const int pin_9 = 9;
const int pin_10 = 10;
const int pin_11 = 11;

char data;

void setup() {
  Serial.begin(115200);
  //pinMode(LED_PIN, OUTPUT);
}
void Cmd_1(void);
void Cmd_2(void);
void Cmd_3(void);
void Cmd_4(void);
void Cmd_5(void);
void Cmd_6(void);
void Cmd_7(void);
void Cmd_8(void);
void Cmd_9(void);
void Cmd_10(void);
void Cmd_11(void);
void Cmd_12(void);
void Cmd_13(void);
void Cmd_14(void);
void Cmd_16(void);
void Cmd_17(void);
void Cmd_3(void);
void pin_9a(void);
void pin_10a(void);
void loop()
{
  if ( Serial.available() > 0 ){//受信データがあるか？
   data = Serial.read();//1文字だけ読み込む
   if (data == 0x31) { //文字コード0x31
      Cmd_11();
    }
//    while(Serial.available())Serial.read();
  }
}

void Cmd_6(){
    analogWrite(pin_10, 500);
    delay(200);
    analogWrite(pin_10, 0);
    analogWrite(pin_9, 500);
    delay(200);
    analogWrite(pin_9, 0);
    analogWrite(pin_5, 500);
    delay(200);
    analogWrite(pin_5, 0);
}

//Cmd8:かかと→ふくらはぎ→ふともも前
void Cmd_8(){
    analogWrite(pin_11, 500);
    delay(200);
    analogWrite(pin_11, 0);
    analogWrite(pin_9, 500);
    delay(200);
    analogWrite(pin_9, 0);
    analogWrite(pin_5, 500);
    delay(200);
    analogWrite(pin_5, 0);
}
//Cmd9:かかと→ふくらはぎ→ふともも後
void Cmd_9(){
    analogWrite(pin_11, 500);
    delay(200);
    analogWrite(pin_11, 0);
    analogWrite(pin_9, 500);
    delay(200);
    analogWrite(pin_9, 0);
    analogWrite(pin_6, 500);
    delay(200);
    analogWrite(pin_6, 0);
}
//Cmd10:前もも→ふくらはぎ→かかと
void Cmd_10(){
    analogWrite(pin_5, 500);
    delay(200);
    analogWrite(pin_5, 0);
    analogWrite(pin_9, 500);
    delay(200);
    analogWrite(pin_9, 0);
    analogWrite(pin_11, 500);
    delay(200);
    analogWrite(pin_11, 0);
}

//Cmd14:前もも→かかと→つまさき
void Cmd_14(){
    analogWrite(pin_5, 500);
    delay(200);
    analogWrite(pin_5, 0);
    analogWrite(pin_11, 500);
    delay(200);
    analogWrite(pin_11, 0);
    analogWrite(pin_10, 500);
    delay(200);
    analogWrite(pin_10, 0);
}

//Cmd15:後もも→かかと→つまさき
void Cmd_15(){
    analogWrite(pin_6, 500);
    delay(200);
    analogWrite(pin_6, 0);
    analogWrite(pin_11, 500);
    delay(200);
    analogWrite(pin_11, 0);
    analogWrite(pin_10, 500);
    delay(200);
    analogWrite(pin_10, 0);
}
