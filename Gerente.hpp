#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Gerente
{
private:
    std::string nome;
    std::string idade;
    int rgFunc;
    double salarioMinimo;
    double bonificacao;

public:
    Gerente(std::string nomeAux = "",
            std::string idadeAux = "",
            int rgFuncAux = 0,
            double salarioMinimoAux = 0.0,
            double bonificacaoAux = 0.0);
    void imprimirDados();
    void acrescentarBonificacao(int numTotalVendas);
    double calcularBonificacao(int numTotalVendas);
    double getSalarioMinimo() { return salarioMinimo; }
    double getBonificacao() { return bonificacao; }

protected:
    static double valorBonificacao;
};

#endif