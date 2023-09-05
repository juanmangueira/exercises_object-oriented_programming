#include "jogo.h"
#include <iostream>
using namespace std;

// -----------------------------------------------
// Defini��o da Classe Jogo
// -----------------------------------------------

Jogo::Jogo(const string& nome, float preco)
{
    nome_ = nome;
    preco_ = preco;
    horas_ = 0;
    custo_ = preco_;
}

void Jogo::atualizar(float preco)
{
    preco_ = preco;
    calcular();
}

void Jogo::jogar(int horas)
{
    horas_ = horas_ + horas;
    calcular();
}

void Jogo::exibir()
{
    cout << fixed;
    cout.precision(2);

    cout << nome_ << " R$"
        << preco_ << " "
        << horas_ << "h = R$"
        << custo_ << "/h\n";
}

// -----------------------------------------------