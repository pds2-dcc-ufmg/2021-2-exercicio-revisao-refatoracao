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

void imprimeFuncionarios(vector<Especialista*> especialistas, Gerente g01){
    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;

    for(vector<Especialista*>::iterator e = especialistas.begin(); e != especialistas.end(); e++){
        (*e)->print();
    }

    g01.print();
}

void imprimeClientes(vector<Cliente> clientes){
    for(vector<Cliente>::iterator c = clientes.begin(); c != clientes.end(); c++){
        (*c).print();
    }
}

int main() {

    vector<Venda> vendas;
    vector<Especialista*> especialistas;
    vector<Cliente> clientes;

    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    clientes.push_back(cliente1);

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    clientes.push_back(cliente2);

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    clientes.push_back(cliente3);

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    clientes.push_back(cliente4);

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    clientes.push_back(cliente5);

    imprimeClientes(clientes);

    Especialista especialista01("Peter Parker", "46", 27061975, 3000, "Fotografia");
    especialistas.push_back(&especialista01);

    Especialista especialista02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    especialistas.push_back(&especialista02);
    
    Especialista especialista03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");
    especialistas.push_back(&especialista03);

    Venda venda01;
    venda01.setCliente(&cliente1);
    venda01.setDescricao("Fotos do Homem Aranha");
    venda01.setValorTotal(100);
    especialista01.setSalarioTotal(especialista01.getComissao(venda01.getValorTotal()));
    especialista01.addAtendimento();
    venda01.setEspecialista(&especialista01);
    vendas.push_back(venda01);

    Venda venda02;
    venda02.setCliente(&cliente4);
    venda02.setDescricao("Troca da tela do telefone");
    venda02.setValorTotal(100);
    especialista02.setSalarioTotal(especialista02.getComissao(venda02.getValorTotal()));
    especialista02.addAtendimento();
    venda02.setEspecialista(&especialista02);
    vendas.push_back(venda02);

    Venda venda03;
    venda03.setCliente(&cliente2);
    venda03.setDescricao("Fotos do novo planador");
    venda03.setValorTotal(150);
    especialista01.setSalarioTotal(especialista01.getComissao(venda03.getValorTotal()));
    especialista01.addAtendimento();
    venda03.setEspecialista(&especialista01);
    vendas.push_back(venda03);

    Venda venda04;
    venda04.setCliente(&cliente1);
    venda04.setDescricao("Recarga de cartucho");
    venda04.setValorTotal(10);
    especialista02.setSalarioTotal(especialista02.getComissao(venda04.getValorTotal()));
    especialista02.addAtendimento();
    venda04.setEspecialista(&especialista02);
    vendas.push_back(venda04);

    Venda venda05;
    venda05.setCliente(&cliente4);
    venda05.setDescricao("Reconstrucao de Predio");
    venda05.setValorTotal(10000);
    especialista03.setSalarioTotal(especialista03.getComissao(venda05.getValorTotal()));
    especialista03.addAtendimento();
    venda05.setEspecialista(&especialista03);
    vendas.push_back(venda05);

    Venda venda06;
    venda06.setCliente(&cliente5);
    venda06.setDescricao("Decoracao de Apartamento no Brooklyn");
    venda06.setValorTotal(3000);
    especialista03.setSalarioTotal(especialista03.getComissao(venda06.getValorTotal()));
    especialista03.addAtendimento();
    venda06.setEspecialista(&especialista03);
    vendas.push_back(venda06);

    Venda venda07;
    venda07.setCliente(&cliente1);
    venda07.setDescricao("Reforma do Clarim Diario");
    venda07.setValorTotal(5000);
    especialista03.setSalarioTotal(especialista03.getComissao(venda07.getValorTotal()));
    especialista03.addAtendimento();
    venda07.setEspecialista(&especialista03);
    vendas.push_back(venda07);

    Venda venda08;
    venda08.setCliente(&cliente3);
    venda08.setDescricao("Formatacao do PC");
    venda08.setValorTotal(80);
    especialista02.setSalarioTotal(especialista02.getComissao(venda08.getValorTotal()));
    especialista02.addAtendimento();
    venda08.setEspecialista(&especialista02);
    vendas.push_back(venda08);

    Gerente gerente01("Nick Fury", "72", 21121948, 10000);
    gerente01.setSalarioTotal(gerente01.getBonificacao(vendas.size()));

    imprimeVendas(vendas);
    imprimeFuncionarios(especialistas, gerente01);

    return 0;
}