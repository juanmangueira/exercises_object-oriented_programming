#include "tela.h"
#include <iostream>

void Tela::Translate(int px, int py)
{
    if ((px + dx >= 0 && px + dx < 1920) && (py + dy >= 0 && py + dy < 1080))
    {
        dx += px;
        dy += py;
    }
}

void Tela::MoveTo(int nx, int ny)
{
    if ((nx >= 0 && nx < 1920) && (ny >= 0 && ny < 1080))
    {
        dx = nx;
        dy = ny;
    }
}

void Tela::Exibir()
{
    std::cout   << "X: " << dx << "\n"
                << "Y: " << dy << "\n";
}