#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.printDados();

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    cliente2.printDados();

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    cliente3.printDados();

    Cliente cliente4("Bruce Benner", "Dayton","22111967");
    cliente4.printDados();

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    cliente5.printDados();

    Gerente g01("Nick Fury", 72, 21121948, 10000);

    Especialista e01("Peter Parker", 46, 27061975, 3000, "Fotografia", &g01);

    Especialista e02("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos", &g01);

    Especialista e03("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designeeeeer", &g01);



    Venda v01(&cliente1, &e01,"Fotos do Homem Aranha", 100);

    Venda v02(&cliente4, &e02, "Troca da tela do telefone", 100);

    Venda v03(&cliente2, &e01, "Fotos do novo planador", 150);

    Venda v04(&cliente1, &e02, "Recarga de cartucho", 10);

    Venda v05(&cliente4, &e03, "Reconstrucao de Predio", 10000);

    Venda v06(&cliente5, &e03, "Decoracao de Apartamento no Brooklyn", 3000);

    Venda v07(&cliente1, &e03, "Reforma do Clarim Diario", 5000);

    Venda v08(&cliente3, &e02,"Formatacao do PC", 80);


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



    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.getDados();
    cout << "Num Atendimentos: " << e01.numAtendimentos << endl;
    cout << "Salario Total: " << e01.getSalarioTotal() << endl;

    e02.getDados();
    cout << "Num Atendimentos: " << e02.numAtendimentos << endl;
    cout << "Salario Total: " << e02.getSalarioTotal()<<endl;

    e03.getDados();
    cout << "Num Atendimentos: " << e03.numAtendimentos << endl;
    cout << "Salario Total: " << e03.getSalarioTotal()<<endl;

    g01.getDados();
    cout << "Salario Total: " << g01.getSalarioTotal()<<endl;

    return 0;
}
