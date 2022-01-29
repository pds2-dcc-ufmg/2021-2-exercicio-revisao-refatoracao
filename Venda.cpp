#include "Venda.hpp"

Venda::Venda(double ValorVenda, std::string Descricao, Especialista* Especialista, Cliente* Cliente) : ValorVenda(ValorVenda),
Descricao(Descricao), _Especialista(Especialista), _Cliente(Cliente) {}

void Venda::Print() {

        std::cout << "Especialista: ";
        std::cout << this->_Especialista->getNome();

        std::cout << " Cliente: ";
         this->_Cliente->Print();
}
