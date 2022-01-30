#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

#include <iostream>
#include <string>

int main()
{
    
    Cliente cliente1 = Cliente ("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.print();

    Cliente cliente2 = Cliente("Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", "24051953");
    cliente3.print();

    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
    cliente4.print();

    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");
    cliente5.print();


    Especialista e01 = Especialista("Peter Parker", 27061975, 46, 3000, "Fotografia");

    Especialista e02 = Especialista("Tony Stark", 4041965, 56, 1000, "Consertos de equipamentos eletronicos");

    Especialista e03 = Especialista("Wanda Maximoff", 16021989, 32, 5000, "Engenharia e Designeeeeer");


    Gerente g01 = Gerente("Nick Fury", 21121948, 72, 10000);


    Venda v01 = Venda(100, "Fotos do Homem Aranha", &e01, &cliente1);
    v01.adicionarComissao();

    Venda v02 = Venda(100, "Troca da tela do telefone", &e02, &cliente4);
    v02.adicionarComissao();

    Venda v03 = Venda(150, "Fotos do novo planador", &e01, &cliente2);
    v03.adicionarComissao();

    Venda v04 = Venda(10, "Recarga de cartucho", &e02, &cliente1);
    v04.adicionarComissao();

    Venda v05 = Venda(10000, "Reconstrucao de Predio", &e03, &cliente4);
    v05.adicionarComissao();

    Venda v06 = Venda(3000, "Decoracao de Apartamento no Brooklyn", &e03, &cliente5);
    v06.adicionarComissao();

    Venda v07 = Venda(5000, "Reforma do Clarim Diario", &e03, &cliente1);
    v07.adicionarComissao();

    Venda v08 = Venda(80, "Formatacao do PC", &e02, &cliente3);
    v08.adicionarComissao();


    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();
    v02.print();
    v03.print();
    v04.print();
    v05.print();
    v06.print();
    v07.print();
    v08.print();



    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;

    e01.print();
    e02.print();
    e03.print();

    int numTotalServicos = 0;
    numTotalServicos = e01.getNumAtendimentos() + e02.getNumAtendimentos() + e03.getNumAtendimentos();
    g01.setBonificacao(g01.calcularBonificacao(numTotalServicos));
    g01.print();
    std::cout << "Salario Total: " << g01.getSalarioBase() + g01.getBonificacao() << std::endl;

    return 0;
}
