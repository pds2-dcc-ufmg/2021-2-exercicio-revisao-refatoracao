
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
private:
	double _valor;
	string _descricao;
	Especialista* _especialista;
	Cliente* _cliente;

public:
	Venda(double valor,
			 string descricao,
			 Especialista* especialista,
			 Cliente* cliente):
		_valor(valor),
		_descricao(descricao),
		_especialista(especialista),
		_cliente(cliente) {
		_especialista->venda(valor);
	}

	void print() {
		cout << "Especialista: " << _especialista->get_nome();
		cout << " Cliente: " << _cliente->get_nome();
		cout << " Descricao: " << _descricao << endl;
	}

};

#endif
