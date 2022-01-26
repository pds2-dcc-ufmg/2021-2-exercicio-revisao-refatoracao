#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include <string>

#include "Funcionario.hpp"

class Gerente : public Funcionario
{
private:
    double bonificacao;

public:
    Gerente(std::string nomeAux = "",
            std::string idadeAux = "",
            int rgFuncAux = 0,
            double salarioMinimoAux = 0.0,
            double bonificacaoAux = 0.0);

    void acrescentarBonificacao();

    void imprimirDados() override;

    double getBonificacao() { return bonificacao; }
    double getSalarioTotal() { return getSalarioMinimo() + getBonificacao(); }
};

#endif