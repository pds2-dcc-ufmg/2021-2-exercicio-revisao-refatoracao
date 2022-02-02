#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>

using namespace std;


int main()
{
    vector<Venda> vendas;

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

    int num_atendimentos_01 = 0;
    double comissao_01 = 0;
    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");

    int num_atendimentos_02 = 0;
    double comissao_02 = 0;
    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");

    int num_atendimentos_03 = 0;
    double comissao_03 = 0;
    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");

    Gerente g01("Nick Fury", "72", 21121948, 10000);

    Venda v01("J. Jonah Jameson", e01, "Fotos do Homem Aranha", 100);
    comissao_01 += e01.comissao(v01.valor);
    num_atendimentos_01+=1;
    vendas.push_back(v01);
    
    Venda v02("Bruce Benner", e02, "Troca da tela do telefone", 100);
    comissao_02 += e02.comissao(v02.valor);
    num_atendimentos_02+=1;
    vendas.push_back(v02);

    Venda v03("Norman Osborn", e01, "Fotos do novo planador", 150);
    comissao_01 += e01.comissao(v03.valor);
    num_atendimentos_01+=1;
    vendas.push_back(v03);

    Venda v04("J. Jonah Jameson", e02, "Recarga de cartucho", 10);
    comissao_02 += e02.comissao(v04.valor);
    num_atendimentos_02+=1;
    vendas.push_back(v04);

    Venda v05("Bruce Benner", e03, "Reconstrucao de Predio", 10000);
    comissao_03 += e03.comissao(v05.valor);
    num_atendimentos_03+=1;
    vendas.push_back(v05);

    Venda v06("Steve Rogers", e03, "Decoracao de Apartamento no Brooklyn", 3000);
    comissao_03 += e03.comissao(v06.valor);
    num_atendimentos_03+=1;
    vendas.push_back(v06);

    Venda v07("J. Jonah Jameson", e03, "Reforma do Clarim Diario", 5000);
    comissao_03 += e03.comissao(v07.valor);
    num_atendimentos_03+=1;
    vendas.push_back(v07);

    Venda v08("Otto Octavius", e02, "Formatacao do PC", 80);
    comissao_02 += e02.comissao(v08.valor);
    num_atendimentos_02+=1;
    vendas.push_back(v08);

    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    for(int i = 0;i < (int) vendas.size();i++){
        vendas[i].print();
        std::cout << " Descricao: " << vendas[i].descricao << std::endl;
    }

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << num_atendimentos_01 << endl;
    cout << "Salario Total: " << e01.salario_base+comissao_01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << num_atendimentos_02 << endl;
    cout << "Salario Total: " << e02.salario_base+comissao_02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << num_atendimentos_03 << endl;
    cout << "Salario Total: " << e03.salario_base+comissao_03<<endl;

    int num_total_servicos = 0;
    num_total_servicos = num_atendimentos_01 + num_atendimentos_02 + num_atendimentos_03;
    g01.bonificacao = g01.calcula_bonificacao_gerente(num_total_servicos);
    g01.print();
    cout << "Salario Total: " << g01.salario_base + g01.bonificacao<<endl;

    return 0;
}