#define tiltPin   2  // define arduino pin no 2 as tilt pin
#define ledPin    3   // define arduino pin no 3 as led pin 
void setup () 
{ 
  pinMode (ledPin, OUTPUT) ;  //set pinmode of LED as OUTPUT
  pinMode (tiltPin, INPUT) ;  // set pinmode of tilt pin as input
}
void loop ()
{
  if(digitalRead(tiltPin)==LOW)  // condition to check if tilt pin goes low
    {
      digitalWrite(ledPin,HIGH); // then led pin will be high to indicate 
      delay(100);    // delay for 100 milli seconds to avoid fluctuation
    }
  else
  {
digitalWrite(ledPin,LOW);   // otherwise led pin will be LOW
} 
}   
