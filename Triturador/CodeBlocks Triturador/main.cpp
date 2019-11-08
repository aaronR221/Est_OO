#include "Triturador.h"
#include <iostream>
using namespace std;

int main()
{
	Triturador trit;

	trit.setEstrategia(3);

	trit.setTMotor(2);
	cout<<trit.getEstrategia()<<endl;


	return 0;
}
