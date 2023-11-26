#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1("J. Jonah Jameson","Nova York","35690000");
    cliente1.print();

    Cliente cliente2("Norman Osborn","Hartlford","Hartlford");
    cliente2.print();

    Cliente cliente3("Otto Octavius","Schenectady","24051953");
    cliente3.print();

    Cliente cliente4("Bruce Benner","Dayton", "22111967");
    cliente4.print();

    Cliente cliente5("Steve Rogers","Lower East Side","13061981");
    cliente5.print();




    Especialista e01( "Fotografia","46","Peter Parker",27061975,3000);
    int numAtendimentos01 = 0;
    double comissao01 = 0;
 
    Especialista e02("Consertos de equipamentos eletronicos","56","Tony Stark", 4041965,1000);
    int numAtendimentos02 = 0;
    double comissao02 = 0;

    Especialista e03("Engenharia e Designeeeeer","32", "Wanda Maximoff",16021989,5000);
    int numAtendimentos03 = 0;
    double comissao03 = 0;


    Gerente g01(10000,72,"Nick Fury",21121948,0);


    Venda v01(100,"Fotos do Homem Aranha",e01,"J. Jonah Jameson");
    comissao01 += e01.comissao(v01.VALOR);
    numAtendimentos01+=1;


    Venda v02(100,"Troca da tela do telefone",e02,"Bruce Benner");
    comissao02 += e02.comissao(v02.VALOR);
    numAtendimentos02+=1;


    Venda v03(150,"Fotos do novo planador",e01,"Norman Osborn");
    comissao01 += e01.comissao(v03.VALOR);
    numAtendimentos01+=1;


    Venda v04(10,"Recarga de cartucho",e02,"J. Jonah Jameson");
    comissao02 += e02.comissao(v04.VALOR);
    numAtendimentos02+=1;


    Venda v05(10000,"Reconstrucao de Predio",e03,"Bruce Benner");
    comissao03 += e03.comissao(v05.VALOR);
    numAtendimentos03+=1;


    Venda v06(3000,"Decoracao de Apartamento no Brooklyn",e03,"Steve Rogers");
    comissao03 += e03.comissao(v06.VALOR);
    numAtendimentos03+=1;


    Venda v07(5000,"Reforma do Clarim Diario",e03,"J. Jonah Jameson");
    comissao03 += e03.comissao(v07.VALOR);
    numAtendimentos03+=1;


    Venda v08(80,"Formatacao do PC",e02,"Otto Octavius");
    comissao02 += e02.comissao(v08.VALOR);
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;
    for(int i=1;i!=9; i++){
        v0i.print()
        cout << " Descricao: " << v0i.descricao << endl;
    }

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    for(int i=1;i!=4; i++){
        e0i.print()
        cout << "Num Atendimentos: " << numAtendimentos0i << endl;
        cout << "Salario Total: " << e0i.SalarioBase+comissao0i<<endl;
    }

    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
