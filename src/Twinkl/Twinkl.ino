int let = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(let, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(let, HIGH);
  delay(100);
  digitalWrite(let, LOW);
  delay(100);
}
