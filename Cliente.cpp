#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << get_NOME() << std::endl
		 << "  Endereco: " << get_Endereco() << std::endl
		 << "  CEP: " << get_Cep() << std::endl;

}

void Cliente::set_NOME(std::string _nome){
    NOME = _nome;
}

std::string Cliente::get_NOME(){
    return NOME;
}

void Cliente::set_Endereco(std::string _endereco){
    endereco = _endereco;
}

std::string Cliente::get_Endereco(){
    return endereco;
}
		
void Cliente::set_Cep(std::string _cep){
    Cep = _cep;
}

std::string Cliente::get_Cep(){
    return Cep;
}
