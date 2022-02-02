#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1 ("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.print();

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    cliente3.print();

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    cliente4.print();


    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    cliente5.print();

    
    Especialista e01(3000, "46", "Peter Parker", 27061975, "Fotografia", 0, 0);


    Especialista e02(1000, "56", "Tony Stark", 4041965, "Consertos de equipamentos eletronicos", 0, 0);


    Especialista e03(5000, "32", "Wanda Maximoff", 16021989, "Engenharia e Designer", 0, 0);


    Gerente g01(10000, "72", "Nick Fury", 21121948, 0);


    Venda v01(100, "Fotos do Homem Aranha", e01, "J. Jonah Jameson");


    Venda v02(100, "Troca da tela do telefone", e02, "Bruce Banner");


    Venda v03(150, "Fotos do novo planador", e01, "Norman Osborn");


    Venda v04(10, "Recarga de cartucho", e02, "J. Jonah Jameson");


    Venda v05(10000, "Reconstrucao de Predio", e03, "Bruce Banner");


    Venda v06(3000, "Decoracao de Apartamento no Brooklyn", e03, "Steve Rogers");


    Venda v07(5000, "Reforma do Clarim Diario", e03, "J. Jonah Jameson");


    Venda v08(80, "Formatacao do PC", e02, "Otto Octavius");


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

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


    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << e01.numAtendimentos << endl;
    cout << "Salario Total: " << e01.SalarioBase+e01.comissao<<endl;

    e02.print();
    cout << "Num Atendimentos: " << e02.numAtendimentos << endl;
    cout << "Salario Total: " << e02.SalarioBase+e02.comissao<<endl;

    e03.print();
    cout << "Num Atendimentos: " << e03.numAtendimentos << endl;
    cout << "Salario Total: " << e03.SalarioBase+e03.comissao<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01.numAtendimentos + e02.numAtendimentos + e03.numAtendimentos;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
