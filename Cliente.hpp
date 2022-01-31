#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
	
		string altura_dos_pais;
	
                Cliente (string nome, string endereço, string cep)
			
		string get_nome();
			
		void print(); // imprime na tela os dados de um cliente cadastrado
	
       private:
	 
	        string _nome, _endereco, _cep;

};

#endif
