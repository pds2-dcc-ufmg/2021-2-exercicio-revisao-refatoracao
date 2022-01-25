#include "Venda.hpp"

Venda::Venda(double valor, std::string descricao, Especialista &especialista, Cliente &cliente) 
:   valor(valor), 
    descricao(descricao), 
    especialista(especialista), 
    cliente(cliente)
{
    especialista.adicionarComissao(valor);
}

void Venda::print() {
    especialista.print();
    cliente.print();
    std::cout << "Descricaoo: " << this->descricao << std::endl;
    std::cout << "Valor: " << this->valor << std::endl;
    std::cout << "\n";
}