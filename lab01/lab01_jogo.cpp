#include <iostream>
#include <string>
using namespace std;

struct Jogo
{
	string nome;   // nome do jogo
	float preco;   // pre�o do jogo
	int horas;     // quantidade de horas jogadas   
	float custo;   // valor por hora jogada
};

Jogo adquirir(const string& titulo, float valor);
void atualizar(Jogo& jogo, float valor);
void jogar(Jogo& jogo, int tempo);
void exibir(const Jogo& jogo);

int main()
{

    Jogo lol;

    lol = adquirir("lolzinho", 20.00f);

    jogar(lol, 10);
    exibir(lol);
    jogar(lol, 2);
    exibir(lol);

    return 0;

}

Jogo adquirir(const string& titulo, float valor)
{
    Jogo novo;

    novo.nome = titulo;
    novo.preco = valor;
    novo.horas = 0;
    novo.custo = valor;

    return novo;
}

void atualizar(Jogo& jogo, float valor)
{    
    jogo.preco=valor;
    if (jogo.horas>0)
        jogo.custo = jogo.preco/jogo.horas;
}
void jogar(Jogo& jogo, int tempo)
{
    jogo.horas+= tempo;
    if(jogo.horas>0)
        jogo.custo = jogo.preco/jogo.horas;
}
void exibir(const Jogo& jogo)
{
    cout    << "Jogo: " << jogo.nome << "\n"
            << "Preco: " << jogo.preco << "\n"
            << "Horas jogadas: " << jogo.horas << "\n"
            << "Custo atual: " << jogo.custo << "\n";
}
