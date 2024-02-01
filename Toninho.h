#ifndef Toninho_h
#define Toninho_h

#include "Arduino.h"

class Toninho
{
public:
    Toninho(int AIN1, int AIN2, int BIN1, int BIN2, int PWMA, int PWMB, int ledBlue, int ledRed, int infraRed);

    void ligar();
    void moverFrente();
    void moverTras();
    void ativarFreios();
    void desligarMotores();
    void virarEsquerda();
    void virarDireita();
    void virarEsquerdaTras();
    void virarDireitaTras();

private:
    int _AIN1;
    int _AIN2;
    int _BIN1;
    int _BIN2;
    int _PWMA;
    int _PWMB;
    int _ledBlue;
    int _ledRed;
    int _infraRed;

};

#endif
