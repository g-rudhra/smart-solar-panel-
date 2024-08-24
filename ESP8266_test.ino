int LDR=0;
void setup() {
  Serial.begin(9600);
  // pinMode(1,INPUT);
  // pinMode(4,OUTPUT);
  // pinMode(5,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(14,OUTPUT);

  delay(1000);
}

void loop() {
  digitalWrite(2,HIGH);
  digitalWrite(14,HIGH);

  // digitalWrite(4,HIGH);
  // digitalWrite(5,HIGH);

  // digitalWrite(7,HIGH);
   Serial.print("hello");

  LDR=analogRead(34);
  Serial.print("LDR:");
  Serial.println(LDR);

  // Serial.println(digitalRead(5));
  delay(100);
  digitalWrite(2,LOW);
  delay(100);
}
