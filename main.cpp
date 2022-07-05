#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1 = Cliente("J. Jonah Jameson",
                               "Nova York",
                               "35690000");
    cliente1.print();

    Cliente cliente2 = Cliente("Norman Osborn",
                               "Hartlford",
                               "22061955");
    cliente2.print();

    Cliente cliente3 = Cliente("Otto Octavius",
                               "Schenectady",
                               "24051953");
    cliente3.print();

    Cliente cliente4 = Cliente("Bruce Benner",
                               "Dayton",
                               "22111967");
    cliente4.print();

    Cliente cliente5 = Cliente("Steve Rogers",
                               "Lower East Side",
                               "13061981");
    cliente5.print();

    Especialista e01 = Especialista(3000,
                                    "46",
                                    "Peter Parker",
                                    27061975,
                                    "Fotografia");
    int numAtendimentos01 = 0;
    double comissao01 = 0;

    Especialista e02 = Especialista(1000,
                                    "56",
                                    "Tony Stark",
                                    4041965,
                                    "Consertos de equipamentos eletronicos");
    int numAtendimentos02 = 0;
    double comissao02 = 0;


    Especialista e03 = Especialista(5000,
                                    "32",
                                    "Wanda Maximoff",
                                    16021989,
                                    "Engenharia e Designeeeeer");
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    
    Gerente g01 = Gerente(10000,
                          "72",
                          "Nick Fury",
                          21121948);
    double bonificacao01 = 0;

    Venda v01 = Venda(100,
                      "Fotos do Homem Aranha",
                      e01,
                      cliente1);
    comissao01 += e01.comissao(v01.getValor());
    numAtendimentos01+=1;

    Venda v02 = Venda(100,
                      "Troca da tela do telefone",
                      e02,
                      cliente4);
    comissao02 += e02.comissao(v02.getValor());
    numAtendimentos02+=1;

    Venda v03 = Venda(150,
                      "Fotos do novo planador",
                      e01,
                      cliente2);
    comissao01 += e01.comissao(v03.getValor());
    numAtendimentos01+=1;

    Venda v04 = Venda(10,
                      "Recarga de cartucho",
                      e02,
                      cliente1);
    comissao02 += e02.comissao(v04.getValor());
    numAtendimentos02+=1;

    Venda v05 = Venda(10000,
                      "Reconstrucao de Predio",
                      e03,
                      cliente4);
    comissao03 += e03.comissao(v05.getValor());
    numAtendimentos03+=1;

    Venda v06 = Venda(3000,
                      "Decoracao de Apartamento no Brooklyn",
                      e03,
                      cliente5);
    comissao03 += e03.comissao(v06.getValor());
    numAtendimentos03+=1;

    Venda v07 = Venda(5000,
                      "Reforma do Clarim Diario",
                      e03,
                      cliente1);
    comissao03 += e03.comissao(v07.getValor());
    numAtendimentos03+=1;

    Venda v08 = Venda(80,
                      "Formatacao do PC",
                      e02,
                      cliente3);
    comissao02 += e02.comissao(v08.getValor());
    numAtendimentos02+=1;

    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.getDescricao() << endl;

    v02.print();
    cout << " Descricao: " << v02.getDescricao() << endl;

    v03.print();
    cout << " Descricao: " << v03.getDescricao() << endl;

    v04.print();
    cout << " Descricao: " << v04.getDescricao() << endl;

    v05.print();
    cout << " Descricao: " << v05.getDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getDescricao() << endl;

    v07.print();
    cout << " Descricao: " << v07.getDescricao() << endl;

    v08.print();
    cout << " Descricao: " << v08.getDescricao() << endl;

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.getSalarioBase()+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.getSalarioBase()+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.getSalarioBase()+comissao03<<endl;

    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.getSalarioBase() + g01.getBonificacao()<<endl;

    return 0;
}
