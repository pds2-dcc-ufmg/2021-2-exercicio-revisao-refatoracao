#include "Gerente.hpp"
const double VALOR_BONIFICACAO = 15.0;



Gerente::Gerente(std::string nome, int idade, std::string RG , int salario ){
    this->_nome = nome;
    this->_idade = idade;
    this->_RG = RG;
    this->_salarioBase = salario;
}
void Gerente::imprimirDados() const{
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << this->_nome << std::endl
            << "  Idade: " << this->_idade << std::endl
            << "  RGFunc: " << this->_RG << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _salarioBase <<std::endl
            << "Salario Total: " << this->_salarioBase + this->_bonificacao << std::endl; //colocar salbase no protected

}

void Gerente::atribuirBonificacao(int numTotalVendas){
    double x;
    this->_bonificacao = numTotalVendas*VALOR_BONIFICACAO;       
}








