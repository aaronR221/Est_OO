#ifndef TRITURADOR_H
#define TRITURADOR_H


class Triturador
{
private:
	int Estrategia,TMotor,TSensor;
public:
	Triturador();
	~Triturador();
	void setTSensor(int);
	int getTSensor();
	void setTMotor(int);
	int getTMotor();
	void setEstrategia(int);
	int getEstrategia();
};

#endif // Triturador
