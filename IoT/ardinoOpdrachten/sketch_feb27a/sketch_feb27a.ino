 void setup() {
 pinMode(D3, OUTPUT);
 pinMode(D5, OUTPUT);
 pinMode(D6, OUTPUT);
}

void loop() {
  digitalWrite(D5, HIGH);
  delay(100);
  digitalWrite(D5, LOW);
  delay(300); 
  
  digitalWrite(D3, HIGH);
  delay(500);
  digitalWrite(D3, LOW);
  delay(300);
  digitalWrite(D5, HIGH);
  delay(100);
  digitalWrite(D5, LOW);
  delay(300);
  digitalWrite(D5, HIGH);
  delay(100);
  digitalWrite(D5, LOW);
  delay(300);

  digitalWrite(D5, HIGH);
  delay(100);
  digitalWrite(D5, LOW);
  delay(300);
  digitalWrite(D5, HIGH);
  delay(100);
  digitalWrite(D5, LOW);
  delay(300);

  digitalWrite(D5, HIGH);
  delay(100);
  digitalWrite(D5, LOW);
  delay(300);
  digitalWrite(D3, HIGH);
  delay(500);
  digitalWrite(D3, LOW);
  delay(300);

  digitalWrite(D3, HIGH);
  delay(500);
  digitalWrite(D3, LOW);
  delay(300);
  digitalWrite(D3, HIGH);
  delay(500);
  digitalWrite(D3, LOW);
  delay(3000);
}
