#include <iostream>

#include "Pessoa.hpp"
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

using namespace std;

int main()
{
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
    

    Especialista* e01 = new Especialista("Peter Parker", "46", 27061975, 3000, "Fotografia");
    Especialista* e02 = new Especialista("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialista* e03 = new Especialista("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");

    Gerente g01("Nick Fury", "72", 21121948, 10000);


    Venda v01("J. Jonah Jameson", e01, "Fotos do Homem Aranha", 100);
    Venda v02("Bruce Benner", e02, "Troca da tela do telefone", 100);
    Venda v03("Norman Osborn", e01, "Fotos do novo planador", 150);
    Venda v04("J. Jonah Jameson", e02, "Recarga de cartucho", 10);
    Venda v05("Bruce Benner", e03, "Reconstrucao de Predio", 10000);
    Venda v06("Steve Rogers", e03, "Decoracao de Apartamento no Brooklyn", 3000);
    Venda v07("J. Jonah Jameson", e03, "Reforma do Clarim Diario", 5000);
    Venda v08("Otto Octavius", e02, "Formatacao do PC", 80);


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    v02.print();
    v03.print();
    v04.print();
    v05.print();
    v06.print();
    v07.print();
    v08.print();


    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;

    e01->print();
    e02->print();
    e03->print();

    g01.calculaBonificacaoGerente(v01.NumTotalServicos);
    g01.print();

    return 0;
}
