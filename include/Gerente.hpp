#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iomanip>
#include <iostream>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {
private:
    double bonificacao;

public:

    void setBonificacao(double bonificacao) {
        this->bonificacao = bonificacao;
    }

    double getBonificacao() {
        return bonificacao;
    }

    void print() {
        cout << "[Funcionario]" << endl
             << "[Gerente]" << endl
             << "  Nome: " << getNome() << endl
             << "  Idade: " << getIdade() << endl
             << "  RGFunc: " << getRgFunc() << endl
             << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() << endl;
    }

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas) {
        return numTOTALVendas * ValorBONIFICACAO;
    }
};

#endif
