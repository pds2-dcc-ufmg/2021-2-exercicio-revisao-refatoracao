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
    cliente1.set_nome("J. Jonah Jameson");
    cliente1.set_endereco("Nova York");
	cliente1.set_cep("35690000");
    cliente1.print();

    Cliente cliente2;
    cliente2.set_nome("Norman Osborn");
    cliente2.set_endereco("Hartlford");
	cliente2.set_cep("22061955");
    cliente2.print();

    Cliente cliente3;
    cliente3.set_nome("Otto Octavius");
    cliente3.set_endereco("Schenectady");
	cliente3.set_cep("24051953");
    cliente3.print();

    Cliente cliente4;
    cliente4.set_nome("Bruce Benner");
    cliente4.set_endereco("Dayton");
	cliente4.set_cep("22111967");
    cliente4.print();

    Cliente cliente5;
    cliente5.set_nome("Steve Rogers");
    cliente5.set_endereco("Lower East Side");
	cliente5.set_cep("13061981");
    cliente5.print();




    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.set_nome("Peter Parker");
    e01.set_idade("46");
    e01.set_rgfunc(27061975);
    e01.set_salariobase(3000);
    e01.set_especialidade("Fotografia");



    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.set_nome("Tony Stark");
    e02.set_idade("56");
    e02.set_rgfunc(4041965);
    e02.set_salariobase(1000);
    e02.set_especialidade("Consertos de equipamentos eletronicos");


    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.set_nome("Wanda Maximoff");
    e03.set_idade("32");
    e03.set_rgfunc(16021989);
    e03.set_salariobase(5000);
    e03.set_especialidade("Engenharia e Designer");


    Gerente g01;
    double bonificacao01 = 0;
    g01.set_nome("Nick Fury");
    g01.set_idade("72");
    g01.set_rgfunc(21121948);
    g01.set_salariobase(10000);


    Venda v01;
    v01.set_cliente("J. Jonah Jameson");
    v01.set_esp(e01);
    v01.set_descricao("Fotos do Homem Aranha");
    v01.set_valor(100);
    comissao01 += e01.comissao(v01.get_valor());
    numAtendimentos01+=1;


    Venda v02;
    v02.set_cliente("Bruce Benner");
    v02.set_esp(e02);
    v02.set_descricao("Troca da tela do telefone");
    v02.set_valor(100);
    comissao02 += e02.comissao(v02.get_valor());
    numAtendimentos01+=1;


    Venda v03;
    v03.set_cliente("Norman Osborn");
    v03.set_esp(e01);
    v03.set_descricao("Fotos do novo planador");
    v03.set_valor(150);
    comissao01 += e01.comissao(v03.get_valor());
    numAtendimentos01+=1;


    Venda v04;
    v04.set_cliente("J. Jonah Jameson");
    v04.set_esp(e02);
    v04.set_descricao("Recarga de cartucho");
    v04.set_valor(10);
    comissao02 += e02.comissao(v04.get_valor());
    numAtendimentos01+=1;


    Venda v05;
    v05.set_cliente("Bruce Benner");
    v05.set_esp(e03);
    v05.set_descricao("Reconstrucao de Predio");
    v05.set_valor(10000);
    comissao03 += e03.comissao(v05.get_valor());
    numAtendimentos01+=1;


    Venda v06;
    v06.set_cliente("Steve Rogers");
    v06.set_esp(e03);
    v06.set_descricao("Decoracao de Apartamento no Brooklyn");
    v06.set_valor(3000);
    comissao03 += e03.comissao(v06.get_valor());
    numAtendimentos01+=1;


    Venda v07;
    v07.set_cliente("J. Jonah Jameson");
    v07.set_esp(e03);
    v07.set_descricao("Reforma do Clarim Diario");
    v07.set_valor(5000);
    comissao03 += e03.comissao(v07.get_valor());
    numAtendimentos01+=1;


    Venda v08;
    v08.set_cliente("Otto Octavius");
    v08.set_esp(e02);
    v08.set_descricao("Formatacao do PC");
    v08.set_valor(5000);
    comissao02 += e02.comissao(v08.get_valor());
    numAtendimentos01+=1;


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.get_descricao() << endl;

    v02.print();
    cout << " Descricao: " << v02.get_descricao() << endl;

    v03.print();
    cout << " Descricao: " << v03.get_descricao() << endl;

    v04.print();
    cout << " Descricao: " << v04.get_descricao() << endl;

    v05.print();
    cout << " Descricao: " << v05.get_descricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.get_descricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.get_descricao() << endl;

    v07.print();
    cout << " Descricao: " << v07.get_descricao() << endl;

    v08.print();
    cout << " Descricao: " << v08.get_descricao() << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.get_salariobase()+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.get_salariobase()+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.get_salariobase()+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.set_bonificacao(g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    g01.print();
    cout << "Salario Total: " << g01.get_salariobase() + g01.get_bonificacao() << endl;

    return 0;
}
