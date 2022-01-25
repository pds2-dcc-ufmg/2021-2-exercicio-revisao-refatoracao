#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario
{
private:
    std::string especialidade;
    const double PERCENTAGEM_COMISSAO = 0.1;
    unsigned num_atendimentos;
    double comissao_total;

public:
    Especialista();
    Especialista(std::string nome, std::string idade, std::string rgFunc, std::string especialidade, double salario_base);

    void adicionarComissao(double valor_venda);
    void print();
    void printResults();

    std::string getEspecialidade();
    double getSalarioTotal();
    unsigned getNumAtendimentos();
};

#endif // !Especialista_HPP
