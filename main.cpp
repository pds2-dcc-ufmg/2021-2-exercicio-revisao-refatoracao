#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
     Cliente cliente1;
     cliente1.nome = "J. Jonah Jameson";
     cliente1.endereco = "Nova York";
     cliente1.cep = "35690000";
     cliente1.print();

     Cliente cliente2;
     cliente2.nome = "Norman Osborn";
     cliente2.endereco = "Hartlford";
     cliente2.cep = "22061955";
     cliente2.print();

     Cliente cliente3;
     cliente3.nome = "Otto Octavius";
     cliente3.endereco = "Schenectady";
     cliente3.cep = "24051953";
     cliente3.print();

     Cliente cliente4;
     cliente4.nome = "Bruce Benner";
     cliente4.endereco = "Dayton";
     cliente4.cep = "22111967";
     cliente4.print();

     Cliente cliente5;
     cliente5.nome = "Steve Rogers";
     cliente5.endereco = "Lower East Side";
     cliente5.cep = "13061981";
     cliente5.print();

     Especialista e01;
     e01.nome = "Peter Parker";
     e01.idade = "46";
     e01.rgFunc = 27061975;
     e01.salarioBase = 3000;
     e01.especialidade = "Fotografia";
     e01.numAtendimentos = 0;
     e01.comissao = 0;

     Especialista e02;
     e02.nome = "Tony Stark";
     e02.idade = "56";
     e02.rgFunc = 4041965;
     e02.salarioBase = 1000;
     e02.especialidade = "Consertos de equipamentos eletronicos";
     e02.numAtendimentos = 0;
     e02.comissao = 0;

     Especialista e03;
     e03.nome = "Wanda Maximoff";
     e03.idade = "32";
     e03.rgFunc = 16021989;
     e03.salarioBase = 5000;
     e03.especialidade = "Engenharia e Designeeeeer";
     e03.numAtendimentos = 0;
     e03.comissao = 0;

     Gerente g01;
     g01.nome = "Nick Fury";
     g01.idade = "72";
     g01.rgFunc = 21121948;
     g01.salarioBase = 10000;

     Venda v01;
     v01.cliente = cliente1;
     v01.esp = e01;
     v01.descricao = "Fotos do Homem Aranha";
     v01.valor = 100;
     e01.comissao += e01.comissao(v01.valor);
     e01.numAtendimentos += 1;

     Venda v02;
     v02.cliente = cliente4;
     v02.esp = e02;
     v02.descricao = "Troca da tela do telefone";
     v02.valor = 100;
     e02.comissao += e02.comissao(v02.valor);
     e02.numAtendimentos += 1;

     Venda v03;
     v03.cliente = cliente2;
     v03.esp = e01;
     v03.descricao = "Fotos do novo planador";
     v03.valor = 150;
     e01.comissao += e01.comissao(v03.valor);
     e01.numAtendimentos += 1;

     Venda v04;
     v04.cliente = cliente1;
     v04.esp = e02;
     v04.descricao = "Recarga de cartucho";
     v04.valor = 10;
     e02.comissao += e02.comissao(v04.valor);
     e02.numAtendimentos += 1;

     Venda v05;
     v05.cliente = cliente4;
     v05.esp = e03;
     v05.descricao = "Reconstrucao de Predio";
     v05.valor = 10000;
     e03.comissao += e03.comissao(v05.valor);
     e03.numAtendimentos += 1;

     Venda v06;
     v06.cliente = cliente5;
     v06.esp = e03;
     v06.descricao = "Decoracao de Apartamento no Brooklyn";
     v06.valor = 3000;
     e03.comissao += e03.comissao(v06.valor);
     e03.numAtendimentos += 1;
     v06.descricao = "Decoracao de Apartamento no Brooklyn";
     v06.valor = 3000;

     Venda v07;
     v07.cliente = cliente1;
     v07.esp = e03;
     v07.descricao = "Reforma do Clarim Diario";
     v07.valor = 5000;
     e03.comissao += e03.comissao(v07.valor);
     e03.numAtendimentos += 1;

     Venda v08;
     v08.cliente = cliente3;
     v08.esp = e02;
     v08.descricao = "Formatacao do PC";
     v08.valor = 80;
     e02.comissao += e02.comissao(v08.valor);
     e02.numAtendimentos += 1;

     std::cout << "\n \n           Relatorio das Vendas \n"
               << std::endl;

     v01.print();
     std::cout << "Descricao: " << v01.descricao << std::endl;

     v02.print();
     std::cout << "Descricao: " << v02.descricao << std::endl;

     v03.print();
     std::cout << "Descricao: " << v03.descricao << std::endl;

     v04.print();
     std::cout << "Descricao: " << v04.descricao << std::endl;

     v05.print();
     std::cout << "Descricao: " << v05.descricao << std::endl;

     v06.print();
     std::cout << "Descricao: " << v06.descricao << std::endl;

     v06.print();
     std::cout << "Descricao: " << v06.descricao << std::endl;

     v07.print();
     std::cout << "Descricao: " << v07.descricao << std::endl;

     v08.print();
     std::cout << "Descricao: " << v08.descricao << std::endl;

     std::cout << "\n \n           Relatorio dos Funcionarios \n"
               << std::endl;
     e01.print();
     std::cout << "Num Atendimentos: " << e01.numAtendimentos << std::endl;
     std::cout << "Salario Total: " << e01.salarioBase + e01.comissao << std::endl;

     e02.print();
     std::cout << "Num Atendimentos: " << e02.numAtendimentos << std::endl;
     std::cout << "Salario Total: " << e02.salarioBase + e02.comissao << std::endl;

     e03.print();
     std::cout << "Num Atendimentos: " << e03.numAtendimentos << std::endl;
     std::cout << "Salario Total: " << e03.salarioBase + e03.comissao << std::endl;

     int numTotalServicos = e01.numAtendimentos + e02.numAtendimentos + e03.numAtendimentos;
     g01.bonificacao = g01.calculaBonificacaoGerente(numTotalServicos);
     g01.print();
     std::cout << "Salario Total: " << g01.salarioBase + g01.bonificacao << std::endl;

     return 0;
}
