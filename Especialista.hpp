#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    
    public:
    
        string getEsp(){
            return this->_especialidade;
        }    
    
        double percComissao = 0.1;
    
        double comissao(double ValorVenda){
            double ValorVenda * percComissao;
        }
    
        void Especialista(string nome, string idade, int rgFuncionario, double salarioBase, string especialidade){
            
            this-> Funcionario(nome, idade, rgFuncionario, salarioBase);
            this-> _especialidade = especialidade;
        }
    
        void print() {
            std::cout << "[Especialista]" << endl;
            Funcionario::print();
            std::cout << "  Nome: " << this->getNome() << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << this->getSalarioBase() <<endl;
        }
    
    private:
        string _especialidade;
    
};

#endif
