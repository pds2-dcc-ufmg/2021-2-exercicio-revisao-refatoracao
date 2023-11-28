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
    cliente1._nome = "J. Jonah Jameson";
    cliente1._endereco ="Nova York";
	cliente1._cep = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2._nome = "Norman Osborn";
    cliente2._endereco ="Hartlford";
	cliente2._cep = "22061955";
    cliente2.print();

    Cliente cliente3;
    cliente3._nome = "Otto Octavius";
    cliente3._endereco ="Schenectady";
	cliente3._ep = "24051953";
    cliente3.print();

    Cliente cliente4;
    cliente4._nome = "Bruce Benner";
    cliente4._endereco ="Dayton";
	cliente4._cep = "22111967";
    cliente4.print();

    Cliente cliente5;
    cliente5._nome = "Steve Rogers";
    cliente5._endereco ="Lower East Side";
	cliente5._cep = "13061981";
    cliente5.print();




    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01._nome = "Peter Parker";
    e01._idade = "46";
    e01._rgFunc = 27061975;
    e01._salarioBase = 3000;
    e01._especialidade = "Fotografia";



    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02._nome = "Tony Stark";
    e02._idade = "56";
    e02._rgFunc = 4041965;
    e02._salarioBase = 1000;
    e02._especialidade = "Consertos de equipamentos eletronicos";


    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03._nome = "Wanda Maximoff";
    e03._idade = "32";
    e03._rgFunc = 16021989;
    e03._salarioBase = 5000;
    e03._especialidade = "Engenharia e Designeeeeer";


    Gerente g01;
    double bonificacao01 = 0;
    g01._nome = "Nick Fury";
    g01._idade = "72";
    g01._rgFunc = 21121948;
    g01._salarioBase = 10000;


    Venda v01;
    v01._cliente= "J. Jonah Jameson";
    v01._esp = e01;
    v01._descricao = "Fotos do Homem Aranha";
    v01._valor = 100;
    comissao01 += e01.comissao(v01.VALOR);
    numAtendimentos01+=1;


    Venda v02;
    v02.cliente= "Bruce Benner";
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.VALOR = 100;
    comissao02 += e02._comissao(v02.VALOR);
    numAtendimentos02+=1;


    Venda v03;
    v03._cliente= "Norman Osborn";
    v03._esp = e01;
    v03._descricao = "Fotos do novo planador";
    v03._valor = 150;
    comissao01 += e01._comissao(v03.VALOR);
    numAtendimentos01+=1;


    Venda v04;
    v04._cliente= "J. Jonah Jameson";
    v04._esp = e02;
    v04._descricao = "Recarga de cartucho";
    v04._valor = 10;
    comissao02 += e02._comissao(v04.VALOR);
    numAtendimentos02+=1;


    Venda v05;
    v05._cliente= "Bruce Benner";
    v05._esp = e03;
    v05._descricao = "Reconstrucao de Predio";
    v05._valor = 10000;
    comissao03 += e03._comissao(v05.VALOR);
    numAtendimentos03+=1;


    Venda v06;
    v06._cliente= "Steve Rogers";
    v06._esp = e03;
    v06._descricao = "Decoracao de Apartamento no Brooklyn";
    v06._valor = 3000;
    comissao03 += e03._comissao(v06.VALOR);
    numAtendimentos03+=1;


    v06._descricao = "Decoracao de Apartamento no Brooklyn";
    v06._valor = 3000;



    Venda v07;
    v07._cliente= "J. Jonah Jameson";
    v07._esp = e03;
    v07._descricao = "Reforma do Clarim Diario";
    v07._valor= 5000;
    comissao03 += e03._comissao(v07.VALOR);
    numAtendimentos03+=1;


    Venda v08;
    v08._cliente= "Otto Octavius";
    v08._esp = e02;
    v08._descricao = "Formatacao do PC";
    v08._valor = 80;
    comissao02 += e02._comissao(v08.VALOR);
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01._descricao << endl;

    v02.print();
    cout << " Descricao: " << v02._descricao << endl;

    v03.print();
    cout << " Descricao: " << v03._descricao << endl;

    v04.print();
    cout << " Descricao: " << v04._descricao << endl;

    v05.print();
    cout << " Descricao: " << v05._descricao << endl;

    v06.print();
    cout << " Descricao: " << v06._descricao << endl;

    v06.print();
    cout << " Descricao: " << v06._descricao << endl;

    v07.print();
    cout << " Descricao: " << v07._descricao << endl;

    v08.print();
    cout << " Descricao: " << v08._descricao << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01._salarioBase+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02._salarioBase+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03._salarioBase+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01._salarioBase + g01.bonificacao<<endl;

    return 0;
}
