


void setup() {
  // put your setup code here, to run once:
  
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  delay(1000);
}
