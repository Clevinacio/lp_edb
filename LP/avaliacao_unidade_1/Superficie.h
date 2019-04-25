#ifndef SUPERFICIE_H
#define SUPERFICIE_H

#include <iostream>

struct Superficie
{

    Superficie(int a, int l);
    void destrutor();

    int linhas,
        colunas;
    int *area;

    int retorna_tamanho();
};

#endif // !SUPERFICIE_H
