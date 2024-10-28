
#include <LiquidCrystal.h>

void setup()
{
	letterbox_Request();
}

void loop()
{
	if (button pressed)
  {
		gen_film();
		lcd_display();
  }
}


void lcd_display()
{
	lcd.clear();
	lcd.setCursor(col,row);
	lcd.print(FilmName);
	lcd.setCursor(col,row);
	lcd.print(FilmLength);
}
std::pair<long, std::vector<std::string>> gen_film()
{
	FilmInstance = randInt().letterboxArray[];
	FilmInstance.FilmName;
	FilmInstance.FilmLength;
	return FilmLength, FilmName;
}
void letterbox_Request()
{
	api shit = FilmInstance;
}
