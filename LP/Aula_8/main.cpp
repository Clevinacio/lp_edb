#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream arquivo_entrada;
    ofstream arquivo_saida;

    arquivo_entrada.open("teste.txt");
    if (!arquivo_entrada.fail())
    {
        string nome;
        int numero;
        float numero2;

        getline(arquivo_entrada, nome);
        arquivo_entrada >> numero;
        arquivo_entrada >> numero2;

        cout << nome << '\n'
             << numero << '\n'
             << numero2 << endl;
    }

    arquivo_entrada.close();
    return 0;
}