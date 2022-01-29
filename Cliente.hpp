#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>


class Cliente{

	public:
		std::string NOME;	
		std::string endereco;
		std::string Cep;
		std::string AlturaDosPais;

		void print(); 
		
};

#endif

/*	*** Foi retirado o include namespace std e adicionado o std antes de cada uso 
(O mesmo processo foi reproduzido no .cpp de implementação).
	*** Ainda no .cpp foi retirado o "#include <string>", este include já é feito 
no .hpp e paassado na chamada do "#include "Cliente.hpp"".
	*** Por fim, foi acrescentado o ponteiro this-> na implementação ".cpp".
					
	*** Estas alterações serão aplicadas em qualquer outro código que não as sigam *** */
