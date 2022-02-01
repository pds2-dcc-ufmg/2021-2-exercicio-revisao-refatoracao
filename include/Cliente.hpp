#ifndef CLIENTE_H
#define CLIENTE_H


class Cliente{

	protected:

		std::string _nome;
		std::string _endereco;
		std::string _cep;
		

	public:


		/**
		 * @brief Construtor padrao que inicializa todas as variaveis privadas da classe
		 */
		Cliente(std::string _nome = "", std::string _endereco = "", std::string _cep = "");

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
