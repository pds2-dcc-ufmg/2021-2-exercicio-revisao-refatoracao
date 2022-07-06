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
    cliente1.imprimeDados();

    Cliente cliente2 = Cliente("Norman Osborn", "Hartlford", "22061955");
    cliente2.imprimeDados();

    Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", "24051953");
    cliente3.imprimeDados();

    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
    cliente4.imprimeDados();

    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");
    cliente5.imprimeDados();

    Especialista e01 = Especialista("Peter Parker", "46", 27061975, 3000, "Fotografia");

    Especialista e02 = Especialista("Tony Starkr", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");

    Especialista e03 = Especialista("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");

    Gerente g01 = Gerente("Nick Fury", "72", 21121948, 10000);

    Venda v01 = Venda(100, "Fotos do Homem Aranha", e01, "J. Jonah Jameson");
    e01.atualizaComissao(v01.valor);
    e01.atualizaAtendimentos();

    Venda v02 = Venda(100, "Troca da tela do telefone", e02, "Bruce Benner");;
    e02.atualizaComissao(v02.valor);
    e02.atualizaAtendimentos();

    Venda v03 = Venda(150, "Fotos do novo planador", e01, "Norman Osborn");;
    e01.atualizaComissao(v03.valor);
    e01.atualizaAtendimentos();

    Venda v04 = Venda(10, "Recarga de cartucho", e02, "J. Jonah Jameson");;
    e02.atualizaComissao(v04.valor);
    e02.atualizaAtendimentos();

    Venda v05 = Venda(10000, "Reconstrucao de Predio", e03, "Bruce Benner");;
    e03.atualizaComissao(v05.valor);
    e03.atualizaAtendimentos();

    Venda v06 = Venda(3000, "Decoracao de Apartamento no Brooklyn", e03, "Steve Rogers");;
    e03.atualizaComissao(v06.valor);
    e03.atualizaAtendimentos();

    Venda v07 = Venda(5000, "Reforma do Clarim Diario", e03, "J. Jonah Jameson");;
    e03.atualizaComissao(v07.valor);
    e03.atualizaAtendimentos();

    Venda v08 = Venda(80, "Formatacao do PC", e02, "Otto Octavius");;
    e02.atualizaComissao(v08.valor);
    e02.atualizaAtendimentos();

    cout <<" \n \n           Relatorio das Vendas \n" << endl;
    v01.imprimeVenda();
    v02.imprimeVenda();
    v03.imprimeVenda();
    v04.imprimeVenda();
    v05.imprimeVenda();
    v06.imprimeVenda();
    v07.imprimeVenda();
    v08.imprimeVenda();

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.imprimeDados();
    e02.imprimeDados();
    e03.imprimeDados();

    int totalServicos = 0;
    totalServicos = e01.numAtendimentos + e02.numAtendimentos + e03.numAtendimentos;
    g01.calculaBonificacao(totalServicos);
    g01.imprimeDados();

    return 0;
}
