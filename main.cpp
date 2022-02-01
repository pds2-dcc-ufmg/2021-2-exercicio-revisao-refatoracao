#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente[5];
    
    cliente[0].addCliente("J. Jonah Jameson", "Nova York", "35690000");

    cliente[1].addCliente("Norman Osborn", "Hartlford", "22061955");
    
    cliente[2].addCliente("Otto Octavius", "Schenectady", "24051953");
    
    cliente[3].addCliente("Bruce Benner", "Dayton", "22111967");
    
    cliente[4].addCliente("Steve Rogers", "Lower East Side", "13061981");
    
    for(int i = 0; i < 5; i++){
        cliente[i].print();
    }

    Especialista especialista[5];
    int numAtendimentos[3] = {0,0,0};
    double comissao[3] = {0,0,0};

    especialista[0].addEspecialista("Peter Parker", "46", 27061975, 3000, "Fotografia");
    
    especialista[1].addEspecialista("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");

    especialista[2].addEspecialista("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");
    
    Gerente gerente;
    double bonificacao01 = 0;
    gerente.addGerente("Nick Fury", "72", 21121948, 10000,  0);

    Venda venda[8];

    venda[0].addVenda(100, "Fotos do Homem Aranha", especialista[0], "J. Jonah Jameson");
    comissao[0] += especialista[0].comissao(venda[0].getValor());
    numAtendimentos[0] += 1;

    venda[1].addVenda(100, "Troca da tela do telefone", especialista[1], "Bruce Benner");
    comissao[1] += especialista[1].comissao(venda[1].getValor());
    numAtendimentos[1] += 1;

    venda[2].addVenda(150, "Fotos do novo planador", especialista[0], "Norman Osborn");
    comissao[0] += especialista[0].comissao(venda[2].getValor());
    numAtendimentos[0] += 1;

    venda[3].addVenda(10, "Recarga de cartucho", especialista[1], "J. Jonah Jameson");
    comissao[1] += especialista[1].comissao(venda[3].getValor());
    numAtendimentos[1] += 1;

    venda[4].addVenda(10000, "Reconstrucao de Predio", especialista[2], "Bruce Benner");
    comissao[2] += especialista[2].comissao(venda[4].getValor());
    numAtendimentos[2] += 1;

    venda[5].addVenda(3000, "Decoracao de Apartamento no Brooklyn", especialista[2], "Steve Rogers");
    comissao[2] += especialista[2].comissao(venda[5].getValor());
    numAtendimentos[2] += 1;

    venda[6].addVenda(5000, "Reforma do Clarim Diario", especialista[2], "J. Jonah Jameson");
    comissao[2] += especialista[2].comissao(venda[6].getValor());
    numAtendimentos[2] += 1;

    venda[7].addVenda(80, "Formatacao do PC", especialista[1], "Otto Octavius");
    comissao[1] += especialista[1].comissao(venda[7].getValor());
    numAtendimentos[1] += 1;


    cout <<" \n \n           Relatorio das Vendas \n" << endl;
    for (int i = 0; i < 8; i++){
        venda[i].print();
        cout << " Descricao: " << venda[i].getDescricao() << endl;
        if(i == 5){
            venda[i].print();
            cout << " Descricao: " << venda[i].getDescricao() << endl;
        }
    }

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    for(int i = 0; i < 3; i++){

        especialista[i].print();

        cout << "Num Atendimentos: " << numAtendimentos[i] << endl;
        cout << "Salario Total: " << especialista[i].getSalarioBase() + comissao[i] << endl;
    }
    
    int TotalServicos = 0;
    TotalServicos = numAtendimentos[0] + numAtendimentos[1] + numAtendimentos[2];
    gerente.setBonificacao(gerente.calcularBonificacao(TotalServicos));
    gerente.print();
    cout << "Salario Total: " << gerente.getSalarioBase() + gerente.getBonificacao() <<endl;

    return 0;
}
