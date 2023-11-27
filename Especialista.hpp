#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

double percentual = 0.1;

class Especialista : public Funcionario {
private:
    std::string _especialidade;

public:
    Especialista(std::string& nome, int idade, int rgFuncionario, double salarioBase, std::string especialidade);
    double calcularComissao(double valorVenda);
    void imprimeDadosEspecialista();
};

#endif
