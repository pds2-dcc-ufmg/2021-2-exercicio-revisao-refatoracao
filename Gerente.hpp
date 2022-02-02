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
     
        double auxBonificacao(){
            return this->_bonificacao;
        }

        void print() {
            cout << "[Funcionario]" << endl
                << "[Gerente]" << endl
                << "  Nome: " << this->auxNome() << endl
                << "  Idade: " << this->auxIdade() << endl
                << "  RGFunc: " << this->auxRgFunc() << endl
                << "  SalarioBase: R$ " << fixed << setprecision(2) << this->auxSalarioBase() << endl;
        }

        double calcBonificacao(int numTotalVendas){
            return numTotalVendas * ValorBonificacao;
        }
    
    private:
    
        double _bonificacao;
        
};

#endif



