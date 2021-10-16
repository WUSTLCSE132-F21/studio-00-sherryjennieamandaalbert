void setup() {
  Serial.begin(9600);
}
int t = 0;
void loop() {
  delay(1000);
  t = millis()/1000;
  Serial.print(t);
  Serial.println(" sec have elapsed");
}
//.
