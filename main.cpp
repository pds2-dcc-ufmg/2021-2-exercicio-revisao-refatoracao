#include <iostream>
#include <vector>
#include <map>
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

void relatorio_vendas(vector<Venda> vendas){
    cout <<" \n \n           Relatorio das Vendas \n" << endl;
    
    for(auto v : vendas){
        v.print();
        cout << " Descricao: " << v.getDescricao() << endl;
        v.getEspecialista()->calcula_comissao(v.getValor());
        v.getEspecialista()->setNumAtendimentos(1);
    } 
}

void relatorio_funcionarios(vector<Especialista> especialistas){
    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;

    for(auto e : especialistas){
        e.print();
        cout << "Num Atendimentos: " << e.getNumAtendimentos() << endl;
        cout << "Salario Total: " << e.getSalarioBase() + e.getComissao() <<endl;
    }
}

int main()
{   
    vector<Cliente> clientes;

    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    clientes.push_back(cliente1);
    
    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    clientes.push_back(cliente2);

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    clientes.push_back(cliente3);

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    clientes.push_back(cliente4);

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    clientes.push_back(cliente5);

    for(auto c : clientes) c.print();
    

    vector<Especialista> especialistas;

    Especialista especialista1("Peter Parker", 46, 27061975, 3000, "Fotografia");
    Especialista especialista2("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialista especialista3("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designeeeeer");
    
    vector<Venda> vendas;

    vendas.push_back(Venda(cliente1, &especialista1, "Fotos do Homem Aranha", 100));
    vendas.push_back(Venda(cliente4, &especialista2, "Troca da tela do telefone", 100));
    vendas.push_back(Venda(cliente2, &especialista1, "Fotos do novo planador", 150));
    vendas.push_back(Venda(cliente1, &especialista2, "Recarga de cartucho", 10));
    vendas.push_back(Venda(cliente4, &especialista3, "Reconstrucao de Predio", 10000));
    vendas.push_back(Venda(cliente5, &especialista3, "Decoracao de Apartamento no Brooklyn", 3000));
    vendas.push_back(Venda(cliente1, &especialista3, "Reforma do Clarim Diario", 5000));
    vendas.push_back(Venda(cliente3, &especialista2, "Formatacao do PC", 80));

    relatorio_vendas(vendas);

    especialistas.push_back(especialista1);
    especialistas.push_back(especialista2);
    especialistas.push_back(especialista3);

    relatorio_funcionarios(especialistas);

    Gerente gerente("Nick Fury", 72, 21121948, 10000);

    gerente.setBonificacao(gerente.calcula_bonificacao(vendas.size()));
    gerente.print();
    cout << "Salario Total: " << gerente.getSalarioBase() + gerente.getBonificacao()<<endl;

    return 0;
}
