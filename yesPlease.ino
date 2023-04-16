int led = 9;

int buzzer = 7;
int buzzFreq = 400;

int dotWait = 100;
int dashWait = 300;

int signBreak = 100;
int letterBreak = 300;
int wordBreak = 400;

void dotSound(){
  
  delay(dotWait);
  
}

void dashSound(){
  
  delay(dashWait);
  noTone(buzzer);
}


void dot(){
  digitalWrite(led, HIGH);
  tone(buzzer, buzzFreq);
  delay(dotWait);
  digitalWrite(led, LOW);
  noTone(buzzer);
}

void dash(){
  digitalWrite(led,HIGH);
  tone(buzzer, buzzFreq);
  delay(dashWait);
  digitalWrite(led,LOW);
  noTone(buzzer);
}

void H(){
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
  delay(signBreak);
  dot();
}

void I(){
  dot();
  delay(signBreak);
  dot();
}

void T(){
  dash();
  delay(signBreak);
}

void E(){
  dot();
  delay(signBreak);
}

void R(){
  dot();
  delay(signBreak);
  dash();
  delay(signBreak);
  dot();
}



void setup(){

	pinMode(led, OUTPUT);
  	Serial.begin(9600);

}

void loop(){

  delay(1000);

  H();
  Serial.println("h done");
  delay(letterBreak);
  I();
  Serial.println("i done");
  delay(wordBreak);

  T();
  Serial.println("t done");
  delay(letterBreak);
  H();
  Serial.println("second h done");
  delay(letterBreak);
  E();
  Serial.println("e done");
  delay(letterBreak);
  R();
  Serial.println("r done");
  delay(letterBreak);
  E();  
  Serial.println("second e done");
  


}