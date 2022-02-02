#include "Venda.hpp"

void Venda::print() {

    std::cout << "Especialista: ";
    std::cout << _esp.getNome();

    std::cout << " Cliente: ";
    std::cout << _cliente.getNome();

    std::cout << " Descricao: " << _descricao << std::endl;

}

Venda::Venda(double valor, std::string descricao, Especialista esp, Cliente cliente){
    this->_valor=valor;
    this->_descricao = descricao;
    this->_esp = esp;
    this->_cliente = cliente;

    esp.efetuar_venda(*this);
}
