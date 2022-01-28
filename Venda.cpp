#include "Venda.hpp"

void Venda::print() {
    std::cout << "Especialista: ";
    cout << this->getEspecialista().getNome();

    std::cout << " Cliente: ";
    cout << this->getCliente();
}

void Venda::setValor(const double& valor) {
    // TODO: Implemente este metodo
    this->_VALOR = valor;
}

void Venda::setDescricao(const std::string& descricao) {
    // TODO: Implemente este metodo
    this->_descricao = descricao;
}

void Venda::setEspecialista(const Especialista& especialista) {
    // TODO: Implemente este metodo
    this->_esp = especialista;
}

void Venda::setCliente(const std::string& cliente) {
    // TODO: Implemente este metodo
    this->_cliente = cliente;
}

double Venda::getValor() const{
	return this->_VALOR;
}

std::string Venda::getDescricao() const{
	return this->_descricao;
}

Especialista Venda::getEspecialista() const{
	return this->_esp;
}

std::string Venda::getCliente() const{
	return this->_cliente;
}


