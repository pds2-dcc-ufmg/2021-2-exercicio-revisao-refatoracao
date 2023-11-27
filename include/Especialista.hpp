#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include <string>

class Especialista : public Funcionario
{

private:
    std::string _especialidade;

public:
    Especialista(std::string especialidade = "",
                 const std::string nome = "",
                 std::string idade = "",
                 double SalarioBase = 0,
                 int RegistroFuncional = 0,
                 int NumeroDeAtendimentos = 0,
                 double Comissao = 0);

    double comissao(double ValorVenda);
    std::string getEspecialidade();

    void print();
};

#endif