//LCD1602
//You should now see your LCD1602 display the flowing characters "SUNFOUNDER" and "hello, world"
//Email:info@primerobotics.in
//Website:www.primerobotics.in
//2015.5.7 
#include <LiquidCrystal.h>// include the library code
/**********************************************************/
char array1[]=" SunFounder               ";  //the string to print on the LCD
char array2[]="hello, Charlie!             ";  //the string to print on the LCD
int tim = 500;  //the value of delay time
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(4, 6, 10, 11, 12, 13);
/*********************************************************/
void setup()
{
  lcd.begin(16, 2);  // set up the LCD's number of columns and rows:
  lcd.setCursor(0,0);  // set the cursor to column 15, line 0
  lcd.print(array1);  // Print a message to the LCD.
  lcd.setCursor(0,1);  // set the cursor to column 15, line 1
  lcd.print(array2);  // Print a message to the LCD. 
}
/*********************************************************/
void loop() 
{

}
/************************************************************/