#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Venda.hpp"




class Gerente {
    public:
        Gerente(double salarioBase,int idade, std::string nome, int rgFunc,double perBonificacao){
            this->_salarioBase = salarioBase;
            this->_idade = idade;
            this->_nome = nome;
            this->_rgFunc = rgFunc;
            this->_bonificacao = perBonificacao * Venda::getvalorTotalVendas();
        }  
        void printDadosGerente() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << _nome << std::endl
            << "  Idade: " << _idade << std::endl
            << "  RGFunc: " << _rgFunc << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _salarioBase <<std::endl
            << "Salario Total: " << _salarioBase + _bonificacao;
        }
    private:
        double _salarioBase; // valor m�nimo recebido pelo funcion�rio
        int _idade;
        std::string _nome;
        int _rgFunc;
        double _bonificacao;

    
};

#endif

