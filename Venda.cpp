#include "Venda.hpp"

Venda::Venda(double valor,std::string descricao,std::string cliente, Funcionario esp){
      this->VALOR=valor;
      this->descricao=descricao;
      this->cliente=cliente;
      this->esp=esp;
}

void Venda::print(){
        std::cout << "Especialista: ";
        std::cout << esp.nome;

        std::cout << " Cliente: ";
        std::cout << cliente;
}
