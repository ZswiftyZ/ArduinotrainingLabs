/*Programmer: Trenton Weller
*Date: 11.6.19
*Program: Blink
*
*This program will turn on an LED for specified amounts of tiume, turn it
*off, and back on in a while Loop
*
*/

// initialize our led to PIN
int led = 13;
int pushButton =2;
void setup()  {
   pinMode(led,OUTPUT);
   Serial.begin(9600);
   pinMode(pushButton,INPUT);
}

void loop()  {
  //read the input pin
  int buttonState = digitalRead(pushButton);
  digitalWrite(led, HIGH);
  delay(1500);
  digitalWrite(led, LOW);
  delay(500);
  Serial.print(buttonState);
  delay(250);
  // print out the state of the button
  Serial.println(buttonState);
  delay(250); // delay in between readings for stability
}

 
