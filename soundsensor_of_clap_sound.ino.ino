int micPin = A0;
int micValue1 = 0;
int micValue2 = 0;
boolean lightOn = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(micPin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  micValue1 = analogRead(micPin);
  Serial.println(micValue1);
  delay(1);
  micValue2 = analogRead(micPin);
  Serial.println(micValue2);
  if(micValue1 - micValue2 > 15 || micValue2 - micValue1 > 15)
  {
    lightOn = !lightOn;
    //delay(100);
    digitalWrite(13, lightOn);
  }
}
