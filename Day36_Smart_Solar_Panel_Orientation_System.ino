#include <Servo.h>

Servo solarServo;

// LDR Pins
const int leftLDR = A1;
const int rightLDR = A0;

// Servo Signal Pin
const int servoPin = 9;

// Initial Servo Position
int servoAngle = 90;

// Difference required before moving
const int threshold = 50;

void setup()
{
  solarServo.attach(servoPin);
  solarServo.write(servoAngle);

  Serial.begin(9600);

  Serial.println("SMART SOLAR PANEL ORIENTATION SYSTEM");
  Serial.println("-----------------------------------");
}

void loop()
{
  // Read LDR Values
  int leftValue = analogRead(leftLDR);
  int rightValue = analogRead(rightLDR);

  Serial.print("Left LDR : ");
  Serial.print(leftValue);

  Serial.print("   Right LDR : ");
  Serial.print(rightValue);

  // Calculate Difference
  int difference = leftValue - rightValue;

  // Rotate Left
  if (difference > threshold)
  {
    servoAngle--;

    if (servoAngle > 180)
      servoAngle = 180;

    solarServo.write(servoAngle);

    Serial.print("   Status : ROTATING LEFT");
  }

  // Rotate Right
  else if (difference < -threshold)
  {
    servoAngle++;

    if (servoAngle < 0)
      servoAngle = 0;

    solarServo.write(servoAngle);

    Serial.print("   Status : ROTATING RIGHT");
  }

  // Stay in Current Position
  else
  {
    Serial.print("   Status : PANEL ALIGNED");
  }

  Serial.print("   Servo Angle : ");
  Serial.println(servoAngle);

  delay(100);
}