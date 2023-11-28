#include <iostream>
#include <vector>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.print();

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
    cliente2.print();

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    cliente3.print();

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    cliente4.print();

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    cliente5.print();

    vector<Especialista> Especialistas;
    
    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");
    Especialistas.push_back(e01);

    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    Especialistas.push_back(e02);
    
    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");
    Especialistas.push_back(e03);
    
    Gerente g01("Nick Fury", "72", 21121948, 10000);

    vector<Venda> Vendas;
    Venda v01("J. Jonah Jameson", e01, "Fotos do Homem Aranha", 100);
    Vendas.push_back(v01);
	
    Venda v02("Bruce Benner", e02, "Troca da tela do telefone", 100);
    Vendas.push_back(v02);
    
    Venda v03("Norman Osborn", e01, "Fotos do novo planador", 150);
    Vendas.push_back(v03);
	
    Venda v04("J. Jonah Jameson", e02, "Recarga de cartucho", 10);
    Vendas.push_back(v04); 
   
    Venda v05("Bruce Benner", e03, "Reconstrucao de Predio", 10000);
    Vendas.push_back(v05);

    Venda v06("Steve Rogers", e03, "Decoracao de Apartamento no Brooklyn", 3000);
    Vendas.push_back(v06);
    
    Venda v07("J. Jonah Jameson", e03, "Reforma do Clarim Diario", 5000);
    Vendas.push_back(v07);
    
    Venda v08("Otto Octavius", e02, "Formatacao do PC", 80);
    Vendas.push_back(v08);
    

    cout <<" \n \n           Relatorio das Vendas \n" << endl;
    for(especialista v : Vendas){
	    v.print();
    } 
    //v01.print();
     
    //v02.print();
     
    //v03.print();
     
    //v04.print();
     
    //v05.print();
     
    //v06.print();
     
    //v06.print();
     
    //v07.print();
     
    //v08.print();
 

    int NUMTOTALservicos = 0;
    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    for(especialista e : Especialistas){
	    e.print();
	    NUMTOTALservicos+=e.numAtendimentos();
    } 
    //e01.print();
    //    e02.print();
    //    e03.print();
    
    g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    return 0;
}
