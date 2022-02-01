#include "Venda.hpp"

double Venda::getValor(){
	return this->_valor;
}

std::string Venda::getDescricao(){
	return this->_descricao;
}

Especialista Venda::getEsp(){
	return this->_esp;
}

Cliente Venda::getCliente(){
	return this->_cliente;
}

void Venda::setValor(double valor){
	this->_valor = valor;
}

void Venda::setDescricao(std::string descricao){
	this->_descricao = descricao;
}

void Venda::setEsp(Especialista esp){
	this->_esp = esp;
}

void Venda::setCliente(Cliente cliente){
	this->_cliente = cliente;
}

void Venda::imprimeDadosVenda() {
    std::cout << " Especialista: " << getEsp().getNome();
    std::cout << "     Cliente: " << getCliente().getNome();
    std::cout << "     Descricao: " << getDescricao() << std::endl;
}
