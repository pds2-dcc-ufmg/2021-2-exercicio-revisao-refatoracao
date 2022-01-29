#include "Gerente.hpp"

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl
        << "[Gerente]" << std::endl
        << "  Nome: " << this->getNome() << std::endl
        << "  Idade: " << this->getIdade() << std::endl
        << "  RGFunc: " << this->getRgFunc() << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->getSalarioBase() << std::endl;
    }

void Gerente::setBonificacao(const double& valor) {
    // TODO: Implemente este metodo
    this->_bonificacao = valor;
}

double Gerente::getBonificacao() const{
	return this->_bonificacao;
}
