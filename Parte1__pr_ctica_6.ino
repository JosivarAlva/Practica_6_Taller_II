/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AV / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 1, práctica 6
   Dev: Josivar Sebastian rayjam Alva López
   Fecha: 17 de mayo del año 2024
   link de la simulacion: 
*/


#include <LiquidCrystal.h>


// Definiciones de preprocesador
#define RS 12
#define Enable 11
#define D4 5
#define D5 4
#define D6 3
#define D7 2

LiquidCrystal LCD(RS, Enable, 5, 4, 3, 2);


void setup() {
  LCD.begin(16, 2);
  
  LCD.clear();
  LCD.setCursor(0, 0);
  LCD.print("Josivar ");
  LCD.print("Alva ");
  LCD.setCursor(0, 1);
  LCD.print("2023406");

}

void loop() {
}
