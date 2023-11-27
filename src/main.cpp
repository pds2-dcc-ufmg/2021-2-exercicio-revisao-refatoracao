#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>

int main()
{

    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");

    std::vector<Cliente> clientes;
    clientes.push_back(cliente1);
    clientes.push_back(cliente2);
    clientes.push_back(cliente3);
    clientes.push_back(cliente4);
    clientes.push_back(cliente5);

    for (auto cliente : clientes)
    {
        cliente.print();
    }

    Especialista e01("Fotografia", "Peter Parker", "46", 3000, 27061975);
    Especialista e02("Consertos de equipamentos eletronicos", "Tony Stark", "56", 1000, 4041965);
    Especialista e03("Engenharia e Designeeeeer", "Wanda Maximoff", "32", 5000, 16021989);

    std::vector<Especialista> especialistas;
    especialistas.push_back(e01);
    especialistas.push_back(e02);
    especialistas.push_back(e03);

    Gerente g01("Nick Fury", "72", 10000, 21121948);

    Venda v01(cliente1.getNome(), "Fotos do Homem Aranha", 100, &e01);
    e01.SomaComissao(v01.getValor());
    e01.SomaNumeroDeAtendimentos(1);

    Venda v02(cliente4.getNome(), "Troca da tela do telefone", 100, &e02);
    e02.SomaComissao(v02.getValor());
    e02.SomaNumeroDeAtendimentos(1);

    Venda v03(cliente2.getNome(), "Fotos do novo planador", 150, &e01);
    e01.SomaComissao(v03.getValor());
    e01.SomaNumeroDeAtendimentos(1);

    Venda v04(cliente1.getNome(), "Recarga de cartucho", 10, &e02);
    e02.SomaComissao(v04.getValor());
    e02.SomaNumeroDeAtendimentos(1);

    Venda v05(cliente4.getNome(), "Reconstrucao de Predio", 10000, &e03);
    e03.SomaComissao(v05.getValor());
    e03.SomaNumeroDeAtendimentos(1);

    Venda v06(cliente5.getNome(), "Decoracao de Apartamento no Brooklyn", 3000, &e03);
    e03.SomaComissao(v06.getValor());
    e03.SomaNumeroDeAtendimentos(1);

    Venda v07(cliente1.getNome(), "Reforma do Clarim Diario", 5000, &e03);
    e03.SomaComissao(v07.getValor());
    e03.SomaNumeroDeAtendimentos(1);

    Venda v08(cliente3.getNome(), "Formatacao do PC", 80, &e02);
    e02.SomaComissao(v08.getValor());
    e02.SomaNumeroDeAtendimentos(1);

    std::vector<Venda> vendas;

    vendas.push_back(v01);
    vendas.push_back(v02);
    vendas.push_back(v03);
    vendas.push_back(v04);
    vendas.push_back(v05);
    vendas.push_back(v06);
    vendas.push_back(v07);
    vendas.push_back(v08);

    std::cout << " \n \n           Relatorio das Vendas \n"
              << std::endl;

    for (auto venda : vendas)
    {
        venda.print();
    }

    std::cout << " \n \n           Relatorio dos Funcionarios \n"
              << std::endl;

    for (auto especialista : especialistas)
    {
        especialista.print();
    }


    std::cout << " \n \n           Relatorio do Gerente \n"
              << std::endl;
    int TotalServicos = e01.getNumeroDeAtendimentos() + e02.getNumeroDeAtendimentos() + e03.getNumeroDeAtendimentos();

    g01.calcula_bonificacao(TotalServicos);
    g01.print();

    return 0;
}
