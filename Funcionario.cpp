
#include "Funcionario.hpp"

/*
Arquivo com as implementacoes dos metodos da classe Funcionario
*/

Funcionario::Funcionario(double salariob,
                         std::string idade,
                         std::string nome,
                         int rgfunc) {
        this->_idade = idade;
        this->_nome = nome;
        this->_rgFunc = rgfunc;
        this->_salario_base = salariob;
}


std::string Funcionario::getnome_func() {
        return this->_nome;
}


double Funcionario::get_salario_base() {
        return this->_salario_base;
}


void Funcionario::imprimir_dados_funcionario() {
        std::cout << "[Funcionario]" << std::endl
                  << "  Idade: " << _idade << std::endl 
                  << "  RGFunc: " << _rgFunc << std::endl;
}
