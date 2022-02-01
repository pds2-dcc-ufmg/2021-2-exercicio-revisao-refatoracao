#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

void imprimeRelatorioMensal(Especialista especialista, int numAtendimentos, double comissao)
{
    especialista.print();
    std::cout << "Num Atendimentos: " << numAtendimentos << std::endl;
    std::cout << "Salario Total: " << especialista.salarioBase + comissao << std::endl;
}

int main()
{
    Cliente cliente1 = Cliente("J. Jonah Jameson",
                               "Nova York",
                               35690000);
    cliente1.print();

    Cliente cliente2 = Cliente("Norman Osborn",
                               "Hartlford",
                               22061955);
    cliente2.print();

    Cliente cliente3 = Cliente("Otto Octavius",
                               "Schenectady",
                               24051953);
    ;
    cliente3.print();

    Cliente cliente4 = Cliente("Bruce Benner",
                               "Dayton",
                               22111967);
    cliente4.print();

    Cliente cliente5 = Cliente("Steve Rogers",
                               "Lower East Side",
                               13061981);
    cliente5.print();

    Especialista e01 = Especialista("Peter Parker",
                                    46,
                                    27061975,
                                    3000,
                                    "Fotografia");
    int numAtendimentos01 = 0;
    double comissao01 = 0;

    Especialista e02 = Especialista("Tony Stark",
                                    56,
                                    4041965,
                                    1000,
                                    "Consertos de equipamentos eletronicos");
    int numAtendimentos02 = 0;
    double comissao02 = 0;

    Especialista e03 = Especialista("Wanda Maximoff",
                                    32,
                                    16021989,
                                    5000,
                                    "Engenharia e Designeeeeer");
    int numAtendimentos03 = 0;
    double comissao03 = 0;

    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.idade = 72;
    g01.rg = 21121948;
    g01.salarioBase = 10000;

    Venda v01 = Venda(100,
                      "Fotos do Homem Aranha",
                      e01.nome,
                      "J. Jonah Jameson");

    comissao01 += e01.calculaComissao(v01.getValor());
    numAtendimentos01++;

    Venda v02 = Venda(100,
                      "Troca da tela do telefone",
                      e02.nome,
                      "Bruce Benner");
    comissao02 += e02.calculaComissao(v02.getValor());
    numAtendimentos02++;

    Venda v03 = Venda(150,
                      "Fotos do novo planador",
                      e01.nome,
                      "Norman Osborn");
    comissao01 += e01.calculaComissao(v03.getValor());
    numAtendimentos01++;

    Venda v04 = Venda(10,
                      "Recarga de cartucho",
                      e02.nome,
                      "J. Jonah Jameson");
    comissao02 += e02.calculaComissao(v04.getValor());
    numAtendimentos02++;

    Venda v05 = Venda(10000,
                      "Reconstrucao de Predio",
                      e03.nome,
                      "Bruce Benner");
    ;
    comissao03 += e03.calculaComissao(v05.getValor());
    numAtendimentos03++;

    Venda v06 = Venda(3000,
                      "Decoracao de Apartamento no Brooklyn",
                      e03.nome,
                      "Steve Rogers");
    comissao03 += e03.calculaComissao(v06.getValor());
    numAtendimentos03++;

    Venda v07 = Venda(5000,
                      "Reforma do Clarim Diario",
                      e03.nome,
                      "J. Jonah Jameson");
    comissao03 += e03.calculaComissao(v07.getValor());
    numAtendimentos03++;

    Venda v08 = Venda(80,
                      "Formatacao do PC",
                      e02.nome,
                      "Otto Octavius");
    comissao02 += e02.calculaComissao(v08.getValor());
    numAtendimentos02++;

    std::cout << " \n \n           Relatorio das Vendas \n\n";

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v06.print();

    v07.print();

    v08.print();

    std::cout << " \n \n           Relatorio dos Funcionarios \n\n";
    
    imprimeRelatorioMensal(e01, numAtendimentos01, comissao01);

    imprimeRelatorioMensal(e02, numAtendimentos02, comissao02);

    imprimeRelatorioMensal(e03, numAtendimentos03, comissao03);

    int numtTotalServicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.calculaSalarioTotal(numtTotalServicos);

    g01.print();

    return 0;
}
