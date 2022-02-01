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

    Gerente g01 (10000, "72", "Nick Fury", 21121948, 0);


    Venda v01(e01, 100, "Fotos do Homem Aranha", cliente1);
    e01._valorVenda += v01._valor;
    e01._numAtendimentos+=1;


    Venda v02 (e02, 100, "Troca da tela do telefone", cliente4);
    e02._valorVenda += v02._valor;
    e02._numAtendimentos+=1;


    Venda v03(e01, 150, "Fotos do novo planador", cliente2);
    e01._valorVenda += v03._valor;
    e01._numAtendimentos+=1;


    Venda v04(e02, 10, "Recarga de cartucho", cliente1);
    e02._valorVenda += v04._valor;
    e02._numAtendimentos+=1;


    Venda v05(e03, 10000, "Reconstrucao de Predio", cliente4);
    e03._valorVenda += v05._valor;
    e03._numAtendimentos+=1;


    Venda v06(e03, 3000, "Decoracao de Apartamento no Brooklyn", cliente5);
    e03._valorVenda += v06._valor;
    e03._numAtendimentos+=1;

    Venda v07 (e03, 5000, "Reforma do Clarim Diario", cliente1);
    e03._valorVenda += v07._valor;
    e03._numAtendimentos+=1;


    Venda v08 (e02, 80, "Formatacao do PC", cliente3);
    e02._valorVenda += v08._valor;
    e02._numAtendimentos+=1;

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
    e02.print();
    e03.print();

    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01._numAtendimentos + e02._numAtendimentos + e03._numAtendimentos;
    g01._bonificacao = g01.calculaBonificacaoGerente(NUMTOTALservicos);
    g01.print();

    return 0;
}
