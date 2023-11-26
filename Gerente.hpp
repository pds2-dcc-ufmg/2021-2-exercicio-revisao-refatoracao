#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente : public Funcionario {
    public:

        Gerente(std::string nome, std::string idade, int rgFunc, double SalarioBase): Funcionario(nome, idade, rgFunc, SalarioBase), bonificacao(0) {}
        void print() const override;
        void CalculaBonificacao(int numTOTALVendas);
        double GetSalarioTotal() const { return SalarioBase+bonificacao; }
    
    private:

        double bonificacao;

};

#endif