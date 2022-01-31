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
    cliente1.setNOME("J. Jonah Jameson");
    cliente1.setendereco("Nova York");
	cliente1.setCep("35690000");
    cliente1.print();

    Cliente cliente2;
    cliente2.setNOME("Norman Osborn");
    cliente2.setendereco("Hartlford");
	cliente2.setCep("22061955");
    cliente2.print();

    Cliente cliente3;
    cliente3.setNOME("Otto Octavius");
    cliente3.setendereco("Schenectady");
	cliente3.setCep("24051953");
    cliente3.print();

    Cliente cliente4;
    cliente4.setNOME("Bruce Benner");
    cliente4.setendereco("Dayton");
	cliente4.setCep("22111967");
    cliente4.print();

    Cliente cliente5;
    cliente5.setNOME("Steve Rogers");
    cliente5.setendereco("Lower East Side");
	cliente5.setCep("13061981");
    cliente5.print();




    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.setnome("Peter Parker");
    e01.setIDADE("46");
    e01.setrgFunc(27061975);
    e01.setSalarioBase(3000);
    e01.setespecialidade("Fotografia");



    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.setnome("Tony Stark");
    e02.setIDADE("56");
    e02.setrgFunc(4041965);
    e02.setSalarioBase(1000);
    e02.setespecialidade("Consertos de equipamentos eletronicos");


    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.setnome("Wanda Maximoff");
    e03.setIDADE("32");
    e03.setrgFunc(16021989);
    e03.setSalarioBase(5000);
    e03.setespecialidade("Engenharia e Designeeeeer");


    Gerente g01;
    double bonificacao01 = 0;
    g01.setnome("Nick Fury");
    g01.setIDADE("72");
    g01.setrgFunc(21121948);
    g01.setSalarioBase(10000);


    Venda v01;
    v01.cliente= "J. Jonah Jameson";
    v01.esp = e01;
    v01.setdescricao("Fotos do Homem Aranha");
    v01.setVALOR(100);
    comissao01 += e01.comissao(v01.getVALOR());
    numAtendimentos01+=1;


    Venda v02;
    v02.cliente= "Bruce Benner";
    v02.esp = e02;
    v02.setdescricao("Troca da tela do telefone");
    v02.setVALOR(100);
    comissao02 += e02.comissao(v02.getVALOR());
    numAtendimentos02+=1;


    Venda v03;
    v03.cliente= "Norman Osborn";
    v03.esp = e01;
    v03.setdescricao("Fotos do novo planador");
    v03.setVALOR(150);
    comissao01 += e01.comissao(v03.getVALOR());
    numAtendimentos01+=1;


    Venda v04;
    v04.cliente= "J. Jonah Jameson";
    v04.esp = e02;
    v04.setdescricao("Recarga de cartucho");
    v04.setVALOR(10);
    comissao02 += e02.comissao(v04.getVALOR());
    numAtendimentos02+=1;


    Venda v05;
    v05.cliente= "Bruce Benner";
    v05.esp = e03;
    v05.setdescricao("Reconstrucao de Predio");
    v05.setVALOR(10000);
    comissao03 += e03.comissao(v05.getVALOR());
    numAtendimentos03+=1;


    Venda v06;
    v06.cliente= "Steve Rogers";
    v06.esp = e03;
    v06.setdescricao("Decoracao de Apartamento no Brooklyn");
    v06.setVALOR(3000);
    comissao03 += e03.comissao(v06.getVALOR());
    numAtendimentos03+=1;


    v06.setdescricao("Decoracao de Apartamento no Brooklyn");
    v06.setVALOR(3000);



    Venda v07;
    v07.cliente= "J. Jonah Jameson";
    v07.esp = e03;
    v07.setdescricao("Reforma do Clarim Diario");
    v07.setVALOR(5000);
    comissao03 += e03.comissao(v07.getVALOR());
    numAtendimentos03+=1;


    Venda v08;
    v08.cliente= "Otto Octavius";
    v08.esp = e02;
    v08.setdescricao("Formatacao do PC");
    v08.setVALOR(80);
    comissao02 += e02.comissao(v08.getVALOR());
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.getdescricao() << endl;

    v02.print();
    cout << " Descricao: " << v02.getdescricao() << endl;

    v03.print();
    cout << " Descricao: " << v03.getdescricao() << endl;

    v04.print();
    cout << " Descricao: " << v04.getdescricao() << endl;

    v05.print();
    cout << " Descricao: " << v05.getdescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getdescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getdescricao() << endl;

    v07.print();
    cout << " Descricao: " << v07.getdescricao() << endl;

    v08.print();
    cout << " Descricao: " << v08.getdescricao() << endl;






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
    g01.setbonificacao(g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    g01.print();
    cout << "Salario Total: " << g01.getSalarioBase() + g01.getbonificacao()<<endl;

    return 0;
}
