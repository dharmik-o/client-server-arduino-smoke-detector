const int buzzerPin = 9;  
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    char val = Serial.read();
    if(val == 'A')
    {
      digitalWrite(buzzerPin, HIGH);
    }
    else if(val == 'a')
    {
      digitalWrite(buzzerPin, LOW);
    }
  }
}