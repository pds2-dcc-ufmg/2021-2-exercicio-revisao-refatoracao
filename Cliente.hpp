#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:
		std::string Endereco;
		std::string Nome;
		std::string Cep;
		
	public:

	/**
    * @brief Retorna o Nome do cliente
    *
    * @return std::string Nome do cliente
    */
	std::string getNome();

	/**
    * @brief Retorna o Endereco do cliente
    *
    * @return std::string Endereco do cliente
    */	
	std::string getEndereco();

	/**
    * @brief Retorna o Cep do cliente
    *
    * @return std::string Cep do cliente
    */
	std::string getCep();

	/**
	* @brief Destrutor da classe
	*
	*/
	~Cliente();

	/**
    * @brief Construtor padrao que inicializa todas as variaveis da classe.
    *
    * @param Nome Nome do Cliente envolvido.
	* @param Endereco O Endereco do Cliente envolvido.
    * @param Cep O Cep do Cliente. ex: 30570450
    */
	Cliente(std::string Nome,
	std::string Endereco,
	std::string Cep);

	/**
	* @brief  Imprime na tela os dados de um cliente cadastrado
	*
	*/
	void Print();

};

#endif