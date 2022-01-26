#include <iostream>
#include <list>
#include <vector>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

// Função para criação de um novo gerente
Gerente novoGerente(std::string nome,
                    std::string idade,
                    int rgFunc,
                    double salarioMinimo,
                    double bonificacao);

// Função para criação de um novo especialista
Especialista novoEspecialista(std::string nome,
                              std::string idade,
                              int rgFunc,
                              int salarioMinimo,
                              std::string especialidade,
                              int numAtendimentos,
                              double comissao);

// Função para criação de um novo cliente
Cliente novoCliente(std::string nome,
                    std::string endereco,
                    std::string cep);

// Função para criação de uma nova venda e para a respectiva atribuição de comissões/bonificações
Venda novaVenda(Cliente &cliente,
                Especialista &especialista,
                Gerente &gerente,
                std::string descricao,
                double valor);

int main()
{
    //Contabilização de Gerentes, Especialistas, Clientes e Vendas
    Gerente gerente = novoGerente("Nick Fury", "72", 21121948, 10000.0, 0.0);

    std::vector<Especialista> especialistas;
    especialistas.emplace_back(novoEspecialista("Peter Parker", "46", 27061975, 3000.0, "Fotografia", 0.0, 0.0));
    especialistas.emplace_back(novoEspecialista("Tony Stark", "56", 4041965, 1000.0, "Consertos de equipamentos eletronicos", 0.0, 0.0));
    especialistas.emplace_back(novoEspecialista("Wanda Maximoff", "32", 16021989, 5000.0, "Engenharia e Designeeeeer", 0.0, 0.0));

    std::vector<Cliente> clientes;
    clientes.emplace_back(novoCliente("J. Jonah Jameson", "Nova York", "35690000"));
    clientes.emplace_back(novoCliente("Norman Osborn", "Hartlford", "22061955"));
    clientes.emplace_back(novoCliente("Otto Octavius", "Schenectady", "24051953"));
    clientes.emplace_back(novoCliente("Bruce Benner", "Dayton", "22111967"));
    clientes.emplace_back(novoCliente("Steve Rogers", "Lower East Side", "13061981"));

    std::vector<Venda> vendas;
    vendas.emplace_back(novaVenda(clientes[0], especialistas[0], gerente, "Fotos do Homem Aranha", 100.0));
    vendas.emplace_back(novaVenda(clientes[3], especialistas[1], gerente, "Troca da tela do telefone", 100.0));
    vendas.emplace_back(novaVenda(clientes[1], especialistas[0], gerente, "Fotos do novo planador", 150.0));
    vendas.emplace_back(novaVenda(clientes[0], especialistas[1], gerente, "Recarga de cartucho", 10.0));
    vendas.emplace_back(novaVenda(clientes[3], especialistas[2], gerente, "Reconstrucao de Predio", 10000.0));
    vendas.emplace_back(novaVenda(clientes[4], especialistas[2], gerente, "Decoracao de Apartamento no Brooklyn", 3000.0));
    vendas.emplace_back(novaVenda(clientes[0], especialistas[2], gerente, "Reforma do Clarim Diario", 5000.0));
    vendas.emplace_back(novaVenda(clientes[2], especialistas[1], gerente, "Formatacao do PC", 80.0));

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

Gerente novoGerente(std::string nome,
                    std::string idade,
                    int rgFunc,
                    double salarioMinimo,
                    double bonificacao)
{
    Gerente gerente(nome, idade, rgFunc, salarioMinimo, bonificacao);

    return gerente;
}

Especialista novoEspecialista(std::string nome,
                              std::string idade,
                              int rgFunc,
                              int salarioMinimo,
                              std::string especialidade,
                              int numAtendimentos,
                              double comissao)
{
    Especialista especialista(nome, idade, rgFunc, salarioMinimo, especialidade, numAtendimentos, comissao);

    return especialista;
}

Cliente novoCliente(std::string nome,
                    std::string endereco,
                    std::string cep)
{
    Cliente cliente(nome, endereco, cep);

    cliente.imprimirDados();

    return cliente;
}

Venda novaVenda(Cliente &cliente,
                Especialista &especialista,
                Gerente &gerente,
                std::string descricao,
                double valor)
{
    Venda venda(cliente, especialista, descricao, valor);

    especialista.acrescentarNumAtendimentos();
    especialista.acrescentarComissao(valor);
    gerente.acrescentarBonificacao();

    return venda;
}