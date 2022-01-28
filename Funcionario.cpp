#include "Funcionario.hpp"



void Funcionario::print() {

	std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << this->getIdade() << std::endl
            << "  RGFunc: " << this->getRgFunc() << std::endl;

}

void Funcionario::print_oi(){
    std::cout << "Tchau" << std::endl;
}


void Funcionario::setSalarioBase(const double& salario_base) {
    // TODO: Implemente este metodo
    this->_SalarioBase = salario_base;
}

void Funcionario::setIDADE(const std::string& idade) {
    // TODO: Implemente este metodo
    this->_IDADE = idade;
}


void Funcionario::setNome(const std::string& nome) {
    // TODO: Implemente este metodo
    this->_nome = nome;
}


void Funcionario::setRgFunc(const int& rg_Func) {
    // TODO: Implemente este metodo
    this->_rgFunc = rg_Func;
}


double Funcionario::getSalarioBase() const{
	return this->_SalarioBase;
}

std::string Funcionario::getIdade() const{
	return this->_IDADE;
}

std::string Funcionario::getNome() const{
	return this->_nome;
}

int Funcionario::getRgFunc() const{
	return this->_rgFunc;
}
