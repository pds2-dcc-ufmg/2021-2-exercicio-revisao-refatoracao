#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

  private:
		string nome;
		string endereco;
		string cep;

	public:

    Cliente(string nome, string endereco, string cep){
      this->nome = nome;
      this->endereco = endereco;
      this->cep = cep;
    }

		void print(); 
};

#endif

