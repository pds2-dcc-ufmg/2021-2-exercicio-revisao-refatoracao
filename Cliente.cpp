#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(string nome, int cep, string endereco){
	_nome = nome;
	_cep = cep;
	_endereco = endereco;
}

void Cliente::print(){
	
	cout << "[Cliente]" << endl
    	<< " Nome: " << _nome << endl
			<< " Endereço: " << _endereco << endl
		 		<< " CEP: " << _cep << endl;

}