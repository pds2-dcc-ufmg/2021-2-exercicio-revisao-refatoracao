#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {

    public:
        std::string especialidade;

    double determinaComissao(double ValorVenda) {
        double comissao = ValorVenda*perc;
        return comissao;
    }


    void imprimeDadosEspecialista() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::imprimeDadosFuncionario();


        std::cout << "  Nome: " << nome << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase <<std::endl;

    }
    private:
        double perc = 0.1;


};

#endif
