/***************************************************************************

  Written by Taylor for http://lonelybinary.com
  BSD license, all text above must be included in any redistribution
  
 ***************************************************************************/
//D0 is conncted to GPIO3. you can refer this pin by using D0 or 3 directly.
 
#define ledpin D0
//#define ledpin 3 

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin as an output.
  pinMode(ledpin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledpin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for half second
  digitalWrite(ledpin, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for half second
}
