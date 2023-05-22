int led = 12;
int echo = 6;
int trig = 2;


int time = 200;

int distanceControl(int safeZone){

  long travelTime;
  long distance;

  digitalWrite(trig,LOW);
  delayMicroseconds(10);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  

  travelTime = pulseIn(echo,HIGH);
  distance = travelTime / 58.2;
  Serial.println(travelTime);

  if(distance < safeZone) return 0;
  return 1;

}

void ledon(){
  digitalWrite(led, HIGH);
  Serial.println("on");
}

void ledoff(){
  digitalWrite(led, LOW);
  Serial.println("off");
}

void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(40);
  
  int a = distanceControl(5);
  
  a ? ledon() : ledoff();
  
}
