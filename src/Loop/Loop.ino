const int LeftMotorForward = 4;
const int LeftMotorBackward = 5;


void setup() {
  // put your setup code here, to run once:
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(LeftMotorBackward, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  moveForward();
}



void moveForward() {
  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(LeftMotorBackward, LOW);
  delay(9000);
}