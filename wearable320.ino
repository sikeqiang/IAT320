
int del = 10000;
int led1 = 6;
int led2 = 12;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(del);                       // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
    

  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(del);                       // wait for a second
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
   
  
  
  
}、
