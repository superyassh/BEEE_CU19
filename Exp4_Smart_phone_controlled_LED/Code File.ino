int state = 0;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  if(Serial.available () > 0)
  {
    state = Serial.read();
    }
    if (state ==  '0'){
      digitalWrite(8,LOW);
      Serial.println("LED: OFF");
      state = 0;
    }
else if (state == '1')
{
  digitalWrite (8,HIGH);
  Serial.println("LED: ON");              
  state=0;
}
}
