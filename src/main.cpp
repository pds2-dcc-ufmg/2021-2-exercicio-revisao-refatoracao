#include <iostream>
#include <list>
#include <vector>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    //Contabilização de Gerentes, Especialistas, Clientes e Vendas
    Gerente gerente = Gerente("Nick Fury", "72", 21121948, 10000.0, 0.0);

    std::vector<Especialista> especialistas;
    especialistas.emplace_back("Peter Parker", "46", 27061975, 3000.0, "Fotografia", 0.0, 0.0);
    especialistas.emplace_back("Tony Stark", "56", 4041965, 1000.0, "Consertos de equipamentos eletronicos", 0.0, 0.0);
    especialistas.emplace_back("Wanda Maximoff", "32", 16021989, 5000.0, "Engenharia e Designeeeeer", 0.0, 0.0);

    std::vector<Cliente> clientes;
    clientes.emplace_back("J. Jonah Jameson", "Nova York", "35690000");
    clientes.emplace_back("Norman Osborn", "Hartlford", "22061955");
    clientes.emplace_back("Otto Octavius", "Schenectady", "24051953");
    clientes.emplace_back("Bruce Benner", "Dayton", "22111967");
    clientes.emplace_back("Steve Rogers", "Lower East Side", "13061981");

    std::vector<Venda> vendas;
    vendas.emplace_back(clientes[0], especialistas[0], "Fotos do Homem Aranha", 100.0);
    vendas.emplace_back(clientes[3], especialistas[1], "Troca da tela do telefone", 100.0);
    vendas.emplace_back(clientes[1], especialistas[0], "Fotos do novo planador", 150.0);
    vendas.emplace_back(clientes[0], especialistas[1], "Recarga de cartucho", 10.0);
    vendas.emplace_back(clientes[3], especialistas[2], "Reconstrucao de Predio", 10000.0);
    vendas.emplace_back(clientes[4], especialistas[2], "Decoracao de Apartamento no Brooklyn", 3000.0);
    vendas.emplace_back(clientes[0], especialistas[2], "Reforma do Clarim Diario", 5000.0);
    vendas.emplace_back(clientes[2], especialistas[1], "Formatacao do PC", 80.0);
    for (Venda &venda : vendas)
    {
        venda.getEspecialista().acrescentarComissao(venda.getValor());
        gerente.acrescentarBonificacao();
    }

    // Impressão do relatório de clientes
    for (Cliente &cliente : clientes)
    {
        cliente.imprimirDados();
    }

    // Impressão do relatório de vendas efetuadas
    std::cout << " \n \n           Relatorio das Vendas \n"
              << std::endl;

    for (Venda &venda : vendas)
    {
        venda.imprimirDados();
        std::cout << " Descricao: " << venda.getDescricao() << std::endl;
    }

    // Impressão do relatório de desempenho dos especialistas
    std::cout << " \n \n           Relatorio dos Funcionarios \n"
              << std::endl;

    for (Especialista &especialista : especialistas)
    {
        especialista.imprimirDados();
        std::cout << "Num Atendimentos: " << especialista.getNumAtendimentos() << std::endl;
        std::cout << "Salario Total: " << especialista.getSalarioMinimo() + especialista.getComissao() << std::endl;
    }

    // Impressão do relatório de desempenho do gerente
    gerente.imprimirDados();
    std::cout << "Salario Total: " << gerente.getSalarioTotal() << std::endl;

    return 0;
}