
#include <iostream>

#include "Clientes.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "QuadroFuncionarios.hpp"


int main() {

    auto clientes = Clientes();
    clientes.adicionar_cliente(Cliente("J. Jonah Jameson", "Nova York", "35690000"));
    clientes.adicionar_cliente(Cliente("Norman Osborn", "Hartlford", "22061955"));
    clientes.adicionar_cliente(Cliente("Otto Octavius", "Schenectady", "24051953"));
    clientes.adicionar_cliente(Cliente("Bruce Benner", "Dayton", "22111967"));
    clientes.adicionar_cliente(Cliente("Steve Rogers", "Lower East Side", "13061981"));

    clientes.print();
    

    auto quadro_funcionarios = QuadroFuncionarios(std::move(
        Gerente(
            72,
            10000.00,
            "Nick Fury",
            "21121948")));
    

    quadro_funcionarios.adicionar_funcionario(
        std::unique_ptr<Funcionario>(new Especialista(
            46,
            3000.00,
            "Peter Parker",
            "27061975",
            "Fotografia")));
    quadro_funcionarios.adicionar_funcionario(
        std::unique_ptr<Funcionario>(new Especialista(
            56,
            1000.00,
            "Tony Stark",
            "4041965",
            "Consertos de equipamentos eletronicos")));
    quadro_funcionarios.adicionar_funcionario(
        std::unique_ptr<Funcionario>(new Especialista(
            32,
            5000.00,
            "Wanda Maximoff",
            "16021989",
            "Engenharia e Designeeeeer")));
    
    
    const Venda vendas[] = {
        quadro_funcionarios.novo_atendimento(
            clientes["J. Jonah Jameson"],
            "Peter Parker",
            "Fotos do Homem Aranha",
            100),
        quadro_funcionarios.novo_atendimento(
            clientes["Bruce Benner"],
            "Tony Stark",
            "Troca da tela do telefone",
            100),
        quadro_funcionarios.novo_atendimento(
            clientes["Norman Osborn"],
            "Peter Parker",
            "Fotos do novo planador",
            150),
        quadro_funcionarios.novo_atendimento(
            clientes["J. Jonah Jameson"],
            "Tony Stark",
            "Recarga de cartucho",
            10),
        quadro_funcionarios.novo_atendimento(
            clientes["Bruce Benner"],
            "Wanda Maximoff",
            "Reconstrucao de Predio",
            10000),
        quadro_funcionarios.novo_atendimento(
            clientes["Steve Rogers"],
            "Wanda Maximoff",
            "Decoracao de Apartamento no Brooklyn",
            3000),
        quadro_funcionarios.novo_atendimento(
            clientes["J. Jonah Jameson"],
            "Wanda Maximoff",
            "Reforma do Clarim Diario",
            5000),
        quadro_funcionarios.novo_atendimento(
            clientes["Otto Octavius"],
            "Tony Stark",
            "Formatacao do PC",
            80)
    };
    
    
    std::cout << " \n \n           Relatorio das Vendas \n\n";
    for(const auto &venda : vendas)
        venda.print();

    quadro_funcionarios.print_relatorio();


    return 0;
}
