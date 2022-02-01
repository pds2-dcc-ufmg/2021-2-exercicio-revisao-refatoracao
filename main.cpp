#include <iostream>
#include <map>
#include <iterator>

#include "Venda.hpp"
#include "Gerente.hpp"

using namespace std;

int main() {

    // CADASTROS
    Cliente cliente1 = Cliente("J. Jonah Jameson", "Nova York", "35690000");
    Cliente cliente2 = Cliente("Norman Osborn", "Hartlford", "22061955");
    Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", "24051953");
    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");

    Especialista especialista1 = Especialista("Peter Parker", "46", 27061975, 3000, "Fotografia");
    Especialista especialista2 = Especialista("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialista especialista3 = Especialista("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");

    Gerente gerente1 = Gerente("Nick Fury", "72", 21121948, 10000);

    Venda venda1 = Venda(&cliente1, &especialista1, "Fotos do Homem Aranha", 100);
    Venda venda2 = Venda(&cliente4, &especialista2, "Troca da tela do telefone", 100);
    Venda venda3 = Venda(&cliente2, &especialista1, "Fotos do novo planador", 150);
    Venda venda4 = Venda(&cliente1, &especialista2, "Recarga de cartucho", 10);
    Venda venda5 = Venda(&cliente4, &especialista3, "Reconstrucao de Predio", 10000);
    Venda venda6 = Venda(&cliente5, &especialista3, "Decoracao de Apartamento no Brooklyn", 3000);
    Venda venda7 = Venda(&cliente1, &especialista3, "Reforma do Clarim Diario", 5000);
    Venda venda8 = Venda(&cliente3, &especialista2, "Formatacao do PC", 80);



    // ARMAZENAMENTO DOS DADOS DOS CLIENTES, FUNCIONARIOS E VENDAS EM MAPS (PARA CADA CLASSE)
    std::map<int, Cliente> clientes;
    clientes.insert(pair<int, Cliente>(0, cliente1));
    clientes.insert(pair<int, Cliente>(1, cliente2));
    clientes.insert(pair<int, Cliente>(2, cliente3));
    clientes.insert(pair<int, Cliente>(3, cliente4));
    clientes.insert(pair<int, Cliente>(4, cliente5));

    std::map<int, Especialista> especialistas;
    especialistas.insert(pair<int, Especialista>(0, especialista1));
    especialistas.insert(pair<int, Especialista>(1, especialista2));
    especialistas.insert(pair<int, Especialista>(2, especialista3));

    // // Armazena um map de vendas
    std::map<int, Venda> vendas;
    vendas.insert(pair<int, Venda>(1, venda1));
    vendas.insert(pair<int, Venda>(2, venda2));
    vendas.insert(pair<int, Venda>(3, venda3));
    vendas.insert(pair<int, Venda>(4, venda4));
    vendas.insert(pair<int, Venda>(5, venda5));
    vendas.insert(pair<int, Venda>(6, venda6));
    vendas.insert(pair<int, Venda>(7, venda7));
    vendas.insert(pair<int, Venda>(8, venda8));



    // Lista de clientes
    std::map<int, Cliente>::iterator itr;
    for (itr = clientes.begin(); itr != clientes.end(); ++itr) {
        itr->second.print();
    }

    std::cout <<" \n \n           Relatorio das Vendas \n" << endl;
    int totalDeServicos = 0;
    std::map<int, Venda>::iterator jtr;
    for (jtr = vendas.begin(); jtr != vendas.end(); ++jtr) {
        jtr->second.print();
        // Não acho interessante, mas o exercicios pede outputs identicos (impressão repetida de uma venda)
        if(jtr->first == 6) {
            jtr->second.print();
        }
        totalDeServicos++;
    }

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    std::map<int, Especialista>::iterator ktr;
    for (ktr = especialistas.begin(); ktr != especialistas.end(); ++ktr) {
        ktr->second.print();
    }

    gerente1.calculaBonificacao(totalDeServicos);
    gerente1.print();

    return 0;
}
