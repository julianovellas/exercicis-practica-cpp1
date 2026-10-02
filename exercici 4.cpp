//#include <stdio.h>
//#include <string>
//#include <iostream>
//
//using namespace std;
//  
////4.
////Generar una classe Termòmetre perquè permeti:
////•	Crear un termòmetre amb una temperatura inicial.
////•	Consultar la temperatura.
////•	Modificar la temperatura(No permetre temperatures inferiors a - 50 °C ni superiors a 60 °C)
//
//
//class Termometre
//{
//private:
//	float termo;
//public:
//	Termometre(float tempInicial)
//	{
//		if (tempInicial >= -50.0f && tempInicial <= 60.0f)
//		{
//			termo = tempInicial;
//		}
//		else
//		{
//			termo = 0.0f; 
//			cout << "Temperatura inicial fora de rang. Temperatura 0.0 °C per defecte." << endl;
//		}
//	}
//	float mostrarTemperatura()
//	{
//		return termo;
//	}
//	void modificarTemp(float novaTemperatura)
//	{
//		if ((novaTemperatura > -50.0f) && (novaTemperatura < 60.0f))
//		{
//			termo = novaTemperatura;
//		}
//		else
//		{
//			cout << "Error; temperatura " << novaTemperatura << " esta fora de rang" << endl;
//		}
//
//		
//	}
//};
//
//int main()
//{
//	Termometre t(21.5f);
//
//	cout << "Temperatura inicial: " << t.mostrarTemperatura() << " °C" << endl;
//
//	t.modificarTemp(45.4f);
//	cout << "Nova temperatura: " << t.mostrarTemperatura() << " °C" << endl;
//
//	
//	t.modificarTemp(70.0f); 
//	cout << "Temperatura actual: " << t.mostrarTemperatura() << " °C" << endl;
//
//	return 0;
//
//}