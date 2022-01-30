#include <iostream>
#include <vector>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    std::vector<Cliente> vetorClientes;

    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    vetorClientes.push_back(cliente1);

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    vetorClientes.push_back(cliente2);

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    vetorClientes.push_back(cliente3);

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    vetorClientes.push_back(cliente4);

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    vetorClientes.push_back(cliente5);

    for (const auto &element : vetorClientes)
    {
        element.imprimirDados();
    }

    Especialista especialista1("Peter Parker", 46, "27061975", 3000, "Fotografia");

    Especialista especialista2("Tony Stark", 56, "4041965", 1000, "Consertos de equipamentos eletronicos");

    Especialista especialista3("Wanda Maximoff", 32, "16021989", 5000, "Engenharia e Designeeeeer");

    Gerente gerente1("Nick Fury", 72, "21121948", 10000);
    double bonificacao01 = 0; // pode tirar ne?

    std::vector<Venda> vetorVendas;
    Venda venda1(cliente1, &especialista1, "Fotos do Homem Aranha", 100);
    vetorVendas.push_back(venda1);

    Venda venda2(cliente4, &especialista2, "Troca da tela do telefone", 100);
    vetorVendas.push_back(venda2);

    Venda venda3(cliente2, &especialista1, "Fotos do novo planador", 150);
    vetorVendas.push_back(venda3);

    Venda venda4(cliente1, &especialista2, "Recarga de cartucho", 10);
    vetorVendas.push_back(venda4);

    Venda venda5(cliente4, &especialista3, "Reconstrucao de Predio", 10000);
    vetorVendas.push_back(venda5);

    Venda venda6(cliente5, &especialista3, "Decoracao de Apartamento no Brooklyn", 3000);
    vetorVendas.push_back(venda6);

    Venda venda7(cliente1, &especialista3, "Reforma do Clarim Diario", 5000);
    vetorVendas.push_back(venda7);

    Venda venda8(cliente3, &especialista2, "Formatacao do PC", 80);
    vetorVendas.push_back(venda8);

    std::cout << " \n \n           Relatorio das Vendas \n"
              << std::endl;

    for (const auto &element : vetorVendas)
    {
        element.imprimirDados();
    }

    std::vector<Especialista> vetorEspecialistas;

    vetorEspecialistas.push_back(especialista1);
    vetorEspecialistas.push_back(especialista2);
    vetorEspecialistas.push_back(especialista3);

    std::cout << " \n \n           Relatorio dos Funcionarios \n"
              << std::endl;

    int numTotalServicos = 0;
    for (const auto &element : vetorEspecialistas)
    {
        element.imprimirDados();
        numTotalServicos += element.getNumAtendimentos();
    }

    gerente1.atribuirBonificacao(numTotalServicos);
    gerente1.imprimirDados();

    return 0;
}
