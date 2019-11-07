#include "Triturador.h"
#include <iostream>
using namespace std;

int main()
{
	Triturador trit;

	trit.setEstrategia(3); //Metodo da classe mae

	trit.setTMotor(2);
	int Estrategias = trit.getEstrategia();
	cout << Estrategias << endl;

	return 0;
}
