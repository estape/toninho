#ifndef Toninho_h
#define Toninho_h

#include "Arduino.h"

class Toninho
{
public:
    Toninho(int EngineLeft, int EngineLeftReverse, int EngineRight, int EngineRightReverse);

    void ligar();
    void moverFrente();
    void moverTras();
    void ativarFreios();
    void desligarMotores();
    void virarEsquerda();
    void virarDireita();
    void virarEsquerdaTras();
    void virarDireitaTras();
    //boolean updateDirection();
    //void acelerar(int intensity);
    //int getSpeedIntensity();

private:
    int _EngineLeft;
    int _EngineLeftReverse;
    int _EngineRight;
    int _EngineRightReverse;
    //int _speedInputPin;
    //int _speedOutputPin;
    //int _directionInputPin;
    //int _directionInputMargin;
};

#endif
