#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    // Clientes

    Cliente c01;
    c01.setNome("J. Jonah Jameson");
    c01.setEndereco("Nova York");
	c01.setCep("35690000");
    c01.print();

    Cliente c02;
    c02.setNome("Norman Osborn");
    c02.setEndereco("Hartlford");
	c02.setCep("22061955");
    c02.print();

    Cliente c03;
    c03.setNome("Otto Octavius");
    c03.setEndereco("Schenectady");
	c03.setCep("24051953");
    c03.print();

    Cliente c04;
    c04.setNome("Bruce Benner");
    c04.setEndereco("Dayton");
	c04.setCep("22111967");
    c04.print();

    Cliente c05;
    c05.setNome("Steve Rogers");
    c05.setEndereco("Lower East Side");
	c05.setCep("13061981");
    c05.print();

    // Especialistas

    Especialista e01;
    e01.setNome("Peter Parker");
    e01.setIdade("46");
    e01.setRg("27061975");
    e01.setSalarioBase(3000);
    e01.setEspecialidade("Fotografia");

    Especialista e02;
    e02.setNome("Tony Stark");
    e02.setIdade("56");
    e02.setRg("4041965");
    e02.setSalarioBase(1000);
    e02.setEspecialidade("Consertos de equipamentos eletronicos");


    Especialista e03;
    e03.setNome("Wanda Maximoff");
    e03.setIdade("32");
    e03.setRg("16021989");
    e03.setSalarioBase(5000);
    e03.setEspecialidade("Engenharia e Designer");

    // Gerente

    Gerente g01;
    g01.setNome("Nick Fury");
    g01.setIdade("72");
    g01.setRg("21121948");
    g01.setSalarioBase(10000);

    // Vendas

    Venda v01;
    v01.setCliente(c01);
    v01.setEspecialista(e01);
    v01.setDescricao("Fotos do Homem Aranha");
    v01.setValor(100);
    e01.IncrementaComissao(v01.getValor());
    e01.IncrementaAtendimentos();

    Venda v02;
    v02.setCliente(c04);
    v02.setEspecialista(e02);
    v02.setDescricao("Troca da tela do telefone");
    v02.setValor(100);
    e02.IncrementaComissao(v02.getValor());
    e02.IncrementaAtendimentos();

    Venda v03;
    v03.setCliente(c02);
    v03.setEspecialista(e01);
    v03.setDescricao("Fotos do novo planador");
    v03.setValor(150);
    e01.IncrementaComissao(v03.getValor());
    e01.IncrementaAtendimentos();

    Venda v04;
    v04.setCliente(c01);
    v04.setEspecialista(e02);
    v04.setDescricao("Recarga de cartucho");
    v04.setValor(10);
    e02.IncrementaComissao(v04.getValor());
    e02.IncrementaAtendimentos();

    Venda v05;
    v05.setCliente(c04);
    v05.setEspecialista(e03);
    v05.setDescricao("Reconstrucao de Predio");
    v05.setValor(10000);
    e03.IncrementaComissao(v05.getValor());
    e03.IncrementaAtendimentos();

    Venda v06;
    v06.setCliente(c05);
    v06.setEspecialista(e03);
    v06.setDescricao("Decoracao de Apartamento no Brooklyn");
    v06.setValor(3000);
    e03.IncrementaComissao(v06.getValor());
    e03.IncrementaAtendimentos();

    Venda v07;
    v07.setCliente(c01);
    v07.setEspecialista(e03);
    v07.setDescricao("Reforma do Clarim Diario");
    v07.setValor(5000);
    e03.IncrementaComissao(v07.getValor());
    e03.IncrementaAtendimentos();

    Venda v08;
    v08.setCliente(c03);
    v08.setEspecialista(e02);
    v08.setDescricao("Formatacao do PC");
    v08.setValor(80);
    e02.IncrementaComissao(v08.getValor());
    e02.IncrementaAtendimentos();

    // Imprimir na tela os relatórios

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
    e02.print();
    e03.print();

    int NumTotalServicos = 0;
    NumTotalServicos = e01.getNumAtendimentos() + e02.getNumAtendimentos() + e03.getNumAtendimentos();
    g01.CalculaBonificacao(NumTotalServicos);
    g01.print();
    return 0;
}
