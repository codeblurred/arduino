void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  // pinMode command that lets the arduino what are we trying to do with the pin  , we pass the parameters by telling  arduino which pin are we working with pin 13 and its going be an OUTPUT .



}

void loop() {
  // put your main code here, to run repeatedly: 
  // the full code here is to make a LED blink situated at 13th pin on the arduino uno board   
  digitalWrite(13, HIGH); //we send a signal to arduino by a command digitalWrite to turn on or off ,HIGH means turning on 
  delay(100); // delayed(in milli seconds) for a while and remember 1sec = 1000msec  
  digitalWrite(13, LOW);// LOW meaning turning off 
  delay(500);
}
