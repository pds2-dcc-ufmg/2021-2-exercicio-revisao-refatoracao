#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
     Cliente cliente1 = Cliente("J. Jonah Jameson", "Nova York", "35690000");
     cliente1.print();
     Cliente cliente2 = Cliente("Norman Osborn", "Hartlford", "22061955");
     cliente2.print();
     Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", "24051953");
     cliente3.print();
     Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
     cliente4.print();
     Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");
     cliente5.print();

     Especialista e01 = Especialista("Peter Parker", "46", 27061975, 3000, "Fotografia");
     Especialista e02 = Especialista("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
     Especialista e03 = Especialista("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");

     Gerente g01 = Gerente("Nick Fury", "72", 21121948, 10000);

     Venda v01 = Venda(cliente1, e01, "Fotos do Homem Aranha", 100);
     e01.comissao += e01.calcularComissao(v01.valor);
     e01.numAtendimentos += 1;

     Venda v02 = Venda(cliente4, e02, "Troca da tela do telefone", 100);
     e02.comissao += e02.calcularComissao(v02.valor);
     e02.numAtendimentos += 1;

     Venda v03 = Venda(cliente2, e01, "Fotos do novo planador", 150);
     e01.comissao += e01.calcularComissao(v03.valor);
     e01.numAtendimentos += 1;

     Venda v04 = Venda(cliente1, e02, "Recarga de cartucho", 10);
     e02.comissao += e02.calcularComissao(v04.valor);
     e02.numAtendimentos += 1;

     Venda v05 = Venda(cliente4, e03, "Reconstrucao de Predio", 10000);
     e03.comissao += e03.calcularComissao(v05.valor);
     e03.numAtendimentos += 1;

     Venda v06 = Venda(cliente5, e03, "Decoracao de Apartamento no Brooklyn", 3000);
     e03.comissao += e03.calcularComissao(v06.valor);
     e03.numAtendimentos += 1;

     Venda v07 = Venda(cliente1, e03, "Reforma do Clarim Diario", 5000);
     e03.comissao += e03.calcularComissao(v07.valor);
     e03.numAtendimentos += 1;

     Venda v08 = Venda(cliente3, e02, "Formatacao do PC", 80);
     e02.comissao += e02.calcularComissao(v08.valor);
     e02.numAtendimentos += 1;

     std::cout << "\n \n           Relatorio das Vendas \n"
               << std::endl;
     v01.print();
     v02.print();
     v03.print();
     v04.print();
     v05.print();
     v06.print();
     v06.print();
     v07.print();
     v08.print();

     std::cout << "\n \n           Relatorio dos Funcionarios \n"
               << std::endl;
     e01.print();
     e02.print();
     e03.print();

     int numTotalServicos = e01.numAtendimentos + e02.numAtendimentos + e03.numAtendimentos;
     g01.bonificacao = g01.calculaBonificacaoGerente(numTotalServicos);
     g01.print();

     return 0;
}
