#include <iostream>

#include "Venda.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"

using namespace std;

int main(){
    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.print();

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    cliente3.print();

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    cliente4.print();

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    cliente5.print();

    Especialista e01("Peter Parker", "46", 3000, 27061975, "Fotografia");
    Especialista e02("Tony Stark", "56", 1000, 4041965, "Consertos de equipamentos eletronicos");
    Especialista e03("Wanda Maximoff", "32", 5000, 16021989, "Engenharia e Designeeeeer");

    Gerente g01("Nick Fury", "72", 10000, 21121948);

    Venda v01(cliente1.nome, &e01, "Fotos do Homem Aranha", 100);
    Venda v02(cliente4.nome, &e02, "Troca da tela do telefone", 100);
    Venda v03(cliente2.nome, &e01, "Fotos do novo planador", 150);
    Venda v04(cliente1.nome, &e02, "Recarga de cartucho", 10);
    Venda v05(cliente4.nome, &e03, "Reconstrucao de Predio", 10000);
    Venda v06(cliente5.nome, &e03, "Decoracao de Apartamento no Brooklyn", 3000);
    Venda v07(cliente1.nome, &e03, "Reforma do Clarim Diario", 5000);
    Venda v08(cliente3.nome, &e02, "Formatacao do PC", 80);

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
    numTotalServicos = e01.numAtendimentos + e02.numAtendimentos + e03.numAtendimentos;
    g01.calculaBonificacaoGerente(numTotalServicos);
    g01.print();

    return 0;
}