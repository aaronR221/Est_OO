#include "Triturador.h"
#include <iostream>

using namespace std;

Triturador::Triturador()
{
	cout << "Nasceu um campeao" << endl;
}

int Triturador::getTSensor()
{
	return TSensor;
}

void Triturador::setTSensor(int TS)
{
	TSensor = TS;
}

int Triturador::getTMotor()
{
	return TMotor;}

void Triturador::setTMotor(int TM)
{
    TMotor = TM;
}

int Triturador::getEstrategia()
{
	return Estrategia;
}

void Triturador::setEstrategia(int EST)
{
	Estrategia = EST;
}

Triturador::~Triturador()
{
	cout << "O campeao aposentou!" << endl;
}

