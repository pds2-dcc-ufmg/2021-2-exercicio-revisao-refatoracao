#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.imprimir();

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    cliente2.imprimir();

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    cliente3.imprimir();

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    cliente4.imprimir();

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    cliente5.imprimir();

    Especialista e01("Peter Parker", 46, 27061975, 3000, "Fotografia", 0.1);

    Especialista e02("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos", 0.1);

    Especialista e03("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designer", 0.1);

    Gerente g01("Nick Fury", 72, 21121948, 10000, 15);

    Venda v01(cliente1, 100, "Fotos do Homem Aranha", &e01);

    Venda v02(cliente4, 100, "Troca da tela do telefone", &e02);

    Venda v03(cliente2, 150, "Fotos do novo planador", &e01);

    Venda v04(cliente1, 10, "Recarga de cartucho", &e02);

    Venda v05(cliente4, 10000, "Reconstrucao de Predio", &e03);

    Venda v06(cliente5, 3000, "Decoracao de Apartamento no Brooklyn", &e03);

    Venda v07(cliente1, 5000, "Reforma do Clarim Diario", &e03);

    Venda v08(cliente3, 80, "Formatacao do PC", &e02);

    cout << " \n \n           Relatorio das Vendas \n"
         << endl;

    v01.imprimir();

    v02.imprimir();

    v03.imprimir();

    v04.imprimir();

    v05.imprimir();

    v06.imprimir();

    v06.imprimir();

    v07.imprimir();

    v08.imprimir();

    cout << " \n \n           Relatorio dos Funcionarios \n"
         << endl;
    e01.imprimir();

    e02.imprimir();

    e03.imprimir();

    g01.calcularBonificacao(e01.getNumAtendimentos() + e02.getNumAtendimentos() + e03.getNumAtendimentos());
    g01.imprimir();

    return 0;
}
