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


    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia", 0, 0);

    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos", 0, 0);

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer", 0, 0);


    Gerente g01("Nick Fury", "72", 21121948, 10000,  0);


    Venda v01(100, "Fotos do Homem Aranha", e01, "J. Jonah Jameson");
    v01.getEsp().somaComissao(v01.getEsp().calculaComissao(v01.getValor()));
    v01.getEsp().somaNumAtendimentos(1);

    Venda v02(100, "Troca da tela do telefone", e02, "Bruce Benner");
    v02.getEsp().somaComissao(v02.getEsp().calculaComissao(v02.getValor()));
    v02.getEsp().somaNumAtendimentos(1);

    Venda v03(150, "Fotos do novo planador", e01, "Norman Osborn");
    v03.getEsp().somaComissao(v03.getEsp().calculaComissao(v03.getValor()));
    v03.getEsp().somaNumAtendimentos(1);
 
    Venda v04(10, "Recarga de cartucho", e02, "J. Jonah Jameson");
    v04.getEsp().somaComissao(v04.getEsp().calculaComissao(v04.getValor()));
    v04.getEsp().somaNumAtendimentos(1);
 
    Venda v05(10000, "Reconstrucao de Predio", e03, "Bruce Benner");
    v05.getEsp().somaComissao(v05.getEsp().calculaComissao(v05.getValor()));
    v05.getEsp().somaNumAtendimentos(1);

    Venda v06(3000, "Decoracao de Apartamento no Brooklyn", e03, "Steve Rogers");
    v06.getEsp().somaComissao(v06.getEsp().calculaComissao(v06.getValor()));
    v06.getEsp().somaNumAtendimentos(1);

    Venda v07(5000, "Reforma do Clarim Diario", e03, "J. Jonah Jameson");
    v07.getEsp().somaComissao(v07.getEsp().calculaComissao(v07.getValor()));
    v07.getEsp().somaNumAtendimentos(1);
 
    Venda v08(80, "Formatacao do PC", e02, "Otto Octavius");
    v08.getEsp().somaComissao(v08.getEsp().calculaComissao(v08.getValor()));
    v08.getEsp().somaNumAtendimentos(1);


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
    cout << "Num Atendimentos: " << e01.getNumAtendimentos() << endl;
    cout << "Salario Total: " << e01.getSalarioBase() + e01.getComissao() << endl;

    e02.print();
    cout << "Num Atendimentos: " << e02.getNumAtendimentos() << endl;
    cout << "Salario Total: " << e02.getSalarioBase() + e02.getComissao() << endl;

    e03.print();
    cout << "Num Atendimentos: " << e03.getNumAtendimentos() << endl;
    cout << "Salario Total: " << e03.getSalarioBase()+ e03.getComissao() << endl;


    int numTotalServicos = 0;
    numTotalServicos = e01.getNumAtendimentos() + e02.getNumAtendimentos() + e03.getNumAtendimentos();
    g01.setBonificacao(g01.calculaBonificacao(numTotalServicos));
    g01.print();
    cout << "Salario Total: " << g01.getSalarioBase() + g01.getBonificacao() << endl;

    return 0;
}
