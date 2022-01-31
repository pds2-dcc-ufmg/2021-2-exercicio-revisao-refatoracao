#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"


using namespace std;

double percentualComissao = 0.1;


class Especialista : public Funcionario {
    
    private:
        string especialidade;

    public:

        string getespecialidade(){
            return especialidade;
        }

        void setespecialidade(string esp){
            especialidade = esp;
        }

        double comissao(double ValorVenda) {
            return ValorVenda*percentualComissao;
        }


        void print(){

            cout << "[Especialista]" << endl
            << "[Funcionario]" << endl;
            Funcionario::print();
            cout << "  Nome: " << nome << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBaseFuncionario <<endl;

        }
};

#endif
