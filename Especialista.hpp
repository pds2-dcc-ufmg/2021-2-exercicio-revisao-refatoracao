#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
// #include "Cliente.hpp"

static constexpr double PERCENTUAL_COMISSAO = 0.1;
//double percWanda = 0.1;


class Especialista : public Funcionario {
    private:
        std::string Especialidade;

    public:

    Especialista(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario, std::string Especialidade);

    double getComissao(double ValorVenda);


    void Print() override;
};

#endif
