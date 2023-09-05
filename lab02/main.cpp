#include "jogo.h"

int main ()
{
    Jogo lol;

    lol.adquirir("lolzinho", 25.0f);
    lol.exibir();

    lol.jogar(2);
    lol.exibir();

    
    return 0;
}