#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.print();

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    cliente3.print();

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    cliente4.print();

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    cliente5.print();




    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");

    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designer");

    Gerente g01("Nick Fury", "72", 21121948, 10000, 0);

    Venda v01("J. Jonah Jameson", e01, "Fotos do Homem Aranha", 100);
    e01.addComissao(e01.comissao(v01.getValor()));
    e01.addAtendimento();

    Venda v02("Bruce Benner", e02, "Troca da tela do telefone", 100);
    e02.addComissao(e02.comissao(v02.getValor()));
    e02.addAtendimento();

    Venda v03("Norman Osborn", e01, "Fotos do novo planador", 150);
    e01.addComissao(e01.comissao(v03.getValor()));
    e01.addAtendimento();

    Venda v04("J. Jonah Jameson", e02, "Recarga de cartucho", 10);
    e02.addComissao(e02.comissao(v04.getValor()));
    e02.addAtendimento();

    Venda v05("Bruce Benner", e03, "Reconstrucao de Predio", 10000);
    e03.addComissao(e03.comissao(v05.getValor()));
    e03.addAtendimento();

    Venda v06("Steve Rogers", e03, "Decoracao de Apartamento no Brooklyn", 3000);
    e03.addComissao(e03.comissao(v06.getValor()));
    e03.addAtendimento();

    Venda v07("J. Jonah Jameson", e03, "Reforma do Clarim Diario", 5000);
    e03.addComissao(e03.comissao(v07.getValor()));
    e03.addAtendimento();

    Venda v08("Otto Octavius", e02, "Formatacao do PC", 80);
    e02.addComissao(e02.comissao(v08.getValor()));
    e02.addAtendimento();



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
    cout << "Num Atendimentos: " << e01.getAtendimentos() << endl;
    cout << "Salario Total: " << e01.getSalarioBase()+e01.getComissao() << endl;

    e02.print();
    cout << "Num Atendimentos: " << e02.getAtendimentos() << endl;
    cout << "Salario Total: " << e02.getSalarioBase()+e02.getComissao() << endl;

    e03.print();
    cout << "Num Atendimentos: " << e03.getAtendimentos() << endl;
    cout << "Salario Total: " << e03.getSalarioBase()+e03.getComissao() << endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01.getAtendimentos()+e02.getAtendimentos()+e03.getAtendimentos();
    g01.setBonificacao(g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    g01.print();
    cout << "Salario Total: " << g01.getSalarioBase() + g01.getBonificacao()<<endl;

    return 0;
}
