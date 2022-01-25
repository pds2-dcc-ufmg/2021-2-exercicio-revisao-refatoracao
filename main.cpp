#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    Cliente clientes[] = { 
        Cliente("J. Jonah Jameson", "Nova York", "35690000"),
        Cliente("Norman Osborn", "Hartlford", "22061955"),
        Cliente("Otto Octavius", "Schenectady", "24051953"),
        Cliente("Bruce Benner", "Dayton", "22111967"),
        Cliente("Steve Rogers", "Lower East Side", "13061981")
    };
    for (auto& c : clientes) {
        c.print();
    }

    Especialista especialistas[]{
        Especialista("Peter Parker", "46", "27061975", "Fotografia", 3000),
        Especialista("Tony Stark", "56", "4041965", "Consertos de equipamentos eletronicos", 1000),
        Especialista("Wanda Maximoff", "32", "16021989", "Engenharia e Design", 5000)
    };

    Gerente gerentes[] = {
        Gerente("Nick Fury", "72", "21121948", 10000)
    };

    Venda vendas[] = {
        Venda(100, "Fotos do Homem Aranha", especialistas[0], clientes[0]),
        Venda(100, "Troca da tela do telefone", especialistas[1], clientes[3]),
        Venda(150, "Fotos do novo planador", especialistas[0], clientes[1]),
        Venda(10, "Recarga de cartucho", especialistas[1], clientes[0]),
        Venda(10000, "Reconstrucao de Predio", especialistas[2], clientes[3]),
        Venda(3000, "Decoracao de Apartamento no Brooklyn", especialistas[2], clientes[4]),
        Venda(3000, "Decoracao de Apartamento no Brooklyn", especialistas[2], clientes[4]),
        Venda(5000, "Reforma do Clarim Diario", especialistas[2], clientes[0]),
        Venda(80, "Formatacao do PC", especialistas[1], clientes[2])
    };


    std::cout <<"\n\n\t\t\tRelatorio das Vendas\n" << endl;
    for (auto& v : vendas) {
        v.print();
    }

    std::cout <<"\n\n\t\t\tRelatorio dos Funcionarios\n" << endl;
    for (auto& e : especialistas) {
        e.print();
        e.printResults();
    }

    int total_servicos = 0;
    for (auto& e : especialistas) {
        total_servicos += e.getNumAtendimentos();
    }
    
    gerentes[0].print();
    std::cout << "Salario Total: " << gerentes[0].calculaSalarioTotal(total_servicos) << std::endl;

    return 0;
}
