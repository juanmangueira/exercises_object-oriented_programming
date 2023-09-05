#include <string>
using std::string;

class Jogo
{
private:
    string nome;
    float preco;
    int horas;
    float custo;

    void calcular ()
    {
        if(horas > 0)
            custo = preco/horas;
    }
public:
    void adquirir (const string& titulo, float valor);
    void atualizar (float valor);
    void jogar (int tempo);
    void exibir();
};