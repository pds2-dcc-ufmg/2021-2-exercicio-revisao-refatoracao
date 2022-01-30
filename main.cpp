#include <iostream>

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"

int main() {
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

    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");

    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");

    Especialista e03("Wanda Maximoff", "32", 6021989, 5000, "Engenharia e Designeeeeer");

    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.IDADE = "72";
    g01.rgFunc = 21121948;
    g01.SalarioBase = 10000;

    Venda v01("J. Jonah Jameson", e01, "Fotos do Homem Aranha", 100);
    v01._esp.comissao(v01._VALOR);
    e01._numAtendimentos += 1;

    Venda v02("Bruce Benner", e02, "Troca da tela do telefone", 100);
    v02._esp.comissao(v02._VALOR);
    e02._numAtendimentos += 1;

    Venda v03("Norman Osborn", e01, "Fotos do novo planador", 150);
    v03._esp.comissao(v03._VALOR);
    e01._numAtendimentos += 1;

    Venda v04("J. Jonah Jameson", e02, "Recarga de cartucho", 10);
    v04._esp.comissao(v04._VALOR);
    e02._numAtendimentos += 1;

    Venda v05("Bruce Benner", e03, "Reconstrucao de Predio", 10000);
    e03.comissao(v05._VALOR);
    e03._numAtendimentos += 1;

    Venda v06("Steve Rogers", e03, "Decoracao de Apartamento no Brooklyn", 3000);
    v06._esp.comissao(v06._VALOR);
    e03._numAtendimentos += 1;

    Venda v07("J. Jonah Jameson", e03, "Reforma do Clarim Diario", 5000);
    v07._esp.comissao(v07._VALOR);
    e03._numAtendimentos += 1;

    Venda v08("Otto Octavius", e02, "Formatacao do PC", 80);
    v08._esp.comissao(v08._VALOR);
    e02._numAtendimentos += 1;

    std::cout << " \n \n           Relatorio das Vendas \n"
              << std::endl;

    v01.print();
    std::cout << " Descricao: " << v01._descricao << std::endl;

    v02.print();
    std::cout << " Descricao: " << v02._descricao << std::endl;

    v03.print();
    std::cout << " Descricao: " << v03._descricao << std::endl;

    v04.print();
    std::cout << " Descricao: " << v04._descricao << std::endl;

    v05.print();
    std::cout << " Descricao: " << v05._descricao << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06._descricao << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06._descricao << std::endl;

    v07.print();
    std::cout << " Descricao: " << v07._descricao << std::endl;

    v08.print();
    std::cout << " Descricao: " << v08._descricao << std::endl;

    std::cout << " \n \n           Relatorio dos Funcionarios \n"
              << std::endl;
    e01.print();
    std::cout << "Num Atendimentos: " << e01._numAtendimentos << std::endl;
    std::cout << "Salario Total: " << e01._SalarioBase + e01.get_commissao() << std::endl;

    e02.print();
    std::cout << "Num Atendimentos: " << e02._numAtendimentos << std::endl;
    std::cout << "Salario Total: " << e02._SalarioBase + e02.get_commissao() << std::endl;

    e03.print();
    std::cout << "Num Atendimentos: " << e03._numAtendimentos << std::endl;
    std::cout << "Salario Total: " << e03._SalarioBase + e03.get_commissao() << std::endl;

    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01._numAtendimentos + e02._numAtendimentos + e03._numAtendimentos;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    std::cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao << std::endl;

    return 0;
}
