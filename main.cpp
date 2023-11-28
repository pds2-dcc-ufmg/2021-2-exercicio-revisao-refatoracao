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
    v02._cliente = bruceB;
    v02._especialista = tonyS;
    v02._descricao = "Troca da tela do telefone";
    v02._valor = 100;
    comissaoTony += tonyS.calcularComissao(v02._valor);
    numAtendimentosTony += 1;

    Venda v03;
    v03._cliente = normanO;
    v03._especialista = peterP;
    v03._descricao = "Fotos do novo planador";
    v03._valor = 150;
    comissaoPeter += peterP.calcularComissao(v03._valor);
    numAtendimentosPeter += 1;

    Venda v04;
    v04._cliente = jonahJ;
    v04._especialista = tonyS;
    v04._descricao = "Recarga de cartucho";
    v04._valor = 10;
    comissaoTony += tonyS.calcularComissao(v04._valor);
    numAtendimentosTony += 1;

    Venda v05;
    v05._cliente = bruceB;
    v05._especialista = wandaM;
    v05._descricao = "Reconstrução de Prédio";
    v05._valor = 10000;
    comissaoWanda += wandaM.calcularComissao(v05._valor);
    numAtendimentosWanda += 1;

    Venda v06;
    v06._cliente = steveR;
    v06._especialista = wandaM;
    v06._descricao = "Decoração de Apartamento no Brooklyn";
    v06._valor = 3000;
    comissaoWanda += wandaM.calcularComissao(v06._valor);
    numAtendimentosWanda += 1;

    Venda v07;
    v07._cliente = jonahJ;
    v07._especialista = wandaM;
    v07._descricao = "Reforma do Clarim Diário";
    v07._valor = 5000;
    comissaoWanda += wandaM.calcularComissao(v07._valor);
    numAtendimentosWanda += 1;


    Venda v08;
    v08._cliente = ottoO;
    v08._especialista = tonyS;
    v08._descricao = "Formatação do PC";
    v08._valor = 80;
    comissaoTony += tonyS.calcularComissao(v08._valor);
    numAtendimentosTony += 1;


    std::cout << "\n Relatório das Vendas \n" << std::endl;

    v01.imprimeVenda();
    v02.imprimeVenda();
    v03.imprimeVenda();
    v04.imprimeVenda();
    v05.imprimeVenda();
    v06.imprimeVenda();
    v06.imprimeVenda();
    v07.imprimeVenda();
    v08.imprimeVenda();


    std::cout << "\n Relatório dos Funcionários \n" << std::endl;
    peterP.imprimeDadosEspecialista();
    std::cout << "Número de Atendimentos: " << numAtendimentosPeter << std::endl;
    std::cout << "Salário Total: " << peterP.salario << std::endl;

    tonyS.imprimeDadosEspecialista();
    std::cout << "Número de Atendimentos: " << numAtendimentosTony << std::endl;
    std::cout << "Salário Total: " << tonyS.salario<< std::endl;

    wandaM.imprimeDadosEspecialista();
    std::cout << "Número de Atendimentos: " << numAtendimentosWanda << std::endl;
    std::cout << "Salário Total: " << wandaM.salario << std::endl;


    int numTotalServicos = 0;
    numTotalServicos = numAtendimentosPeter + numAtendimentosTony + numAtendimentosWanda;
    nickF.bonificacao = nickF.calcularBonificacaoGerente(numTotalServicos);
    nickF.imprimeDadosGerente();
    cout << "Salario Total: " << nickF.salario << std::endl;

    return 0;
}
