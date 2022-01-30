
#include "Especialista.hpp"

/*
Arquivo com as implementacoes dos metodos da classe Especialista
*/

Especialista::Especialista(double salariob,
                           std::string idade,
                           std::string nome,
                           int rgfunc,
                           std::string especialidade,
                           double percentual,
                           double comissaototal,
                           int num_atendimentos) {
        this->_idade = idade;
        this->_nome = nome;
        this->_rgFunc = rgfunc;
        this->_salario_base = salariob;
        this->_especialidade = especialidade;
        this->_percentual = percentual;
        this->_comissao_total = comissaototal;
        this->_num_atendimentos = num_atendimentos;
}


void Especialista::imprimir_dados_funcionario() {
        std::cout << "[Especialista]" << std::endl
                  << "[Funcionario]" << std::endl
                  << "  Idade: " << this->_idade << std::endl 
                  << "  RGFunc: " << this->_rgFunc << std::endl
                  << "  Nome: " << this->_nome << std::endl
                  << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->_salario_base << std::endl;

}


void Especialista::adicionar_comissao(double valor_venda) {
        double comissao = valor_venda * (this->_percentual);
        this->_comissao_total += comissao;
}


double Especialista::get_comissao_total() {
        return this->_comissao_total;
}


void Especialista::contador_de_atend() {
        this->_num_atendimentos++;
}


int Especialista::get_num_atend() {
        return this->_num_atendimentos;
}

