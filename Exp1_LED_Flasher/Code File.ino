int led_flash=8; //Defines usage of pin 8 for connecting LEDs.
void setup()
{
pinMode(led_flash, OUTPUT);
// Initialize digital pin led_flash as an output.
}
// the loop function runs over and over again forever.
void loop()
{
digitalWrite(led_flash, HIGH);
// Turn the LED on (HIGH is the voltage level)
delay(1000); 
// Making the delay 
digitalWrite(led_flash, LOW);
// Turn the LED off by making the voltage LOW
delay(1000); 
// Making the delay 
}
