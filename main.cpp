#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include "RelatorioVendas.hpp"
using namespace std;

int main()
{
    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");

    Especialista e01 ("Peter Parker", 46, 27061975, 3000, "Fotografia");
    Especialista e02 ("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialista e03 ("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designeeeeer");

    Gerente g01("Nick Fury", 72, 21121948, 10000);

    RelatorioVendas r01;

    Venda v01 (cliente1, e01, "Fotos do Homem Aranha", 100);
    r01.addVenda(v01);
    Venda v02 (cliente4, e02, "Troca da tela do telefone", 100);
    r01.addVenda(v02);
    Venda v03 (cliente2, e01, "Fotos do novo planador", 150);
    r01.addVenda(v03);
    Venda v04 (cliente1, e02, "Recarga de cartucho", 10);
    r01.addVenda(v04);
    Venda v05 (cliente4, e03, "Reconstrucao de Predio", 10000);
    r01.addVenda(v05);
    Venda v06 (cliente5, e03, "Decoracao de Apartamento no Brooklyn", 3000);
    r01.addVenda(v06);
    Venda v07 (cliente1, e03, "Reforma do Clarim Diario", 5000);
    r01.addVenda(v07);
    Venda v08 (cliente3, e02, "Formatacao do PC", 80);
    r01.addVenda(v08);



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    r01.imprimeVenda();

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    e02.print();
    e03.print();



    int TotalServicos = 0;
    TotalServicos = e01.numAtendimentos +  e02.numAtendimentos + e03.numAtendimentos;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(TotalServicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
