#include <iostream>
#include "jogo.h"

void Jogo::adquirir(const string& titulo, float valor)
{
    nome = titulo;
    preco = valor;
    horas = 0;
    custo = valor;
}

void Jogo::atualizar(float valor)
{    
    preco=valor;
    if (horas>0)
        custo = preco/horas;
}
void Jogo::jogar(int tempo)
{
    horas+= tempo;
    if(horas>0)
        custo = preco/horas;
}
void Jogo::exibir()
{
    std::cout   << "Jogo: " << nome << "\n"
                << "Preco: " << preco << "\n"
                << "Horas jogadas: " << horas << "\n"
                << "Custo atual: " << custo << "\n";
}