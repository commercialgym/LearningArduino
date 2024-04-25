int potVal;
int delayTime=200;
int potPin=A3;
int redLED=7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(potPin, INPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
Serial.println(potVal);
delay(delayTime);

while (potVal>1000)
{
  digitalWrite(redLED, HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(delayTime);
}

digitalWrite(redLED, LOW);

}
