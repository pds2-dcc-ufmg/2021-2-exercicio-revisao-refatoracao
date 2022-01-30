#include <iostream>
#include <vector>

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"

int main() {
    vector<Cliente*> m_clientes;
    vector<Especialista*> m_especialistas;
    vector<Venda*> m_vendas;

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

    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");
    m_especialistas.push_back(&e01);

    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    m_especialistas.push_back(&e02);

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");
    m_especialistas.push_back(&e03);

    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.IDADE = "72";
    g01.rgFunc = 21121948;
    g01.SalarioBase = 10000;

    Venda v01("J. Jonah Jameson", &e01, "Fotos do Homem Aranha", 100);
    m_vendas.push_back(&v01);

    Venda v02("Bruce Benner", &e02, "Troca da tela do telefone", 100);
    m_vendas.push_back(&v02);

    Venda v03("Norman Osborn", &e01, "Fotos do novo planador", 150);
    m_vendas.push_back(&v03);

    Venda v04("J. Jonah Jameson", &e02, "Recarga de cartucho", 10);
    m_vendas.push_back(&v04);

    Venda v05("Bruce Benner", &e03, "Reconstrucao de Predio", 10000);
    m_vendas.push_back(&v05);

    Venda v06("Steve Rogers", &e03, "Decoracao de Apartamento no Brooklyn", 3000);
    m_vendas.push_back(&v06);

    Venda v07("J. Jonah Jameson", &e03, "Reforma do Clarim Diario", 5000);
    m_vendas.push_back(&v07);

    Venda v08("Otto Octavius", &e02, "Formatacao do PC", 80);
    m_vendas.push_back(&v08);

    std::cout << " \n \n           Relatorio das Vendas \n"
              << std::endl;

    for (const auto& venda : m_vendas) {
        venda->print();
    }

    std::cout << " \n \n           Relatorio dos Funcionarios \n"
              << std::endl;

    for (const auto& especialista : m_especialistas) {
        especialista->print();
    }

    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01._numAtendimentos + e02._numAtendimentos + e03._numAtendimentos;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    std::cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao << std::endl;

    return 0;
}
