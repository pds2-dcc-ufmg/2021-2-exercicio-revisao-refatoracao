#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"

Venda::Venda(double VALOR,
            string descricao,
            Especialista esp,
            string cliente){
    this->VALOR = VALOR;
    this->descricao = descricao;
    this->esp = esp;
    this->cliente = cliente;
    esp.comissao += esp.AumentoComissao(VALOR);
    esp.numAtendimentos += 1;
}

void Venda::print() {
        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
}
