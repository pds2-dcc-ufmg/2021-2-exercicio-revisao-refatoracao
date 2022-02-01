#include "Venda.hpp"
#include "Gerente.hpp"

#include <vector>

void relatorioClientes(std::vector<Cliente*> clientes)
{
    for(auto cliente : clientes) cliente->imprimeDados();
}

void relatorioVendas(std::vector<Venda> vendas)
{
    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    for(auto venda : vendas) venda.imprimeDados();
}

void relatorioFuncionarios(std::vector<Especialista*> especialistas, std::vector<Gerente*> gerentes)
{
    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;

    for(auto especialista : especialistas) especialista->imprimeDados();
    for(auto gerente : gerentes) gerente->imprimeDados();
}

int main()
{
    std::vector<Cliente*> clientes;
    std::vector<Especialista*> especialistas;
    std::vector<Gerente*> gerentes;
    std::vector<Venda> vendas;

    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    clientes.insert(clientes.end(), {&cliente1, &cliente2, &cliente3, &cliente4, &cliente5});

    Especialista especialista1("Peter Parker", 46, 27061975, 3000, "Fotografia");
    Especialista especialista2("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialista especialista3("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designeeeeer");
    especialistas.insert(especialistas.end(), {&especialista1, &especialista2, &especialista3});

    Gerente gerente1("Nick Fury", 72, 21121948, 10000);
    gerentes.insert(gerentes.end(), {&gerente1});
    
    vendas.push_back(Venda(100, "Fotos do Homem Aranha", &especialista1, &cliente1));
    vendas.push_back(Venda(100, "Troca da tela do telefone", &especialista2, &cliente4));
    vendas.push_back(Venda(150, "Fotos do novo planador", &especialista1, &cliente2));
    vendas.push_back(Venda(10, "Recarga de cartucho", &especialista2, &cliente1));
    vendas.push_back(Venda(10000, "Reconstrucao de Predio", &especialista3, &cliente4));
    vendas.push_back(Venda(3000, "Decoracao de Apartamento no Brooklyn", &especialista3, &cliente5));
    vendas.push_back(Venda(5000, "Reforma do Clarim Diario", &especialista3, &cliente1));
    vendas.push_back(Venda(80, "Formatacao do PC", &especialista2, &cliente3));

    gerente1.adicionaBonificacao(vendas.size());

    relatorioClientes(clientes);
    relatorioVendas(vendas);
    relatorioFuncionarios(especialistas, gerentes);

    return 0;
}
