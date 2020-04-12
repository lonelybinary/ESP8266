/***************************************************************************
  ESP8266 - PWM example
  
  PWM stands for Pulse Width Modulation.
  PWM is a way to control analog devices with a digital output. 

  In this example, we are going to use PWM to control the brightness of LED.

  Written by Taylor for http://lonelybinary.com
  BSD license, all text above must be included in any redistribution
  
 ***************************************************************************/

//Initializing LED Pin
//the LED is connected on the digital pin D0
#define led_pin D0

void setup() {
  //Declaring LED pin as output
  pinMode(led_pin, OUTPUT);
}
void loop() {
  //Fading the LED
  for(int i=0; i<255; i++){
    analogWrite(led_pin, i);
    delay(5);
  }
  for(int i=255; i>0; i--){
    analogWrite(led_pin, i);
    delay(5);
  }
}
