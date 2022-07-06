#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

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


    Especialista e01("Peter Parker", "46", 27061975, 3000 , "Fotografia");

    Especialista e02("Tony Stark", "56", 4041965, 1000 , "Consertos de equipamentos eletronicos");

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000 , "Engenharia e Designeeeeer");


    Gerente g01("Nick Fury", "72", 21121948, 10000);


    Venda v01(100, "Fotos do Homem Aranha", e01, cliente1);
    e01.calcula_COMISSAO_ESPECIALISTA(v01.getValor());
    e01.incNumAtendimentos();

    Venda v02(100, "Troca da tela do telefone", e02, cliente4);
    e02.calcula_COMISSAO_ESPECIALISTA(v02.getValor());
    e02.incNumAtendimentos();

    Venda v03(150, "Fotos do novo planador", e01, cliente2);
    e01.calcula_COMISSAO_ESPECIALISTA(v03.getValor());
    e01.incNumAtendimentos();

    Venda v04(10, "Recarga de cartucho", e02, cliente1);
    e02.calcula_COMISSAO_ESPECIALISTA(v04.getValor());
    e02.incNumAtendimentos();

    Venda v05(10000, "Reconstrucao de Predio", e03, cliente4);
    e03.calcula_COMISSAO_ESPECIALISTA(v05.getValor());
    e03.incNumAtendimentos();

    Venda v06(3000, "Decoracao de Apartamento no Brooklyn", e03, cliente5);
    e03.calcula_COMISSAO_ESPECIALISTA(v06.getValor());
    e03.incNumAtendimentos();

    Venda v07(5000, "Reforma do Clarim Diario", e03, cliente1);
    e03.calcula_COMISSAO_ESPECIALISTA(v07.getValor());
    e03.incNumAtendimentos();

    Venda v08(80, "Formatacao do PC", e02, cliente3);
    e02.calcula_COMISSAO_ESPECIALISTA(v08.getValor());
    e02.incNumAtendimentos();


    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();
    std::cout << " Descricao: " << v01.getDescricao() << std::endl;

    v02.print();
    std::cout << " Descricao: " << v02.getDescricao() << std::endl;

    v03.print();
    std::cout << " Descricao: " << v03.getDescricao() << std::endl;

    v04.print();
    std::cout << " Descricao: " << v04.getDescricao() << std::endl;

    v05.print();
    std::cout << " Descricao: " << v05.getDescricao() << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.getDescricao() << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.getDescricao() << std::endl;

    v07.print();
    std::cout << " Descricao: " << v07.getDescricao() << std::endl;

    v08.print();
    std::cout << " Descricao: " << v08.getDescricao() << std::endl;


    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01.print();
    std::cout << "Num Atendimentos: " << e01.getNumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e01.calcula_SALARIO_TOTAL() << std::endl;

    e02.print();
    std::cout << "Num Atendimentos: " << e02.getNumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e02.calcula_SALARIO_TOTAL() << std::endl;

    e03.print();
    std::cout << "Num Atendimentos: " << e03.getNumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e03.calcula_SALARIO_TOTAL() << std::endl;


    int NUMTOTALservicos = e01.getNumAtendimentos() + e02.getNumAtendimentos() + e03.getNumAtendimentos();
    g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    std::cout << "Salario Total: " << g01.calcula_SALARIO_TOTAL() << std::endl;

    return 0;
}