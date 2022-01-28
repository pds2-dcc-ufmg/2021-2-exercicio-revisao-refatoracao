#include "Venda.hpp"

Venda::Venda(double valor, std::string descricao, Especialista* especialista, Cliente* cliente) {
    this->_valor = valor;
    this->_descricao = descricao;
    this->_especialista = especialista;
    this->_cliente = cliente;

    _especialista->realiza_venda(valor);
}

void Venda::imprime_dados() const {
    std::cout << "Especialista: " << _especialista->getNome();
    std::cout << " Cliente: " << _cliente->getNome();
    std::cout << " Descricao: " << this->_descricao << std::endl;
}

void Venda::setValor(double valor) {
    this->_valor = valor;
}

void Venda::setDescricao(std::string descricao) {
    this->_descricao = descricao;
}

void Venda::setEspecialista(Especialista* especialista) {
    this->_especialista = especialista;
}

void Venda::setCliente(Cliente* cliente) {
    this->_cliente = cliente;
}

double Venda::getValor() {
    return this->_valor;
}

std::string Venda::getDescricao() {
    return this->_descricao;
}

Especialista* Venda::getEspecialista() {
    return this->_especialista;
}

Cliente* Venda::getCliente() {
    return this->_cliente;
}