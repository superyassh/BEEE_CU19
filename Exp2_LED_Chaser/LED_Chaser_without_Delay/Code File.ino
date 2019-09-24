//LED CHASER with Delay
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
 // Initialize digital pin led_flash as an output.
}
void loop()
// the loop function runs over and over again forever.
{ 
  for(int i=1;i<=4;i++)
  {
     digitalWrite(i,HIGH); // Turn the LED on (HIGH is the voltage level)
  	 delay(500); // Making the delay 
  	 digitalWrite(i,LOW); // Turn the LED OFF (OFF is the voltage level)
  }
}
