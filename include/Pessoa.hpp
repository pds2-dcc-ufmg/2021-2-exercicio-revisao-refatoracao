#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

class Pessoa{
	protected:
        std::string _nome;

    public:
		virtual void imprimir_dados(){}; 
};

#endif
