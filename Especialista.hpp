#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    
    public:

        double comissao(double ValorVenda) {
            double percentual = 0.1;
            return ValorVenda*percentual;
        }

        void print() {
            std::cout << "[Especialista]" << endl;
            Funcionario::print();
            std::cout << "  Nome: " <<  this->getNome() << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << this->getSalarioBase() <<endl;
        }

        void addEspecialista(string Nome,
                             string Idade,
                             int RgFunc, 
                             double SalarioBase, 
                             string Especialidade){
                                 
            this->addFuncionario(Nome, Idade, RgFunc, SalarioBase);
            this->_Especialidade = Especialidade;
        }

        string getEspecialidade(){
            return this->_Especialidade;
        }

        void setEspecialidade(string Especilidade){
            this->_Especialidade = Especilidade;
        }   

    protected:
        string _Especialidade;
};

#endif
