#include <SoftwareSerial.h>

int red = 12;
int buzzer = 2;
int time = 500;

SoftwareSerial bt_comm(7,6);

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  bt_comm.begin(9600);

  Serial.println("ready");
  bt_comm.println("ready");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(bt_comm.available()){
    int input = bt_comm.read();
    Serial.println(input);
    bt_comm.println(input);
    if(input == 49){
      digitalWrite(red,HIGH);
      tone(buzzer, 500);
      Serial.println("high");
      bt_comm.println("high");
      delay(time);
      digitalWrite(red,LOW);
      noTone(buzzer);
    }
    
  }
}
