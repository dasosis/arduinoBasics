#define LED1 4
#define LED2 5
#define BUT1 6

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(BUT1,OUTPUT);
  
}

void loop() {
  if(digitalRead(BUT1))
  {
    delay(500);
    while(1)
    {
      digitalWrite(LED1,HIGH);
      delay(500);
      digitalWrite(LED1,LOW);
      delay(500);
      if(digitalRead(BUT1))
      {
        delaymode2();
        return;
      }
    }
  }
}

void delaymode2()
{
  delay(500);
  while(1)
    {
      digitalWrite(LED1,HIGH);
      delay(300);
      digitalWrite(LED1,LOW);
      delay(300);
      if(digitalRead(BUT1))
      {
        delaymode3();
        return;
      }
    }
}

void delaymode3()
{
  delay(500);
  while(1)
    {
      digitalWrite(LED1,HIGH);
      delay(100);
      digitalWrite(LED1,LOW);
      delay(100);
      if(digitalRead(BUT1))
      {
        delaymode4();
        return;
      }
    }
}

void delaymode4()
{
  delay(500);
    while(1)
    {
      digitalWrite(LED1,HIGH);
      delay(50);
      digitalWrite(LED1,LOW);
      delay(50);
      if(digitalRead(BUT1))
      {
        return;
      }
    }
}
