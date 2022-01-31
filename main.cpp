#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    //-------------Clientes-------------
    Cliente cliente1("J. Jonah Jameson", "Nova York", 35690000);
    cliente1.imprimirDados();

    Cliente cliente2("Norman Osborn", "Hartlford", 22061955);
    cliente2.imprimirDados();

    Cliente cliente3("Otto Octavius", "Schenectady", 24051953);
    cliente3.imprimirDados();

    Cliente cliente4("Bruce Benner", "Dayton", 22111967);
    cliente4.imprimirDados();

    Cliente cliente5("Steve Rogers", "Lower East Side", 13061981);
    cliente5.imprimirDados();

    //-------------Especialistas-------------
    Especialista especialista1("Peter Parker", 46, 3000, 27061975, "Fotografia");
    especialista1.imprimirDados();

    Especialista especialista2("Tony Stark", 56, 1000, 4041965, "Consertos de equipamentos eletronicos");
    especialista2.imprimirDados();

    Especialista especialista3("Wanda Maximoff", 32, 5000, 16021989, "Engenharia e Designer");
    especialista3.imprimirDados();

    //-------------Gerente-------------
    Gerente gerente1("Nick Fury", 72, 10000, 21121948);
    gerente1.imprimirDados();

    //-------------Vendas-------------
    Venda venda1(100.0, "Fotos do Homem Aranha", especialista1, cliente1);
    especialista1.adicionaAtendimento();
    especialista1.adicionaComissao(venda1.valor);

    Venda venda2(100.0, "Troca da tela do telefone", especialista2, cliente4);
    especialista2.adicionaAtendimento();
    especialista2.adicionaComissao(venda2.valor);

    Venda venda3(150.0, "Fotos do novo planador", especialista1, cliente2);
    especialista1.adicionaAtendimento();
    especialista1.adicionaComissao(venda3.valor);

    Venda venda4(10.0, "Recarga de cartucho", especialista2, cliente1);
    especialista2.adicionaAtendimento();
    especialista2.adicionaComissao(venda4.valor);

    Venda venda5(10000.0, "Reconstrucao de Predio", especialista3, cliente4);
    especialista3.adicionaAtendimento();
    especialista3.adicionaComissao(venda5.valor);

    Venda venda6(3000.0, "Decoracao de Apartamento no Brooklyn", especialista3, cliente5);
    especialista3.adicionaAtendimento();
    especialista3.adicionaComissao(venda6.valor);

    Venda venda7(5000.0, "Reforma do Clarim Diario", especialista3, cliente1);
    especialista3.adicionaAtendimento();
    especialista3.adicionaComissao(venda7.valor);

    Venda venda8(80.0, "Formatacao do PC", especialista2, cliente3);
    especialista2.adicionaAtendimento();
    especialista2.adicionaComissao(venda8.valor);

    cout <<" \n \n           Relatorio das Vendas \n" << endl;

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


    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
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
