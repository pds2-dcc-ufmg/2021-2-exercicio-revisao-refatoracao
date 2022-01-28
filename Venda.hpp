#ifndef VENDA_H
#define VENDA_H

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include <iostream>
#include <string>

class Venda{

    private:
        double _VALOR;
        std::string _descricao;
        Especialista _esp;
        std::string _cliente;

    public:
         /**
         * @brief Atualiza o valor da venda
         *
         * @param valor Novo _VALOR
         */
        void setValor(const double& valor);

		/**
         * @brief Atualiza a descrição
         *
         * @param descricao nova _descricao
         */
        void setDescricao(const std::string& descricao);


		/**
         * @brief Atualiza o especialista
         *
         * @param especialista Novo _esp
         */
        void setEspecialista(const Especialista& especialista);


		/**
         * @brief Atualiza o cliente
         *
         * @param cliente Novo _cliente
         */
        void setCliente(const std::string& cliente);				


		/**
         * @brief Retorna o _VALOR
         *
         * @return double _VALOR
         */
		double getValor() const;


		/**
         * @brief Retorna a descrição
         *
         * @return std::string _descricao
         */
		std::string getDescricao() const;

		/**
         * @brief Retorna o especialista
         *
         * @return Especialista _esp
         */
		Especialista getEspecialista() const;


		/**
         * @brief Retorna o cliente
         *
         * @return std::string _cliente
         */
		std::string getCliente() const;


        void print();

};

#endif
