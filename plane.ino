
int speedUpButton = 12;
int speedDownButton = 10;
int altitudeUpButton = 6;
int altitudeDownButton = 3;

int altitude = 0;
int speed = 0;

char buffer[30];
int time = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Airplane is ready to fly");
  pinMode(speedUpButton, INPUT_PULLUP);
  pinMode(speedDownButton, INPUT_PULLUP);
  pinMode(altitudeUpButton, INPUT_PULLUP);
  pinMode(altitudeDownButton, INPUT_PULLUP);
}


void loop() {
  // put your main code here, to run repeatedly:

  
  int speedUpVal = digitalRead(speedUpButton);
  int speedDownVal = digitalRead(speedDownButton);
  int altitudeUpVal = digitalRead(altitudeUpButton);
  int altitudeDownVal = digitalRead(altitudeDownButton);

  if(speedUpVal == 0){
    speed += 20;
  }
  if(speedDownVal == 0){
    speed > 0 ? speed -= 20 : Serial.println("Speed is already zero");
  }
  if(altitudeUpVal == 0){
    altitude += 30;
  }
  if(altitudeDownVal == 0){
    altitude > 0 ? altitude -= 30 : Serial.println("Already at ground level");
  }


  sprintf(buffer,"altiude: %d , speed: %d km/h",altitude, speed);
  Serial.println(buffer);
  delay(time);
  
}
