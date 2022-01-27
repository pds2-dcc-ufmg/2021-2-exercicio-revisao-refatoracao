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
    cliente1.setNome("J. Jonah Jameson");
    cliente1.setEndereco("Nova York");
	cliente1.setCep(35690000);
    cliente1.print();

    Cliente cliente2;
    cliente2.setNome("Norman Osborn");
    cliente2.setEndereco("Hartlford");
	cliente2.setCep(22061955);
    cliente2.print();

    Cliente cliente3;
    cliente3.setNome("Otto Octavius");
    cliente3.setEndereco("Schenectady");
	cliente3.setCep(24051953);
    cliente3.print();

    Cliente cliente4;
    cliente4.setNome("Bruce Benner");
    cliente4.setEndereco("Dayton");
	cliente4.setCep(22111967);
    cliente4.print();

    Cliente cliente5;
    cliente5.setNome("Steve Rogers");
    cliente5.setEndereco("Lower East Side");
	cliente5.setCep(13061981);
    cliente5.print();




    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.setNome("Peter Parker");
    e01.setIdade(46);
    e01.setRgFunc(27061975);
    e01.setSalarioBase(3000);
    e01.setEspecialidade("Fotografia");



    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.setNome("Tony Stark");
    e02.setIdade(56);
    e02.setRgFunc(4041965);
    e02.setSalarioBase(1000);
    e02.setEspecialidade("Consertos de equipamentos eletronicos");


    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.setNome("Wanda Maximoff");
    e03.setIdade(32);
    e03.setRgFunc(16021989);
    e03.setSalarioBase(5000);
    e03.setEspecialidade("Engenharia e Designeeeeer");


    Gerente g01;
    double bonificacao01 = 0;
    g01.setNome("Nick Fury");
    g01.setIdade(72);
    g01.setRgFunc(21121948);
    g01.setSalarioBase(10000);


    Venda v01;
    v01.cliente= "J. Jonah Jameson";
    v01.esp = e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.VALOR = 100;
    comissao01 += e01.comissao(v01.VALOR);
    numAtendimentos01+=1;


    Venda v02;
    v02.cliente= "Bruce Benner";
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.VALOR = 100;
    comissao02 += e02.comissao(v02.VALOR);
    numAtendimentos02+=1;


    Venda v03;
    v03.cliente= "Norman Osborn";
    v03.esp = e01;
    v03.descricao = "Fotos do novo planador";
    v03.VALOR = 150;
    comissao01 += e01.comissao(v03.VALOR);
    numAtendimentos01+=1;


    Venda v04;
    v04.cliente= "J. Jonah Jameson";
    v04.esp = e02;
    v04.descricao = "Recarga de cartucho";
    v04.VALOR = 10;
    comissao02 += e02.comissao(v04.VALOR);
    numAtendimentos02+=1;


    Venda v05;
    v05.cliente= "Bruce Benner";
    v05.esp = e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.VALOR = 10000;
    comissao03 += e03.comissao(v05.VALOR);
    numAtendimentos03+=1;


    Venda v06;
    v06.cliente= "Steve Rogers";
    v06.esp = e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;
    comissao03 += e03.comissao(v06.VALOR);
    numAtendimentos03+=1;


    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;



    Venda v07;
    v07.setCliente("J. Jonah Jameson") ;
    v07.setEsp(e03);
    v07.setDescricao("Reforma do Clarim Diario");
    v07.setVALOR(5000);
    comissao03 += e03.comissao(v07.VALOR);
    numAtendimentos03+=1;


    Venda v08;
    v08.setCliente("Otto Octavius");
    v08.setEsp(e02);
    v08.setDescricao("Formatacao do PC");
    v08.setVALOR(80);
    comissao02 += e02.comissao(v08.VALOR);
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
    g01.setBonificacao( g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    g01.print();
    cout << "Salario Total: " << g01.getSalarioBase() + g01.getBonificacao()<<endl;

    return 0;
}
