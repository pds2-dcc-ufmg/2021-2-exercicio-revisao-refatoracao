#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{
	private:
		string nome;
		string endereco;
		string cep;

  public:
  //GETTERS
    string get_nome();
    string get_endereco();
    string get_cep();
  //SETTERS
    void set_nome(string nome_inserido);
    void set_endereco(string endereco_inserido);
    void set_cep(string cep_inserido);
  //imprime na tela os dados de um cliente cadastrado
    void print(); 
};

#endif