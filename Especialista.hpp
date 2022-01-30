#ifndef Especialista_HPP
#define Especialista_HPP

#include "Cliente.hpp"
#include "Funcionario.hpp"

const double perc = 0.1;
const double percWanda = 0.1;

class Especialista : public Funcionario {
   public:
    std::string _especialidade;
    int _numAtendimentos;

   protected:
    double _comissao;

   public:
    Especialista() {
    }

    Especialista(std::string nome, std::string IDADE, int rgFunc, double SalarioBase, std::string especialidade) {
        _SalarioBase = SalarioBase;
        _IDADE = IDADE;
        _nome = nome;
        _rgFunc = rgFunc;
        _especialidade = especialidade;
        _numAtendimentos = 0;
        _comissao = 0;
    }

    void comissao(double ValorVenda) {
        double c = ValorVenda * perc;
        _comissao += c;
    }

    float get_commissao() {
        return _comissao;
    }

    void print() {
        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();

        std::cout << "  Nome: " << _nome << std::endl
                  << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _SalarioBase << std::endl;
    }
};

#endif
