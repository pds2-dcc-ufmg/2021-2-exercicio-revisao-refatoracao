#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1 = Cliente("J. Jonah Jameson","Nova York","35690000");
    cliente1.print();

    Cliente cliente2 = Cliente("Norman Osborn","Hartlford","22061955");
    cliente2.print();

    Cliente cliente3 = Cliente("Otto Octavius","Schenectady","24051953");
    cliente3.print();

    Cliente cliente4 = Cliente("Bruce Benner","Dayton","22111967");
    cliente4.print();

    Cliente cliente5 = Cliente("Steve Rogers","Lower East Side","13061981");
    cliente5.print();

    Especialista e01  = Especialista(3000,"46","Peter Parker", 27061975, "Fotografia", 0, 0);

    Especialista e02 = Especialista(1000,"56","Tony Stark", 4041965, "Consertos de equipamentos eletronicos", 0, 0);

    Especialista e03 = Especialista(5000,"32","Wanda Maximoff", 16021989, "Engenharia e Designeeeeer", 0, 0);



    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.IDADE = "72";
    g01.rgFunc = 21121948;
    g01.SalarioBase = 10000;


    Venda v01 = Venda(e01);
    v01.cliente= "J. Jonah Jameson";
    v01.descricao = "Fotos do Homem Aranha";
    v01.VALOR = 100;
    e01._valorVenda += v01.VALOR;
    e01._numAtendimentos+=1;


    Venda v02 = Venda(e02);
    v02.cliente= "Bruce Benner";
    v02.descricao = "Troca da tela do telefone";
    v02.VALOR = 100;
    e02._valorVenda += v02.VALOR;
    e02._numAtendimentos+=1;


    Venda v03 = Venda(e01);
    v03.cliente= "Norman Osborn";
    v03.descricao = "Fotos do novo planador";
    v03.VALOR = 150;
    e01._valorVenda += v03.VALOR;
    e01._numAtendimentos+=1;


    Venda v04 = Venda(e02);
    v04.cliente= "J. Jonah Jameson";
    v04.descricao = "Recarga de cartucho";
    v04.VALOR = 10;
    e02._valorVenda += v04.VALOR;
    e02._numAtendimentos+=1;


    Venda v05 = Venda(e03);
    v05.cliente= "Bruce Benner";
    v05.descricao = "Reconstrucao de Predio";
    v05.VALOR = 10000;
    e03._valorVenda += v05.VALOR;
    e03._numAtendimentos+=1;


    Venda v06 = Venda(e03);
    v06.cliente= "Steve Rogers";
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;
    e03._valorVenda += v06.VALOR;
    e03._numAtendimentos+=1;


    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;



    Venda v07 = Venda(e03);
    v07.cliente= "J. Jonah Jameson";
    v07.descricao = "Reforma do Clarim Diario";
    v07.VALOR = 5000;
    e03._valorVenda += v07.VALOR;
    e03._numAtendimentos+=1;


    Venda v08 = Venda(e02);
    v08.cliente= "Otto Octavius";
    v08.descricao = "Formatacao do PC";
    v08.VALOR = 80;
    e02._valorVenda += v08.VALOR;
    e02._numAtendimentos+=1;



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
    e02.print();
    e03.print();

    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01._numAtendimentos + e02._numAtendimentos + e03._numAtendimentos;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
