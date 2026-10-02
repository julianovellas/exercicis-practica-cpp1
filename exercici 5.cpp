//#include <stdio.h>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
////5.
////Generar una classe Jugador que tingui:
////•	nom
////•	punts
////•	vides
////Ha de permetre :
////•	Crear un jugador amb un nom, sense punts i 10 vides.
////•	Afegir punts.
////•	Perdre una vida.
////•	Consultar els punts.
////•	Consultar les vides.
////•	Saber si el jugador està viu.
//
//
//class Jugador
//{
//private:
//	string nom;
//	int punts;
//	int vides;
//
//public:
//	Jugador(string name)
//	{
//		nom = name;
//		punts = 0;
//		vides = 10;
//	}
//	int afegirPunts(int puntsAfegits)
//	{
//		punts = punts + puntsAfegits;
//		return punts;
//	}
//	int perdreVida()
//	{
//		vides = vides - 1;
//		return vides;
//	}
//	int consultarPunts()
//	{
//		return punts;
//	}
//	int consultarVides()
//	{
//		return vides;
//	}
//	bool jugadorViu()
//	{
//		return vides > 0;
//	}
//
//
//};
//
//
//int main()
//{
//	Jugador j("Yoshi");
//	cout << "Punts inicials: " << j.consultarPunts() << endl;
//	cout << "Vides inicials: " << j.consultarVides() << endl;
//
//	j.afegirPunts(50);
//	j.perdreVida();
//
//	cout << "\nDespres de jugar:" << endl;
//	cout << "Punts: " << j.consultarPunts() << endl;
//	cout << "Vdies: " << j.consultarVides() << endl;
//
//	if (j.jugadorViu())
//	{
//		cout << "El jugador esta viu" << endl;
//	}
//
//	return 0;
//}
