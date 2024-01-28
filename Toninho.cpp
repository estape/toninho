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

void Toninho::moverFrente(int velocidade)
{
    analogWrite(_EngineLeft, velocidade);
    analogWrite(_EngineLeftReverse, 0);
    analogWrite(_EngineRight, velocidade);
    analogWrite(_EngineRightReverse, 0);
}

void Toninho::moverTras(int velocidade)
{
    analogWrite(_EngineLeft, 0);
    analogWrite(_EngineLeftReverse, velocidade);
    analogWrite(_EngineRight, 0);
    analogWrite(_EngineRightReverse, velocidade);
}

void Toninho::ativarFreios()
{
    analogWrite(_EngineLeft, 0);
    analogWrite(_EngineLeftReverse, 0);
    analogWrite(_EngineRight, 0);
    analogWrite(_EngineRightReverse, 0);
}

void Toninho::virarEsquerda(int velocidade)
{
    analogWrite(_EngineLeft, 0);
    analogWrite(_EngineLeftReverse, 0);
    analogWrite(_EngineRight, velocidade);
    analogWrite(_EngineRightReverse, 0);
}

void Toninho::virarDireita(int velocidade)
{
    analogWrite(_EngineLeft, velocidade);
    analogWrite(_EngineLeftReverse, 0);
    analogWrite(_EngineRight, 0);
    analogWrite(_EngineRightReverse, 0);
}

void Toninho::virarEsquerdaTras(int velocidade)
{
    analogWrite(_EngineLeft, 0);
    analogWrite(_EngineLeftReverse, 0);
    analogWrite(_EngineRight, 0);
    analogWrite(_EngineRightReverse, velocidade);
}

void Toninho::virarDireitaTras(int velocidade)
{
    analogWrite(_EngineLeft, 0);
    analogWrite(_EngineLeftReverse, velocidade);
    analogWrite(_EngineRight, 0);
    analogWrite(_EngineRightReverse, 0);
}

void Toninho::girarHorario(int velocidade, int numGiros)
{
    int i;

    while (i < numGiros)
    {
        analogWrite(_EngineLeft, velocidade);
        analogWrite(_EngineLeftReverse, 0);
        analogWrite(_EngineRight, 0);
        analogWrite(_EngineRightReverse, velocidade);

        i++;
    }
}

void Toninho::girarAntiHorario(int velocidade, int numGiro)
{
    int i;
    
    while (i < numGiro)
    {
        analogWrite(_EngineLeft, 0);
        analogWrite(_EngineLeftReverse, velocidade);
        analogWrite(_EngineRight, velocidade);
        analogWrite(_EngineRightReverse, 0);

        i++
    }
}