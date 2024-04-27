#include <SoftwareSerial.h>

int m1 = 12;
int m2 = 11;
int time = 1000;

SoftwareSerial bt_comm(3,2); //rx tx

void setup() {
  // put your setup code here, to run once:
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
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
      digitalWrite(m1, HIGH);
      digitalWrite(m2, LOW);
      delay(time);
      digitalWrite(m1, LOW);
      digitalWrite(m2, LOW);
    } if(input == 50){
      digitalWrite(m1, LOW);
      digitalWrite(m2, HIGH);
      delay(time);
      digitalWrite(m1, LOW);
      digitalWrite(m2, LOW);
    }
    
  }
}
