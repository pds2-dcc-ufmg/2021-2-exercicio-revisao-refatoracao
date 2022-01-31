#include <iostream>
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

/*
Programa que promove a inicializacao dos dados de 5 clientes, 3 especialistas e 1 gerente,
alem de simular 8 vendas e imprimir:
-uma lista com os dados dos clientes cadastrados
-um relatorio de vendas contendo o especialista encarregado, o cliente que
solicitou a venda e a descricao dessa venda
-um relatorio de funcionarios contendo seus dados, cargo, salario total e numero de atendimentos
realizados caso seja um especialista */

int main() {
    /*
    Clientes
    */
    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000"); //incializacao dos dados do cliente
    cliente1.print(); //impressao dos dados do cliente

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3("Otto Octavius","Schenectady","24051953");
    cliente3.print();

    Cliente cliente4("Bruce Benner","Dayton", "22111967");
    cliente4.print();

    Cliente cliente5("Steve Rogers","Lower East Side","13061981");
    cliente5.print();

    /*
    Especialistas
    */
    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia"); //inicializacao dos dados do especialista

    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");

    /*
    Gerente
    */
    Gerente g01("Nick Fury", "72", 21121948, 10000); //inicializacao dos dados do gerente

    /*
    Vendas
    */
    Venda v01(&cliente1, &e01, "Fotos do Homem Aranha", 100); //incializacao dos dados da venda
    e01.calcularComissao(v01.getValor()); //registra o valor da comissao que sera recebida pelo especialista responsavel por esse servico
    e01.novoAtendimento(); //soma 1 a quantidade de atendimentos que o especialista responsavel por esse servico fez

    Venda v02(&cliente4, &e02, "Troca da tela do telefone", 100);
    e02.calcularComissao(v02.getValor());
    e02.novoAtendimento();

    Venda v03(&cliente2, &e01, "Fotos do novo planador", 150);
    e01.calcularComissao(v03.getValor());
    e01.novoAtendimento();

    Venda v04(&cliente1, &e02, "Recarga de cartucho", 10);
    e02.calcularComissao(v04.getValor());
    e02.novoAtendimento();

    Venda v05(&cliente4, &e03, "Reconstrucao de Predio", 10000);
    e03.calcularComissao(v05.getValor());
    e03.novoAtendimento();

    Venda v06(&cliente5, &e03, "Decoracao de Apartamento no Brooklyn", 3000);
    e03.calcularComissao(v06.getValor());
    e03.novoAtendimento();

    Venda v07(&cliente1, &e03, "Reforma do Clarim Diario", 5000);
    e03.calcularComissao(v07.getValor());
    e03.novoAtendimento();

    Venda v08(&cliente3, &e02, "Formatacao do PC", 80);
    e02.calcularComissao(v08.getValor());
    e02.novoAtendimento();

    /*
    Impressao do relatorio de vendas
    */
    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v07.print();

    v08.print();

    /*
    Impressao do relatorio dos funcionarios
    */
    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;

    e01.print(); //impressao do relatorio do especialista 1

    e02.print(); //impressao do relatorio do especialista 2

    e03.print(); //impressao do relatorio do especialista 3

    int NumTotalAtendimentos = e01.getNumAtendimentos() + e02.getNumAtendimentos() + e03.getNumAtendimentos(); //calcula a quantidade total de vendas
    g01.calculaBonificacaoGerente(NumTotalAtendimentos);//calcula o valor de bonificacoes total a ser recebido pelo gerente
    g01.print(); //impressao do relatorio do gerente

    return 0;
}
