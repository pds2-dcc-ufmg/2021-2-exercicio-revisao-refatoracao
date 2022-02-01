#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	
 private:
		string Nome;
		string Endereco;
		string Cep;
		

	public:
	
	 // @brief:  imprime na tela os dados de um cliente cadastrado;
		void print(); 

 
   Cliente(string nome,string endereco,string cep);
   
};

#endif
