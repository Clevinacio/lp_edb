#include  <iostream>
#include <string>

struct Time{
    std::string nome;
    int qtd_vitorias,
        qtd_empates,
        qtd_derrotas;
};

int quant_pontos(Time time);

int main(){
    int qtd_times = 10;
    Time time_aux;
    Time* times = new Time[qtd_times];
    
    for(int i = 0; i < qtd_times; i++){
        times[i].nome = "Time " + std::to_string(i+1);
        times[i].qtd_derrotas = rand() % 10;
        times[i].qtd_empates = rand() % 10;
        times[i].qtd_vitorias = rand() % 10;
    }
    
    for(int i = 0; i < qtd_times-1; i++)
    {
        for(int j = 0; j < qtd_times-i-1; j++)
        {
            if (quant_pontos(times[j])<quant_pontos(times[j+1])) {
                time_aux = times[j+1];
                times[j+1] = times[j];
                times[j] = time_aux;
            }
            else if (quant_pontos(times[j]) == quant_pontos(times[j+1])){
                if (times[j].qtd_derrotas>times[j+1].qtd_derrotas) {
                    time_aux = times[j+1];
                    times[j+1] = times[j];
                    times[j] = time_aux;
                }
                
            }
        }
        
    }    
    std::cout << "Nome do time  " << "  P  " << "V  " << "E  " << "D  " << std::endl; 
    for(int i = 0; i < qtd_times; i++)
    {
        std::cout << times[i].nome << "         " << quant_pontos(times[i]) << "  " << times[i].qtd_vitorias
                  << "  " << times[i].qtd_empates << "  " << times[i].qtd_derrotas << std::endl;
    }
    
    
}

int quant_pontos(Time time){
    int pontos = time.qtd_empates + (time.qtd_vitorias*3);
    return pontos;
}