//#include <stdio.h>
//#include <string>
//#include <iostream>
// 
//using namespace std;
//
////3.
////Generar una classe Llum perquè permeti:
////•	Crear una llum apagada.
////•.Encendre - la.
////•	Apagar - la.
////•	Consultar si està encesa.
//
//class Llum
//{
//private: 
//	bool estat;
//
//public:
//	Llum()
//	{
//		estat = false;
//	}
//	void encendre()
//	{
//		estat = true;
//	}
//	void apagar()
//	{
//		estat = false;
//	}
//	bool consultarEstat()
//	{
//		return estat;
//	}
//
//};
//
//int main()
//{
//	Llum l;
//	if (l.consultarEstat()) {
//		cout << "La llum esta encesa." << endl;
//	}
//	else {
//		cout << "La llum esta apagada." << endl; 
//	}
//
//	// L'encenem
//	l.encendre();
//
//	// Comprovem de nou l'estat
//	if (l.consultarEstat()) {
//		cout << "Ara la llum esta encesa!" << endl;
//	}
//
//	return 0;
//
//}