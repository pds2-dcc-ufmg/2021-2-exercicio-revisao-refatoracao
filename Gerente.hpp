#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

class Gerente {
private:
    double valorBonificacao = 15.0;
    double bonificacao;
    double salarioBase; // valor m�nimo recebido pelo funcion�rio
    string idade;
    string nome;
    int rgFunc;
public:
    void print() {
        std::cout << "[Funcionario]" << endl;
        std::cout << "[Gerente]" << endl;
        std::cout << "  Nome: " << nome << endl;
        std::cout << "  idade: " << idade << endl;
        std::cout << "  RGFunc: " << rgFunc << endl;
        std::cout << "  salarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
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

