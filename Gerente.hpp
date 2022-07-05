#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;
const double valorBonificacao = 15.0;
class Gerente  : public Funcionario {
    public:
        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome_ << endl
            << "  Idade: " << idade_ << endl
            << "  RGFunc: " << rgFunc_ << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase_ <<endl;
        }

        void calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            bonificacao_ = numTOTALVendas*valorBonificacao;
        }

        Gerente(double SalarioBase, 
                string IDADE,
                string nome,
                int rgFunc): Funcionario(SalarioBase,
                                         IDADE,
                                         nome,
                                         rgFunc){};
    
    double getBonificacao() {return bonificacao_;};

    private:
        double bonificacao_;
};

#endif

