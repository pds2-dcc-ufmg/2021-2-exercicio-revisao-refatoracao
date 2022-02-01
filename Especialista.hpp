#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;

class Especialista : public Funcionario
{
private:
    string especialidade;

public:
    void setEspecialidade(string especialidade)
    {
        this->especialidade = especialidade;
    }
    string getEspecialidade()
    {
        return especialidade;
    }
    double comissao(double ValorVenda)
    {
        double c = ValorVenda * perc;
        return c;
    }

    void print()
    {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << getNome() << endl
                  << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() << endl;
    }
};

#endif
