
#include "Venda.hpp"

#include <iostream>


Venda::Venda(
    const Cliente &cliente,
    const Funcionario &funcionario,
    std::string descicao,
    const double valor)
    :
    cliente(cliente),
    funcionario(funcionario),
    descricao(std::move(descicao)),
    valor(valor) {}

void Venda::print() const {
    std::cout << "Especialista: " << this->funcionario.get_nome();
    std::cout << " Cliente: " << this->cliente.get_nome();
    std::cout << " Descricao: " << this->descricao << '\n';
}