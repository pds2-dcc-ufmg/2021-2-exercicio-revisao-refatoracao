#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    //Lista clientes
    Cliente c1;
    c1.setNome("J. Jonah Jameson");
    c1.setEndereco("Nova York");
    c1.setCep("35690000");
    c1.print();

    Cliente c2;
    c2.setNome("Norman Osborn");
    c2.setEndereco("Hartlford");
    c2.setCep("22061955");
    c2.print();

    Cliente c3;
    c3.setNome("Otto Octavius");
    c3.setEndereco("Schenectady");
    c3.setCep("24051953");
    c3.print();

    Cliente c4;
    c4.setNome("Bruce Benner");
    c4.setEndereco("Dayton");
    c4.setCep("22111967");
    c4.print();

    Cliente c5;
    c5.setNome("Steve Rogers");
    c5.setEndereco("Lower East Side");
    c5.setCep("13061981");
    c5.print();

    //Lista especialistas
    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.setNome("Peter Parker");
    e01.setIdade("46");
    e01.setRgFunc(27061975);
    e01.setSalarioBase(3000);
    e01.setEspecialidade("Fotografia");


    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.setNome("Tony Stark");
    e02.setIdade("56");
    e02.setRgFunc(4041965);
    e02.setSalarioBase(1000);
    e02.setEspecialidade("Consertos de equipamentos eletronicos");


    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.setNome("Wanda Maximoff");
    e03.setIdade("32");
    e03.setRgFunc(16021989);
    e03.setSalarioBase(5000);
    e03.setEspecialidade("Engenharia e Designer");

    //Gerente
    Gerente g01;
    double bonificacao01 = 0;
    g01.setNome("Nick Fury");
    g01.setIdade("72");
    g01.setRgFunc(21121948);
    g01.setSalarioBase(10000);

    //Lita Vendas
    Venda v01;
    v01.setCliente("J. Jonah Jameson");
    v01.setEspec(e01);
    v01.setDescricao("Fotos do Homem Aranha");
    v01.setValor(100);
    comissao01 = (v01.Valor() + e01comissao);
    numAtendimentos01++;


    Venda v02;
    v02.setCliente("Bruce Benner");
    v02.setEspec(e02);
    v02.setDescricao("Troca da tela do telefone");
    v02.setValor(100);
    comissao02 = (v02.Valor() + e02comissao);
    numAtendimentos02++;


    Venda v03;
    v03.setCliente("Norman Osborn");
    v03.setEspec(e01);
    v03.setDescricao("Fotos do novo planador");
    v03.setValor(150);
    comissao01 = (v03.Valor() + e01comissao);
    numAtendimentos01++;


    Venda v04;
    v04.setCliente("J. Jonah Jameson");
    v04.setEspec(e02);
    v04.setDescricao("Recarga de cartucho");
    v04.setValor(10);
    comissao02 = (v04.Valor() + e02comissao);
    numAtendimentos02++;


    Venda v05;
    v05.setCliente("Bruce Benner");
    v05.setEspec(e03);
    v05.setDescricao("Reconstrucao de Predio");
    v05.setValor(10000);
    comissao03 = (v05.Valor() + e03comissao);
    numAtendimentos03++;


    Venda v06;
    v06.setCliente("Steve Rogers");
    v06.setEspec(e03);
    v06.setDescricao("Decoracao de Apartamento no Brooklyn");
    v06.setValor(3000);
    comissao03 = (v06.Valor() + e03comissao);
    numAtendimentos03++;


    Venda v07;
    v07.setCliente("J. Jonah Jameson");
    v07.setEspec(e03);
    v07.setDescricao("Reforma do Clarim Diario");
    v07.setValor(5000);
    comissao03 = (v07.Valor() + e03comissao);
    numAtendimentos03++;


    Venda v08;
    v08.setCliente("Otto Octavius");
    v08.setEspec(e02);
    v08.setDescricao("Formatacao do PC");
    v08.setValor(80);
    comissao02 = (v08.Valor() + e02comissao);
    numAtendimentos02++;

    //Saídas Vendas
    cout <<" \n \n Relatorio das Vendas \n" << endl;

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

    //Saídas funcionários
    cout <<" \n \n Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.SalarioBase+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.SalarioBase+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.SalarioBase+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
