int ledPin[] = {7,8,9,10,11};

void setup()
{
  for (int i =0;i<5;i++)
  {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop()
{
  displayBinary(24);
}

void displayBinary(byte numToShow)
{
  for (int i =0;i<5;i++)
  {
    if (bitRead(numToShow, i)==1)
    {
      digitalWrite(ledPin[i], HIGH);
    }
    else
    {
      digitalWrite(ledPin[i], LOW);
    }
  }

}
