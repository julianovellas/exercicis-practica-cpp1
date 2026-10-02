#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;


 

////2.
////Generar una classe Rectangle perquè permeti:
////•	Crear un rectangle indicant amplada i alçada.
////•	Calcular l'àrea.
////•	Calcular el perímetre.
////•	Mostrar les dimensions del rectangle
//
//class Rectangle
//{
//private:
//	float amplada;
//	float alcada;
//
//public:
//	Rectangle(float a, float h)
//	{
//		amplada = a;
//		alcada = h;
//	}
//	float area()
//	{
//		return amplada * alcada;
//	}
//	float perimetre()
//	{
//		return (2 * amplada) + (2 * alcada);
//	}
//	void mostrarDimensions()
//	{
//		cout << "Amplada: " << amplada << " | Alçada: " << alcada << " | Area: " << area() << " | Perimetre: " << perimetre() << endl;
//	}
//};
//
//int main()
//{
//	Rectangle rec(2.5f, 3.0f);
//
//	rec.mostrarDimensions();
//
//	return 0;
//}