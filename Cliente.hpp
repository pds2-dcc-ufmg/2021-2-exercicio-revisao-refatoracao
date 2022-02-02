#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:

		string Nome, Endereco, Cep, AlturaDosPais;
		
		// imprime na tela os dados de um cliente cadastrado
		void print() {
			std::cout << " Nome: " << Nome << std::endl;
			std::cout << " Endereço: " << Endereco << std::endl;
			std::cout << " CEP: " << Cep << std::endl;
			std::cout << " Altura dos pais: " << AlturaDosPais << std::endl;
		} 
};

#endif
