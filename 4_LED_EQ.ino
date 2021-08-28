const int micPin = A0;
const int blueLed = 8;
const int greenLed = 6;
const int yellowLed = 4;
const int redLed = 2;
int micValue1 = 0;
int micValue2 = 0;
int delayTime = 25;

void setup() {
  // put your setup code here, to run once:
  pinMode(micPin, INPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);

  digitalWrite(blueLed, LOW);
  digitalWrite(greenLed, LOW);
  digitalWrite(yellowLed, LOW);
  digitalWrite(redLed, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  micValue1 = analogRead(micPin);
  delay(15);
  micValue2 = analogRead(micPin);
  delay(15);

  if(micValue1-micValue2 == 1){
    digitalWrite(blueLed, HIGH);
  }

  else {
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
  }

  if(micValue1-micValue2 == 2){
    digitalWrite(blueLed, HIGH);
    delay(delayTime);
    digitalWrite(greenLed, HIGH);
  }

  else {
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
  }

  if(micValue1-micValue2 == 3){
    digitalWrite(blueLed, HIGH);
    delay(delayTime);
    digitalWrite(greenLed, HIGH);
    delay(delayTime);
    digitalWrite(yellowLed, HIGH);
  }

  else {
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
  }

  if(micValue1-micValue2 > 3){
    digitalWrite(blueLed, HIGH);
    delay(delayTime);
    digitalWrite(greenLed, HIGH);
    delay(delayTime);
    digitalWrite(yellowLed, HIGH);
    delay(delayTime);
    digitalWrite(redLed, HIGH);
  }

  else {
    digitalWrite(blueLed, LOW);
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, LOW);
  }
}
