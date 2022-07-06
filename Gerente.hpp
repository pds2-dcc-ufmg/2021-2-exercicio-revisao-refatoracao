#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente: public Funcionario {
    public:
        Gerente(std::string nome, std::string IDADE, int rgFunc, double SalarioBase);
        void print() const override;
        void calcula_BONIFICACAO_GERENTE(const int &numTOTALVendas);
        double calcula_SALARIO_TOTAL() const override;
        static constexpr double ValorBONIFICACAO = 15.0;

    private:
        double bonificacao{0};
};

#endif