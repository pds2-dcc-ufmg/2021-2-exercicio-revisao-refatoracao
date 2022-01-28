#include <iostream>
#include <string>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

//Tais funções poderiam ter sido colocadas como construtores em suas classes tambem.
void NovoCliente(Cliente * cliente, std::string nome, std::string endereco,
			std::string cep)
{
	cliente -> SetNome(nome);
	cliente -> SetEndereco(endereco);
	cliente -> SetCep(cep);
}

void NovoEspecialista(Especialista * especialista, double valorMinimo, double perc, 
				const std::string& nome, const std::string& idade, int RG,
				const std::string& especialidade)
{
	especialista -> SetSalarioBase(valorMinimo);
	especialista -> Inicializacao();
	especialista -> SetPerc(perc);
	especialista -> SetNome(nome);
	especialista -> SetIdade(idade);
	especialista -> SetRGFuncionario(RG);
	especialista -> SetEspecialidade(especialidade);
}
	
void NovoGerente(Gerente * gerente, int valorBonificacao, const std::string& nome, const std::string& idade,
			int RG, double valorMinimo)
{
	gerente -> SetValorBonificacao(valorBonificacao);
	gerente -> SetBonificacao(0);
	gerente -> SetNome(nome);
	gerente -> SetIdade(idade);
	gerente -> SetRGFuncionario(RG);
	gerente -> SetSalarioBase(valorMinimo);
}

void NovaVenda(Venda * venda, Cliente _cliente, Especialista * _especialista, const std::string& descricao,
			double valor)
{
	venda -> cliente = _cliente;
	venda -> especialista = *(_especialista);
	venda -> SetDescricao(descricao);
	venda -> SetValor(valor);
	_especialista -> SetComissao(venda -> GetValor());
	_especialista -> AcrescentaSalario();
	_especialista -> NovoAtendimento();
}	
int main()
{
    Cliente cliente1;
    NovoCliente(&cliente1, "J. Jonah Jameson", "Nova York", "35690000");
    cliente1.print();

    Cliente cliente2;
    NovoCliente(&cliente2, "Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3;
    NovoCliente(&cliente3, "Otto Octavius", "Schenectady", "24051953");
    cliente3.print();

    Cliente cliente4;
    NovoCliente(&cliente4, "Bruce Benner", "Dayton", "22111967");
    cliente4.print();

    Cliente cliente5;
    NovoCliente(&cliente5, "Steve Rogers", "Lower East Side", "13061981");
    cliente5.print();


    Especialista e01;
    NovoEspecialista(&e01, 3000, 0.1, "Peter Parker", "46", 27061975, "Fotografia");

    Especialista e02;
    NovoEspecialista(&e02, 1000, 0.1, "Tony Stark", "56", 4041965, "Consertos de equipamentos eletronicos");

    Especialista e03;
    NovoEspecialista(&e03, 5000, 0.15, "Wanda Maximoff", "32", 16021989, "Engenharia e Designeeeeer");


    Gerente g01;
    NovoGerente(&g01, 15, "Nick Fury", "72", 21121948, 10000);


    Venda v01;
    NovaVenda(&v01, cliente1, &e01, "Fotos do Homem Aranha", 100);

    Venda v02;
    NovaVenda(&v02, cliente4, &e02, "Troca da tela do telefone", 100);

    Venda v03;
    NovaVenda(&v03, cliente2, &e01, "Fotos do novo planador", 150);

    Venda v04;
    NovaVenda(&v04, cliente1, &e02, "Recarga de cartucho", 10);

    Venda v05;
    NovaVenda(&v05, cliente4, &e03, "Reconstrucao de Predio", 10000);

    Venda v06;
    NovaVenda(&v06, cliente5, &e03, "Decoracao de Apartamento no Brooklyn", 3000);

    Venda v07;
    NovaVenda(&v07, cliente1, &e03, "Reforma do Clarim Diario", 5000);

    Venda v08;
    NovaVenda(&v08, cliente3, &e02, "Formatacao do PC", 80);
 

    std::cout <<"           Relatorio das Vendas" << std::endl;

    v01.print();
    v02.print();
    v03.print();
    v04.print();
    v05.print();
    v06.print();
    v06.print();
    v07.print();
    v08.print();

    std::cout <<"           Relatorio dos Funcionarios" << std::endl;
    e01.print();
    e02.print();
    e03.print();

    int numTotalServicos = 0;
    numTotalServicos = e01.GetNumAtendimentos() + e02.GetNumAtendimentos() + e03.GetNumAtendimentos();
    g01.SetBonificacao(numTotalServicos);
    g01.print();

    return 0;
}
