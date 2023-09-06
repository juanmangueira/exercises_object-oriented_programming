#include "jogo.h"
#include <iostream>
using namespace std;

// -----------------------------------------------
// Definição da Classe Jogo
// -----------------------------------------------

Jogo::Jogo()
{
    nome_ = "";
    preco_ = custo_ = 0.0f;
    horas_ = 0;
}

Jogo::Jogo(const string& titulo, float valor, int tempo)
{
    nome_ = titulo;
    preco_ = valor;
    horas_ = tempo;
    custo_ = valor;
    calcular();
}

Jogo::~Jogo()
{
}

const Jogo& Jogo::comparar(const Jogo& jogo) const
{
    return maisJogado(*this, jogo);
}

const Jogo& maisJogado(const Jogo& jogo1, const Jogo& jogo2)
{
    if (jogo1.horas() > jogo2.horas())
        return jogo1;
    else
        return jogo2;
}


void Jogo::atualizar(float valor)
{
    preco_ = valor;
    calcular();
}

void Jogo::jogar(int tempo)
{
    horas_ = horas_ + tempo;
    calcular();
}

void Jogo::exibir() const
{
    cout << fixed;
    cout.precision(2);

    cout << nome_ << " R$"
        << preco_ << " "
        << horas_ << "h = R$"
        << custo_ << "/h\n";
}

// -----------------------------------------------