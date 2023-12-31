// The Project For The Measurement OF The Temperature .

// In this program, We want to Measure the Temperature and then Display it on the LCD Screen .

// The Main Code OF The Project For The Measurement OF The Temperature . . INO . .




#include <LiquidCrystal.h>                                                                                              // Library Required for this Project .


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;                                                           // Definition of Different Bases .
LiquidCrystal LCD (rs, en, d4, d5, d6, d7);                                                                          // Definition of Different Bases .


void setup () {


  Serial.begin (9600);                                                                                          // Introducing the Series .
  LCD.begin (16, 2);                                                                                           // Introducing LCD Resolution .


}


void loop () {


  delay (2000);                                                                                        // Running the Delay Function (2 Seconds) . :
  float DataCensor = analogRead (A0);                                                                 // Read Data . :
  float Temp = DataCensor * 0.48828125;                                                              // Set Value to Temp .
  Serial.print (" Temp : ");                                                                        // Show the Desired Message .
  Serial.print (Temp);                                                                             // Show the Desired Message .
  LCD.setCursor (0, 0);                                                                           // To run Regularly and Display the OUTPUT Below.
  LCD.print (" Temp : ");                                                                        // Show the Desired Message .
  LCD.print (Temp);                                                                             // Show the Desired Message .


}
