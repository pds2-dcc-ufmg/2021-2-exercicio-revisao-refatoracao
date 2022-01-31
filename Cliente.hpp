#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Pessoa.hpp"

using namespace std;

class Cliente : public Pessoa {

	public:
		void print() override;
		
		void setEndereco(string endereco){ this->endereco = endereco; }		
		void setCEP(string CEP){ this->CEP = CEP; }
		string getEndereco(){ return this->endereco; }		
		string getCEP(){ return this->CEP; }
		
	private:
		string endereco;
		string CEP;
		
};

#endif
