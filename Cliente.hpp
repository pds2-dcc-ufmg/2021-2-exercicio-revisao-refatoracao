#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
    public:
        /**
        *@brief Imprime na tela os dados de um cliente cadastrado
        */
        void print();
	
     private:
	/**
        *@brief Dados do cliente
        */
	string NOME;
	string endereco;
	string Cep;
	string AlturaDosPais;
};

#endif
