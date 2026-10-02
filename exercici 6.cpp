//#include <stdio.h>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
////6.
////Generar una classe Producte que tingui :
////•	nom
////•	preu
////•	estoc
////Ha de permetre :
////•	Crear un producte.
////•	Consultar el preu.
////•	Canviar el preu.
////•	Afegir unitats a l'estoc.
////•	Vendre una unitat(impedir vendre si no hi ha estoc)
//
//class Producte
//{
//private:
//	string nom;
//	float preu;
//	int estoc;
//
//public:
//	Producte(string name, float preuInicial, int estocInicial)
//	{
//		nom = name;
//		preu = (preuInicial >= 0);
//		estoc = (estocInicial >= 0);
//	}
//	float consultarPreu()
//	{
//		return preu;
//	}
//	void canviarPreu(float nouPreu)
//	{
//		if (nouPreu >= 0)
//		{
//			preu = nouPreu;
//		}
//		else
//		{
//			cout << "No es pot assignar un peru negatiu" << endl;
//		}
//	}
//	void afegirEstoc(int quantitat)
//	{
//		if (quantitat >= 0)
//		{
//			estoc = estoc + quantitat;
//		}
//		
//	}
//	void vendreUnitat()
//	{
//		if (estoc > 0)
//		{
//			estoc = estoc - 1;
//			cout << "Venta realitzada!" << endl;
//		}
//		else
//		{
//			cout << "No hi ha prou estoc" << endl;
//		}
//	}
//};
//
//
//int main()
//{
//	Producte p("Fairy", 2.50f, 1);
//
//	cout << "Preu inicial: " << p.consultarPreu() << endl;
//
//	p.vendreUnitat();
//
//	p.vendreUnitat();
//
//	p.afegirEstoc(5);
//	p.vendreUnitat();
//
//	return 0;
//
//}