
#include "Clientes.hpp"

#include <cassert>


void Clientes::adicionar_cliente(Cliente cliente) {
    this->clientes.push_back(std::move(cliente));
}

const Cliente &Clientes::operator[](const std::string &nome) const {
    for(const auto &cliente : this->clientes)
        if(cliente.get_nome() == nome)
            return cliente;
    
    assert(false);
    return this->clientes[0];
}

void Clientes::print() const {
    for(const auto &cliente : this->clientes)
        cliente.print();
}
