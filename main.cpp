#include <iostream>

#include "Cliente.hpp"
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

    Especialista e01(3000, 46, "Peter Parker", 27061975, "Fotografia");
    Especialista e02(1000, 56, "Tony Stark", 4041965, "Consertos de equipamentos eletronicos");
    Especialista e03(5000, 32, "Wanda Maximoff", 16021989, "Engenharia e Designeeeeer");

    Gerente g01(10000, 72, "Nick Fury", 21121948);

    Venda v01(100, "Fotos do Homem Aranha", e01, cliente1);
    Venda v02(100, "Trooca da Tela do Telefone", e02, cliente4);
    Venda v03(150, "Fotos do novo planador", e01, cliente2);
    Venda v04(10, "Recarga de cartucho", e02, cliente1);
    Venda v05(10000, "Reconstrucao de Predio", e03, cliente4);
    Venda v06(3000, "Decoracao de Apartamento no Brooklyn", e03, cliente5);
    Venda v07(5000, "Reforma do Clarim Diario", e03, cliente1);
    Venda v08(80, "Formatacao do PC", e02, cliente3);

    g01.addVendas(e01.getNumeroAntendimento() + e02.getNumeroAntendimento() + e03.getNumeroAntendimento());

    cout << "  Relatorio das Vendas" << endl;
    v01.print();
    v02.print();
    v03.print();
    v04.print();
    v05.print();
    v06.print();
    v07.print();
    v08.print();

    cout << "  Relatorio dos Funcionarios" << endl;
    e01.print();
    e02.print();
    e03.print();
    g01.print();
}