#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>

using namespace std;

void imprimeVendas(vector<Venda> vendas){
    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    for(vector<Venda>::iterator v = vendas.begin(); v != vendas.end(); v++){
        (*v).print(); 
    }
}

void imprimeFuncionarios(vector<Especialista> especialistas, Gerente g01){
    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;

    for(vector<Especialista>::iterator e = especialistas.begin(); e != especialistas.end(); e++){
        (*e).print();
    }

    g01.print();
}

int main() {

    vector<Venda> vendas;
    vector<Especialista> especialistas;

    Cliente cliente1;
    cliente1.setNome("J. Jonah Jameson");
    cliente1.setEndereco("Nova York");
	cliente1.setCEP("35690000");
    cliente1.print();

    Cliente cliente2;
    cliente2.setNome("Norman Osborn");
    cliente2.setEndereco("Hartlford");
	cliente2.setCEP("22061955");
    cliente2.print();

    Cliente cliente3;
    cliente3.setNome("Otto Octavius");
    cliente3.setEndereco("Schenectady");
	cliente3.setCEP("24051953");
    cliente3.print();

    Cliente cliente4;
    cliente4.setNome("Bruce Benner");
    cliente4.setEndereco("Dayton");
	cliente4.setCEP("22111967");
    cliente4.print();

    Cliente cliente5;
    cliente5.setNome("Steve Rogers");
    cliente5.setEndereco("Lower East Side");
	cliente5.setCEP("13061981");
    cliente5.print();

    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");
    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");

    Venda v01;
    v01.setCliente(cliente1);
    v01.setDescricao("Fotos do Homem Aranha");
    v01.setValorTotal(100);
    e01.setSalarioTotal(e01.getComissao(v01.getValorTotal()));
    e01.addAtendimento();
    v01.setEspecialista(e01);
    vendas.push_back(v01);

    Venda v02;
    v02.setCliente(cliente4);
    v02.setDescricao("Troca da tela do telefone");
    v02.setValorTotal(100);
    e02.setSalarioTotal(e02.getComissao(v02.getValorTotal()));
    e02.addAtendimento();
    v02.setEspecialista(e02);
    vendas.push_back(v02);

    Venda v03;
    v03.setCliente(cliente2);
    v03.setDescricao("Fotos do novo planador");
    v03.setValorTotal(150);
    e01.setSalarioTotal(e01.getComissao(v03.getValorTotal()));
    e01.addAtendimento();
    v03.setEspecialista(e01);
    vendas.push_back(v03);

    Venda v04;
    v04.setCliente(cliente1);
    v04.setDescricao("Recarga de cartucho");
    v04.setValorTotal(10);
    e02.setSalarioTotal(e02.getComissao(v04.getValorTotal()));
    e02.addAtendimento();
    v04.setEspecialista(e02);
    vendas.push_back(v04);

    Venda v05;
    v05.setCliente(cliente4);
    v05.setDescricao("Reconstrucao de Predio");
    v05.setValorTotal(10000);
    e03.setSalarioTotal(e03.getComissao(v05.getValorTotal()));
    e03.addAtendimento();
    v05.setEspecialista(e03);
    vendas.push_back(v05);

    Venda v06;
    v06.setCliente(cliente5);
    v06.setDescricao("Decoracao de Apartamento no Brooklyn");
    v06.setValorTotal(3000);
    e03.setSalarioTotal(e03.getComissao(v06.getValorTotal()));
    e03.addAtendimento();
    v06.setEspecialista(e03);
    vendas.push_back(v06);

    Venda v07;
    v07.setCliente(cliente1);
    v07.setDescricao("Reforma do Clarim Diario");
    v07.setValorTotal(5000);
    e03.setSalarioTotal(e03.getComissao(v07.getValorTotal()));
    e03.addAtendimento();
    v07.setEspecialista(e03);
    vendas.push_back(v07);

    Venda v08;
    v08.setCliente(cliente3);
    v08.setDescricao("Formatacao do PC");
    v08.setValorTotal(80);
    e02.setSalarioTotal(e02.getComissao(v08.getValorTotal()));
    e02.addAtendimento();
    v08.setEspecialista(e02);
    vendas.push_back(v08);

    especialistas.push_back(e01);
    especialistas.push_back(e02);
    especialistas.push_back(e03);

    Gerente g01("Nick Fury", "72", 21121948, 10000);
    g01.setSalarioTotal(g01.getBonificacao(vendas.size()));

    imprimeVendas(vendas);
    imprimeFuncionarios(especialistas, g01);

    return 0;
}
