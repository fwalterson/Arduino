char LED = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  if (Serial.available() > 0)
  {
    LED = Serial.read();
    Serial.print(LED);
    Serial.print("\n");
    if (LED == '1')
      digitalWrite(13, HIGH);
      
    else if (LED == '0')
      digitalWrite(13, LOW);
       LED = Serial.read();
    
    if (LED == '2')
    digitalWrite(12, HIGH);
      
    else if (LED == '3')
      digitalWrite(12, LOW);
       LED = Serial.read();
  
  }
}
