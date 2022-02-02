#include <iostream>
#include <string>
#include "Cliente.hpp

using namespace std;

void Cliente::print(){
	cout << "[Cliente]" << endl;
	cout << "  Nome: " << this->nome << endl;
	cout << "  Endereco: " << this->endereco << endl;
	cout << "  CEP: " << this->cep << endl;
}

/**
----Alterações:----
1.Identação melhor das linhas do código
2.Uso do "using namespace std" para facilitação no uso da linguagem
3.Padronização(ou formatação) dos nomes das variáveis
4.Inserção do "this" para especificar qual o atributo
**/
