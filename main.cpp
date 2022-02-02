#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1;
    cliente1.nome = "J. Jonah Jameson";
    cliente1.endereco = "Nova York";
    cliente1.CEP = "35690000";
    cliente1.imprimeInformacoes();

    Cliente cliente2;
    cliente2.nome = "Norman Osborn";
    cliente2.endereco = "Hartlford";
    cliente2.CEP = "22061955";
    cliente2.imprimeInformacoes();

    Cliente cliente3;
    cliente3.nome = "Otto Octavius";
    cliente3.endereco = "Schenectady";
    cliente3.CEP = "24051953";
    cliente3.imprimeInformacoes();

    Cliente cliente4;
    cliente4.nome = "Bruce Benner";
    cliente4.endereco = "Dayton";
    cliente4.CEP = "22111967";
    cliente4.imprimeInformacoes();

    Cliente cliente5;
    cliente5.nome = "Steve Rogers";
    cliente5.endereco = "Lower East Side";
    cliente5.CEP = "13061981";
    cliente5.imprimeInformacoes();

    Especialista e01 = {3000, 46, "Peter Parker", 27061975, "Fotografia"};

    Especialista e02 = {1000, 56, "Tony Stark", 4041965, "Consertos de equipamentos eletronicos"};

    Especialista e03 = {5000, 32, "Wanda Maximoff", 16021989, "Engenharia e Designeeeeer"};

    Gerente g01 = {10000, 72, "Nick Fury", 21121948};

    Venda v01 = {cliente1, e01, "Fotos do Homem Aranha", 100};
    Venda v02 = {cliente4, e02, "Troca da tela do telefone", 100};
    Venda v03 = {cliente2, e01, "Fotos do novo planador", 150};
    Venda v04 = {cliente1, e02, "Recarga de cartucho", 10};
    Venda v05 = {cliente4, e03, "Reconstrucao de Predio", 10000};
    Venda v06 = {cliente5, e03, "Decoracao de Apartamento no Brooklyn", 3000};
    Venda v07 = {cliente1, e03, "Reforma do Clarim Diario", 5000};
    Venda v08 = {cliente3, e02, "Formatacao do PC", 80};

    cout << "Relatorio das Vendas" << endl;

    v01.imprimeInformacoes();

    v02.imprimeInformacoes();

    v03.imprimeInformacoes();

    v04.imprimeInformacoes();

    v05.imprimeInformacoes();

    v06.imprimeInformacoes();

    v06.imprimeInformacoes();

    v07.imprimeInformacoes();

    v08.imprimeInformacoes();

    cout << "Relatorio dos Funcionarios " << endl;
    e01.imprimeInformacoes();

    e02.imprimeInformacoes();

    e03.imprimeInformacoes();

    int numTotalServicos = e01.numAtendimentos + e02.numAtendimentos + e03.numAtendimentos;

    g01.calculaBonificacao(numTotalServicos);
    g01.imprimeInformacoes();

    return 0;
}
