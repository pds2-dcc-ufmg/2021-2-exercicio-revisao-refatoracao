#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include "Cliente.cpp"

int main()
{
    Cliente* cliente1 = new Cliente( "J. Jonah Jameson", "Nova York", "35690000" );
    cliente1->print();
    delete cliente1;

    Cliente* cliente2 = new Cliente( "Norman Osborn", "Hartlford", "22061955" );
    cliente2->print();
    delete cliente2;

    Cliente* cliente3 = new Cliente( "Otto Octavius", "Schenectady", "24051953" );
    cliente3->print();
    delete cliente3;

    Cliente* cliente4 = new Cliente( "Bruce Benner", "Dayton", "22111967" );
    cliente4->print();
    delete cliente4;

    Cliente* cliente5 = new Cliente( "Steve Rogers", "Lower East Side", "13061981" );
    cliente5->print();
    delete cliente5;

    Especialista* e01 = new Especialista( 3000, "46", "Peter Parker", 27061975, "Fotografia" );
    int numAtendimentos01 = 0;
    double comissao01 = 0;

    Especialista* e02 = new Especialista( 1000, "56", "Tony Stark", 4041965, "Consertos de equipamentos eletronicos" );
    int numAtendimentos02 = 0;
    double comissao02 = 0;

    Especialista* e03 = new Especialista( 5000, "32", "Wanda Maximoff", 16021989, "Engenharia e Designeeeeer" );
    int numAtendimentos03 = 0;
    double comissao03 = 0;

    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.IDADE = "72";
    g01.rgFunc = 21121948;
    g01.SalarioBase = 10000;


    Venda v01;
    v01.cliente= "J. Jonah Jameson";
    v01.esp = e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.VALOR = 100;
    comissao01 += e01->comissao(v01.VALOR);
    numAtendimentos01+=1;


    Venda v02;
    v02.cliente= "Bruce Benner";
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.VALOR = 100;
    comissao02 += e02->comissao(v02.VALOR);
    numAtendimentos02+=1;


    Venda v03;
    v03.cliente= "Norman Osborn";
    v03.esp = e01;
    v03.descricao = "Fotos do novo planador";
    v03.VALOR = 150;
    comissao01 += e01->comissao(v03.VALOR);
    numAtendimentos01+=1;


    Venda v04;
    v04.cliente= "J. Jonah Jameson";
    v04.esp = e02;
    v04.descricao = "Recarga de cartucho";
    v04.VALOR = 10;
    comissao02 += e02->comissao(v04.VALOR);
    numAtendimentos02+=1;


    Venda v05;
    v05.cliente= "Bruce Benner";
    v05.esp = e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.VALOR = 10000;
    comissao03 += e03->comissao(v05.VALOR);
    numAtendimentos03+=1;


    Venda v06;
    v06.cliente= "Steve Rogers";
    v06.esp = e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;
    comissao03 += e03->comissao(v06.VALOR);
    numAtendimentos03+=1;


    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;


    Venda v07;
    v07.cliente= "J. Jonah Jameson";
    v07.esp = e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.VALOR = 5000;
    comissao03 += e03->comissao(v07.VALOR);
    numAtendimentos03+=1;


    Venda v08;
    v08.cliente= "Otto Octavius";
    v08.esp = e02;
    v08.descricao = "Formatacao do PC";
    v08.VALOR = 80;
    comissao02 += e02->comissao(v08.VALOR);
    numAtendimentos02+=1;


    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();
    std::cout << " Descricao: " << v01.descricao << std::endl;

    v02.print();
    std::cout << " Descricao: " << v02.descricao << std::endl;

    v03.print();
    std::cout << " Descricao: " << v03.descricao << std::endl;

    v04.print();
    std::cout << " Descricao: " << v04.descricao << std::endl;

    v05.print();
    std::cout << " Descricao: " << v05.descricao << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.descricao << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.descricao << std::endl;

    v07.print();
    std::cout << " Descricao: " << v07.descricao << std::endl;

    v08.print();
    std::cout << " Descricao: " << v08.descricao << std::endl;

    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01->print();
    std::cout << "Num Atendimentos: " << numAtendimentos01 << std::endl;
    std::cout << "Salario Total: " << e01->getSalarioBase() + comissao01 << std::endl;

    e02->print();
    std::cout << "Num Atendimentos: " << numAtendimentos02 << std::endl;
    std::cout << "Salario Total: " << e02->getSalarioBase() + comissao02 << std::endl;

    e03->print();
    std::cout << "Num Atendimentos: " << numAtendimentos03 << std::endl;
    std::cout << "Salario Total: " << e03->getSalarioBase() + comissao03 << std::endl;

    int NumTotalservicos = 0;
    NumTotalservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calculaBonificacao(NumTotalservicos);
    g01.print();
    std::cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<< std::endl;

    delete e01;
    delete e02;
    delete e03;

    return 0;
}
