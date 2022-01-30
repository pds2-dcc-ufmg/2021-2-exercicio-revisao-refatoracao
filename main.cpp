#include <iostream>
#include <vector>

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"

int main() {
    int num_total_vendas = 0;

    std::vector<Cliente*> m_clientes;
    std::vector<Especialista*> m_especialistas;
    std::vector<Venda*> m_vendas;

    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    m_clientes.push_back(&cliente1);

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    m_clientes.push_back(&cliente2);

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    m_clientes.push_back(&cliente3);

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    m_clientes.push_back(&cliente4);

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    m_clientes.push_back(&cliente5);

    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");
    m_especialistas.push_back(&e01);

    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    m_especialistas.push_back(&e02);

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");
    m_especialistas.push_back(&e03);

    Gerente g01("Nick Fury", "72", 21121948, 10000);

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

    for (const auto& cliente : m_clientes) {
        cliente->print();
    }

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

    num_total_vendas = e01._numAtendimentos + e02._numAtendimentos + e03._numAtendimentos;
    g01._bonificacao = g01.calcula_BONIFICACAO_GERENTE(num_total_vendas);
    g01.print();

    return 0;
}
