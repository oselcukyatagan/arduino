int voltPin = A2;
int voltageBitVAlue;
float voltage;
int delayTime = 500;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  voltageBitVAlue = analogRead(voltPin);
  voltage = (5./1023.)*voltageBitVAlue;
  Serial.println(voltage);
}
