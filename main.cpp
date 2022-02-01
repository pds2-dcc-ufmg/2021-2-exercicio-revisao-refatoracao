#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    string nome, endereco, cep, idade, especialidade, cliente, descricao;
    double salarioBase;
    int rgFunc, valor;
    Especialista *esp = new Especialista(0);

    nome = "J. Jonah Jameson";
    endereco ="Nova York";
	  cep = "35690000";
    Cliente cliente1(nome, endereco, cep);
    cliente1.print();

    nome = "Norman Osborn";
    endereco ="Hartlford";
	  cep = "22061955";
    Cliente cliente2(nome, endereco, cep);;
    cliente2.print();

    nome = "Otto Octavius";
    endereco ="Schenectady";
  	cep = "24051953";
    Cliente cliente3(nome, endereco, cep);
    cliente3.print();

    nome = "Bruce Benner";
    endereco ="Dayton";
	  cep = "22111967";
    Cliente cliente4(nome, endereco, cep);
    cliente4.print();

    nome = "Steve Rogers";
    endereco ="Lower East Side";
	  cep = "13061981";
    Cliente cliente5(nome, endereco, cep);
    cliente5.print();


    int numAtendimentos01 = 0;
    double comissao01 = 0;
    nome = "Peter Parker";
    idade = "46";
    rgFunc = 27061975;
    salarioBase = 3000;
    especialidade = "Fotografia";
    Especialista e01(nome, idade, rgFunc, salarioBase, especialidade);



    int numAtendimentos02 = 0;
    double comissao02 = 0;
    nome = "Tony Stark";
    idade = "56";
    rgFunc = 4041965;
    salarioBase = 1000;
    especialidade = "Consertos de equipamentos eletronicos";
    Especialista e02(nome, idade, rgFunc, salarioBase, especialidade);


    int numAtendimentos03 = 0;
    double comissao03 = 0;
    nome = "Wanda Maximoff";
    idade = "32";
    rgFunc = 16021989;
    salarioBase = 5000;
    especialidade = "Engenharia e Designeeeeer";
    Especialista e03(nome, idade, rgFunc, salarioBase, especialidade);


    double bonificacao01 = 0;
    nome = "Nick Fury";
    idade = "72";
    rgFunc = 21121948;
    salarioBase = 10000;
    Gerente g01(nome, idade, rgFunc, salarioBase);


    cliente= "J. Jonah Jameson";
    descricao = "Fotos do Homem Aranha";
    valor = 100;
    esp = &e01;
    Venda v01(cliente, descricao, valor, *esp);    
    comissao01 += e01.comissao(v01.getValor());
    numAtendimentos01+=1;

    cliente= "Bruce Benner";
    esp = &e02;
    descricao = "Troca da tela do telefone";
    valor = 100;
    Venda v02(cliente, descricao, valor, *esp);
    comissao02 += e02.comissao(v02.getValor());
    numAtendimentos02+=1;

    cliente= "Norman Osborn";
    esp = &e01;
    descricao = "Fotos do novo planador";
    valor = 150;
    Venda v03(cliente, descricao, valor, *esp);
    comissao01 += e01.comissao(v03.getValor());
    numAtendimentos01+=1;

    cliente= "J. Jonah Jameson";
    esp = &e02;
    descricao = "Recarga de cartucho";
    valor = 10;
    Venda v04(cliente, descricao, valor, *esp);
    comissao02 += e02.comissao(v04.getValor());
    numAtendimentos02+=1;


    cliente= "Bruce Benner";
    esp = &e03;
    descricao = "Reconstrucao de Predio";
    valor = 10000;
    Venda v05(cliente, descricao, valor, *esp);
    comissao03 += e03.comissao(v05.getValor());
    numAtendimentos03+=1;

    cliente= "Steve Rogers";
    esp = &e03;
    descricao = "Decoracao de Apartamento no Brooklyn";
    valor = 3000;
    Venda v06(cliente, descricao, valor, *esp);
    comissao03 += e03.comissao(v06.getValor());
    numAtendimentos03+=1;

    cliente= "J. Jonah Jameson";
    esp = &e03;
    descricao = "Reforma do Clarim Diario";
    valor = 5000;
    Venda v07(cliente, descricao, valor, *esp);
    comissao03+= e03.comissao(v07.getValor());
    numAtendimentos03+=1;

    cliente= "Otto Octavius";
    esp = &e02;
    descricao = "Formatacao do PC";
    valor = 80;
    Venda v08(cliente, descricao, valor, *esp);
    comissao02 += e02.comissao(v08.getValor());
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.getDescricao() << endl;

    v02.print();
    cout << " Descricao: " << v02.getDescricao() << endl;

    v03.print();
    cout << " Descricao: " << v03.getDescricao() << endl;

    v04.print();
    cout << " Descricao: " << v04.getDescricao() << endl;

    v05.print();
    cout << " Descricao: " << v05.getDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getDescricao() << endl;

    v07.print();
    cout << " Descricao: " << v07.getDescricao() << endl;

    v08.print();
    cout << " Descricao: " << v08.getDescricao() << endl;




    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.getSalarioBase()+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.getSalarioBase()+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.getSalarioBase()+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.setBonificacao(g01.getBonificacaoGerente(NUMTOTALservicos));
    g01.print();
    cout << "Salario Total: " << g01.getSalarioBase() + g01.getBonificacao()<<endl;

    return 0;
}

