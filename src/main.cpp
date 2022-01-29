#include <iostream>

#include ".././include/Pessoas/Gerente.hpp"
#include ".././include/Pessoas/Cliente.hpp"
#include ".././include/Pessoas/Funcionario.hpp"
#include ".././include/Pessoas/Especialista.hpp"
#include ".././include/Venda/Venda.hpp"

using namespace std;

int main()
{
    Cliente cliente1 =  Cliente("J. Jonah Jameson","Nova York","35690000");
    cliente1.print();

    Cliente cliente2 = Cliente("Norman Osborn","Hartlford","22061955");
    cliente2.print();

    Cliente cliente3 = Cliente("Otto Octavius","Schenectady","24051953");
    cliente3.print();

    Cliente cliente4 = Cliente("Bruce Benner","Dayton","22111967");
    cliente4.print();

    Cliente cliente5 = Cliente("Steve Rogers","Lower East Side","13061981");
    cliente5.print();


    Especialista e01 = Especialista(3000,"46","Peter Parker",27061975,"Fotografia");

    Especialista e02 = Especialista(1000,"56","Tony Stark",4041965,"Consertos de equipamentos eletronicos"); 

    Especialista e03 = Especialista(5000,"32","Wanda Maximoff",16021989,"Engenharia e Designeeeeer");


    Gerente g01 = Gerente(10000,"72","Nick Fury",21121948,0) ;


    Venda v01 = Venda(100,"Fotos do Homem Aranha",e01,"J. Jonah Jameson");
    e01.adicionarComissao(e01.comissao(v01.getValor()));
    e01.adicionarAtendimento(1);       
        
    Venda v02 = Venda(100,"Troca da tela do telefone",e02,"Bruce Benner");
    e02.adicionarComissao(e02.comissao(v02.getValor()));
    e02.adicionarAtendimento(1);       

    Venda v03= Venda(150,"Fotos do novo planador",e01,"Norman Osborn");
    e01.adicionarComissao(e01.comissao(v03.getValor()));
    e01.adicionarAtendimento(1);          

    Venda v04 = Venda(10,"Recarga de cartucho",e02,"J. Jonah Jameson");
    e02.adicionarComissao(e02.comissao(v04.getValor()));
    e02.adicionarAtendimento(1);       
   
    Venda v05 = Venda(10000,"Reconstrucao de Predio",e03,"Bruce Benner");
    e03.adicionarComissao(e03.comissao(v05.getValor()));
    e03.adicionarAtendimento(1);       
    
    Venda v06 = Venda(3000,"Decoracao de Apartamento no Brooklyn",e03,"Steve Rogers");
    e03.adicionarComissao(e03.comissao(v06.getValor()));
    e03.adicionarAtendimento(1);       
   
    v06.setDescricao("Decoracao de Apartamento no Brooklyn");
    v06.setValor(3000);

    Venda v07 = Venda(5000,"Reforma do Clarim Diario",e03,"J. Jonah Jameson");
    e03.adicionarComissao(e03.comissao(v07.getValor()));
    e03.adicionarAtendimento(1);       
    
    Venda v08 = Venda(80,"Formatacao do PC",e02,"Otto Octavius");
    e02.adicionarComissao(e02.comissao(v08.getValor()));
    e02.adicionarAtendimento(1);       

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

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    e02.print();
    e03.print();


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01.getNumAtendimento() + e02.getNumAtendimento() + e03.getNumAtendimento();
  
    g01.setBonificao(g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    g01.print();

    return 0;
}
