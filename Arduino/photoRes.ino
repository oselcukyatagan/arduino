
int info = A0;
int red = 9;
int green = 2;
int time = 400;
int bitVolt;
float volt;
float converter = (5./1023.);


void setup(){

  Serial.begin(9600);
  pinMode(info,INPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);

}

void loop(){

  delay(time);
  bitVolt = analogRead(info);
  volt = converter * bitVolt;
  Serial.println(volt);
  
  
  if(volt < 0.10){ //lights are off

    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);

  } 
  else{ //lights are on
  	
    digitalWrite(green,LOW);
    digitalWrite(red,HIGH);

  }

}

