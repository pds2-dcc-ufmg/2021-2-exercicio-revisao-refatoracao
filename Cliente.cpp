#include <iostream>
#include <string>
#include "Cliente.hpp"
//Metodos de Set da Classe Cliente
void Cliente::SetEndereco(string Endereco){
	this->Endereco = Endereco;
}
void Cliente::SetCep(string Cep)
{
	this->Cep = Cep;
}
// Metodos de Set da Classe Cliente
string Cliente::GetEndereco(){
	return Endereco;
}
string Cliente::GetCep(){
	return Cep;
}
//Metodo que imprime os dados do cliente 
void Cliente::Print(){
	std::cout << "[Cliente]" << endl
         << "  Nome: " << GetNome() << endl
		 << "  Endereco: " << GetEndereco() << endl
		 << "  CEP: " << GetCep() << endl;
}

