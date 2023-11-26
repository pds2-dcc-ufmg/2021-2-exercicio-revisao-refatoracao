#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

}

Cliente::Cliente(_nome,_endereco,_Cep,):nome(_nome), endereco(_endereco), Cep(_Cep);
