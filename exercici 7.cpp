#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

//7.
//Generar una classe Reserva d'una habitació d'hotel:
//•	nom del client
//•	nombre de nits
//•	preu per nit
//•	estat de la reserva
//Ha de permetre :
//•	Crear una reserva.
//•	Consultar el nom del client.
//•	Canviar el nombre de nits.
//•	Calcular el preu total.
//•	Cancel·lar la reserva.
//•	Consultar si la reserva està activa.
//•	No permetre modificar les nits si la reserva està cancel·lada.

class Reserva
{
private:
	string nom;
	int nits;
	float preu;
	bool estat;

public:
	Reserva(string name, int nombreNits, float preuInicial)
	{
		nom = name;
		nits = nombreNits;
		preu = preuInicial;
		estat = true;
	}
	string consultarNom()
	{
		return nom;
	}
	void canviarNits(int novesNits)
	{
		if (estat == true)
		{
			nits = novesNits;
			cout << "nombre de nits ha sigut actualitzat a: " << nits << endl;
		}
		else
		{
			cout << "La teva reserva esta cancelada, no es poden modificar les nits" << endl;
		}
		
	}
	float preuTotal()
	{ 
		return preu * nits;
	}
	void cancelarReserva()
	{
		estat = false;
		cout << "la teva reserva ha sigut cancelada" << endl;
	}
	bool reservaActiva()
	{
		return estat;
	}
};

int main()
{
	Reserva r("Bruce", 2, 40.5f);

	cout << "Client: " << r.consultarNom() << endl;
	cout << "Preu total inicial: " << r.preuTotal() << endl;

	// Modifiquem les nits quan està activa
	r.canviarNits(4);
	cout << "Nou preu total: " << r.preuTotal() << endl;

	// Cancel·lem la reserva
	r.cancelarReserva();

	// Intentem canviar nits estant cancel·lada
	r.canviarNits(5);

	return 0;
}