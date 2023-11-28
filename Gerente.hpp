#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente : public Funcionario {
private:
    double bonificacao;
public:
    Gerente(std::string& nome, int idade, int rgFuncionario, double salarioBase);
    void imprimeDadosGerente();
    void calcularBonificacaoGerente(int numTotalVendas);
};

#endif

