#include "Arduino.h"
#include "Toninho.h"

Toninho::Toninho(int EngineLeft, int EngineLeftReverse, int EngineRight, int EngineRightReverse)
{
    _EngineLeft = EngineLeft;
    _EngineLeftReverse = EngineLeftReverse;
    _EngineRight = EngineRight;
    _EngineRightReverse = EngineRightReverse;
    //_speedInputPin = speedInputPin;
    //_speedOutputPin = speedOutputPin;
    //_directionInputPin = directionInputPin;
    //_directionInputMargin = directionInputMargin;
}

void Toninho::ligar()
{
    pinMode(_EngineLeft, OUTPUT);
    pinMode(_EngineLeftReverse, OUTPUT);
    pinMode(_EngineRight, OUTPUT);
    pinMode(_EngineRightReverse, OUTPUT);
    // pinMode(_speedInputPin, INPUT);
    // pinMode(_speedOutputPin, OUTPUT);
    // pinMode(_directionInputPin, INPUT);
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

// Não vai deixar "dois positivos"?
void Toninho::ativarFreios()
{
    analogWrite(_EngineLeft, 0);
    analogWrite(_EngineLeftReverse, 0);
    analogWrite(_EngineRight, 0);
    analogWrite(_EngineRightReverse, 0);
}

void Toninho::virarEsquerda(int velocidade)
{
    analogWrite(_EngineLeft, LOW);
    analogWrite(_EngineLeftReverse, LOW);
    analogWrite(_EngineRight, HIGH);
    analogWrite(_EngineRightReverse, LOW);
}

void Toninho::virarDireita(int velocidade)
{
    analogWrite(_EngineLeft, HIGH);
    analogWrite(_EngineLeftReverse, LOW);
    analogWrite(_EngineRight, LOW);
    analogWrite(_EngineRightReverse, LOW);
}

void Toninho::virarEsquerdaTras(int velocidade)
{
    analogWrite(_EngineLeft, LOW);
    analogWrite(_EngineLeftReverse, LOW);
    analogWrite(_EngineRight, LOW);
    analogWrite(_EngineRightReverse, HIGH);
}

void Toninho::virarDireitaTras(int velocidade)
{
    analogWrite(_EngineLeft, LOW);
    analogWrite(_EngineLeftReverse, HIGH);
    analogWrite(_EngineRight, LOW);
    analogWrite(_EngineRightReverse, LOW);
}

void Toninho::girarHorario(int velocidade, int numGiros)
{

    while (numGiros < 5)
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
    while (numGiro)
    {
        analogWrite(_EngineLeft, 0);
        analogWrite(_EngineLeftReverse, velocidade);
        analogWrite(_EngineRight, velocidade);
        analogWrite(_EngineRightReverse, 0);
    }
}

/*boolean Toninho::updateDirection()
{
    int inputValue = analogRead(_directionInputPin);

    if (inputValue < 511 - _directionInputMargin)
    {
        virarEsquerda();
        return true;
    }

    if (inputValue > 511 + _directionInputMargin)
    {
        virarDireita();
        return true;
    }

    return false;
}

void Toninho::acelerar(int intensity)
{
    analogWrite(_speedOutputPin, intensity);
}

int Toninho::getSpeedIntensity()
{
    int inputValue = analogRead(_speedInputPin);
    float proportion = inputValue / 1024.0;
    return (int)(proportion * 255.0);
}*/