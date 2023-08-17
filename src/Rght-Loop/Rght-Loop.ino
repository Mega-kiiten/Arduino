const int RightMotorForward = 2;
const int RightMotorBackward = 3;


void setup() {
  // put your setup code here, to run once:
  pinMode(RightMotorForward, OUTPUT);
  pinMode(RightMotorBackward, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  moveForward();
}



void moveForward() {
  digitalWrite(RightMotorForward, HIGH);
  digitalWrite(RightMotorBackward, LOW);
  delay(9000);
}