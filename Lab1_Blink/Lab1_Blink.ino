/*Programmer: Trenton Weller
*Date: 12.3.19
*Program: Potentiometer
*
*Reads an anolog input on pin A0, prints to the serial monitor
*
*/

const int analogPin =A0;
const int ledPin =13;
float threshold = 2.25;

void setup(){

//initialie the LED pin as an output
pinMode(ledPin,OUTPUT);
//initialize the serial communication at 9600 bits per second
}

void loop(){
  //read the input on analog pin 0
  int potentiometerValue = analogRead(analogPin);
  float voltage = potentiometerValue*(5.0/1023.0);

  Serial.println(voltage);
  if(voltage>threshold){
    digitalWrite(ledPin,HIGH);
    
  }
  else{
    digitalWrite(ledPin,LOW);
  }
delay(1);
}
