////NOTA DE ALTERAÇÕES
//Inseração de dados por meio de construtores das classes
//Remoção variável bonificacao01 não utilizada
//Remoção de redundância na venda 6
//Incorporação de variávies do main dentro das classes que mais se aplicam
//Incorporação do print da descrição das vendas dentro do método Venda::print()
//Incorporação do print do relatório dos funcionários dentro do método Especialista::print()

#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;


int main()
{
    //Inserção de dados

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

    ////////////////////////////////////////////////////
    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia", 0, 0);
   
    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos", 0, 0);

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer", 0, 0);

    ///////////////////////////////////////////////////////
    Gerente g01("Nick Fury", "72", 21121948, 10000, 0);

    ///////////////////////////////////////////////////////////
    Venda v01(&cliente1, &e01, "Fotos do Homem Aranha", 100);

    Venda v02(&cliente4, &e02, "Troca da tela do telefone", 100);

    Venda v03(&cliente2, &e01, "Fotos do novo planador", 150);

    Venda v04(&cliente1, &e02, "Recarga de cartucho", 10);
   
    Venda v05(&cliente4, &e03, "Reconstrucao de Predio", 10000);
   
    Venda v06(&cliente5, &e03, "Decoracao de Apartamento no Brooklyn", 3000);
    
    Venda v07(&cliente1, &e03, "Reforma do Clarim Diario", 5000);
    
    Venda v08(&cliente3, &e02, "Formatacao do PC", 80);
   
    ////////////////////////////////////////////////////////////
    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v06.print();

    v07.print();

    v08.print();

    ///////////////////////////////////////////////////////////////////
    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();

    e02.print();

    e03.print();

    /////////////////////////////////////////////////////////////////////
    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01.numAtendimentos + e02.numAtendimentos + e03.numAtendimentos;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.salarioBase + g01.bonificacao<<endl;

    return 0;
}
