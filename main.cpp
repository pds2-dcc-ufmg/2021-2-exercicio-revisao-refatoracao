#include <iostream>

#include <vector>
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
int main()
{
    Cliente cliente1("J.Jonah Jameson","Nova York","35690000");
    cliente1.print();

    Cliente cliente2("Norman Osborn","Hartlford","22061955");
    cliente2.print();

    Cliente cliente3("Otto Octavius","Schenectady","24051953");
    cliente3.print();

    Cliente cliente4("Bruce Benner","Dayton","22111967");
    cliente4.print();

    Cliente cliente5("Steve Rogers","Lower East Side","13061981");
    cliente5.print();




    Especialista e01(3000,"46","Peter Parker",27061975,"Fotografia");

    Especialista e02(1000,"56","Tony Stark",4041965,"Consertos de equipametnos eletronicos");


    Especialista e03(5000,"32","Wanda Maximoff",16021989,"Engenharia e Designeeer");


    Gerente g01(10000,"72","Nick Fury",21121948,0);


    Venda v01(100,"Fotos do Homem Aranha","J.Jonah Jameson",e01);
    e01.Comissao += e01.comissao(v01.VALOR);
    e01.numatendimentos+=1;


    Venda v02(100,"Troca da tela do telefone","Bruce Benner",e02);
    e02.Comissao += e02.comissao(v02.VALOR);
    e02.numatendimentos+=1;


    Venda v03(150,"Fotos do novo planador","Norman Osborn",e01);
    e01.Comissao += e01.comissao(v03.VALOR);
    e01.numatendimentos+=1;


    Venda v04(10,"Recarga de Cartucho","J.Jonah Jameson",e02);
    e02.Comissao += e02.comissao(v04.VALOR);
    e02.numatendimentos+=1;


    Venda v05(10000,"Reconstrucao de Predio","Bruce Benner",e03);
    e03.Comissao += e03.comissao(v05.VALOR);
    e03.numatendimentos+=1;


    Venda v06(3000,"Decoracao de Apartamento no Brooklyn","Steve Rogers",e03);
    e03.Comissao += e03.comissao(v06.VALOR);
    e03.numatendimentos+=1;


    Venda v07(5000,"Reforma do Clarim Diario","J.Jonah Jameson",e03);
    e03.Comissao += e03.comissao(v07.VALOR);
    e03.numatendimentos+=1;


    Venda v08(80,"Formatacao do PC","Otto Octavius",e02);
    e02.Comissao += e02.comissao(v08.VALOR);
    e02.numatendimentos+=1;

    std::vector<Venda> RelatorioVenda;
    RelatorioVenda.insert(RelatorioVenda.end(),{v01,v02,v03,v04,v05,v06,v07,v08});
    for(auto it=RelatorioVenda.begin();it!=RelatorioVenda.end();it++){
        if(it==RelatorioVenda.begin()){
            std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;
        }
        it->print();
        std::cout << " Descricao: " << it->descricao << std::endl;
        if(it->descricao==v06.descricao){

        it->print();
        std::cout << " Descricao: " << it->descricao << std::endl;

        }
    }

    std::vector<Especialista> RelatorioEspec;
    RelatorioEspec.insert(RelatorioEspec.end(),{e01,e02,e03});
    for(auto it=RelatorioEspec.begin();it!=RelatorioEspec.end();it++){
        if(it==RelatorioEspec.begin()){
            std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
        }
        it->print();
        std::cout << "Num Atendimentos: " << it->numatendimentos << std::endl;
        std::cout << "Salario Total: " << it->SalarioBase+it->Comissao<<std::endl;

    }


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01.numatendimentos + e02.numatendimentos + e03.numatendimentos;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    g01.ImpSalarioTotal();

    return 0;
}
