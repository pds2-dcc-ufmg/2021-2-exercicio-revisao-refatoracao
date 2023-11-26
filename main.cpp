#include <iostream>
#include <vector>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
	vector<Cliente> clientes;

	clientes.push_back(Cliente("J. Jonah Jameson", "Nova York", "35690000"));
	clientes.push_back(Cliente("Norman Osborn", "Hartlford", "22061955"));
	clientes.push_back(Cliente("Otto Octavius", "Schenectady", "24051953"));
	clientes.push_back(Cliente("Bruce Benner", "Dayton", "22111967"));
	clientes.push_back(Cliente("Steve Rogers", "Lower East Side", "13061981"));

	for (Cliente& cliente: clientes) cliente.print();


	vector<Especialista> especialistas;

	especialistas.push_back(Especialista("Fotografia", 0, 0, 3000, 
																			"Peter Parker", "46", 27061975));
	especialistas.push_back(Especialista("Consertos de equipamentos eletronicos", 0, 0, 1000, 
																			"Tony Stark", "56", 4041965));
	especialistas.push_back(Especialista("Engenharia e Designeeeeer", 0, 0, 5000, 
																			"Wanda Maximoff", "32", 16021989));


	Gerente g01(0, 10000, "Nick Fury", "72", 21121948);


	vector<Venda> vendas;

	vendas.push_back(Venda(100, "Fotos do Homem Aranha", 
												&especialistas[0], &clientes[0]));
	vendas.push_back(Venda(100, "Troca da tela do telefone", 
												&especialistas[1], &clientes[3]));
	vendas.push_back(Venda(150, "Fotos do novo planador", 
												&especialistas[0], &clientes[1]));
	vendas.push_back(Venda(10, "Recarga de cartucho", 
												&especialistas[1], &clientes[0]));
	vendas.push_back(Venda(10000, "Reconstrucao de Predio", 
												&especialistas[2], &clientes[3]));
	vendas.push_back(Venda(3000, "Decoracao de Apartamento no Brooklyn", 
												&especialistas[2], &clientes[4]));
	vendas.push_back(Venda(5000, "Reforma do Clarim Diario", 
												&especialistas[2], &clientes[0]));
	vendas.push_back(Venda(80, "Formatacao do PC", 
												&especialistas[1], &clientes[2]));


	cout <<" \n \n           Relatorio das Vendas \n" << endl;
	for (Venda& venda: vendas) {
		venda.print();
	}

	cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
	for (Especialista& esp: especialistas) {
		esp.print();
	}

	int num_total_servicos = 0;
	num_total_servicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
	g01._bonificacao = g01.calcula_bonificacao_gerente(num_total_servicos);
	g01.print();
	cout << "Salario Total: " << g01._salario_base + g01._bonificacao<<endl;

	return 0;
}
