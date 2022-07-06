#include <iostream>

#include "Venda.hpp"
#include "Gerente.hpp"
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"

using namespace std;

int main() {
    
    Cliente c1("J. Jonah Jameson", 35690000, "Nova York");
    c1.print();

    Cliente c2("Norman Osborn", 22061955, "Hartlford");
    c2.print();

    Cliente c3("Otto Octavius", 24051953, "Schenectady");
    c3.print();

    Cliente c4("Bruce Benner", 22111967, "Dayton");
    c4.print();

    Cliente c5("Steve Rogers", 13061981, "Lower East Side");
    c5.print();


    Especialista e1;
    int numAtendimentos1 = 0;
    double comissao1 = 0;
    e1.nome = "Peter Parker";
    e1.idade = 46;
    e1.rg = 27061975;
    e1.salarioBase = 3000;
    e1.especialidade = "Fotografia";

    Especialista e2;
    int numAtendimentos2 = 0;
    double comissao2 = 0;
    e2.nome = "Tony Stark";
    e2.idade = 56;
    e2.rg = 4041965;
    e2.salarioBase = 1000;
    e2.especialidade = "Consertos de equipamentos eletrônicos";

    Especialista e3;
    int numAtendimentos3 = 0;
    double comissao3 = 0;
    e3.nome = "Wanda Maximoff";
    e3.idade = 32;
    e3.rg = 16021989;
    e3.salarioBase = 5000;
    e3.especialidade = "Engenharia e Designe";


    Gerente g1;
    g1.nome = "Nick Fury";
    g1.idade = 72;
    g1.rg = 21121948;
    g1.salarioBase = 10000;
    g1.bonificacao = 0;


    Venda v1;
    v1.cliente= "J. Jonah Jameson";
    v1.especialista = e1;
    v1.descricao = "Fotos do Homem Aranha";
    v1.valor = 100;
    comissao1 += e1.calcula_comissao(v1.valor);
    numAtendimentos1+=1;

    Venda v2;
    v2.cliente= "Bruce Benner";
    v2.especialista = e2;
    v2.descricao = "Troca da tela do telefone";
    v2.valor = 100;
    comissao2 += e2.calcula_comissao(v2.valor);
    numAtendimentos2+=1;

    Venda v3;
    v3.cliente= "Norman Osborn";
    v3.especialista = e1;
    v3.descricao = "Fotos do novo planador";
    v3.valor = 150;
    comissao1 += e1.calcula_comissao(v3.valor);
    numAtendimentos1+=1;

    Venda v4;
    v4.cliente= "J. Jonah Jameson";
    v4.especialista = e2;
    v4.descricao = "Recarga de cartucho";
    v4.valor = 10;
    comissao2 += e2.calcula_comissao(v4.valor);
    numAtendimentos2+=1;

    Venda v5;
    v5.cliente= "Bruce Benner";
    v5.especialista = e3;
    v5.descricao = "Reconstrução de prédio";
    v5.valor = 10000;
    comissao3 += e3.calcula_comissao(v5.valor);
    numAtendimentos3+=1;

    Venda v6;
    v6.cliente= "Steve Rogers";
    v6.especialista = e3;
    v6.descricao = "Decoração de apartamento no Brooklyn";
    v6.valor = 3000;
    comissao3 += e3.calcula_comissao(v6.valor);
    numAtendimentos3+=1;

    Venda v7;
    v7.cliente= "J. Jonah Jameson";
    v7.especialista = e3;
    v7.descricao = "Reforma do Clarim Diario";
    v7.valor = 5000;
    comissao3 += e3.calcula_comissao(v7.valor);
    numAtendimentos3+=1;

    Venda v8;
    v8.cliente= "Otto Octavius";
    v8.especialista = e2;
    v8.descricao = "Formatação do PC";
    v8.valor = 80;
    comissao2 += e2.calcula_comissao(v8.valor);
    numAtendimentos2+=1;



    cout << endl << endl;          
    cout << "Relatório das vendas:" << endl;

    v1.print();
    cout << " Descrição: " << v1.descricao << endl;

    v2.print();
    cout << " Descrição: " << v2.descricao << endl;

    v3.print();
    cout << " Descrição: " << v3.descricao << endl;

    v4.print();
    cout << " Descrição: " << v4.descricao << endl;

    v5.print();
    cout << " Descrição: " << v5.descricao << endl;

    v6.print();
    cout << " Descrição: " << v6.descricao << endl;

    v7.print();
    cout << " Descrição: " << v7.descricao << endl;

    v8.print();
    cout << " Descrição: " << v8.descricao << endl;


    cout << endl << endl;  
    cout << "Relatório dos funcionários:" << endl;
    e1.print();
    cout << "Num. Atendimentos: " << numAtendimentos1 << endl;
    cout << "Salário total: " << e1.salarioBase+comissao1<<endl;

    e2.print();
    cout << "Num. Atendimentos: " << numAtendimentos2 << endl;
    cout << "Salário total: " << e2.salarioBase+comissao2<<endl;

    e3.print();
    cout << "Num. Atendimentos: " << numAtendimentos3 << endl;
    cout << "Salário total: " << e3.salarioBase+comissao3<<endl;


    int totalServicos = 0;
    totalServicos = numAtendimentos1 + numAtendimentos2 + numAtendimentos3;
    g1.bonificacao = g1.calcula_bonus(totalServicos);
    g1.print();
    cout << "Salário total: " << g1.salarioBase + g1.bonificacao <<endl;


    return 0;
}
