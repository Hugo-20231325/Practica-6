 Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB4AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto:  LCD
   Dev: Hugo Alexander Reyes Veliz 
   Fecha: 16 de Mayo
*/

#include <LiquidCrystal.h>
LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd_1.begin(16, 2); // Se definen 16 columnas y 2 filas
}

void loop(){
lcd_1.clear();
lcd_1.setCursor(0,0);
lcd_1.print("Hugo");
lcd_1.setCursor(0,2);
lcd_1.print("2023132");
delay(1000);
}
