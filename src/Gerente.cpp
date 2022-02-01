#include <iostream>
#include <iomanip>

#include "Gerente.hpp"
#include "Venda.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"




const double BONIFICACAO = 15.0;


Gerente::Gerente(std::string nome, std::string idade, double SalarioBase, int RegistroFuncional){

    this->_nome = nome;
    this->_idade = idade;
    this->_SalarioBase = SalarioBase;
    this->_RegistroFuncional = RegistroFuncional;
    this->_NumeroDeAtendimentos = 0;
    this->_Comissao = 0;

}

void Gerente::print(){
    
    double TotalReceber = 0;

    std::cout << "[Funcionario]" << std::endl
        << "[Gerente]" << std::endl
        << "  Nome: " << this->getNome() << std::endl
        << "  Idade: " << this->getIdade() << std::endl
        << "  RGFunc: " << this->getRegistroFuncional() << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << getSalarioBase() << std::endl;

    TotalReceber = getSalarioBase()+getComissao();
    std::cout << "Salario Total: " << TotalReceber << std::endl;
        
}

//Calculo de bonificação do Gerente.
double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    this->setComissao(numTOTALVendas*BONIFICACAO);
    return numTOTALVendas*BONIFICACAO;
}

