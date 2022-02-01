#ifndef CLIENTE_H
#define CLIENTE_H


class Cliente{

	protected:

		std::string _nome;
		std::string _endereco;
		std::string _cep;
		

	public:


		/**
		 * @brief Construtor padrao que inicializa todos os atributos privados da classe.
		 */
		Cliente(std::string _nome = "", std::string _endereco = "", std::string _cep = "");


		//Métodos Getters e Setters dos atributos privados da classe.
		std::string getNome();
		std::string getEndereco();
		std::string getCEP();

		void setNome(std::string nome);
		void setEndereco(std::string Endereco);
		void setCEP(std::string cep);
		

		/**
		 * @brief Imprime na tela os dados de um cliente cadastrado 
		 */
		void print(); 

};

#endif
