#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {

	  public:
	  	virtual void print() = 0;
      
      string getNome() { return this->nome; }
      void setNome(string nome){ this->nome = nome; }

    protected:
      string nome;
        
};

#endif
