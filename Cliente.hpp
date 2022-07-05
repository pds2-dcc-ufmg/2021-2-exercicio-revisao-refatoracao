#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		Cliente(string _nome,
				string _endereco,
				string _cep) : nome_ (_nome),
										 endereco_(_endereco),
										 cep_(_cep) {};
		void print(); // imprime na tela os dados de um cliente cadastrado
		string getNome() {return nome_;};
	private:
		string nome_;
		string endereco_;
		string cep_;
};

#endif
