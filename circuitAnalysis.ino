int inputPort = A3;
int delayTime = 500;
int bitVoltage;
float realVoltage;
float bitConverter = (5. / 1023.);
int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPort, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (count < 10) {
    delay(50);
    bitVoltage = analogRead(inputPort);
    realVoltage = bitConverter * bitVoltage;
    Serial.println(realVoltage);
    count++;
    delay(delayTime);
  }
  // continue running the program outside the loop
}

