//John Ye 
//Emergency Light File 1 mode 


void setup() {

  pinMode(0, OUTPUT); //sets pin 0 and 1 as outputs
  pinMode(1, OUTPUT);
}

void loop() {

  for(int i=0;i<3;i++)
  {
  digitalWrite(0, HIGH);
  delay(50);
  digitalWrite(0, LOW);
  delay(50);
  digitalWrite(0, HIGH);
  delay(50);
  digitalWrite(0, LOW);
  delay(50);
  digitalWrite(0, HIGH);
  delay(50);
  digitalWrite(0, LOW);
  delay(50);
  digitalWrite(0, HIGH);
  delay(50);
  digitalWrite(0, LOW);
  delay(50);
  digitalWrite(0, HIGH);
  delay(50);
  digitalWrite(0, LOW);
  delay(50);

  digitalWrite(1, HIGH);
  delay(50);
  digitalWrite(1, LOW);
  delay(50);
  digitalWrite(1, HIGH);
  delay(50);
  digitalWrite(1, LOW);
  delay(50);
  digitalWrite(1, HIGH);
  delay(50);
  digitalWrite(1, LOW);
  delay(50);
  digitalWrite(1, HIGH);
  delay(50);
  digitalWrite(1, LOW);
  delay(50);
  digitalWrite(1, HIGH);
  delay(50);
  digitalWrite(1, LOW);
  delay(50);

  }
  delay(100);
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  delay(150);
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  delay(150);
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  delay(150);
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  delay(150);
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  delay(150);
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  delay(150);
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  delay(150);

}
