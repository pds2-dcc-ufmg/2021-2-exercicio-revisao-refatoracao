#include "Especialista.hpp"


Especialista::Especialista(std::string nome, std::string idade, double salario_base, double rg_func, std::string especialidade)
:Funcionario(nome, idade, salario_base, rg_func), _especialidade(especialidade)
{}

double Especialista::comissao(double ValorVenda)
{   
    double perc = 0.1;
    double percWanda = 0.1;
    double c = ValorVenda*perc;
    return c;
}

void Especialista::print() const{

        std::cout << "[Especialista]" << endl;
        Funcionario::print();



        std::cout << "  Nome: " << get_nome() << std::endl;
        std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << get_salario_base() <<endl;

    }