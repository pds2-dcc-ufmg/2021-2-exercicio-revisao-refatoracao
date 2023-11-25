#include "Venda.hpp"
#include <iostream>

using namespace std;

Venda::Venda(const double& valor, const std::string& descricao, const Especialista& especialista, const std::string& nomeCliente)
: valor(valor), descricao(descricao), especialista(especialista), nomeCliente(nomeCliente) {}

double Venda::getValor(){
    return valor;
}

std::string Venda::getDescricao(){
    return descricao;
}

std::string Venda::getNomeCliente(){
    return nomeCliente;
}

    void Venda::print() {
      std::cout << "[Venda]" << std::endl;
      std::cout << "Especialista: " << especialista.getNome() << std::endl;
      std::cout << "Cliente: " << nomeCliente << std::endl;
      std::cout << "Descrição: " << descricao << std::endl;
      std::cout << "Valor: " << valor << std::endl
                << "\n";
    }

