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


	Gerente g01;
	g01._bonificacao = 0;
	g01._nome = "Nick Fury";
	g01._idade = "72";
	g01._rg_func = 21121948;
	g01._salario_base = 10000;


	Venda v01;
	v01.cliente= "J. Jonah Jameson";
	v01.esp = e01;
	v01.descricao = "Fotos do Homem Aranha";
	v01.valor = 100;
	comissao01 += e01._comissao(v01.valor);
	numAtendimentos01+=1;


	Venda v02;
	v02.cliente= "Bruce Benner";
	v02.esp = e02;
	v02.descricao = "Troca da tela do telefone";
	v02.valor = 100;
	comissao02 += e02._comissao(v02.valor);
	numAtendimentos02+=1;


	Venda v03;
	v03.cliente= "Norman Osborn";
	v03.esp = e01;
	v03.descricao = "Fotos do novo planador";
	v03.valor = 150;
	comissao01 += e01._comissao(v03.valor);
	numAtendimentos01+=1;


	Venda v04;
	v04.cliente= "J. Jonah Jameson";
	v04.esp = e02;
	v04.descricao = "Recarga de cartucho";
	v04.valor = 10;
	comissao02 += e02._comissao(v04.valor);
	numAtendimentos02+=1;


	Venda v05;
	v05.cliente= "Bruce Benner";
	v05.esp = e03;
	v05.descricao = "Reconstrucao de Predio";
	v05.valor = 10000;
	comissao03 += e03._comissao(v05.valor);
	numAtendimentos03+=1;


	Venda v06;
	v06.cliente= "Steve Rogers";
	v06.esp = e03;
	v06.descricao = "Decoracao de Apartamento no Brooklyn";
	v06.valor = 3000;
	comissao03 += e03._comissao(v06.valor);
	numAtendimentos03+=1;


	Venda v07;
	v07.cliente= "J. Jonah Jameson";
	v07.esp = e03;
	v07.descricao = "Reforma do Clarim Diario";
	v07.valor = 5000;
	comissao03 += e03._comissao(v07.valor);
	numAtendimentos03+=1;


	Venda v08;
	v08.cliente= "Otto Octavius";
	v08.esp = e02;
	v08.descricao = "Formatacao do PC";
	v08.valor = 80;
	comissao02 += e02._comissao(v08.valor);
	numAtendimentos02+=1;



	cout <<" \n \n           Relatorio das Vendas \n" << endl;

	v01.print();
	cout << " Descricao: " << v01.descricao << endl;

	v02.print();
	cout << " Descricao: " << v02.descricao << endl;

	v03.print();
	cout << " Descricao: " << v03.descricao << endl;

	v04.print();
	cout << " Descricao: " << v04.descricao << endl;

	v05.print();
	cout << " Descricao: " << v05.descricao << endl;

	v06.print();
	cout << " Descricao: " << v06.descricao << endl;

	v06.print();
	cout << " Descricao: " << v06.descricao << endl;

	v07.print();
	cout << " Descricao: " << v07.descricao << endl;

	v08.print();
	cout << " Descricao: " << v08.descricao << endl;






	cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
	e01.print();
	cout << "Num Atendimentos: " << numAtendimentos01 << endl;
	cout << "Salario Total: " << e01._salario_base+comissao01<<endl;

	e02.print();
	cout << "Num Atendimentos: " << numAtendimentos02 << endl;
	cout << "Salario Total: " << e02._salario_base+comissao02<<endl;

	e03.print();
	cout << "Num Atendimentos: " << numAtendimentos03 << endl;
	cout << "Salario Total: " << e03._salario_base+comissao03<<endl;


	int num_total_servicos = 0;
	num_total_servicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
	g01._bonificacao = g01.calcula_bonificacao_gerente(num_total_servicos);
	g01.print();
	cout << "Salario Total: " << g01._salario_base + g01._bonificacao<<endl;

	return 0;
}
