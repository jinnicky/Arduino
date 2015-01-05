#define LED_PIN 9

void setup()
{ 
  pinMode(LED_PIN, OUTPUT);
  
}

void loop()
{
  
  int i, steps = 255;
  for (i = 0; i < steps; i++) 
  {
    analogWrite(LED_PIN, (255/steps) * i);
    delay(3000/steps);
  }
  
  delay(100);
  
  for (i = steps; i > 0; i--) 
  {
    analogWrite(LED_PIN, (255/steps) * i);
    delay(3000/steps);
  }

  delay(100);  
}
