#include "Venda.hpp"

void Venda::print () {
    std::cout << "Especialista: " << esp.getName();

    std::cout << " Cliente: " << this->cliente;
}

double Venda::getValor () {
    return this->valor;
}

std::string Venda::getDescricao () {
    return this->descricao;
}

Venda::Venda (std::string cliente, 
              Especialista *esp, 
              std::string descricao, 
              double valor)
              : esp(*esp), cliente(cliente), descricao(descricao), valor(valor) {

}
