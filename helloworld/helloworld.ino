/* helloworld
 *
 * output simple hello message
 *
 */

void setup() {
  
  Serial.begin(9600);
  Serial.println("Hello, world!");

  pinMode(13, OUTPUT);

}

void loop() {

  delay(1000);

  digitalWrite(13, HIGH);

  delay(1000);

  digitalWrite(13, LOW);
  

}
