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
    void girarHorario();
    void girarAntiHorario();

private:
    int _EngineLeft;
    int _EngineLeftReverse;
    int _EngineRight;
    int _EngineRightReverse;
};

#endif
