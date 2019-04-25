#include <iostream>
#include <string>

#include "Braco.h"

Braco::Braco()
{
    posicao_atual = 0;
    estado_braco = false;
}

void Braco::suspender_braco()
{
    estado_braco = false;
}

int Braco::baixar_braco()
{
    estado_braco = true;
    return 1;
}

void Braco::mover_esquerda(Superficie &s, int valor)
{
    for (int i = posicao_atual; valor > 0; i--)
    {
        if (estado_braco)
        {
            s.area[i] = 1;
        }

        posicao_atual = i;

        valor--;

        if (i % s.colunas == 0)
        {
            break;
        }
    }
}

void Braco::mover_direita(Superficie &s, int valor)
{
    for (int i = posicao_atual+1; i % s.colunas != 0 && valor > 0; i++)
    {
        if (estado_braco)
        {
            s.area[i] = 1;
        }

        posicao_atual = i;
        valor--;
    }
}

void Braco::mover_cima(Superficie &s, int valor)
{
    for (int i = posicao_atual; i >= 0 && valor >= 0; i -= s.colunas)
    {
        if (estado_braco)
        {
            s.area[i] = 1;
        }

        posicao_atual = i;
        valor--;
    }
}

void Braco::mover_baixo(Superficie &s, int valor)
{
    for (int i = posicao_atual; i < s.retorna_tamanho() && valor >= 0; i += s.colunas)
    {
        if (estado_braco)
        {
            s.area[i] = 1;
        }

        posicao_atual = i;
        valor--;
    }
}