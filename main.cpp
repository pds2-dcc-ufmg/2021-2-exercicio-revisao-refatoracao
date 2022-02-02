#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1;
    cliente1.nome = "J. Jonah Jameson";
    cliente1.endereco ="Nova York";
	cliente1.cep = "35690000";
    cliente1.imprimeCliente();

    Cliente cliente2;
    cliente2.nome = "Norman Osborn";
    cliente2.endereco ="Hartlford";
	cliente2.cep = "22061955";
    cliente2.imprimeCliente();

    Cliente cliente3;
    cliente3.nome = "Otto Octavius";
    cliente3.endereco ="Schenectady";
	cliente3.cep = "24051953";
    cliente3.imprimeCliente();

    Cliente cliente4;
    cliente4.nome = "Bruce Benner";
    cliente4.endereco ="Dayton";
	cliente4.cep = "22111967";
    cliente4.imprimeCliente();

    Cliente cliente5;
    cliente5.nome = "Steve Rogers";
    cliente5.endereco ="Lower East Side";
	cliente5.cep = "13061981";
    cliente5.imprimeCliente();



    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.nome = "Peter Parker";
    e01.idade = 46;
    e01.rgFunc = 27061975;
    e01.salarioBase = 3000;
    e01.especialidade = "Fotografia";

    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.nome = "Tony Stark";
    e02.idade = 56;
    e02.rgFunc = 4041965;
    e02.salarioBase = 1000;
    e02.especialidade = "Consertos de equipamentos eletronicos";

    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.nome = "Wanda Maximoff";
    e03.idade = 32;
    e03.rgFunc = 16021989;
    e03.salarioBase = 5000;
    e03.especialidade = "Engenharia e Designeeeeer";


    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.idade = 72;
    g01.rgFunc = 21121948;
    g01.salarioBase = 10000;


    Venda v01;
    v01.cliente.nome = "J. Jonah Jameson";
    v01.esp = e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.valor = 100;
    comissao01 += e01.calculaComissao(v01.valor);
    numAtendimentos01+=1;

    Venda v02;
    v02.cliente.nome = "Bruce Benner";
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.valor = 100;
    comissao02 += e02.calculaComissao(v02.valor);
    numAtendimentos02+=1;

    Venda v03;
    v03.cliente.nome = "Norman Osborn";
    v03.esp = e01;
    v03.descricao = "Fotos do novo planador";
    v03.valor = 150;
    comissao01 += e01.calculaComissao(v03.valor);
    numAtendimentos01+=1;

    Venda v04;
    v04.cliente.nome = "J. Jonah Jameson";
    v04.esp = e02;
    v04.descricao = "Recarga de cartucho";
    v04.valor = 10;
    comissao02 += e02.calculaComissao(v04.valor);
    numAtendimentos02+=1;

    Venda v05;
    v05.cliente.nome = "Bruce Benner";
    v05.esp = e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.valor = 10000;
    comissao03 += e03.calculaComissao(v05.valor);
    numAtendimentos03+=1;

    Venda v06;
    v06.cliente.nome = "Steve Rogers";
    v06.esp = e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.valor = 3000;
    comissao03 += e03.calculaComissao(v06.valor);
    numAtendimentos03+=1;

    Venda v07;
    v07.cliente.nome = "J. Jonah Jameson";
    v07.esp = e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.valor = 5000;
    comissao03 += e03.calculaComissao(v07.valor);
    numAtendimentos03+=1;

    Venda v08;
    v08.cliente.nome = "Otto Octavius";
    v08.esp = e02;
    v08.descricao = "Formatacao do PC";
    v08.valor = 80;
    comissao02 += e02.calculaComissao(v08.valor);
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.imprimeVenda();

    v02.imprimeVenda();

    v03.imprimeVenda();

    v04.imprimeVenda();

    v05.imprimeVenda();

    v06.imprimeVenda();

    v06.imprimeVenda();

    v07.imprimeVenda();

    v08.imprimeVenda();



    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.imprimeFuncionario();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.salarioBase+comissao01<<endl;

    e02.imprimeFuncionario();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.salarioBase+comissao02<<endl;

    e03.imprimeFuncionario();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.salarioBase+comissao03<<endl;


    int numTotalServicos = 0;
    numTotalServicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.calculaBonificacaoGerente(numTotalServicos);
    g01.imprimeFuncionario();
    cout << "Salario Total: " << g01.salarioBase + g01.bonificacao<<endl;

    return 0;
}
