#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{

    /* Definição dos clientes existentes */

    Cliente::Cliente cliente1 = {"J. Jonah Jameson", "Nova York", "35690000"};
    cliente1.imprimeDados();

    Cliente::Cliente cliente2 = {"Norman Osborn", "Hartlford", "22061955"};
    cliente2.imprimeDados();

    Cliente::Cliente cliente3 = {"Otto Octavius", "Schenectady", "24051953"};
    cliente3.imprimeDados();

    Cliente::Cliente cliente4 = {"Bruce Benner", "Dayton", "22111967"};
    cliente4.imprimeDados();

    Cliente::Cliente cliente5 = {"Steve Rogers", "Lower East Side", "13061981"};
    cliente5.imprimeDados();



    /* Definição dos funcionários existentes */

    Funcionario::Especialista e01 = {3000, "46", "Peter Parker", 27061975, "Fotografia"};

    Funcionario::Especialista e02 = {1000, "56", "Tony Stark", 4041965, "Consertos de equipamentos eletronicos"};

    Funcionario::Especialista e03 = {5000, "32", "Wanda Maximoff", 16021989, "Engenharia e Designeeeeer"};

    Funcionario::Gerente g01 = {10000, "72", "Nick Fury", 21121948};



    /* Realização das vendas */

    Venda::Venda v01 = {100, "Fotos do Homem Aranha", &e01, &cliente4};
    v01.efetuaVenda();

    Venda::Venda v02 = {100, "Troca da tela do telefone", &e02, &cliente1};
    v02.efetuaVenda();

    Venda::Venda v03 = {150, "Fotos do novo planador", &e01, &cliente2};
    v03.efetuaVenda();

    Venda::Venda v04 = {10, "Recarga de cartucho", &e02, &cliente1};
    v04.efetuaVenda();

    Venda::Venda v05 = {10000, "Reconstrucao de Predio", &e03, &cliente4};
    v05.efetuaVenda();

    Venda::Venda v06 = {3000, "Decoracao de Apartamento no Brooklyn", &e03, &cliente5};
    v06.efetuaVenda();

    Venda::Venda v07 = {5000, "Reforma do Clarim Diario", &e03, &cliente1};
    v07.efetuaVenda();

    Venda::Venda v08 = {80, "Formatacao do PC", &e02, &cliente3};
    v08.efetuaVenda();


    /* Impressão do relatório de vendas */

    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.imprimeDados();
    
    v02.imprimeDados();

    v03.imprimeDados();

    v04.imprimeDados();

    v05.imprimeDados();

    v06.imprimeDados();

    v06.imprimeDados();

    v07.imprimeDados();

    v08.imprimeDados();



    /* Impressão do relatório de desempenho dos funcionários*/

    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01.imprimeDados();
    std::cout << "Num Atendimentos: " << e01.getNumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e01.salarioTotal() <<std::endl;

    e02.imprimeDados();
    std::cout << "Num Atendimentos: " << e02.getNumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e02.salarioTotal() << std::endl;

    e03.imprimeDados();
    std::cout << "Num Atendimentos: " << e03.getNumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e03.salarioTotal() << std::endl;

    g01.imprimeDados();
    std::cout << "Salario Total: " << g01.salarioTotal() << std::endl;

    return 0;
}