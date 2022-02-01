#ifndef Especialista_HPP
#define Especialista_HPP
#include "Funcionario.hpp"
#include "Gerente.hpp"

using namespace std;


class Especialista : public Funcionario {
    private:
    double _porcentagemComissao = 0.1;
    double comissao = 0;

    public:
    int numAtendimentos = 0;
    string _especialidade;
    Gerente* gerenteDoEspecialista;
    Especialista(std::string nome, int idade, int rg, double salario, std::string especialidade, Gerente* gerente);

    void setComissao(double ValorVenda);
    double getComissao();
    double getSalarioTotal() override;
    void getDados() const override;
};

#endif
