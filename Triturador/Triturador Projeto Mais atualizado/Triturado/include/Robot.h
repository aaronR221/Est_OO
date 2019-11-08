#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <iostream>

struct Estado
{
  float x,y,theta;
};

class Robot
{
  private:
    int numeroMotores;
    int numeroSensores;
    float bateria;
    Estado orientacao;

  public:
    Robot();
    ~Robot();
    void Locomocao();
    int getNumeroMotores() {return numeroMotores;}
    int getNumeroSensores();
    int getNivelBateria();
    Estado getOrientacao();
    void setOrientacao(Estado);
    void setNivelBateria(float);
    void setNumeroMotores(int);
    void setNumeroSensores(int);

};
#endif
