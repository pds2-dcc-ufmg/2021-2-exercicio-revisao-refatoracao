#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente : public Funcionario {
    
    public:
    
        double ValorBonificacao = 15.0;
    
        void Gerente(string nome, string idade, int rgFuncionario, double salarioBase, string bonificacao){
            
            this-> Funcionario(nome, idade, rgFuncionario, salarioBase);
            this-> _bonificacao = bonificacao;
        }
     
        double getBonificacao(){
            return this->_bonificacao;
        }

        void print() {
            cout << "[Funcionario]" << endl
                << "[Gerente]" << endl
                << "  Nome: " << this->getNome() << endl
                << "  Idade: " << this->getIdade() << endl
                << "  RGFunc: " << this->getRgFunc() << endl
                << "  SalarioBase: R$ " << fixed << setprecision(2) << this->getSalarioBase() << endl;
        }

        double calcBonificacao(int numTotalVendas){
            return numTotalVendas * ValorBonificacao;
        }
    
    private:
    
        double _bonificacao;
        
};

#endif

