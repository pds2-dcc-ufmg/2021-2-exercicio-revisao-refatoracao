//NOTA DE ALTERA��ES
//Corre��o de identa��o e espa�amentos
//Remo��o vari�vel desnecess�ria AlturaDosPais
//Cria��o de m�todo de inicializa��o
//Vari�veis NOME e Cep trocadas para corresponder padr�o de nomeclatura

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
public:
	Cliente(string,string,string);//Inicializa��o de vari�veis

	void print(); // imprime na tela os dados de um cliente cadastrado

//Informa��es do cliente
	string nome;
	string endereco;
	string cep;
};

#endif
