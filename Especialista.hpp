#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double perc_wanda = 0.1;

class Especialista : public Funcionario{
    public:
        string especialidade;

        double comissao(double valor_venda){
            double c = valor_venda*perc;
            return c;
        }

        void print(){
            cout << "[Especialista]" << endl;
            Funcionario::print();
            cout << "  Nome: " << nome << endl;
            cout << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base <<endl;
        }
};

#endif

/**
----Alterações:----
1.Remoção do "public" em desuso, desnecessário
2.Identação melhor das linhas do código
3.Remoção de "std" desnecessário
4.Padronização(ou formatação) dos nomes das variáveis]
5.Remoção do "#include"Cliente.hpp"", pois não está sendo usado, é desnecessário
**/
