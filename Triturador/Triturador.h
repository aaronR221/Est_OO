#ifndef TRITURADOR_H
#define TRITURADOR_H


class Triturador
{
private:
	int Estrategia,TMotor,TSensor;
public:
	Triturador();
	~Triturador();
	void setTSensor(int TS);
	int getTSensor();
	void setTMotor(int TM);
	int getTMotor();
	void setEstrategia(int EST);
	int getEstrategia();
};

#endif // Triturador
