#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {

    public:

        Especialista(std::string nome, std::string idade, int rgFunc, double SalarioBase, std::string especialidade): Funcionario(nome, idade, rgFunc, SalarioBase), especialidade(especialidade), comiss(0), numAtendimentos(0) {}
        void Comissao(double ValorVenda);
        void print() const override;
        int GetNumAtendimentos() const { return numAtendimentos; }
        double GetSalarioTotal() const { return SalarioBase+comiss; }
        void AtendeuCliente();
    
    private:

        std::string especialidade;
        int numAtendimentos;
        int comiss; //comissao
};

#endif