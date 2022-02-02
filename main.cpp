#include <iostream>
#include <iomanip>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    Cliente cliente1;
    cliente1.nome = "J. Jonah Jameson";
    cliente1.endereco ="Nova York";
	cliente1.cep = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2.nome = "Norman Osborn";
    cliente2.endereco ="Hartlford";
	cliente2.cep = "22061955";
    cliente2.print();

    Cliente cliente3;
    cliente3.nome = "Otto Octavius";
    cliente3.endereco ="Schenectady";
	cliente3.cep = "24051953";
    cliente3.print();

    Cliente cliente4;
    cliente4.nome = "Bruce Benner";
    cliente4.endereco ="Dayton";
	cliente4.cep = "22111967";
    cliente4.print();

    Cliente cliente5;
    cliente5.nome = "Steve Rogers";
    cliente5.endereco ="Lower East Side";
	cliente5.cep = "13061981";
    cliente5.print();


    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.nome = "Peter Parker";
    e01.idade = "46";
    e01.rg_func = 27061975;
    e01.salario_base = 3000;
    e01.especialidade = "Fotografia";

    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.nome = "Tony Stark";
    e02.idade = "56";
    e02.rg_func = 4041965;
    e02.salario_base = 1000;
    e02.especialidade = "Consertos de equipamentos eletronicos";

    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.nome = "Wanda Maximoff";
    e03.idade = "32";
    e03.rg_func = 16021989;
    e03.salario_base = 5000;
    e03.especialidade = "Engenharia e Designeeeeer";

    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.idade = "72";
    g01.rg_func = 21121948;
    g01.salario_base = 10000;

    Venda v01;
    v01.cliente= "J. Jonah Jameson";
    v01.esp = e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.VALOR = 100;
    comissao01 += e01.comissao(v01.VALOR);
    numAtendimentos01+=1;

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

    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();
    std::cout << " Descricao: " << v01.descricao << std::endl;

    v02.print();
    std::cout << " Descricao: " << v02.descricao << std::endl;

    v03.print();
    std::cout << " Descricao: " << v03.descricao << std::endl;

    v04.print();
    std::cout << " Descricao: " << v04.descricao << std::endl;

    v05.print();
    std::cout << " Descricao: " << v05.descricao << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.descricao << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.descricao << std::endl;

    v07.print();
    std::cout << " Descricao: " << v07.descricao << std::endl;

    v08.print();
    std::cout << " Descricao: " << v08.descricao << std::endl;

    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01.print();
    std::cout << "Num Atendimentos: " << numAtendimentos01 << std::endl;
    std::cout << "Salario Total: " << e01.salario_base+comissao01<<std::endl;

    e02.print();
    std::cout << "Num Atendimentos: " << numAtendimentos02 << std::endl;
    std::cout << "Salario Total: " << e02.salario_base+comissao02<<std::endl;

    e03.print();
    std::cout << "Num Atendimentos: " << numAtendimentos03 << std::endl;
    std::cout << "Salario Total: " << e03.salario_base+comissao03<<std::endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    std::cout << "Salario Total: " << g01.salario_base + g01.bonificacao<<std::endl;

    return 0;
}
