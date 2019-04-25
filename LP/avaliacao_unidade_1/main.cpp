#include <iostream>
#include <fstream>
#include <string>

#include "Braco.h"

void menuComandos(Braco &b, Superficie &s, char comando, int qtd_movimentos);

int main()
{
    std::ifstream arquivo_entrada;
    std::ofstream imagem_saida;

    arquivo_entrada.open("arquivos_entrada/exemplo5.txt");

    if (!arquivo_entrada.fail())
    {
        int linhas = 0,
            colunas = 0,
            qtd_comandos = 0,
            qtd_movimentos = 0;
        char comando;

        arquivo_entrada >> colunas;
        arquivo_entrada >> linhas;
        arquivo_entrada >> qtd_comandos;
        Superficie s1(linhas, colunas);
        Braco b1;

        for (int i = 0; i < qtd_comandos; i++)
        {
            arquivo_entrada >> comando;
            if (comando == 'a' || comando == 's')
            {
                menuComandos(b1, s1, comando, qtd_movimentos);
                qtd_movimentos = 0;
            }
            else
            {
                arquivo_entrada >> qtd_movimentos;
                menuComandos(b1, s1, comando, qtd_movimentos);

                qtd_movimentos = 0;
            }
        }

        imagem_saida.open("resultados/saida5.bpm", std::ofstream::out | std::ofstream::trunc);
        if (!imagem_saida.fail())
        {
            imagem_saida << "P1\n";
            imagem_saida << "# Cleverton Inácio Bezerra\n";
            imagem_saida << colunas << ' ' << linhas;
            for (int i = 0; i < s1.retorna_tamanho(); i++)
            {
                if (i % s1.colunas == 0)
                {
                    imagem_saida << '\n';
                }

                imagem_saida << s1.area[i];
            }
        }
        s1.destrutor();
    }
    else
    {
        std::cout << "Arquivo não encontrado" << '\n';
    }

    imagem_saida.close();
    arquivo_entrada.close();
    return 0;
}

void menuComandos(Braco &b, Superficie &s, char comando, int qtd_movimentos)
{
    switch (comando)
    {
    case 's':
        b.suspender_braco();
        break;
    case 'a':
        s.area[b.posicao_atual] = b.baixar_braco();
        break;
    case 'c':
        b.mover_cima(s, qtd_movimentos);
        break;
    case 'b':
        b.mover_baixo(s, qtd_movimentos);
        break;
    case 'e':
        b.mover_esquerda(s, qtd_movimentos);
        break;
    case 'd':
        b.mover_direita(s, qtd_movimentos);
        break;
    default:
        break;
    }
}