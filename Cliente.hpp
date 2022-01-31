#ifndef CLIENTE_H
#define CLIENTE_H

using namespace std;

class Cliente{

	public:

    Cliente(string nome, string endereco, string cep) {
      this->endereco = endereco;
      this->nome = nome;
      this->cep = cep;
    }

		string cep;
		string nome;
		string endereco;

		void print(){
      cout << "[Cliente]" << endl
            << "  Nome: " << nome << endl
		        << "  Endereco: " << endereco << endl
		        << "  CEP: " << cep << endl;
    }

};

#endif
