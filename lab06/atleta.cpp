#include <iostream>
using namespace std;

struct Atleta
{
    int acertos;
    int tentativas;
    float percentual;
};

void calcular(Atleta& atl)
{
    if (atl.tentativas!= 0)
        atl.percentual = 100.0f * atl.acertos / atl.tentativas;
    else
        atl.percentual = 0;
}

void exibir(const Atleta& atl)
{
    cout << "Acertos: " << atl.acertos << " ";
    cout << "   Tentativas: " << atl.tentativas << " ";
    cout << "   Percentual: " << atl.percentual << " ";
}

Atleta& acumular(Atleta& soma, const Atleta& atl)
{
    soma.tentativas += atl.tentativas;
    soma.acertos += atl.acertos;
    calcular(soma);
    return soma;
}