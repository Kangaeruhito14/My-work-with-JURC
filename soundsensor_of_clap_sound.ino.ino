int micPin = A0;
int micValue1 = 0;
int micValue2 = 0;
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
int ledPin5 = 9;
int ledPin6 = 8;
int ledPin7 = 7;
int ledPin8 = 6;
int ledPin9 = 5;
int ledPin10 = 4;
boolean lightOn = false;
boolean lightOff = true;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin10, OUTPUT);
  pinMode(ledPin9, OUTPUT);
  pinMode(ledPin8, OUTPUT);
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
  if(micValue1 - micValue2 > 5 || micValue2 - micValue1 > 5)
  {
    lightOn = !lightOn;
    delay(150);
    digitalWrite(ledPin1, lightOn);
    lightOff = !lightOff;
    delay(150);
    digitalWrite(ledPin2, lightOff);

    lightOn = !lightOn;
    delay(50);
    digitalWrite(ledPin3, lightOn);
    lightOff = !lightOff;
    delay(50);
    digitalWrite(ledPin4, lightOff);
    
    lightOn = !lightOn;
    digitalWrite(ledPin5, lightOn);
    lightOff = !lightOff;
    digitalWrite(ledPin6, lightOff);

    lightOn = !lightOn;
    delay(100);
    digitalWrite(ledPin7, lightOn);
    lightOff = !lightOff;
    delay(100);
    digitalWrite(ledPin8, lightOff);
    
    lightOn = !lightOn;
    delay(200);
    digitalWrite(ledPin9, lightOn);
    lightOff = !lightOff;
    delay(200);
    digitalWrite(ledPin10, lightOff);
  }
}
