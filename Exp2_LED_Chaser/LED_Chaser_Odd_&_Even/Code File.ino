//ODD EVEN
void setup()
{
  pinMode(1, OUTPUT); // Initialize digital pin led_flash as an output.
  pinMode(2, OUTPUT); // Initialize digital pin led_flash as an output.
  pinMode(3, OUTPUT); // Initialize digital pin led_flash as an output.
  pinMode(4, OUTPUT); // Initialize digital pin led_flash as an output.
  
}
void loop() // the loop function runs over and over again forever.
{ 
  for(int i=0;i<4;i++)
  {
    if(i==0)
    {
     digitalWrite(2, HIGH); // Turn the LED on (HIGH is the voltage level)
     digitalWrite(4, HIGH); // Turn the LED on (HIGH is the voltage level)
  	 delay(1000); // Making the delay 
  	 digitalWrite(2, LOW); // Turn the LED OFF (OFF is the voltage level)
     digitalWrite(4, LOW); // Turn the LED OFF (OFF is the voltage level)
    }
    if(i==1)
    {
     digitalWrite(1, HIGH); // Turn the LED on (HIGH is the voltage level)
     digitalWrite(3, HIGH); // Turn the LED on (HIGH is the voltage level)
     delay(1000); // Making the delay
     digitalWrite(1, LOW); // Turn the LED OFF (OFF is the voltage level)
     digitalWrite(3, LOW); // Turn the LED OFF (OFF is the voltage level)
    }
  }
}
