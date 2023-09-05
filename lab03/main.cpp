#include "tela.h"

int main()
{
    Tela windows;

    windows.Translate(1918, 5);
    windows.Exibir();

    windows.MoveTo(1919,1079);
    windows.Exibir();

    return 0;
}