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
    std::cout << "Especialista: " << especialista.getNome();
    std::cout << " Cliente: " << cliente.getNome();
    std::cout << " Descricao: " << this->descricao << std::endl;
}