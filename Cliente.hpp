#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	public:


		/**
         * @brief Atualiza o login do usuario
         *
         * @param login Novo login do usuario
         */
        void setNOME(const std::string& NOME);

		/**
         * @brief Atualiza o login do usuario
         *
         * @param login Novo login do usuario
         */
        void setEndereco(const std::string& endereco);


		/**
         * @brief Atualiza o login do usuario
         *
         * @param login Novo login do usuario
         */
        void setCEP(const std::string& CEP);


		/**
         * @brief Atualiza o login do usuario
         *
         * @param login Novo login do usuario
         */
        void setAlturaDosPais(const std::string& altura_dos_pais);				


		/**
         * @brief Retorna o NOME do cliente
         *
         * @return std::string _NOME
         */
		std::string getNOME() const;


		/**
         * @brief Retorna o NOME do cliente
         *
         * @return std::string _endereco
         */
		std::string getEndereco() const;

		/**
         * @brief Retorna o CEP do cliente
         *
         * @return std::string _Cep
         */
		std::string getCEP() const;


		/**
         * @brief Retorna a alttura dos pais do cliente
         *
         * @return std::string _AlturaDosPais
         */
		std::string getAlturaDosPais() const;

		/**
         * @brief Imprime os dados do cliente
         *
         * @return void
         */
		void print(); // imprime na tela os dados de um cliente cadastrado

	private:

		string _NOME;
		string _endereco;
		string _Cep;
		string _AlturaDosPais;

};

#endif
