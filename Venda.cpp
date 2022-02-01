#include <iostream>
#include <string>
#include "Venda.hpp"
#include <iomanip>


void Venda::print() {
        std::cout << "Especialista: " << especialista->_nome << " Cliente: " << cliente->_nome << " Descricao: " << descricao << std::endl;
}


Venda::Venda(Cliente* cliente, Especialista* especialista, std::string descricao, double valorVenda){
    this->cliente = cliente;
    this->especialista = especialista;
    this->descricao = descricao;
    this->valorVenda = valorVenda;
    especialista->setComissao(valorVenda);
    especialista->numAtendimentos++;
    especialista->gerenteDoEspecialista->totalVendas++;

}
