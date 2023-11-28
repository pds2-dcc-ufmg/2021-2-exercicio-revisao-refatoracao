#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
        private:
                string _NOME;
	        string _endereco;
	        string _Cep;
	        string _AlturaDosPais;
	public:
		Cliente(string Nome, string endereco, string Cep, string AlturaDosPais): 
                _NOME(NOME), _endereco(endereco), _Cep(Cep), _AlturaDosPais(AlturaDosPais) {}
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
