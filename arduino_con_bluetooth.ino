
#include <Servo.h>
char val;

Servo servoMotor;
int xPin = A0;
int yPin = A1;
int contador1 = 0;
int xPosition = 0;
int yPosition = 0;

int ledPin12 = 12;
int ledPin13 = 13;

void setup()
{
    Serial.begin(9600);
    pinMode(ledPin12, OUTPUT);
    pinMode(ledPin13, OUTPUT);
    pinMode(xPin, INPUT);
    pinMode(yPin, INPUT);
    servoMotor.attach(8);
}

void loop()
{
    if (Serial.available())
    {
        val = Serial.read();
        if (val == '0')
        {
            digitalWrite(ledPin12, LOW);
        }
        if (val == '1')
        {
            digitalWrite(ledPin12, HIGH);
        }
        if (val == '2' &&)
        {
            contador1 = contador1 - 30;
            servoMotor.write(contador1);
        }
        if (val == '3' && contador1 >= 0 contador1 <= 180)
        {
            contador1 = contador1 + 30;
            servoMotor.write(contador1);
        }
    }
}
