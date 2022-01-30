
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda {

	private:
    		double valorVenda;
    		std::string descricao;
    		std::string cliente;
		Especialista esp;

	public:
		void print();

		double getValorVenda();
		std::string getDescricao();
		std::string getCliente();

		void setValorVenda(double novoValorVenda);
		void setDescricao(std::string novaDescricao);
		void setCliente(std::string novoCliente);
		void setEspecialista(Especialista especialista);
};

#endif
