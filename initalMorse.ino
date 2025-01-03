int led = 9;
int dotWait = 250;
int dashWait = 750;

void letterWait(){

  digitalWrite(led, LOW);
  delay(500);

}

void wordWait(){

  digitalWrite(led, LOW);
  delay(750);

}

void H(){
  digitalWrite(led, HIGH);
  delay(dotWait);
  digitalWrite(led, LOW);
  delay(dotWait);
  digitalWrite(led, HIGH);
  delay(dotWait);
  digitalWrite(led, LOW);
  delay(dotWait);
  digitalWrite(led, HIGH);
  delay(dotWait);
  digitalWrite(led, LOW);
  delay(dotWait);
  digitalWrite(led, HIGH);
  delay(dotWait);
  digitalWrite(led, LOW);
}

void I(){
  digitalWrite(led, HIGH);
  delay(dotWait);
  digitalWrite(led, LOW);
  delay(dotWait);
  digitalWrite(led, HIGH);
  delay(dotWait);
  digitalWrite(led, LOW);
}

void T(){
  digitalWrite(led,HIGH);
  delay(dashWait);
  digitalWrite(led,LOW);
}

void E(){
  digitalWrite(led,HIGH);
  delay(dotWait);
  digitalWrite(led,LOW);
}

void R(){
  digitalWrite(led, HIGH);
  delay(dotWait);
  digitalWrite(led,LOW);
  delay(dotWait);
  digitalWrite(led,HIGH);
  delay(dashWait);
  digitalWrite(led,HIGH);
  delay(dotWait);
  digitalWrite(led,LOW);
}



void setup(){

	pinMode(led, OUTPUT);

}

void loop(){

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
