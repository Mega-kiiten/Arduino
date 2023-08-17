const int Kitten_1 = 2;
const int Kitten_2 = 3;
const int Kitten_3 = 4;
const int Kitten_4 = 5;
const int Kitten_5 = 6;
const int Kitten_6 = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(Kitten_1, OUTPUT);
  pinMode(Kitten_2, OUTPUT);
  pinMode(Kitten_3, OUTPUT);
  pinMode(Kitten_4, OUTPUT);
  pinMode(Kitten_5, OUTPUT);
  pinMode(Kitten_6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Selem(Kitten_1, 50);
  Selem(Kitten_2, 50);
  Selem(Kitten_3, 50);
  Selem(Kitten_4, 50);
  Selem(Kitten_5, 50);
  Selem(Kitten_6, 50);
}


void Selem(int Kitten, int time) {
  digitalWrite(Kitten, HIGH);
  delay(time);
  digitalWrite(Kitten, LOW);
  delay(time);
}