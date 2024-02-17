#define red 0
#define green 2
#define manualSwitch 4
#define rightBackward 5
#define rightForward 6
#define leftBackward 10
#define leftForward 11

void setup() 
{
    pinMode(manualSwitch, INPUT_PULLUP);

    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(leftForward, OUTPUT);
    pinMode(leftBackward, OUTPUT);
    pinMode(rightForward, OUTPUT);
    pinMode(rightBackward, OUTPUT);

    startBlink();
}

void loop()
{

}

void startBlink()
{
    redOn();
    delay(500);
    greenOn();
    delay(500);
    redOn();
    delay(500);
    greenOn();
    delay(500);
    allOff();
}

void redOn()
{
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
}

void greenOn()
{
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
}

void allOff()
{
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
}