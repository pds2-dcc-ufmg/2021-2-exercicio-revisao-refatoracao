#include <iostream>

#include "Cliente.hpp"
#include "Cliente.cpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
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

    Especialista e01("Peter Parker", "46", 27061975, 3000);
    int numAtendimentos01 = 0;
    double comissao01 = 0;

    Especialista e02("Tony Stark", "56", 4041965, 1000);
    int numAtendimentos02 = 0;
    double comissao02 = 0;

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000);
    int numAtendimentos03 = 0;
    double comissao03 = 0;

    Gerente g01("Nick Fury", "72", 21121948, 10000);

    Venda v01("J. Jonah Jameson", e01, "Fotos do Homem Aranha", 100);
    comissao01 += e01.comissao(v01.VALOR);
    numAtendimentos01 += 1;

    Venda v02("Bruce Benner", e02, "Troca da tela do telefone", 100);
    comissao02 += e02.comissao(v02.VALOR);
    numAtendimentos02 += 1;

    Venda v03("Norman Osborn", e01, "Fotos do novo planador", 150);
    comissao01 += e01.comissao(v03.VALOR);
    numAtendimentos01 += 1;

    Venda v04("J. Jonah Jameson", e02, "Recarga de cartucho", 10);
    comissao02 += e02.comissao(v04.VALOR);
    numAtendimentos02 += 1;

    Venda v05("Bruce Benner", e03, "Reconstrucao de Predio", 10000);
    comissao03 += e03.comissao(v05.VALOR);
    numAtendimentos03 += 1;

    Venda v06("Steve Rogers", e03, "Decoracao de Apartamento no Brooklyn", 3000);
    comissao03 += e03.comissao(v06.VALOR);
    numAtendimentos03 += 1;

    Venda v07("J. Jonah Jameson", e03, "Reforma do Clarim Diario", 5000);
    comissao03 += e03.comissao(v07.VALOR);
    numAtendimentos03 += 1;

    Venda v08("Otto Octavius", e02, "Formatacao do PC", 80);
    comissao02 += e02.comissao(v08.VALOR);
    numAtendimentos02 += 1;

    cout << " \n \n           Relatorio das Vendas \n"
         << endl;

    v01.print();
    cout << " Descricao: " << v01.descricao << endl;

    v02.print();
    cout << " Descricao: " << v02.descricao << endl;

    v03.print();
    cout << " Descricao: " << v03.descricao << endl;

    v04.print();
    cout << " Descricao: " << v04.descricao << endl;

    v05.print();
    cout << " Descricao: " << v05.descricao << endl;

    v06.print();
    cout << " Descricao: " << v06.descricao << endl;

    v06.print();
    cout << " Descricao: " << v06.descricao << endl;

    v07.print();
    cout << " Descricao: " << v07.descricao << endl;

    v08.print();
    cout << " Descricao: " << v08.descricao << endl;

    cout << " \n \n           Relatorio dos Funcionarios \n"
         << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.salarioBase + comissao01 << endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.salarioBase + comissao02 << endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.salarioBase + comissao03 << endl;

    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.salarioBase + g01.bonificacao << endl;

    return 0;
}
