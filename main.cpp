#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main(){
    Cliente cliente[5] = {
        Cliente("J. Jonah Jameson", "Nova York", "35690000"),
        Cliente("Norman Osborn", "Hartlford", "22061955"),
        Cliente("Otto Octavius", "Schenectady", "24051953"),
        Cliente("Bruce Benner", "Dayton", "22111967"),
        Cliente("Steve Rogers", "Lower East Side", "13061981")            
    };
    
    for (size_t i = 0; i < 5; i++)
        cliente[i].print();
    
    Especialista e[3] = {
        Especialista("Peter Parker", 46,  27061975, 3000, "Fotografia", 0, 0),
        Especialista("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos", 0, 0),
        Especialista("Wanda Maximoff", 32, 16021989, 5000,"Engenharia e Designeeeeer",0,0)
    };

    Gerente g01(10000, 72, "Nick Fury", 21121948, 0);

    Venda v[8] = {
        Venda("J. Jonah Jameson", e[0], "Fotos do Homem Aranha", 100),
        Venda("Bruce Benner", e[1], "Troca da tela do telefone", 100),
        Venda("Norman Osborn", e[0], "Fotos do novo planador", 150),
        Venda("J. Jonah Jameson", e[1], "Recarga de cartucho", 10),
        Venda("Bruce Benner", e[2], "Reconstrucao de Predio", 10000),
        Venda("Steve Rogers", e[2], "Decoracao de Apartamento no Brooklyn", 3000),
        Venda("J. Jonah Jameson", e[2], "Reforma do Clarim Diario", 5000),
        Venda("Otto Octavius", e[1], "Formatacao do PC", 80)
    };
    
    e[0].calcula_comissao(v[0].valor);
    e[1].calcula_comissao(v[1].valor);
    e[0].calcula_comissao(v[2].valor);
    e[1].calcula_comissao(v[3].valor);
    e[2].calcula_comissao(v[4].valor);
    e[2].calcula_comissao(v[5].valor);
    e[2].calcula_comissao(v[6].valor);
    e[1].calcula_comissao(v[7].valor);
    
    cout <<" \n \n           Relatorio das Vendas \n" << endl;
    for (size_t i = 0; i < 8; i++){
        v[i].print();
        cout << " Descricao: " << v[i].descricao << endl;
    }
    for (size_t i = 0; i < 3; i++){
        e[i].print();
        cout << "Num Atendimentos: " << e[i].numAtendimentos << endl;
        cout << "Salario Total: " << e[i].salarioBase + e[i].comissao<<endl;
    }
    
    int numTotalVendas = e[0].numAtendimentos + e[1].numAtendimentos + e[2].numAtendimentos;
    g01.calcula_bonificacao_gerente(numTotalVendas);
    g01.print();
    
    return 0;
}
