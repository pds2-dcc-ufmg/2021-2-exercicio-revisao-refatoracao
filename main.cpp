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
    cliente1.endereco ="Nova York";
	cliente1.Cep = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2.nome = "Norman Osborn";
    cliente2.endereco ="Hartlford";
	cliente2.Cep = "22061955";
    cliente2.print();

    Cliente cliente3;
    cliente3.nome = "Otto Octavius";
    cliente3.endereco ="Schenectady";
	cliente3.Cep = "24051953";
    cliente3.print();

    Cliente cliente4;
    cliente4.nome = "Bruce Benner";
    cliente4.endereco ="Dayton";
	cliente4.Cep = "22111967";
    cliente4.print();

    Cliente cliente5;
    cliente5.nome = "Steve Rogers";
    cliente5.endereco ="Lower East Side";
	cliente5.Cep = "13061981";
    cliente5.print();




    Especialista e01 ("Peter Parker", 46, 27061975, 3000, "Fotografia");
    Especialista e02 ("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialista e03 ("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designeeeeer");


    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.idade = 72;
    g01.registro = 21121948;
    g01.SalarioBase = 10000;


    Venda v01 (cliente1, e01, "Fotos do Homem Aranha", 100);
    Venda v02 (cliente4, e02, "Troca da tela do telefone", 100);
    Venda v03 (cliente2, e01, "Fotos do novo planador", 150);
    Venda v04 (cliente1, e02, "Recarga de cartucho", 10);
    Venda v05 (cliente4, e03, "Reconstrucao de Predio", 10000);
    Venda v06 (cliente5, e03, "Decoracao de Apartamento no Brooklyn", 3000);
    Venda v07 (cliente1, e03, "Reforma do Clarim Diario", 5000);
    Venda v08 (cliente3, e02, "Formatacao do PC", 80);


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
    cout << "Salario Total: " << e01.SalarioBase+e01.comissaoValor<<endl;

    e02.print();
    cout << "Num Atendimentos: " << e02.numAtendimentos << endl;
    cout << "Salario Total: " << e02.SalarioBase+e02.comissaoValor<<endl;

    e03.print();
    cout << "Num Atendimentos: " << e03.numAtendimentos << endl;
    cout << "Salario Total: " << e03.SalarioBase+e03.comissaoValor<<endl;


    int TotalServicos = 0;
    TotalServicos = e01.numAtendimentos +  e02.numAtendimentos + e03.numAtendimentos;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(TotalServicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
