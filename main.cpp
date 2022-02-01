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
    cliente1.SetNome("Jonah Jameson");
    cliente1.SetEndereco("Nova York");
	cliente1.SetCep("35690000");
    cliente1.Print();

    Cliente cliente2;
    cliente2.SetNome("Norman Osborn");
    cliente2.SetEndereco("Hartlford");
	cliente2.SetCep("22061955");
    cliente2.Print();

    Cliente cliente3;
    cliente3.SetNome("Otto Octavius");
    cliente3.SetEndereco("Schenectady");
	cliente3.SetCep("24051953");
    cliente3.Print();

    Cliente cliente4;
    cliente4.SetNome("Bruce Benner");
    cliente4.SetEndereco("Dayton");
	cliente4.SetCep("22111967");
    cliente4.Print();

    Cliente cliente5;
    cliente5.SetNome("Steve Rogers");
    cliente5.SetEndereco("Lower East Side");
	cliente5.SetCep("13061981");
    cliente5.Print();




    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.SetNome("Peter Parker");
    e01.SetIdade(46);
    e01.SetRgFuncionario(27061975);
    e01.SetSalarioBase(3000);
    e01.SetEspecialidade("Fotografia");



    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.SetNome("Tony Stark");
    e02.SetIdade(56);
    e02.SetRgFuncionario(4041965);
    e02.SetSalarioBase(1000);
    e02.SetEspecialidade("Consertos de equipamentos eletronicos");


    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.SetNome("Wanda Maximoff");
    e03.SetIdade(32);
    e03.SetRgFuncionario(16021989);
    e03.SetSalarioBase(5000);
    e03.SetEspecialidade("Engenharia e Designeeeeer");


    Gerente g01;
    double bonificacao01 = 0;
    g01.SetNome("Nick Fury");
    g01.SetIdade(72);
    g01.SetRgFuncionario(21121948);
    g01.SetSalarioBase(10000);


    Venda v01;
    v01.SetCliente("J. Jonah Jameson");
    v01.SetEspecialista(e01);
    v01.SetDescricao("Fotos do Homem Aranha");
    v01.SetValor(100);
    comissao01 += e01.comissao(v01.GetValor());
    numAtendimentos01+=1;


    Venda v02;
    v02.SetCliente("Bruce Benner");
    v02.SetEspecialista(e02);
    v02.SetDescricao("Troca da tela do telefone");
    v02.SetValor(100);
    comissao02 += e02.comissao(v02.GetValor());
    numAtendimentos02+=1;


    Venda v03;
    v03.SetCliente("Norman Osborn");
    v03.SetEspecialista(e01);
    v03.SetDescricao("Fotos do novo planador");
    v03.SetValor(150);
    comissao01 += e01.comissao(v03.GetValor());
    numAtendimentos01+=1;


    Venda v04;
    v04.SetCliente("J. Jonah Jameson");
    v04.SetEspecialista(e02);
    v04.SetDescricao("Recarga de cartucho");
    v04.SetValor(10);
    comissao02 += e02.comissao(v04.GetValor());
    numAtendimentos02+=1;


    Venda v05;
    v05.SetCliente("Bruce Benner");
    v05.SetEspecialista(e03);
    v05.SetDescricao("Reconstrucao de Predio");
    v05.SetValor(10000);
    comissao03 += e03.comissao(v05.GetValor());
    numAtendimentos03+=1;


    Venda v06;
    v06.SetCliente("Steve Rogers");
    v06.SetEspecialista(e03);
    v06.SetDescricao("Decoracao de Apartamento no Brooklyn");
    v06.SetValor(3000);
    comissao03 += e03.comissao(v06.GetValor());
    numAtendimentos03+=1;



    Venda v07;
    v07.SetCliente("J. Jonah Jameson");
    v07.SetEspecialista(e03);
    v07.SetDescricao("Reforma do Clarim Diario");
    v07.SetValor(5000);
    comissao03 += e03.comissao(v07.GetValor());
    numAtendimentos03+=1;


    Venda v08;
    v08.SetCliente("Otto Octavius");
    v08.SetEspecialista(e02);
    v08.SetDescricao("Formatacao do PC");
    v08.SetValor(80);
    comissao02 += e02.comissao(v08.GetValor());
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.Print();
    v02.Print();
    v03.Print();
    v04.Print();
    v05.Print();
    v06.Print();
    v06.Print();
    v07.Print();
    v08.Print();


    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.Print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.GetSalarioBase()+comissao01<<endl;

    e02.Print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.GetSalarioBase()+comissao02<<endl;

    e03.Print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.GetSalarioBase()+comissao03<<endl;


    int NumTotalServicos = 0;
    NumTotalServicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.CalculaBonificacaoGerente(NumTotalServicos);
    g01.Print();
    cout << "Salario Total: " << g01.GetSalarioBase() + g01.GetBonificacao()<<endl;

    return 0;
}