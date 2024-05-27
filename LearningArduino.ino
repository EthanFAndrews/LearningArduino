static unsigned int myNum = 8;


void setup() {
  // put your setup code here, to run once:
  pinMode(myNum, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(myNum, HIGH);
  delay(1000);
  digitalWrite(myNum, false);
  delay(500);
}
