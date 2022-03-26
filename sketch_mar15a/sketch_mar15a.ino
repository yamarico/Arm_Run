// vibration_motor_sample1
#include <time.h>

const int pin_5 = 5;
const int pin_6 = 6;
const int pin_9 = 9;
const int pin_10 = 10;
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
  if ( Serial.available() > 0 ){  
//         受信データがあるか？
    data = Serial.read();
//             1文字だけ読み込む
    if (data == 0x31) { //文字コード0x31
      Cmd_3();
    }
  }
}


//Cmd1:かかとL5→つま先L4
void Cmd_1(){
    analogWrite(pin_5, 500);
    delay(400);
    analogWrite(pin_5, 0);
    analogWrite(pin_6, 500);
    delay(400);
    analogWrite(pin_6, 0);
}

//Cmd2：つま先L4→かかとL5
void Cmd_2(){
    analogWrite(pin_6, 500);
    delay(400);
    analogWrite(pin_6, 0);
    analogWrite(pin_5, 500);
    delay(400);
    analogWrite(pin_5, 0);
}

//Cmd3：歩く左足 かかと→つまさき→ふくらはぎ
void Cmd_3(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}

//Cmd4:かかと→つまさき→ふともも前
void Cmd_(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}

//Cmd5:かかと→つまさき→ふともも後
void Cmd_5(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}

//Cmd6:つまさき→ふくらはぎ→ふともも前
void Cmd_6(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}

//Cmd7:つまさき→ふくらはぎ→ふともも後
void Cmd_7(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}
//Cmd8:かかと→ふくらはぎ→ふともも前
void Cmd_8(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}
//Cmd9:かかと→ふくらはぎ→ふともも後
void Cmd_9(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}
//Cmd10:前もも→ふくらはぎ→かかと
void Cmd_10(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}
//Cmd11:後もも→ふくらはぎ→かかと
void Cmd_11(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}
//Cmd12:前もも→ふくらはぎ→つまさき
void Cmd_12(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}

//Cmd13:後もも→ふくらはぎ→かかと
void Cmd_13(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}
//Cmd14:前もも→かかと→つまさき
void Cmd_14(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}
//Cmd15:後もも→かかと→つまさき
void Cmd_15(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}
//Cmd16:ふくらはぎ→かかと→つまさき
void Cmd_16(){
    analogWrite(pin_5, 500);
    delay(300);
    analogWrite(pin_5, 0);
    delay(20);
    analogWrite(pin_6, 500);
    delay(300);
    analogWrite(pin_6, 0);
    delay(20);
    analogWrite(pin_9, 500);
    delay(300);
    analogWrite(pin_9, 0);
}
