int VoltPin=A2;
int ReadVal;
float V2;
int delayT=250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ReadVal=analogRead(VoltPin);
  V2=(5./1023.)*ReadVal;
  Serial.println(V2);
  delay(delayT);
}
