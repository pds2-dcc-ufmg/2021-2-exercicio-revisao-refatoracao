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
        /**
        *@brief Define os dados dos clientes
	*@param nome Nome do cliente
	*@param endereco Endereço do Cliente
	*@param cep CEP do Cliente
	*@param rg RG do Cliente
        */	
	void setDados(string nome, string endereco, string cep, string rg);
	
     private:
	/**
        *@brief Dados do cliente
        */
	string nome;
	string endereco;
	string cep;
	string rg;
};

#endif
