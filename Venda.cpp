#include <iostream>
#include <string>
#include "Venda.hpp"


void Venda::print()
{
    std::cout << "Especialista: ";
        cout << esp.nome;

    std::cout << " Cliente: ";
        cout << cliente;
    
}

void Venda::Aumentocomissao()
{
    this->esp.comissao+=this->esp.valorcomissao(this->VALOR);
}

void Venda::contaAtendimentos()
{
    this->esp.numAtendimentos+=1;
}

Venda::Venda(double VALOR = 0, string descricao = "", 
            Especialista esp, string cliente = "")
{
    this->VALOR = VALOR;
    this->descricao = descricao;
    this->esp = esp;
    this->cliente = cliente;
    this->Aumentocomissao();
    this->contaAtendimentos();
}
