#include <iostream>
#include <list>

#include "Funcionario.hpp"
#include "Venda.hpp"

using namespace std;

int main()
{
    list<Venda> v;

    Cliente cliente1;
    cliente1.NOME = "J. Jonah Jameson";
    cliente1.endereco ="Nova York";
	cliente1.Cep = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2.NOME = "Norman Osborn";
    cliente2.endereco ="Hartlford";
	cliente2.Cep = "22061955";
    cliente2.print();

    Cliente cliente3;
    cliente3.NOME = "Otto Octavius";
    cliente3.endereco ="Schenectady";
	cliente3.Cep = "24051953";
    cliente3.print();

    Cliente cliente4;
    cliente4.NOME = "Bruce Benner";
    cliente4.endereco ="Dayton";
	cliente4.Cep = "22111967";
    cliente4.print();

    Cliente cliente5;
    cliente5.NOME = "Steve Rogers";
    cliente5.endereco ="Lower East Side";
	cliente5.Cep = "13061981";
    cliente5.print();


    Especialista e01;
    double numAtendimentos01 = 0;
    e01.nome = "Peter Parker";
    e01.idade = "46";
    e01.rgFunc = 27061975;
    e01.set_Salario_Base(3000);
    e01.especialidade = "Fotografia";



    Especialista e02;
    double numAtendimentos02 = 0;
    e02.nome = "Tony Stark";
    e02.idade = "56";
    e02.rgFunc = 4041965;
    e02.set_Salario_Base(1000);
    e02.especialidade = "Consertos de equipamentos eletronicos";


    Especialista e03;
    double numAtendimentos03 = 0;
    e03.nome = "Wanda Maximoff";
    e03.idade = "32";
    e03.rgFunc = 16021989;
    e03.set_Salario_Base(5000);
    e03.especialidade = "Engenharia e Designeeeeer";


    Gerente g01;
    g01.nome = "Nick Fury";
    g01.idade = "72";
    g01.rgFunc = 21121948;
    g01.set_Salario_Base(10000);


    Venda v01;
    v01.cliente= cliente1.NOME;
    v01.esp=e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.VALOR = 100;
    e01.set_comissao(e01.salario_extra(v01.VALOR));
    v.push_back(v01);
    numAtendimentos01+=1;


    Venda v02;
    v02.cliente= cliente4.NOME;
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.VALOR = 100;
    e02.set_comissao(e02.salario_extra(v02.VALOR));
    v.push_back(v02);
    numAtendimentos02+=1;


    Venda v03;
    v03.cliente= cliente2.NOME;
    v03.esp = e01;
    v03.descricao = "Fotos do novo planador";
    v03.VALOR = 150;
    e01.set_comissao(e03.salario_extra(v03.VALOR));
    v.push_back(v03);
    numAtendimentos01+=1;


    Venda v04;
    v04.cliente= cliente1.NOME;
    v04.esp = e02;
    v04.descricao = "Recarga de cartucho";
    v04.VALOR = 10;
    e02.set_comissao(e02.salario_extra(v04.VALOR));
    v.push_back(v04);
    numAtendimentos02+=1;


    Venda v05;
    v05.cliente= cliente4.NOME;
    v05.esp = e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.VALOR = 10000;
    e03.set_comissao(e03.salario_extra(v05.VALOR));
    v.push_back(v05);
    numAtendimentos03+=1;


    Venda v06;
    v06.cliente= cliente5.NOME;
    v06.esp = e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;
    e03.set_comissao(e03.salario_extra(v06.VALOR));
    v.push_back(v06);
    numAtendimentos03+=1;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;



    Venda v07;
    v07.cliente= cliente1.NOME;
    v07.esp = e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.VALOR = 5000;
    e03.set_comissao(e03.salario_extra(v07.VALOR));
    v.push_back(v07);
    numAtendimentos03+=1;


    Venda v08;
    v08.cliente= cliente3.NOME;
    v08.esp = e02;
    v08.descricao = "Formatacao do PC";
    v08.VALOR = 80;
    e02.set_comissao(e02.salario_extra(v08.VALOR));
    v.push_back(v08);
    numAtendimentos02+=1;
    



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    for(auto it=v.begin(); it!=v.end(); it++){
        it->print();
        cout<< " Descricao: "<<it->descricao<< endl;
    }


    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;

    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.get_Salario_Total()<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.get_Salario_Total()<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.get_Salario_Total()<<endl;


    g01.set_bonificacao(g01.salario_extra(v.size()));
    g01.print();
    cout << "Salario Total: " << g01.get_Salario_Total()<<endl;

    return 0;
}
