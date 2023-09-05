#include <iostream>
#include "atleta.h"
using namespace std;

Atleta::Atleta()
{
    tentativas_ = 0;
    acertos_ = 0;
    percentual_ = 0;
}

Atleta::~Atleta()
{

}

void Atleta::acumular(int tentativas, int acertos)
{
    tentativas_ += tentativas;
    acertos_ += acertos;
    calcular();
}

void Atleta::exibir()
{
    cout << fixed;
    cout.precision(2);

    cout    << "Acertos: " << acertos_ << "\n"
            << "Tentativas: " << tentativas_ << "\n"
            << "Percentual: " << percentual_ << "\n";
}