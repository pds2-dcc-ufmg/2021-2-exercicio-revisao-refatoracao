#include <iostream>
#include <list>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

Cliente novoCliente(std::string nome,
                    std::string endereco,
                    std::string cep)
{
    Cliente cliente(nome, endereco, cep);
    cliente.imprimirDados();
    return cliente;
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

Gerente novoGerente(std::string nome,
                    std::string idade,
                    int rgFunc,
                    double salarioMinimo,
                    double bonificacao)
{
    Gerente gerente(nome, idade, rgFunc, salarioMinimo, bonificacao);
    return gerente;
}

Venda novaVenda(Cliente &cliente,
                Especialista &especialista,
                std::string descricao,
                double valor)
{
    Venda venda(cliente, especialista, descricao, valor);
    especialista.acrescentarNumAtendimentos();
    especialista.acrescentarComissao(valor);
    return venda;
}

int main()
{
    Cliente cliente01 = novoCliente("J. Jonah Jameson", "Nova York", "35690000");
    Cliente cliente02 = novoCliente("Norman Osborn", "Hartlford", "22061955");
    Cliente cliente03 = novoCliente("Otto Octavius", "Schenectady", "24051953");
    Cliente cliente04 = novoCliente("Bruce Benner", "Dayton", "22111967");
    Cliente cliente05 = novoCliente("Steve Rogers", "Lower East Side", "13061981");

    Especialista e01 = novoEspecialista("Peter Parker", "46", 27061975, 3000.0, "Fotografia", 0.0, 0.0);
    Especialista e02 = novoEspecialista("Tony Stark", "56", 4041965, 1000.0, "Consertos de equipamentos eletronicos", 0.0, 0.0);
    Especialista e03 = novoEspecialista("Wanda Maximoff", "32", 16021989, 5000.0, "Engenharia e Designeeeeer", 0.0, 0.0);

    Gerente g01 = novoGerente("Nick Fury", "72", 21121948, 10000.0, 0.0);

    Venda v01 = novaVenda(cliente01, e01, "Fotos do Homem Aranha", 100.0);
    Venda v02 = novaVenda(cliente04, e02, "Troca da tela do telefone", 100.0);
    Venda v03 = novaVenda(cliente02, e01, "Fotos do novo planador", 150.0);
    Venda v04 = novaVenda(cliente01, e02, "Recarga de cartucho", 10.0);
    Venda v05 = novaVenda(cliente04, e03, "Reconstrucao de Predio", 10000.0);
    Venda v06 = novaVenda(cliente05, e03, "Decoracao de Apartamento no Brooklyn", 3000.0);
    Venda v07 = novaVenda(cliente01, e03, "Reforma do Clarim Diario", 5000.0);
    Venda v08 = novaVenda(cliente03, e02, "Formatacao do PC", 80.0);

    std::cout << " \n \n           Relatorio das Vendas \n"
              << std::endl;

    v01.imprimirDados();
    std::cout << " Descricao: " << v01.getDescricao() << std::endl;

    v02.imprimirDados();
    std::cout << " Descricao: " << v02.getDescricao() << std::endl;

    v03.imprimirDados();
    std::cout << " Descricao: " << v03.getDescricao() << std::endl;

    v04.imprimirDados();
    std::cout << " Descricao: " << v04.getDescricao() << std::endl;

    v05.imprimirDados();
    std::cout << " Descricao: " << v05.getDescricao() << std::endl;

    v06.imprimirDados();
    std::cout << " Descricao: " << v06.getDescricao() << std::endl;

    v06.imprimirDados();
    std::cout << " Descricao: " << v06.getDescricao() << std::endl;

    v07.imprimirDados();
    std::cout << " Descricao: " << v07.getDescricao() << std::endl;

    v08.imprimirDados();
    std::cout << " Descricao: " << v08.getDescricao() << std::endl;

    std::cout << " \n \n           Relatorio dos Funcionarios \n"
              << std::endl;
    e01.imprimirDados();
    std::cout << "Num Atendimentos: " << e01.getNumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e01.getSalarioMinimo() + e01.getComissao() << std::endl;

    e02.imprimirDados();
    std::cout << "Num Atendimentos: " << e02.getNumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e02.getSalarioMinimo() + e02.getComissao() << std::endl;

    e03.imprimirDados();
    std::cout << "Num Atendimentos: " << e03.getNumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e03.getSalarioMinimo() + e03.getComissao() << std::endl;

    int numTotalVendas = 0;
    numTotalVendas = e01.getNumAtendimentos() + e02.getNumAtendimentos() + e03.getNumAtendimentos();
    g01.acrescentarBonificacao(numTotalVendas);
    g01.imprimirDados();
    std::cout << "Salario Total: " << g01.getSalarioMinimo() + g01.getBonificacao() << std::endl;

    return 0;
}