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






void setup() {
  // Using the Function pinMode to call led and provide output
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, HIGH);
delay(1000);
digitalWrite(led, LOW );
delay(1000);
}
