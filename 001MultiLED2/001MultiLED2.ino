void setup() {
  
  pinMode(0, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);

  digitalWrite(0, HIGH);
  digitalWrite(2, HIGH);
  
}

void loop() {
  digitalWrite(4, HIGH);  
  delay(1000);                      
  digitalWrite(4, LOW);   
  delay(1000);
  digitalWrite(6, HIGH);  
  delay(1000);                      
  digitalWrite(6, LOW);   
  delay(1000);  
}



