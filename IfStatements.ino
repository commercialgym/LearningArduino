int myPin=A2;
int readVal;
float V2;
int delayT=250;
int redLED=9;
int greenLED=11;
int yellowLED=13;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(myPin,INPUT);
  pinMode(redLED,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal=analogRead(myPin);
  V2=(5./1023.)*readVal;
  Serial.print("Potentiometer Voltage is ");
  Serial.println(V2);
  if (V2<3.){
    digitalWrite(greenLED,HIGH);
  }
  if (V2>3.) {
    digitalWrite(greenLED,LOW);
  }
  if (V2>3.&&V2<4.) {
    digitalWrite(yellowLED,HIGH);
  }
  if (V2<3.||V2>4.) {
    digitalWrite(yellowLED,LOW);
  }
  if (V2>4.) {
    digitalWrite(redLED,HIGH);
  }
  if (V2<4.) {
    digitalWrite(redLED,LOW);
  }

  delay(delayT);
}
