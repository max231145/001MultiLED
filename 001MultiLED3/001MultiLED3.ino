void setup() {
  
  pinMode(1, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(9, OUTPUT);

   digitalWrite(1, LOW); 
   digitalWrite(3, LOW);
   digitalWrite(7, LOW);
   digitalWrite(9, LOW);   
}


void loop() {
  digitalWrite(1, HIGH);  
  delay(1000);                     
  digitalWrite(1, LOW);   
  delay(1000);
  digitalWrite(3, HIGH);  
  delay(1000);                     
  digitalWrite(3, LOW);   
  delay(1000);
  digitalWrite(7, HIGH);  
  delay(1000);                     
  digitalWrite(7, LOW);   
  delay(1000);
  digitalWrite(9, HIGH);  
  delay(1000);                     
  digitalWrite(9, LOW);   
  delay(1000);                      
}
