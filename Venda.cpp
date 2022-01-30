
#include "Venda.hpp"

/*
Arquivo com as implementacoes dos metodos da classe Venda
*/

Venda::Venda(std::string descricao,
             Especialista esp,
             Cliente cliente,
             double valor) {
        this->_cliente = cliente;
        this->_descricao = descricao;
        this->_esp = esp;
        this->_valor = valor;
}


double Venda::getvalor() {
        return this->_valor;
}


void Venda::imprime_venda() {
        std::cout << "Especialista: "
                  << this->_esp.getnome_func()
                  << " Cliente: "
                  << this->_cliente.getnome_cliente()
                  << " Descricao: " 
                  << this->_descricao << std::endl;
}
