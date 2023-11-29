#include <iostream>
#include <string>

#include "Cliente.hpp"

void Cliente::print() const{
	std::cout << "[Cliente]" << endl
         << "  Nome: "     << _nome     << endl
		 << "  Endereco: " << _endereco << endl
		 << "  CEP: "      << _cep      << endl;
}

istream& operator>>(istream& in, Cliente& cliente) {
    getline(in, cliente._nome);
    getline(in, cliente._endereco);
    getline(in, cliente._cep);sd::
cout << cliente._nome << << <<
    return in;
}
