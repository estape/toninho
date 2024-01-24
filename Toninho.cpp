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
    //pinMode(_speedInputPin, INPUT);
    //pinMode(_speedOutputPin, OUTPUT);
    //pinMode(_directionInputPin, INPUT);
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

// Não vai deixar "dois positivos"?
void Toninho::ativarFreios()
{
    digitalWrite(_EngineLeft, HIGH);
    digitalWrite(_EngineLeftReverse, HIGH);
    digitalWrite(_EngineRight, HIGH);
    digitalWrite(_EngineRightReverse, HIGH);
}

void Toninho::desligarMotores()
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