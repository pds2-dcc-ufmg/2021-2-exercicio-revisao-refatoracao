#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>

using namespace std;

int main()
{
    std::vector<Cliente> clientes;

    clientes.push_back(Cliente("J. Jonah Jameson","Nova York","35690000"));
    clientes.push_back(Cliente("Norman Osborn","Hartlford","22061955"));
    clientes.push_back(Cliente("Otto Octavius","Schenectady","24051953"));
    clientes.push_back(Cliente("Bruce Benner","Dayton","22111967"));
    clientes.push_back(Cliente("Steve Rogers","Lower East Side","13061981"));

    for (auto it : clientes){
        it.print();
    }

    Especialista e01  = Especialista(3000,"46","Peter Parker", 27061975, "Fotografia", 0, 0);

    Especialista e02 = Especialista(1000,"56","Tony Stark", 4041965, "Consertos de equipamentos eletronicos", 0, 0);

    Especialista e03 = Especialista(5000,"32","Wanda Maximoff", 16021989, "Engenharia e Designeeeeer", 0, 0);

    Gerente g01 (10000, "72", "Nick Fury", 21121948, 0);


    Venda v01 (e01, 100, "Fotos do Homem Aranha", clientes[0]);
    e01.efetuaVenda(v01._valor);


    Venda v02 (e02, 100, "Troca da tela do telefone", clientes[3]);
    e02.efetuaVenda(v02._valor);

    Venda v03(e01, 150, "Fotos do novo planador", clientes[1]);
    e01.efetuaVenda(v03._valor);


    Venda v04(e02, 10, "Recarga de cartucho", clientes[0]);
    e02.efetuaVenda(v04._valor);


    Venda v05(e03, 10000, "Reconstrucao de Predio", clientes[3]);
    e03.efetuaVenda(v05._valor);


    Venda v06(e03, 3000, "Decoracao de Apartamento no Brooklyn", clientes[4]);
    e03.efetuaVenda(v06._valor);

    Venda v07 (e03, 5000, "Reforma do Clarim Diario", clientes[0]);
    e03.efetuaVenda(v07._valor);


    Venda v08 (e02, 80, "Formatacao do PC", clientes[2]);
    e02.efetuaVenda(v08._valor);

    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v06.print();

    v07.print();

    v08.print();

    
    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    e02.print();
    e03.print();

    int numTotalServicos = 0;
    numTotalServicos = e01._numAtendimentos + e02._numAtendimentos + e03._numAtendimentos;
    g01._bonificacao = g01.calculaBonificacaoGerente(numTotalServicos);
    g01.print();

    return 0;
}
