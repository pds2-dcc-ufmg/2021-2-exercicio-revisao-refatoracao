#include <iostream>
#include "Venda.hpp"


// Imprime informaçoes sobre a venda 
void Venda::print(){

    std::cout << "Especialista: "<< esp.nome << " Cliente: "<< cliente<<std::endl;

}


// Imprime informaçoes sobre o cliente
void Cliente::print(){

	std::cout << "[Cliente]" <<endl
    << "  Nome: " << NOME <<endl
	<< "  Endereco: " << endereco <<endl
	<< "  CEP: " << Cep <<std::endl;

}