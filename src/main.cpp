#include <iostream>
#include <vector>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    enum Clientes
    {
        JJJ,
        Norman,
        Otto,
        Bruce,
        Steve
    };
    enum Especialistas
    {
        Parker,
        Stark,
        Maximoff
    };

    std::vector<Cliente> cliente;
    std::vector<Especialista *> especialista;
    std::vector<Venda> venda;
    Gerente *gerente = new Gerente("Nick Fury", "21121948", 72, 10000);

    cliente.push_back(Cliente("J. Jonah Jameson", "Nova York", "35690000"));
    cliente.push_back(Cliente("Norman Osborn", "Hartlford", "22061955"));
    cliente.push_back(Cliente("Otto Octavius", "Schenectady", "24051953"));
    cliente.push_back(Cliente("Bruce Benner", "Dayton", "22111967"));
    cliente.push_back(Cliente("Steve Rogers", "Lower East Side", "13061981"));


    especialista.push_back(new Especialista("Peter Parker", "27061975", 46, 3000, "Fotografia"));
    especialista.push_back(new Especialista("Tony Stark", "4041965", 56, 1000, "Consertos de equipamentos eletronicos"));
    especialista.push_back(new Especialista("Wanda Maximoff", "16021989", 32, 5000, "Engenharia e Designeeeeer"));


    venda.push_back(Venda(100, "Fotos do Homem Aranha", especialista[Parker], cliente[JJJ].getNome()));
    venda.push_back(Venda(100, "Troca da tela do telefone", especialista[Stark], cliente[Bruce].getNome()));
    venda.push_back(Venda(150, "Fotos do novo planador", especialista[Parker], cliente[Norman].getNome()));
    venda.push_back(Venda(10, "Recarga de cartucho", especialista[Stark], cliente[JJJ].getNome()));
    venda.push_back(Venda(10000, "Reconstrucao de Predio", especialista[Maximoff], cliente[Bruce].getNome()));
    venda.push_back(Venda(3000, "Decoracao de Apartamento no Brooklyn", especialista[Maximoff], cliente[Steve].getNome()));
    venda.push_back(Venda(5000, "Reforma do Clarim Diario", especialista[Maximoff], cliente[JJJ].getNome()));
    venda.push_back(Venda(80, "Formatacao do PC", especialista[Stark], cliente[Otto].getNome()));

    for (size_t i = 0; i < cliente.size(); i++)
    {
        cliente[i].print();
    }
    std::cout << " \n \n           Relatorio das Vendas \n"
              << std::endl;

    for (size_t i = 0; i < venda.size(); i++)
    {
        venda[i].print();
    }

    std::cout << " \n \n           Relatorio dos Funcionarios \n"
              << std::endl;

    gerente->print();
    
    for (size_t i = 0; i < especialista.size(); i++)
    {
        especialista[i]->print();
        gerente->calculaSalario(especialista[i]->getNumAtendimentos());
        delete especialista[i];
    }

    delete gerente;

    return 0;
}
