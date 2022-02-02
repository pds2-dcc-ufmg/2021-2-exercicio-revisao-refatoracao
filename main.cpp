
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
    cliente1._nome = "J. Jonah Jameson";
    cliente1._endereco ="Nova York";
    cliente1._cep = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2._nome = "Norman Osborn";
    cliente2._endereco ="Hartlford";
    cliente2._cep = "22061955";
    cliente2.print();
    
    Cliente cliente3;
    cliente3._nome = "Otto Octavius";
    cliente3._endereco ="Schenectady";
    cliente3._cep = "24051953";
    cliente3.print();
    
    Cliente cliente4;
    cliente4._nome = "Bruce Benner";
    cliente4._endereco ="Dayton";
    cliente4._cep = "22111967";
    cliente4.print();
    
    Cliente cliente5;
    cliente5._nome = "Steve Rogers";
    cliente5._endereco ="Lower East Side";
    cliente5._cep = "13061981";
    cliente5.print();

    Especialista e01;
    int _num_atendimentos01 = 0;
    double comissao01 = 0;
    e01._nome = "Peter Parker";
    e01._idade = "46";
    e01._rg_func = 27061975;
    e01._salario_base = 3000;
    e01._especialidade = "Fotografia";


    Especialista e02;
    int _num_atendimentos02 = 0;
    double comissao02 = 0;
    e02._nome = "Tony Stark";
    e02._idade = "56";
    e02._rg_func = 4041965;
    e02._salario_base = 1000;
    e02._especialidade = "Consertos de equipamentos eletronicos";

    Especialista e03;
    int _num_atendimentos03 = 0;
    double comissao03 = 0;
    e03._nome = "Wanda Maximoff";
    e03._idade = "32";
    e03._rg_func = 16021989;
    e03._salario_base = 5000;
    e03._especialidade = "Engenharia e Designer";

    Gerente g01;
    double bonificacao01 = 0;
    g01._nome = "Nick Fury";
    g01._idade = "72";
    g01._rg_func = 21121948;
    g01._salario_base = 10000;

    Venda v01;
    v01._cliente= "J. Jonah Jameson";
    v01._esp = e01;
    v01._descricao = "Fotos do Homem Aranha";
    v01._valor = 100;
    comissao01 += e01.calcular_comissao(v01._valor);
    _num_atendimentos01+=1;

    Venda v02;
    v02._cliente= "Bruce Benner";
    v02._esp = e02;
    v02._descricao = "Troca da tela do telefone";
    v02._valor = 100;
    comissao02 += e02.calcular_comissao(v02._valor);
    _num_atendimentos02+=1;

    Venda v03;
    v03._cliente= "Norman Osborn";
    v03._esp = e01;
    v03._descricao = "Fotos do novo planador";
    v03._valor = 150;
    comissao01 += e01.calcular_comissao(v03._valor);
    _num_atendimentos01+=1;

    Venda v04;
    v04._cliente= "J. Jonah Jameson";
    v04._esp = e02;
    v04._descricao = "Recarga de cartucho";
    v04._valor = 10;
    comissao02 += e02.calcular_comissao(v04._valor);
    _num_atendimentos02+=1;

    Venda v05;
    v05._cliente= "Bruce Benner";
    v05._esp = e03;
    v05._descricao = "Reconstrucao de Predio";
    v05._valor = 10000;
    comissao03 += e03.calcular_comissao(v05._valor);
    _num_atendimentos03+=1;

    Venda v06;
    v06._cliente= "Steve Rogers";
    v06._esp = e03;
    v06._descricao = "Decoracao de Apartamento no Brooklyn";
    v06._valor = 3000;
    comissao03 += e03.calcular_comissao(v06._valor);
    _num_atendimentos03+=1;

    v06._descricao = "Decoracao de Apartamento no Brooklyn";
    v06._valor = 3000;


    Venda v07;
    v07._cliente= "J. Jonah Jameson";
    v07._esp = e03;
    v07._descricao = "Reforma do Clarim Diario";
    v07._valor = 5000;
    comissao03 += e03.calcular_comissao(v07._valor);
    _num_atendimentos03+=1;

    Venda v08;
    v08._cliente= "Otto Octavius";
    v08._esp = e02;
    v08._descricao = "Formatacao do PC";
    v08._valor = 80;
    comissao02 += e02.calcular_comissao(v08._valor);
    _num_atendimentos02+=1;


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
    e01.print();
    cout << "  Num Atendimentos: " << _num_atendimentos01 << endl;
    cout << "  Salario Total: " << e01._salario_base+comissao01<<endl;
    e02.print();
    cout << "  Num Atendimentos: " << _num_atendimentos02 << endl;
    cout << "  Salario Total: " << e02._salario_base+comissao02<<endl;
    e03.print();
    cout << "  Num Atendimentos: " << _num_atendimentos03 << endl;
    cout << "  Salario Total: " << e03._salario_base+comissao03<<endl;

    int _num_total_servicos = 0;
    _num_total_servicos = _num_atendimentos01 + _num_atendimentos02 + _num_atendimentos03;
    g01._bonificacao = g01.calcular_bonificacao_gerente(_num_total_servicos);
    g01.print();
    cout << "  Salario Total: " << g01._salario_base + g01._bonificacao<<endl;


}
