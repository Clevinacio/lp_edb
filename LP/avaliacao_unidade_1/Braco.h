#ifndef BRACO_H
#define BRACO_H

#include <iostream>

#include "Superficie.h"
struct Braco
{
    Braco();

    int posicao_atual;
    bool estado_braco;

    int baixar_braco();
    void suspender_braco();
    void mover_esquerda(Superficie &s, int valor);
    void mover_direita(Superficie &s, int valor);
    void mover_cima(Superficie &s, int valor);
    void mover_baixo(Superficie &s, int valor);
};

#endif // !BRACO_H
