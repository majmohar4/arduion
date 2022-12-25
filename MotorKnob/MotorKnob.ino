#include <Stepper.h>
const int stepsPerRevolution = 90;
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup(){
  pinMode(6, OUTPUT);
  pinMode(7, INPUT);
myStepper.setSpeed(200);
Serial.begin(9600);
}

void loop() {
  if(digitalRead(7) == HIGH){
    digitalWrite(6, HIGH);
    myDelay(200);
  }
  if(digitalRead(7) == HIGH){
    digitalWrite(6, LOW);
    myDelay(200);
  } 
  otherLoop();
}

void otherLoop() {
    Serial.println("clockwise");
   myStepper.step(stepsPerRevolution);
}
void myDelay(int del) {
  unsigned long myPrevMillis = millis();
  while (millis()- myPrevMillis <= del);
}
