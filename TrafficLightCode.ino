int redLed = 13 ;
int blueLed = 11 ;
int yellowLed = 10 ;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLed, HIGH); // turn the LED on
  delay(500); // wait for a second

  digitalWrite(redLed, LOW); // turn the LED off
  delay(500); // wait for a second

  digitalWrite(blueLed, HIGH); // turn the LED off
  delay(500); // wait for a second

  digitalWrite(blueLed, LOW); // turn the LED off
  delay(500); // wait for a second


  digitalWrite(yellowLed, HIGH); // turn the LED off
  delay(1000); // wait for a second

  digitalWrite(yellowLed, LOW); // turn the LED off
  delay(1000); // wait for a second


}
