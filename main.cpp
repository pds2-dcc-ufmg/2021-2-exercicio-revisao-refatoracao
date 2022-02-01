#include <iostream>
#include <vector>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    vector<Cliente*> cliente;

    Cliente cliente01("J. Jonah Jameson", "Nova York", "35690000");
    cliente.push_back(&cliente01);

    Cliente cliente02("Norman Osborn", "Hartlford", "22061955");
    cliente.push_back(&cliente02);

    Cliente cliente03("Otto Octavius", "Schenectady", "24051953");
    cliente.push_back(&cliente03);

    Cliente cliente04("Bruce Benner", "Dayton", "22111967");
    cliente.push_back(&cliente04);

    Cliente cliente05("Steve Rogers", "Lower East Side", "13061981");
    cliente.push_back(&cliente05);

    for (int i = 0; i < cliente.size(); i++)
        cliente[i]->print();



    vector<Especialista*> especialista;

    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");
    especialista.push_back(&e01);

    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    especialista.push_back(&e02);

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");
    especialista.push_back(&e03);



    Gerente g01("Nick Fury", "72", 21121948, 10000, 0);



    vector<Venda*> venda;
    
    Venda v01("J. Jonah Jameson", e01, "Fotos do Homem Aranha", 100);
    e01.comissao_ += e01.comissao(v01.VALOR);
    e01.numAtendimentos+= 1;
    venda.push_back(&v01);

    Venda v02("Bruce Benner", e02, "Troca da tela do telefone", 100);
    e02.comissao_ += e02.comissao(v02.VALOR);
    e02.numAtendimentos+= 1;
    venda.push_back(&v02);

    Venda v03("Norman Osborn",e01, "Fotos do novo planador", 150);
    e01.comissao_ += e01.comissao(v03.VALOR);
    e01.numAtendimentos+= 1;
    venda.push_back(&v03);

    Venda v04("J. Jonah Jameson", e02, "Recarga de cartucho", 10);
    e02.comissao_ += e02.comissao(v04.VALOR);
    e02.numAtendimentos += 1;
    venda.push_back(&v04);

    Venda v05("Bruce Benner", e03, "Reconstrucao de Predio", 10000);
    e03.comissao_ += e03.comissao(v05.VALOR);
    e03.numAtendimentos += 1;
    venda.push_back(&v05);

    Venda v06("Steve Rogers", e03, "Decoracao de Apartamento no Brooklyn", 3000);
    e03.comissao_ += e03.comissao(v06.VALOR);
    e03.numAtendimentos += 1;
    venda.push_back(&v06);

    Venda v07("J. Jonah Jameson", e03, "Reforma do Clarim Diario", 5000);
    e03.comissao_ += e03.comissao(v07.VALOR);
    e03.numAtendimentos += 1;
    venda.push_back(&v07);

    Venda v08("Otto Octavius", e02, "Formatacao do PC", 80);
    e02.comissao_ += e02.comissao(v08.VALOR);
    e02.numAtendimentos += 1;
    venda.push_back(&v08);



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    for (int i = 0; i < venda.size(); i++)
    {
        venda[i]->print();
        cout << " Descricao: " << venda[i]->descricao << endl;
    }



    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;

    for (int i = 0; i < especialista.size(); i++)
    {
        especialista[i]->print();
        cout << "Num Atendimentos: " << especialista[i]->numAtendimentos << endl;
        cout << "Salario Total: " << especialista[i]->SalarioBase + especialista[i]->comissao_ << endl;
    }



    int NUMTOTALservicos = 0;
    for (int i = 0; i < especialista.size(); i++)
        NUMTOTALservicos += especialista[i]->numAtendimentos;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
