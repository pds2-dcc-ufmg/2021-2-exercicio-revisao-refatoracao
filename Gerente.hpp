#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

const double valorBonificacao = 15.0;

class Gerente : public Funcionario{
private:
    double bonificacao = 0;
public:
    Gerente(std::string _nome, std::string _idade, int _rgFunc, double _salarioBase, double _bonificacao = 0){
        nome = _nome;
        idade = _idade;
        rgFunc = _rgFunc;
        salarioBase = _salarioBase;
        bonificacao = _bonificacao;
    }
    void print()  override{
        std::cout << "[Funcionario]" << std::endl;
        std::cout << "[Gerente]" << std::endl;
        std::cout << "  Nome: " << nome << std::endl;
        std::cout << "  idade: " << idade << std::endl;
        std::cout << "  RGFunc: " << rgFunc << std::endl;
        std::cout << "  salarioBase: R$ " << fixed << setprecision(2) << salarioBase <<std::endl;
    }
    double calcularBonificacao(int totalDeVendas){
        return totalDeVendas * valorBonificacao;
    }
    double getBonificacao(){
        return bonificacao;
    }
    void setBonificacao(double newBonificacao){
        bonificacao = newBonificacao;
    }
};

#endif

