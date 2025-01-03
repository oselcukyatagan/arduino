int greenPin = 12;
int redPin = 8;
int time = 300;


void setup() {
  // put your setup code here, to run once:
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  delay(time);
  
  for(int j = 0; j < 3; j++){
    digitalWrite(redPin,HIGH);
    delay(time);
    digitalWrite(redPin,LOW);
    delay(time);
  }


  for(int i = 0; i < 2; i++){
    digitalWrite(greenPin,HIGH);
    delay(time);
    digitalWrite(greenPin,LOW);
    delay(time);
  }

  
  
  

}
