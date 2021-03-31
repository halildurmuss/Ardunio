int ledMPin = 13;
int ledSPin = 12;
int ledKPin = 11;
bool buttonMDurum = 0;
bool buttonSDurum = 0;
bool buttonKDurum = 0;
int buttonM = 2;
int buttonS = 3;
int buttonK = 4;

void setup()
{
  pinMode(ledMPin, OUTPUT);
  pinMode(ledSPin, OUTPUT);
  pinMode(ledKPin, OUTPUT);
  pinMode(buttonM, INPUT);
  pinMode(buttonS, INPUT);
  pinMode(buttonK, INPUT);
}

void loop()
{
  buttonMDurum = digitalRead(buttonM);
  if (buttonMDurum == 1)
  {
    digitalWrite(ledMPin , HIGH);
    delay(5000);
    digitalWrite(ledMPin , LOW);
  }
  
  buttonSDurum = digitalRead(buttonS);
  if (buttonSDurum == 1)
  {
    digitalWrite(ledSPin , HIGH);
    delay(5000);
    digitalWrite(ledSPin , LOW);
    
  }
  
  buttonKDurum = digitalRead(buttonK);
  if (buttonKDurum == 1)
  {
    digitalWrite(ledKPin , HIGH);
    delay(5000);
    digitalWrite(ledKPin , LOW);
  }
}