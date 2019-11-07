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

void Triturador::setTSensor(int s)
{
	TSensor = s;
}

int Triturador::getTMotor()
{
	return TMotor;
}

void Triturador::setTMotor(int m)
{
    TMotor = m;
}

int Triturador::getEstrategia()
{
	return Estrategia;
}

void Triturador::setEstrategia(int Est)
{
	Estrategia = Est;
}

Dog::~Dog()
{
	cout << "O campeao aposentou!" << endl;
}

