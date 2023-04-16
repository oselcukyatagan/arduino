int led = 9;
int dotWait = 250;
int dashWait = 750;

int buzzer = 6;
int buzzFreq = 600;

void dotSound(){
  tone(buzzer, buzzFreq);
  delay(dotWait);
  noTone(buzzer);
}

void dashSound(){
  tone(buzzer, buzzFreq);
  delay(dashWait);
  noTone(buzzer);
}

void letterWait(){
  digitalWrite(led, LOW);
  delay(500);
}

void wordWait(){
  digitalWrite(led, LOW);
  delay(750);
}

void dot(){
  digitalWrite(led, HIGH);
  delay(dotWait);
  digitalWrite(led, LOW);
  delay(dotWait);
}

void dash(){
  digitalWrite(led,HIGH);
  delay(dashWait);
  digitalWrite(led,LOW);
  delay(dotWait);
}

void H(){
  dot();
  dot();
  dot();
  dot();
}

void I(){
  dot();
  dot();
}

void T(){
  dash();
}

void E(){
  dot();
}

void R(){
  dot();
  dash();
  dot();
}



void setup(){

	pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);

}

void loop(){

  buzzerFunc();

  H();
  letterWait();
  I();
  letterWait();

  wordWait();
  T();
  letterWait();
  H();
  letterWait();
  E();
  letterWait();
  R();
  letterWait();
  E();  




}