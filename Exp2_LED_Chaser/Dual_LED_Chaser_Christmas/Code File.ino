void setup(){
// setting up output pins
for (int i = 10; i <= 13; i++) {
pinMode(i, OUTPUT);
}
}
void loop()
// the loop function runs over and over again forever.
{
for (int i = 10; i <14; i++) {
allLEDsOff();  //Tunrs all LEDs OFF
if (i!=13){
// Turn the LED on (HIGH is the voltage level)
digitalWrite(i,HIGH); 
digitalWrite(i+1,HIGH);
delay(200);
}
else
digitalWrite(i,HIGH);
digitalWrite(i-3,HIGH);
delay(200);
allLEDsOff(); //Tunrs all LEDs OFF
}
}
void allLEDsOff(void) //Tunrs all LEDs OFF
{
for (int i = 10; i <= 14; i++) {
digitalWrite(i, LOW);  // Turn the LED OFF (LOW is the voltage level)
}
delay(100);
}
