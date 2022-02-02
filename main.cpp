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
    cliente1.setDados("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.print();

    Cliente cliente2;
    cliente2.setDados("Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3;
    cliente3.setDados("Otto Octavius", "Schenectady", "24051953")
    cliente3.print();

    Cliente cliente4;
    cliente4.setDados("Bruce Benner", "Dayton", "22111967");
    cliente4.print();

    Cliente cliente5;
    cliente5.setDados("Steve Rogers", "Lower East Side", "13061981");
    cliente5.print();
	
    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.setNome("Peter Parker");
    e01.setIdade(46);
    e01.setRg(27061975);
    e01.setSalarioBase(3000);
    e01.setEspecialidade("Fotografia");
	
    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.setNome("Tony Stark");
    e02.setIdade(56);
    e02.setRg(4041965);
    e02.setSalarioBase(1000);
    e02.setEspecialidade("Consertos de equipamentos eletronicos");

    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.setNome("Wanda Maximoff");
    e03.setIdade(32);
    e03.setRg(16021989);
    e03.setSalarioBase(5000);
    e03.setEspecialidade("Engenharia e Designeeeeer");

    Gerente g01;
    double bonificacao01 = 0;
    g01.setNome(Nick Fury");
    g01.setIdade(72);
    g01.setRg(21121948);
    g01.setSalarioBase(10000);

    Venda v01;
    v01.setDados(100, "Fotos do Homem Aranha", e01, cliente1);
    comissao01 += e01.setRendaExtra(v01.getValor());
    numAtendimentos01+=1;

    Venda v02;
    v02.setDados(100, "Troca da tela do telefone", e02, cliente4);
    comissao02 += e02.setRendaExtra(v02.getValor());
    numAtendimentos02+=1;


    Venda v03;
    v03.setDados(150, "Fotos do novo planador", e01, cliente2);
    comissao01 += e01.setRendaExtra(v03.getValor());
    numAtendimentos01+=1;


    Venda v04;
    v04.setDados(10, "Recarga de cartucho", e02, cliente1);
    comissao02 += e02.setRendaExtra(v04.getValor());
    numAtendimentos02+=1;

    Venda v05;
    v05.setDados(10000, "Reconstrucao de Predio", e03, cliente4);
    comissao03 += e03.setRendaExtra(v05.getValor());
    numAtendimentos03+=1;

    Venda v06;
    v06.setDados(3000, "Decoracao de Apartamento no Brooklyn", e03, cliente5);
    comissao03 += e03..setRendaExtra(v06.getValor());
    numAtendimentos03+=1;

    Venda v07;
    v07.setDados(5000, "Reforma do Clarim Diario", e03, cliente1);
    comissao03 += e03..setRendaExtra(v07.getValor());
    numAtendimentos03+=1;

    Venda v08;
    v08.setDados(80, "Formatacao do PC", e02, cliente3);
    comissao02 += e02..setRendaExtra(v08.getValor());
    numAtendimentos02+=1;

    cout <<" \n \n Relatorio das Vendas \n" << endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v06.print();

    v07.print();

    v08.print();

    cout <<" \n \n Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.getSalarioBase()+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.getSalarioBase()+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.getSalarioBase()+comissao03<<endl;


    int numTotalServicos = 0;
    numTotalServicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.setRendaExtra(numTotalServicos);
    g01.print();
    cout << "Salario Total: " << g01.getSalarioBase() + g01.getRendaExtra()<<endl;

    return 0;
}
