#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {
private:
    std::string _especialidade;
    double salario;
public:
    Especialista(std::string& nome, int idade, int rgFuncionario, double salarioBase, std::string especialidade);
    double calcularComissao(double valorVenda);
    void imprimeDadosEspecialista();
};

#endif
