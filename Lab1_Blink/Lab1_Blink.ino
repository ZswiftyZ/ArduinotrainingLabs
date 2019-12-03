/*Programmer: Trenton Weller
*Date: 12.3.19
*Program: Potentiometer
*
*Reads an anolog input on pin A0, prints to the serial monitor
*
*/

// initialize our led to PIN
int led = 13;
int pushButton =2;
void setup()  {
   // initialize the serial communication at 9600 bits per second
   Serial.begin(9600);
}

void loop()  {
  //read the unput on analog pin 0
  int potentiometerValue = analogRead(A0);


  // print the calue of our potentiometer
  Serial.println(potentiometerValue);

  //add a delay for stability
  delay(1);
 
}
 
