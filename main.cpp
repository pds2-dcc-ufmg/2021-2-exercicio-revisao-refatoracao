#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1 = Cliente("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.print();

    Cliente cliente2 = Cliente("Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", "24051953");
    cliente3.print();

    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
    cliente4.print();

    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");
    cliente5.print();

    Especialista e01 = Especialista("Peter Parker", "46", 27061975, 3000, "Fotografia");
    int numAtendimentos01 = 0;
    double comissao01 = 0;

    Especialista e02 = Especialista("Tony Starkr", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    int numAtendimentos02 = 0;
    double comissao02 = 0;

    Especialista e03 = Especialista("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");
    int numAtendimentos03 = 0;
    double comissao03 = 0;

    Gerente g01 = Gerente("Nick Fury", "72", 21121948, 10000);
    double bonificacao01 = 0;

    Venda v01 = Venda(100, "Fotos do Homem Aranha", e01, "J. Jonah Jameson");
    comissao01 += e01.comissao(v01.valor);
    numAtendimentos01+=1;


    Venda v02 = Venda(100, "Troca da tela do telefone", e02, "Bruce Benner");;
    comissao02 += e02.comissao(v02.valor);
    numAtendimentos02+=1;


    Venda v03 = Venda(150, "Fotos do novo planador", e01, "Norman Osborn");;
    comissao01 += e01.comissao(v03.valor);
    numAtendimentos01+=1;


    Venda v04 = Venda(10, "Recarga de cartucho", e02, "J. Jonah Jameson");;
    comissao02 += e02.comissao(v04.valor);
    numAtendimentos02+=1;


    Venda v05 = Venda(10000, "Reconstrucao de Predio", e03, "Bruce Benner");;
    comissao03 += e03.comissao(v05.valor);
    numAtendimentos03+=1;


    Venda v06 = Venda(3000, "Decoracao de Apartamento no Brooklyn", e03, "Steve Rogers");;
    comissao03 += e03.comissao(v06.valor);
    numAtendimentos03+=1;


    Venda v07 = Venda(100, "Fotos do Homem Aranha", e01, "J. Jonah Jameson");;
    v07.cliente= "J. Jonah Jameson";
    v07.esp = e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.valor = 5000;
    comissao03 += e03.comissao(v07.valor);
    numAtendimentos03+=1;


    Venda v08 = Venda(100, "Fotos do Homem Aranha", e01, "J. Jonah Jameson");;
    v08.cliente= "Otto Octavius";
    v08.esp = e02;
    v08.descricao = "Formatacao do PC";
    v08.valor = 80;
    comissao02 += e02.comissao(v08.valor);
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
    cout << "Salario Total: " << e01.salarioBase+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.salarioBase+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.salarioBase+comissao03<<endl;


    int totalServicos = 0;
    totalServicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calculaBonificacao(totalServicos);
    g01.print();
    cout << "Salario Total: " << g01.salarioBase + g01.bonificacao<<endl;

    return 0;
}
