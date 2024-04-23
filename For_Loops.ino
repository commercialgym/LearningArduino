int yellowPin = 6;
int redPin = 9;
int delayY = 250;
int delayR = 250;
int YellowBlink = 3;
int RedBlink = 5;
int j;
// couldve used different delay time variables for future flexibility
void setup() {
  // put your setup code here, to run once:
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    for(j=1;j<=YellowBlink;j=j+1){
  digitalWrite(yellowPin, HIGH);
  delay(delayY);
  digitalWrite(yellowPin, LOW);
  delay(delayY);
    }
    for(j=1;j<=RedBlink;j=j+1){
  digitalWrite(redPin,HIGH);
  delay(delayR);
  digitalWrite(redPin,LOW);
  delay(delayR);
    }
}
