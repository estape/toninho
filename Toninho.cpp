#include "Arduino.h"
#include "Toninho.h"

Toninho::Toninho(int AIN1, int AIN2, int BIN1, int BIN2, int PWMA, int PWMB, int ledBlue, int ledRed, int infraRed)
{
    _AIN1 = AIN1;
    _AIN2 = AIN2;
    _BIN1 = BIN1;
    _BIN2 = BIN2;
    _PWMA = PWMA;
    _PWMB = PWMB;

    //leds
    _ledBlue = ledBlue;
    _ledRed = ledRed;

    //infrared
    _infraRed = infraRed;
}

void Toninho::ligar()
{
    pinMode(_AIN1, OUTPUT);
    pinMode(_AIN2, OUTPUT);
    pinMode(_BIN1, OUTPUT);
    pinMode(_BIN2, OUTPUT);
    pinMode(_PWMA, OUTPUT);
    pinMode(_PWMB, OUTPUT);
    
    //leds
    pinMode(_ledBlue, OUTPUT);
    pinMode(_ledRed, OUTPUT);

    //infrared
    pinMode(_infraRed, INPUT);
}

void Toninho::infraInput()
{

}

void Toninho::moverFrente()
{
    digitalWrite(_AIN1, HIGH);
    digitalWrite(_AIN2, LOW);
    digitalWrite(_BIN1, HIGH);
    digitalWrite(_BIN2, LOW);
    digitalWrite(_PWMA, HIGH);
    digitalWrite(_PWMB, HIGH);
}

void Toninho::moverTras()
{
    digitalWrite(_AIN1, LOW);
    digitalWrite(_AIN2, HIGH);
    digitalWrite(_BIN1, LOW);
    digitalWrite(_BIN2, HIGH);
    digitalWrite(_PWMA, HIGH);
    digitalWrite(_PWMB, HIGH);
}

void Toninho::ativarFreios()
{
    digitalWrite(_AIN1, HIGH);
    digitalWrite(_AIN2, HIGH);
    digitalWrite(_BIN1, HIGH);
    digitalWrite(_BIN2, HIGH);
    digitalWrite(_PWMA, HIGH);
    digitalWrite(_PWMB, HIGH);
}

void Toninho::virarEsquerda()
{
    digitalWrite(_AIN1, LOW);
    digitalWrite(_AIN2, LOW);
    digitalWrite(_BIN1, HIGH);
    digitalWrite(_BIN2, LOW);
    digitalWrite(_PWMA, HIGH);
    digitalWrite(_PWMB, HIGH);
}

void Toninho::virarDireita()
{
    digitalWrite(_AIN1, HIGH);
    digitalWrite(_AIN2, LOW);
    digitalWrite(_BIN1, LOW);
    digitalWrite(_BIN2, LOW);
    digitalWrite(_PWMA, HIGH);
    digitalWrite(_PWMB, HIGH);
}

void Toninho::virarEsquerdaTras()
{
    digitalWrite(_AIN1, LOW);
    digitalWrite(_AIN2, LOW);
    digitalWrite(_BIN1, LOW);
    digitalWrite(_BIN2, HIGH);
    digitalWrite(_PWMA, HIGH);
    digitalWrite(_PWMB, HIGH);
}

void Toninho::virarDireitaTras()
{
    digitalWrite(_AIN1, LOW);
    digitalWrite(_AIN2, HIGH);
    digitalWrite(_BIN1, LOW);
    digitalWrite(_BIN2, LOW);
    digitalWrite(_PWMA, HIGH);
    digitalWrite(_PWMB, HIGH);
}