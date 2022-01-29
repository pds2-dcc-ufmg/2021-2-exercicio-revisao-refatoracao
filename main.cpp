#include <iostream>

#include "Cliente.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    Cliente cliente1("J. Jonah Jameson","Nova York","35690000");
    cliente1.print();

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3("Otto Octavius", "Schenectady",  "24051953");
    cliente3.print();

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    cliente4.print();

    Cliente cliente5( "Steve Rogers", "Lower East Side", "13061981");
    cliente5.print();




    Especialista e01(3000.0, "46", "Peter Parker", 27061975, "Fotografia");


    Especialista e02(1000.0, "56", "Tony Stark", 4041965, "Consertos de equipamentos eletronicos");


    Especialista e03(5000.0,"32", "Wanda Maximoff", 16021989, "Engenharia e Designeeeeer");



    Gerente g01(10000.0, "72", "Nick Fury", 21121948);



    Venda v01(100.0, "Fotos do Homem Aranha", e01, "J. Jonah Jameson");
    e01.comissao_inc(v01.VALOR);


    Venda v02(100.0, "Troca da tela do telefone", e02, "Bruce Benner");
    e02.comissao_inc(v02.VALOR);


    Venda v03(150.0, "Fotos do novo planador", e01, "Norman Osborn");
    e01.comissao_inc(v03.VALOR);


    Venda v04(10.0, "Recarga de cartucho", e02, "J. Jonah Jameson");
    e02.comissao_inc(v04.VALOR);


    Venda v05(10000.0, "Reconstrucao de Predio", e03,"Bruce Benner");
    e03.comissao_inc(v05.VALOR);


    Venda v06(3000.0,"Decoracao de Apartamento no Brooklyn", e03, "Steve Rogers");
    e03.comissao_inc(v06.VALOR);


    Venda v07(5000.0, "Reforma do Clarim Diario", e03, "J. Jonah Jameson");
    e03.comissao_inc(v07.VALOR);


    Venda v08(80.0, "Formatacao do PC", e02, "Otto Octavius");
    e02.comissao_inc(v08.VALOR);



    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v07.print();

    v08.print();





    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01.print();

    e02.print();

    e03.print();


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01.numAtendimentos + e02.numAtendimentos + e03.numAtendimentos;
    g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    std::cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<< std::endl;

    return 0;
}
