#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"

int main() {
    Cliente cliente1 = Cliente("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.imprime_dados();

    Cliente cliente2 = Cliente("Norman Osborn", "Hartlford", "22061955");
    cliente2.imprime_dados();

    Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", "24051953");
    cliente3.imprime_dados();

    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
    cliente4.imprime_dados();

    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");
    cliente5.imprime_dados();

    Especialista e01 = Especialista("Peter Parker", 3000, 46, 27061975, "Fotografia");
    Especialista e02 = Especialista("Tony Stark", 1000, 56, 4041965, "Consertos de equipamentos eletronicos");
    Especialista e03 = Especialista("Wanda Maximoff", 5000, 32, 16021989, "Engenharia e Designeeeeer");

    Gerente g01 = Gerente("Nick Fury", 10000, 72, 21121948);

    Venda v01 = Venda(100, "Fotos do Homem Aranha", &e01, &cliente1);
    Venda v02 = Venda(100, "Troca da tela do telefone", &e02, &cliente4);
    Venda v03 = Venda(150, "Fotos do novo planador", &e01, &cliente2);
    Venda v04 = Venda(10, "Recarga de cartucho", &e02, &cliente1);
    Venda v05 = Venda(10000, "Reconstrucao de Predio", &e03, &cliente4);
    Venda v06 = Venda(3000, "Decoracao de Apartamento no Brooklyn", &e03, &cliente5);
    Venda v07 = Venda(5000, "Reforma do Clarim Diario", &e03, &cliente1);
    Venda v08 = Venda(80, "Formatacao do PC", &e02, &cliente3);


    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;
    v01.imprime_dados();
    v02.imprime_dados();
    v03.imprime_dados();
    v04.imprime_dados();
    v05.imprime_dados();
    v06.imprime_dados();
    v06.imprime_dados();
    v07.imprime_dados();
    v08.imprime_dados();

    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01.imprime_dados();
    e02.imprime_dados();
    e03.imprime_dados();

    int total_servicos = e01.getNumAtendimentos() + e02.getNumAtendimentos() + e03.getNumAtendimentos();
    g01.calcula_bonificacao(total_servicos);
    g01.imprime_dados();

    return 0;
}
