// Alterei o nome de muitas variaveis, para que seja mais facil o entendimento do codigo
// Retirei uma parte repetida na venda de numero 6
// Adicionei e retirei algumas linhas ociosas para modelar as saidas e cadastros dos dados

#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente_num1;
    cliente_num1.nome = "J. Jonah Jameson";
    cliente_num1.endereco ="Nova York";
	cliente_num1.cep = "35690000";
    cliente_num1.print();

    Cliente cliente_num2;
    cliente_num2.nome = "Norman Osborn";
    cliente_num2.endereco ="Hartlford";
	cliente_num2.cep = "22061955";
    cliente_num2.print();

    Cliente cliente_num3;
    cliente_num3.nome = "Otto Octavius";
    cliente_num3.endereco ="Schenectady";
	cliente_num3.cep = "24051953";
    cliente_num3.print();

    Cliente cliente_num4;
    cliente_num4.nome = "Bruce Benner";
    cliente_num4.endereco ="Dayton";
	cliente_num4.cep = "22111967";
    cliente_num4.print();

    Cliente cliente_num5;
    cliente_num5.nome = "Steve Rogers";
    cliente_num5.endereco ="Lower East Side";
	cliente_num5.cep = "13061981";
    cliente_num5.print();



    Especialista especialista_num1;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    especialista_num1.nome = "Peter Parker";
    especialista_num1.idade = "46";
    especialista_num1.rg_funcionario = 27061975;
    especialista_num1.salario_minimo = 3000;
    especialista_num1.especialidade = "Fotografia";


    Especialista especialista_num2;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    especialista_num2.nome = "Tony Stark";
    especialista_num2.idade = "56";
    especialista_num2.rg_funcionario = 4041965;
    especialista_num2.salario_minimo = 1000;
    especialista_num2.especialidade = "Consertos de equipamentos eletronicos";


    Especialista especialista_num3;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    especialista_num3.nome = "Wanda Maximoff";
    especialista_num3.idade = "32";
    especialista_num3.rg_funcionario = 16021989;
    especialista_num3.salario_minimo = 5000;
    especialista_num3.especialidade = "Engenharia e Designeeeeer";



    Gerente gerente_num1;
    double bonificacao01 = 0;
    gerente_num1.nome = "Nick Fury";
    gerente_num1.idade = "72";
    gerente_num1.rg_funcionario = 21121948;
    gerente_num1.salario_minimo = 10000;



    Venda venda_1;
    venda_1.cliente= "J. Jonah Jameson";
    venda_1.esp_responsavel = especialista_num1;
    venda_1.descricao = "Fotos do Homem Aranha";
    venda_1.valor = 100;
    comissao01 += especialista_num1.comissao(venda_1.valor);
    numAtendimentos01+=1;


    Venda venda_2;
    venda_2.cliente= "Bruce Benner";
    venda_2.esp_responsavel = especialista_num2;
    venda_2.descricao = "Troca da tela do telefone";
    venda_2.valor = 100;
    comissao02 += especialista_num2.comissao(venda_2.valor);
    numAtendimentos02+=1;


    Venda venda_3;
    venda_3.cliente= "Norman Osborn";
    venda_3.esp_responsavel = especialista_num1;
    venda_3.descricao = "Fotos do novo planador";
    venda_3.valor = 150;
    comissao01 += especialista_num1.comissao(venda_3.valor);
    numAtendimentos01+=1;


    Venda venda_4;
    venda_4.cliente= "J. Jonah Jameson";
    venda_4.esp_responsavel = especialista_num2;
    venda_4.descricao = "Recarga de cartucho";
    venda_4.valor = 10;
    comissao02 += especialista_num2.comissao(venda_4.valor);
    numAtendimentos02+=1;


    Venda venda_5;
    venda_5.cliente= "Bruce Benner";
    venda_5.esp_responsavel = especialista_num3;
    venda_5.descricao = "Reconstrucao de Predio";
    venda_5.valor = 10000;
    comissao03 += especialista_num3.comissao(venda_5.valor);
    numAtendimentos03+=1;


    Venda venda_6;
    venda_6.cliente= "Steve Rogers";
    venda_6.esp_responsavel = especialista_num3;
    venda_6.descricao = "Decoracao de Apartamento no Brooklyn";
    venda_6.valor = 3000;
    comissao03 += especialista_num3.comissao(venda_6.valor);
    numAtendimentos03+=1;


    Venda venda_7;
    venda_7.cliente= "J. Jonah Jameson";
    venda_7.esp_responsavel = especialista_num3;
    venda_7.descricao = "Reforma do Clarim Diario";
    venda_7.valor = 5000;
    comissao03 += especialista_num3.comissao(venda_7.valor);
    numAtendimentos03+=1;


    Venda venda_8;
    venda_8.cliente= "Otto Octavius";
    venda_8.esp_responsavel = especialista_num2;
    venda_8.descricao = "Formatacao do PC";
    venda_8.valor = 80;
    comissao02 += especialista_num2.comissao(venda_8.valor);
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;


    venda_1.print();
    cout << " Descricao: " << venda_1.descricao << endl;

    venda_2.print();
    cout << " eDescricao: " << venda_2.descricao << endl;

    venda_3.print();
    cout << " Descricao: " << venda_3.descricao << endl;

    venda_4.print();
    cout << " Descricao: " << venda_4.descricao << endl;

    venda_5.print();
    cout << " Descricao: " << venda_5.descricao << endl;

    venda_6.print();
    cout << " Descricao: " << venda_6.descricao << endl;

    venda_6.print();
    cout << " Descricao: " << venda_6.descricao << endl;

    venda_7.print();
    cout << " Descricao: " << venda_7.descricao << endl;

    venda_8.print();
    cout << " Descricao: " << venda_8.descricao << endl;



    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;


    especialista_num1.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << especialista_num1.salario_minimo + comissao01<<endl;

    especialista_num2.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << especialista_num2.salario_minimo + comissao02<<endl;

    especialista_num3.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << especialista_num3.salario_minimo + comissao03<<endl;



    int num_total_servicos = 0;
    num_total_servicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    gerente_num1.bonificacao = gerente_num1.calcula_bonif_gerente(num_total_servicos);
    gerente_num1.print();
    cout << "Salario Total: " << gerente_num1.salario_minimo + gerente_num1.bonificacao<<endl;

    return 0;
}
