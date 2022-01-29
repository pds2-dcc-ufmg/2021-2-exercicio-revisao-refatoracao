#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
// #include "Cliente.hpp"

static constexpr double PERCENTUAL_COMISSAO = 0.1;


class Especialista : public Funcionario {
    private:
        std::string Especialidade;
        int NumAtendimentos;
        double Comissao;

    public:
    ~Especialista();

    Especialista(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario, std::string Especialidade, int NumAtendimentos, double Comissao );

    double getComissao(double ValorVenda);
    int getNumAtendimentos();


    void Print() override;
};

#endif
