#include <iostream>
#include <string>

#include "Superficie.h"

Superficie::Superficie(int a, int l)
{
    Superficie::linhas = a;
    Superficie::colunas = l;
    Superficie::area = new int[linhas * colunas];
    for (int i = 0; i < linhas * colunas; i++)
    {
        area[i] = 0;
    }
}

void Superficie:: destrutor()
{
    delete[] area;
}

int Superficie::retorna_tamanho()
{
    return linhas * colunas;
}