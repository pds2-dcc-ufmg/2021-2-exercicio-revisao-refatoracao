#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:        
		void setNome(string nome);
        string getNome();

        void setEndereco(string endereco);
        string getEndereco();

        void setCep(string cep);
        string getCep();
		
        void print(); // Imprime na tela os dados de um cliente cadastrado

    private:
		string Nome;
		string Endereco;
		string Cep;

};

#endif
