#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    //Construtres de "Clientes"

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


    //Constutores de "Especialistas"

    Especialista e01 = Especialista("Peter Parker", 46, 27061975, 3000, "Fotografia");
    int numAtendimentos01 = 0;
    double comissao01 = 0;

    Especialista e02 = Especialista("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos");
    int numAtendimentos02 = 0;
    double comissao02 = 0;

    Especialista e03 =Especialista("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designeeeeer");
    int numAtendimentos03 = 0;
    double comissao03 = 0;


    //Construtor de "gerente"

    Gerente g01 = Gerente("Nick Fury", 72, 21121948, 10000);
    double bonificacao01 = 0;


    //Construtores de vendas

    Venda v01 = Venda(100, "Fotos do Homem Aranha", &e01, &cliente1);
    numAtendimentos01+=1;

    Venda v02 = Venda(100, "Troca da tela do telefone", &e02, &cliente4);
    numAtendimentos02+=1;

    Venda v03 = Venda(150, "Fotos do novo planador", &e01, &cliente2);
    numAtendimentos01+=1;

    Venda v04 = Venda(10, "Recarga de cartucho", &e02, &cliente1);
    numAtendimentos02+=1;

    Venda v05 = Venda(1000, "Reconstrucao de Predio", &e03, &cliente4);
    numAtendimentos03+=1;

    Venda v06 = Venda(3000, "Decoracao de Apartamento no Brooklyn", &e03, &cliente5);
    numAtendimentos03+=1;

    Venda v07 = Venda(5000, "Reforma do Clarim Diario", &e03, &cliente1);
    numAtendimentos03+=1;

    Venda v08 = Venda(80, "Formatacao do PC", &e02, &cliente3);
    numAtendimentos02+=1;


    //Relatório das vendas

    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v06.print();

    v07.print();

    v08.print();


    //Relatório dos funcionários

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();

    e02.print();

    e03.print();


    //Calcula o número total de servicos prestados

    int NumTotalServicos = 0;

    NumTotalServicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;

    //Relatorio do gerente

    g01.setBonificacao (g01.calculaBonificacaoGerente (NumTotalServicos));
    g01.print();

    return 0;
}
