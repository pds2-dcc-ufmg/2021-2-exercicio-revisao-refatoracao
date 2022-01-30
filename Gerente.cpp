
#include "Gerente.hpp"

/*
Arquivo com as implementacoes dos metodos da classe Gerente
*/

Gerente::Gerente(double salariob,
                std::string idade,
                std::string nome,
                int rgfunc,
                double bonificacao_por_venda,
                double bonificacao_total) {
        this->_idade = idade;
        this->_nome = nome;
        this->_rgFunc = rgfunc;
        this->_salario_base = salariob;
        this->_bonificacao_por_venda = bonificacao_por_venda;
        this->_bonificacao_total = bonificacao_total;
}


void Gerente::imprimir_dados_funcionario() {
        std::cout << "[Funcionario]" << std::endl
        << "[Gerente]" << std::endl
        << "  Nome: " << this->_nome << std::endl
        << "  Idade: " << this->_idade << std::endl
        << "  RGFunc: " << this->_rgFunc << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->_salario_base << std::endl;
}


void Gerente::calcula_bonificacao_total(int num_total_atend){
        this->_bonificacao_total = num_total_atend * this->_bonificacao_por_venda;
}


double Gerente::getbonificacao_tot() {
        return this->_bonificacao_total;
}
