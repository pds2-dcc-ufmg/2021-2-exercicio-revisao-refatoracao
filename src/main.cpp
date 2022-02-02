#include <iostream>
#include <vector>

using namespace std;

#include "Pessoa.hpp"
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    std::vector<Cliente*> clientes;

    clientes.push_back(new Cliente("J. Jonah Jameson", "Nova York", "35690000"));
    clientes.push_back(new Cliente("Norman Osborn", "Hartlford", "22061955"));
    clientes.push_back(new Cliente("Otto Octavius", "Schenectady", "24051953"));
    clientes.push_back(new Cliente("Bruce Benner", "Dayton", "22111967"));
    clientes.push_back(new Cliente("Steve Rogers", "Lower East Side", "13061981"));

    for (auto cliente : clientes)
        cliente->imprimir_dados();

    std::vector<Especialista*> especialistas;

    especialistas.push_back(new Especialista("Peter Parker", 46, "27061975", 3000, "Fotografia"));
    especialistas.push_back(new Especialista("Tony Stark", 56, "4041965", 1000, "Consertos de equipamentos eletronicos"));
    especialistas.push_back(new Especialista("Wanda Maximoff", 32, "16021989", 5000, "Engenharia e Designeeeeer"));

    Gerente* g01 = new Gerente("Nick Fury", 72, "21121948", 10000);

    std::vector<Venda*> vendas;

    vendas.push_back(new Venda("J. Jonah Jameson", especialistas[0], "Fotos do Homem Aranha", 100));
    vendas.push_back(new Venda("Bruce Benner", especialistas[1], "Troca da tela do telefone", 100));
    vendas.push_back(new Venda("Norman Osborn", especialistas[0], "Fotos do novo planador", 150));
    vendas.push_back(new Venda("J. Jonah Jameson", especialistas[1], "Recarga de cartucho", 10));
    vendas.push_back(new Venda("Bruce Benner", especialistas[2], "Reconstrucao de Predio", 10000));
    vendas.push_back(new Venda("Steve Rogers", especialistas[2], "Decoracao de Apartamento no Brooklyn", 3000));
    vendas.push_back(new Venda("J. Jonah Jameson", especialistas[2], "Reforma do Clarim Diario", 5000));
    vendas.push_back(new Venda("Otto Octavius", especialistas[1], "Formatacao do PC", 80));

    cout <<" \n \n           Relatorio das Vendas \n" << endl;
    for (auto venda : vendas)
        venda->imprimir_dados();

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;

    int num_total_servicos = 0;
    for (auto especialista : especialistas)
    {
        especialista->imprimir_dados();
        num_total_servicos += especialista->get_num_atendimentos();
    }

    g01->calcular_bonificacao(num_total_servicos);
    g01->imprimir_dados();

    return 0;
}
