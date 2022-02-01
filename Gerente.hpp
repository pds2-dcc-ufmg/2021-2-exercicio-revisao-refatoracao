#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente : public Funcionario {
    public:

        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << this->getNome() << endl
            << "  Idade: " << this->getIdade() << endl
            << "  RGFunc: " << this->getRgFunc() << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << this->getSalarioBase() <<endl;
        }

        void addGerente(string Nome,
                        string Idade, 
                        int RgFunc, 
                        double SalarioBase, 
                        double Bonificacao){
                            
            this->addFuncionario(Nome, Idade, RgFunc, SalarioBase);
            this->_Bonificacao = Bonificacao;
        }

        double calcularBonificacao (int TotalVendas){
            double ValorBonificacao = 15.0;
            return TotalVendas*ValorBonificacao;
        }

        double getBonificacao(){
            return this->_Bonificacao;
        }

        void setBonificacao(double Bonificacao){
            this->_Bonificacao = Bonificacao;
        }
    protected:
        double _Bonificacao;
};

#endif

