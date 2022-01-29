#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

// Não é uma boa prática utilizar namespaces em escopo global, pois pode gerar conflitos
//using namespace std;

class Cliente{

	//Padronização dos layouts das variáveis, e declaração inline tornando mais compacto e elegante, 
	//além de declara-las como private

	private:
		//Declarando as variáveis como private, como altura dos pais não é utilizado foi retirado
		std::string nome, endereco, cep;

	public:

		//Declaração do construtor da classe Cliente

		Cliente(std::string nome, std::string endereco, std::string cep);

		virtual ~Cliente();

		
		//Declaração do metodo print como virtual, pois este e utilizado em várias classes

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
