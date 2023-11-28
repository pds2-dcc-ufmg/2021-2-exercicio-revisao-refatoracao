#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {
private:
    double bonificacao;
public:
    Gerente(std::string& nome, int idade, int rgFuncionario, double salarioBase, double bonificacao);
    void imprimeDadosGerente();
    void calcularBonificacaoGerente(int numTotalVendas);
};

#endif

