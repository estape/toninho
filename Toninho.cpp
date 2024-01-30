#include "Arduino.h"
#include "Toninho.h"

Toninho::Toninho(int EngineLeft, int EngineLeftReverse, int EngineRight, int EngineRightReverse)
{
    _EngineLeft = EngineLeft;
    _EngineLeftReverse = EngineLeftReverse;
    _EngineRight = EngineRight;
    _EngineRightReverse = EngineRightReverse;
}

void Toninho::ligar()
{
    pinMode(_EngineLeft, OUTPUT);
    pinMode(_EngineLeftReverse, OUTPUT);
    pinMode(_EngineRight, OUTPUT);
    pinMode(_EngineRightReverse, OUTPUT);
}

void Toninho::moverFrente()
{
    digitalWrite(_EngineLeft, HIGH);
    digitalWrite(_EngineLeftReverse, LOW);
    digitalWrite(_EngineRight, HIGH);
    digitalWrite(_EngineRightReverse, LOW);
}

void Toninho::moverTras()
{
    digitalWrite(_EngineLeft, LOW);
    digitalWrite(_EngineLeftReverse, HIGH);
    digitalWrite(_EngineRight, LOW);
    digitalWrite(_EngineRightReverse, HIGH);
}

void Toninho::ativarFreios()
{
    digitalWrite(_EngineLeft, LOW);
    digitalWrite(_EngineLeftReverse, LOW);
    digitalWrite(_EngineRight, LOW);
    digitalWrite(_EngineRightReverse, LOW);
}

void Toninho::virarEsquerda()
{
    digitalWrite(_EngineLeft, LOW);
    digitalWrite(_EngineLeftReverse, LOW);
    digitalWrite(_EngineRight, HIGH);
    digitalWrite(_EngineRightReverse, LOW);
}

void Toninho::virarDireita()
{
    digitalWrite(_EngineLeft, HIGH);
    digitalWrite(_EngineLeftReverse, LOW);
    digitalWrite(_EngineRight, LOW);
    digitalWrite(_EngineRightReverse, LOW);
}

void Toninho::virarEsquerdaTras()
{
    digitalWrite(_EngineLeft, LOW);
    digitalWrite(_EngineLeftReverse, LOW);
    digitalWrite(_EngineRight, LOW);
    digitalWrite(_EngineRightReverse, HIGH);
}

void Toninho::virarDireitaTras()
{
    digitalWrite(_EngineLeft, LOW);
    digitalWrite(_EngineLeftReverse, HIGH);
    digitalWrite(_EngineRight, LOW);
    digitalWrite(_EngineRightReverse, LOW);
}