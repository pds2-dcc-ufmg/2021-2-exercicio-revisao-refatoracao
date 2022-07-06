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


    Especialista e1("Peter Parker", 46, 27061975, 3000, "Fotografia");
    int numAtendimentos1 = 0;
    double comissao1 = 0;

    Especialista e2("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletrônicos");
    int numAtendimentos2 = 0;
    double comissao2 = 0;

    Especialista e3("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Design");
    int numAtendimentos3 = 0;
    double comissao3 = 0;


    Gerente g1("Nick Fury", 72, 21121948, 10000);
    g1.bonificacao = 0;


    Venda v1("J. Jonah Jameson", e1, 100, "Fotos do Homem Aranha");
    comissao1 += e1.calcula_comissao(v1.getValor());
    numAtendimentos1+=1;

    Venda v2("Bruce Benner", e2, 100,"Troca da tela do telefone");
    comissao2 += e2.calcula_comissao(v2.getValor());
    numAtendimentos2+=1;

    Venda v3("Norman Osborn", e1, 150,"Fotos do novo planador");
    comissao1 += e1.calcula_comissao(v3.getValor());
    numAtendimentos1+=1;

    Venda v4("J. Jonah Jameson", e2, 10,"Recarga de cartucho");
    comissao2 += e2.calcula_comissao(v4.getValor());
    numAtendimentos2+=1;

    Venda v5("Bruce Benner", e3, 10000,"Reconstrução de prédio");
    comissao3 += e3.calcula_comissao(v5.getValor());
    numAtendimentos3+=1;

    Venda v6("Steve Rogers", e3, 3000,"Decoração de apartamento no Brooklyn");
    comissao3 += e3.calcula_comissao(v6.getValor());
    numAtendimentos3+=1;

    Venda v7("J. Jonah Jameson", e3, 5000,"Reforma do Clarim Diario");
    comissao3 += e3.calcula_comissao(v7.getValor());
    numAtendimentos3+=1;

    Venda v8("Otto Octavius", e2, 80,"Formatação do PC");
    comissao2 += e2.calcula_comissao(v8.getValor());
    numAtendimentos2+=1;


    cout << endl << endl;          
    cout << "Relatório das vendas:" << endl;

    v1.print();
    cout << " Descrição: " << v1.getDescricao() << endl;

    v2.print();
    cout << " Descrição: " << v2.getDescricao() << endl;

    v3.print();
    cout << " Descrição: " << v3.getDescricao() << endl;

    v4.print();
    cout << " Descrição: " << v4.getDescricao() << endl;

    v5.print();
    cout << " Descrição: " << v5.getDescricao() << endl;

    v6.print();
    cout << " Descrição: " << v6.getDescricao() << endl;

    v7.print();
    cout << " Descrição: " << v7.getDescricao() << endl;

    v8.print();
    cout << " Descrição: " << v8.getDescricao() << endl;


    cout << endl << endl;  
    cout << "Relatório dos funcionários:" << endl;
    e1.print();
    cout << "Num. Atendimentos: " << numAtendimentos1 << endl;
    cout << "Salário total: " << e1.getSalario() + comissao1<<endl;

    e2.print();
    cout << "Num. Atendimentos: " << numAtendimentos2 << endl;
    cout << "Salário total: " << e2.getSalario() + comissao2<<endl;

    e3.print();
    cout << "Num. Atendimentos: " << numAtendimentos3 << endl;
    cout << "Salário total: " << e3.getSalario() + comissao3<<endl;


    int totalServicos = 0;
    totalServicos = numAtendimentos1 + numAtendimentos2 + numAtendimentos3;
    g1.bonificacao = g1.calcula_bonus(totalServicos);
    g1.print();
    cout << "Salário total: " << g1.getSalario() + g1.bonificacao <<endl;


    return 0;
}
