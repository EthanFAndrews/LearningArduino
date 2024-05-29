static unsigned int myNum = 8;
static unsigned int myNum2 = 9;
static unsigned int myNum3 = 10;
static unsigned int myNum4 = 11;
static unsigned int myNum5 = 12;
static unsigned int myNum6 = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(myNum, OUTPUT);
  pinMode(myNum2, OUTPUT);
  pinMode(myNum3, OUTPUT);
  pinMode(myNum4, OUTPUT);
  pinMode(myNum5, OUTPUT);
  pinMode(myNum6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(myNum, true);
  delay(100);
  digitalWrite(myNum2, true);
  delay(100);
  digitalWrite(myNum3, true);
  delay(100);
  digitalWrite(myNum4, true);
  delay(100);
  digitalWrite(myNum5, true);
  delay(100);
  digitalWrite(myNum6, true);
  delay(100);
  digitalWrite(myNum, false);
  delay(100);
  digitalWrite(myNum2, false);
  delay(100);
  digitalWrite(myNum3, false);
  delay(100);
  digitalWrite(myNum4, false);
  delay(100);
  digitalWrite(myNum5, false);
  delay(100);
  digitalWrite(myNum6, false);
  delay(100);
  digitalWrite(myNum6, true);
  delay(100);
  digitalWrite(myNum5, true);
  delay(100);
  digitalWrite(myNum4, true);
  delay(100);
  digitalWrite(myNum3, true);
  delay(100);
  digitalWrite(myNum2, true);
  delay(100);
  digitalWrite(myNum, true);
  delay(100);
  digitalWrite(myNum6, false);
  delay(100);
  digitalWrite(myNum5, false);
  delay(100);
  digitalWrite(myNum4, false);
  delay(100);
  digitalWrite(myNum3, false);
  delay(100);
  digitalWrite(myNum2, false);
  delay(100);
  digitalWrite(myNum, false);
  delay(100);
}
