int buzzer = 12;
int echo = 6;
int trig = 2;


int time = 50;
int buzzerTime = 50;
int buzzerFreq = 140;
int microsec = 700;

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
  delay(time);


}

void alarm(){
  digitalWrite(buzzer, HIGH);
  delayMicroseconds(microsec);
  digitalWrite(buzzer, LOW);
  delayMicroseconds(microsec);
}

 void safe(){
   Serial.println("safe");
 }

void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int isTaken = distanceControl(20);

  isTaken ? alarm() : safe();

}

