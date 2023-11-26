#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

const double percentualDeComissaoEspecialista = 0.1;

class Especialista : public Funcionario {
private:
    double comissao = 0;
    int numAtendimentos = 0;
    std::string especialidade;
public:
    Especialista(std::string _nome, std::string _idade, int _rgFunc, double _salarioBase, std::string _especialidade){
        nome = _nome;
        idade = _idade;
        rgFunc = _rgFunc;
        salarioBase = _salarioBase;
        especialidade = _especialidade;
    }
    double calcularComissao(double ValorVenda) {
        return ValorVenda * percentualDeComissaoEspecialista;
    }
    void print() {
        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();
        std::cout << "  Nome: " << nome <<std:: endl;
        std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase << std::endl;
    }
    void addAtendimento(){
        numAtendimentos++;
    }
    void addComissao(double ValorVenda){
        comissao += calcularComissao(ValorVenda);
    }
    int getAtendimentos(){
        return numAtendimentos;
    }
    double getComissao(){
        return comissao;
    }
};

#endif
