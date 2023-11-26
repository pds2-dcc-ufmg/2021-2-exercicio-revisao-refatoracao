#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int Venda::numVendas = 0;

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

    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");
    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");

    Gerente g01("Nick Fury", "72", 21121948, 10000);

    Venda v01(100, "Fotos do Homem Aranha", &e01, "J. Jonah Jameson");
    Venda v02(100, "Troca da tela do telefone", &e02, "Bruce Benner");
    Venda v03(150, "Fotos do novo planador", &e01, "Norman Osborn");
    Venda v04(10, "Recarga de cartucho", &e02, "J. Jonah Jameson");
    Venda v05(10000, "Reconstrucao de Predio", &e03, "Bruce Benner");
    Venda v06(3000, "Decoracao de Apartamento no Brooklyn", &e03, "Steve Rogers");
    Venda v07(5000, "Reforma do Clarim Diario", &e03, "J. Jonah Jameson");
    Venda v08(80, "Formatacao do PC", &e02, "Otto Octavius");


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.GetDescricao() << endl;

    v02.print();
    cout << " Descricao: " << v02.GetDescricao() << endl;

    v03.print();
    cout << " Descricao: " << v03.GetDescricao() << endl;

    v04.print();
    cout << " Descricao: " << v04.GetDescricao() << endl;

    v05.print();
    cout << " Descricao: " << v05.GetDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.GetDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.GetDescricao() << endl;

    v07.print();
    cout << " Descricao: " << v07.GetDescricao() << endl;

    v08.print();
    cout << " Descricao: " << v08.GetDescricao() << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << e01.GetNumAtendimentos() << endl;
    cout << "Salario Total: " << e01.GetSalarioTotal() << endl;

    e02.print();
    cout << "Num Atendimentos: " << e02.GetNumAtendimentos() << endl;
    cout << "Salario Total: " << e02.GetSalarioTotal() << endl;

    e03.print();
    cout << "Num Atendimentos: " << e03.GetNumAtendimentos() << endl;
    cout << "Salario Total: " << e03.GetSalarioTotal() << endl;


    int NUMTOTALservicos = v01.GetNumVendas();
    g01.CalculaBonificacao(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.GetSalarioTotal() <<endl;

    return 0;
}