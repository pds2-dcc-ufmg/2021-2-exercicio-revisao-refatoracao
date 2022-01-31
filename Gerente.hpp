#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include 'Funcionario.hpp'

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente: public Funcionario{
    public:
        
       Gerente(string nome, string idade, int rg_func, double salario_base);
    
       void print() override;
    
       void calcualar_bonificacao_gerente(num_total_vendas);
    
    private:
    
       double _bonificacao_acumulada = 0;
    
       double _valor_bonificacao = 15.0;

};

#endif

