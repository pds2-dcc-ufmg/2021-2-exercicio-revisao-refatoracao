#include "Venda.hpp"

void Venda::print() {
    std::cout << "Especialista: ";
    std::cout << Venda::esp.nome;

    std::cout << " Cliente: ";
    std::cout << Venda::cliente;

    //std::cout << " : ";
    //cout << Venda::cliente;
}

/*void print() {

    std::cout << "Especialista: ";
    std::cout << Venda::esp.nome;

    std::cout << " Cliente: ";
    std::cout << Venda::cliente;
}*/
