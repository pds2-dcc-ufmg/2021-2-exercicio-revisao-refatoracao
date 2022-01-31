#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

#include <string> 

using namespace std;

class Especialista : public Funcionario {

    public:

    void print() {
        
        Especialista(string nome, string idade, int rg_func, double salario_base, string especialidade);
        
        int get_num_atendimentos(); 
        
        void novo_atendimento();;
        
        void calcular_comissao(double valor_venda);
        
        void print() override;
    }
    
    private:
    
    string _especialidade;
    
    int _num_atendimentos = 0;
    
    double _comissao_acumulada = 0;
    
    double _percentual = 0.1;
    
};

#endif
