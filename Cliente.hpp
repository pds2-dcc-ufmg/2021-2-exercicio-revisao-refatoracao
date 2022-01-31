//NOTA DE ALTERAÇÕES
//Correção de identação e espaçamentos
//Remoção variável desnecessária AlturaDosPais
//Criação de método de inicialização
//Variáveis NOME e Cep trocadas para corresponder padrão de nomeclatura

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
public:
	Cliente(string,string,string);//Inicialização de variáveis

	void print(); // imprime na tela os dados de um cliente cadastrado

//Informações do cliente
	string nome;
	string endereco;
	string cep;
};

#endif
