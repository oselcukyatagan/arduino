int echo = 7;
int trig = 6;
int lights = 2;


int time = 1000;
int lightDuration = 3000;


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
  Serial.println(distance);

  delay(time);

  if(distance < safeZone) return 1;
  return 0;


}

void lightsOn(){
  digitalWrite(lights, HIGH);
  delay(lightDuration);
  digitalWrite(lights, LOW);
}

 void idle(){
   Serial.println("idle");
 }

void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(lights, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int motionInRange = distanceControl(10);

  motionInRange ? lightsOn() : idle();

}
