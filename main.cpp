#include <iostream>
#include <string>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    Cliente jonahJ;
    jonahJ._nome = "J. Jonah Jameson";
    jonahJ._endereco ="Nova York";
    jonahJ._cep = "35690000";
    jonahJ.imprimeDadosCliente();

    Cliente normanO;
    normanO._nome = "Norman Osborn";
    normanO._endereco ="Hartlford";
    normanO._cep = "22061955";
    normanO.imprimeDadosCliente();

    Cliente ottoO;
    ottoO._nome = "Otto Octavius";
    ottoO._endereco ="Schenectady";
    ottoO._cep = "24051953";
    ottoO.imprimeDadosCliente();

    Cliente bruceB;
    bruceB._nome = "Bruce Benner";
    bruceB._endereco ="Dayton";
    bruceB._cep = "22111967";
    bruceB.imprimeDadosCliente();

    Cliente steveR;
    steveR._nome = "Steve Rogers";
    steveR._endereco ="Lower East Side";
    steveR._cep = "13061981";
    steveR.imprimeDadosCliente();


    Especialista peterP;
    int numAtendimentosPeter = 0;
    double comissaoPeter = 0;
    peterP._nome = "Peter Parker";
    peterP._idade = "46";
    peterP._rgFuncionario = 27061975;
    peterP._salarioBase = 3000;
    peterP._especialidade = "Fotografia";



    Especialista tonyS;
    int numAtendimentosTony = 0;
    double comissaoTony = 0;
    tonyS._nome = "Tony Stark";
    tonyS._idade = "56";
    tonyS._rgFuncionario = 4041965;
    tonyS._salarioBase = 1000;
    tonyS._especialidade = "Consertos de equipamentos eletrônicos";


    Especialista wandaM;
    int numAtendimentosWanda = 0;
    double comissaoWanda = 0;
    wandaM._nome = "Wanda Maximoff";
    wandaM._idade = "32";
    wandaM._rgFuncionario = 16021989;
    wandaM._salarioBase = 5000;
    wandaM._especialidade = "Engenharia e Designer";


    Gerente nickF;
    double bonificacaoNick = 0;
    nickF._nome = "Nick Fury";
    nickF._idade = "72";
    nickF._rgFuncionario = 21121948;
    nickF._salarioBase = 10000;


    Venda v01;
    v01._cliente = jonahJ;
    v01._especialista = peterP;
    v01._descricao = "Fotos do Homem Aranha";
    v01._valor = 100;
    comissaoPeter += peterP.calcularComissao(v01._valor);
    numAtendimentosPeter += 1;


    Venda v02;
    v02.cliente= "Bruce Benner";
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.VALOR = 100;
    comissao02 += e02.comissao(v02.VALOR);
    numAtendimentos02+=1;


    Venda v03;
    v03.cliente= "Norman Osborn";
    v03.esp = e01;
    v03.descricao = "Fotos do novo planador";
    v03.VALOR = 150;
    comissao01 += e01.comissao(v03.VALOR);
    numAtendimentos01+=1;


    Venda v04;
    v04.cliente= "J. Jonah Jameson";
    v04.esp = e02;
    v04.descricao = "Recarga de cartucho";
    v04.VALOR = 10;
    comissao02 += e02.comissao(v04.VALOR);
    numAtendimentos02+=1;


    Venda v05;
    v05.cliente= "Bruce Benner";
    v05.esp = e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.VALOR = 10000;
    comissao03 += e03.comissao(v05.VALOR);
    numAtendimentos03+=1;


    Venda v06;
    v06.cliente= "Steve Rogers";
    v06.esp = e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;
    comissao03 += e03.comissao(v06.VALOR);
    numAtendimentos03+=1;


    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;



    Venda v07;
    v07.cliente= "J. Jonah Jameson";
    v07.esp = e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.VALOR = 5000;
    comissao03 += e03.comissao(v07.VALOR);
    numAtendimentos03+=1;


    Venda v08;
    v08.cliente= "Otto Octavius";
    v08.esp = e02;
    v08.descricao = "Formatacao do PC";
    v08.VALOR = 80;
    comissao02 += e02.comissao(v08.VALOR);
    numAtendimentos02+=1;



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
