const int LeftMotorForward = 2;   
const int LeftMotorBackward = 3;
const int RightMotorForward = 5;
const int RightMotorBackward = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(RightMotorForward, OUTPUT);
  pinMode(RightMotorBackward, OUTPUT); 
  pinMode(LeftMotorForward, OUTPUT);
  pinMode(LeftMotorBackward, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  moveForward();
  delay(300);
  moveBackward();
  delay(300);
}


void moveForward() {
  digitalWrite(LeftMotorForward, HIGH);
  digitalWrite(RightMotorForward, HIGH);
  digitalWrite(LeftMotorBackward, LOW);
  digitalWrite(RightMotorBackward, LOW);
}


void moveBackward() {
  digitalWrite(LeftMotorForward,LOW);
  digitalWrite(RightMotorForward,LOW);
  digitalWrite(LeftMotorBackward, HIGH);
  digitalWrite(RightMotorBackward, HIGH);
}
