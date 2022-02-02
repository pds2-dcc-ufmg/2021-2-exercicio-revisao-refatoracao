#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

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




    Especialista e01("Peter Parker", 46, 27061975, 3000, "Fotografia");


    Especialista e02("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos");


    Especialista e03("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designer");


    Gerente g01("Nick Fury", 72, 21121948, 10000);


    Venda v01(100, "Fotos do Homem Aranha", e01, cliente1);


    Venda v02(100, "Troca da tela do telefone", e02, cliente4);


    Venda v03(150, "Fotos do novo planador", e01, cliente2);


    Venda v04(10, "Recarga de cartucho", e02, cliente1);


    Venda v05(10000, "Reconstrucao de Predio", e03, cliente4);


    Venda v06(3000, "Decoracao de Apartamento no Brooklyn", e03, cliente5);


    Venda v07(5000, "Reforma do Clarim Diario", e03, cliente1);


    Venda v08(80, "Formatacao do PC", e02, cliente3);



    std::cout << "Relatorio das Vendas" << std::endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v06.print();

    v07.print();

    v08.print();






    std::cout <<"Relatorio dos Funcionarios" << std::endl;
    e01.print();

    e02.print();

    e03.print();


    g01.calcula_bonificacao(8);
    g01.print();

    return 0;
}
