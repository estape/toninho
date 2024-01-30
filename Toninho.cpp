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

void Toninho::girarHorario(int numGiros)
{
    int i;
    unsigned long tempoInicial; // variável para armazenar o tempo inicial
    unsigned long tempoFinal; // variável para armazenar o tempo final
    unsigned long duracao = 1000000; // variável para armazenar a duração da rotação em microssegundos (1 segundo = 1000000 microssegundos)

    while (i < numGiros)
    {
        tempoInicial = micros(); // pega o tempo inicial
        tempoFinal = tempoInicial + duracao; // calcula o tempo final
        while (micros() < tempoFinal) // enquanto o tempo atual for menor que o tempo final
        {
            digitalWrite(_EngineLeft, HIGH); // liga o motor esquerdo para frente
            digitalWrite(_EngineLeftReverse, LOW); // desliga o motor esquerdo para trás
            digitalWrite(_EngineRight, LOW); // desliga o motor direito para frente
            digitalWrite(_EngineRightReverse, HIGH); // liga o motor direito para trás
        }
        i++;
    }
}

void Toninho::girarAntiHorario(int numGiros)
{
    int i;
    unsigned long tempoInicial; // variável para armazenar o tempo inicial
    unsigned long tempoFinal; // variável para armazenar o tempo final
    unsigned long duracao = 1000000; // variável para armazenar a duração da rotação em microssegundos (1 segundo = 1000000 microssegundos)

    while (i < numGiros)
    {
        tempoInicial = micros(); // pega o tempo inicial
        tempoFinal = tempoInicial + duracao; // calcula o tempo final
        while (micros() < tempoFinal) // enquanto o tempo atual for menor que o tempo final
        {
            digitalWrite(_EngineLeft, LOW); // liga o motor esquerdo para frente
            digitalWrite(_EngineLeftReverse, HIGH); // desliga o motor esquerdo para trás
            digitalWrite(_EngineRight, HIGH); // desliga o motor direito para frente
            digitalWrite(_EngineRightReverse, LOW); // liga o motor direito para trás
        }
        i++;
    }
}