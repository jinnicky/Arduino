#define LED_PIN 9

#define ON 1
#define OFF -1

#define STEPS 25

void setup()
{ 
  pinMode(LED_PIN, OUTPUT);
  
}

void loop()
{
  dimLights(STEPS, ON);
  dimLights(STEPS, OFF);  
}

void dimLights(int steps, int onoff)
{
  int i = (onoff > 0)? 0 : steps;
  int bpoint = (onoff > 0)? steps : 0;
  int increment = (onoff > 0)? ON : OFF;
  
  while (i != bpoint) {
    analogWrite(LED_PIN, (255/steps) * i);
    delay(3000/steps);
    i += increment;
  }

  delay(100);  
  
}
