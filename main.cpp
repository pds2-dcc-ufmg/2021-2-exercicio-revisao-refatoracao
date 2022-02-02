#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>

using namespace std;

int main()
{
    std::vector<Cliente> clientes;

    clientes.push_back(Cliente("J. Jonah Jameson","Nova York","35690000"));
    clientes.push_back(Cliente("Norman Osborn","Hartlford","22061955"));
    clientes.push_back(Cliente("Otto Octavius","Schenectady","24051953"));
    clientes.push_back(Cliente("Bruce Benner","Dayton","22111967"));
    clientes.push_back(Cliente("Steve Rogers","Lower East Side","13061981"));

    for (auto it : clientes){
        it.print();
    }

    std::vector<Especialista> especialistas;

    especialistas.push_back(Especialista(3000,"46","Peter Parker", 27061975, "Fotografia"));
    especialistas.push_back(Especialista(1000,"56","Tony Stark", 4041965, "Consertos de equipamentos eletronicos"));
    especialistas.push_back(Especialista(5000,"32","Wanda Maximoff", 16021989, "Engenharia e Designeeeeer"));

    Gerente gerente (10000, "72", "Nick Fury", 21121948, 0);

    std::vector<Venda> vendas;
    
    vendas.push_back(Venda(&especialistas[0], 100, "Fotos do Homem Aranha", clientes[0]));
    vendas.push_back(Venda(&especialistas[1], 100, "Troca da tela do telefone", clientes[3]));
    vendas.push_back(Venda(&especialistas[0], 150, "Fotos do novo planador", clientes[1]));
    vendas.push_back(Venda(&especialistas[1], 10, "Recarga de cartucho", clientes[0]));
    vendas.push_back(Venda(&especialistas[2], 10000, "Reconstrucao de Predio", clientes[3]));
    vendas.push_back(Venda(&especialistas[2], 3000, "Decoracao de Apartamento no Brooklyn", clientes[4]));
    vendas.push_back(Venda(&especialistas[2], 5000, "Reforma do Clarim Diario", clientes[0]));
    vendas.push_back(Venda(&especialistas[1], 80, "Formatacao do PC", clientes[2]));

    cout <<" \n \n           Relatorio das Vendas \n" << endl;
    for(auto it: vendas){
        if(it._descricao=="Decoracao de Apartamento no Brooklyn"){
            it.print();
        }
        it.print();
    }
    
    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;

    int numTotalServicos = 0;
    for (auto it: especialistas){
        it.print();
        numTotalServicos+=it._numAtendimentos;
    }

    gerente._bonificacao = gerente.calculaBonificacaoGerente(numTotalServicos);
    gerente.print();

    return 0;
}
