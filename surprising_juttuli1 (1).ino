// C++ code
//
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);

  }

void loop()
{
  digitalWrite(1, HIGH);
  delay(2000); // Wait for 1000 millisecond(s)
  digitalWrite(1, LOW);
  delay(500); // Wait for 1000 millisecond(s)
  
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(500);
  
  digitalWrite(3,HIGH);
  delay(2000);
  digitalWrite(3,LOW);
  delay(500);
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(500);
}