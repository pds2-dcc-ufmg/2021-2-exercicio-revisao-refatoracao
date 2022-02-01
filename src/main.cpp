#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"


void CabecalhoRelatorioVendas(){
    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;
}

void CabecalhoRelatorioFuncionario(){
    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
}

int main()
{
    Cliente cliente1("J. Jonah Jameson", "Nova York","35690000");
    cliente1.print();

    Cliente cliente2("Norman Osborn", "Hartlford", "22061955");    
    cliente2.print();

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");    
    cliente3.print();

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");    
    cliente4.print();

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");    
    cliente5.print();

    Especialista e01("Fotografia", "Peter Parker", "46", 3000, 27061975);
    Especialista e02("Consertos de equipamentos eletronicos", "Tony Stark", "56", 1000, 4041965);
    Especialista e03("Engenharia e Designeeeeer", "Wanda Maximoff", "32", 5000, 16021989);


    Gerente g01("Nick Fury", "72", 10000, 21121948);    


    Venda v01(cliente1.getNome(), "Fotos do Homem Aranha", 100, &e01);
    e01.SomaComissao(v01.getValor());
    e01.SomaNumeroDeAtendimentos(1);

    Venda v02(cliente4.getNome(), "Troca da tela do telefone", 100, &e02);
    e02.SomaComissao(v02.getValor());
    e02.SomaNumeroDeAtendimentos(1);

    Venda v03(cliente2.getNome(), "Fotos do novo planador", 150, &e01);
    e01.SomaComissao(v03.getValor());
    e01.SomaNumeroDeAtendimentos(1);

    Venda v04(cliente1.getNome(), "Recarga de cartucho", 10, &e02);
    e02.SomaComissao(v04.getValor());
    e02.SomaNumeroDeAtendimentos(1);    

    Venda v05(cliente4.getNome(), "Reconstrucao de Predio", 10000, &e03);
    e03.SomaComissao(v05.getValor());
    e03.SomaNumeroDeAtendimentos(1);  

    Venda v06(cliente5.getNome(), "Decoracao de Apartamento no Brooklyn", 3000, &e03);
    e03.SomaComissao(v06.getValor());
    e03.SomaNumeroDeAtendimentos(1);  

    Venda v07(cliente1.getNome(), "Reforma do Clarim Diario", 5000, &e03);
    e03.SomaComissao(v07.getValor());
    e03.SomaNumeroDeAtendimentos(1);

    Venda v08(cliente3.getNome(), "Formatacao do PC", 80, &e02);
    e02.SomaComissao(v08.getValor());
    e02.SomaNumeroDeAtendimentos(1);


    CabecalhoRelatorioVendas();
    v01.print();
    v02.print();
    v03.print();
    v04.print();
    v05.print();
    v06.print();
    v06.print();
    v07.print();
    v08.print();


    CabecalhoRelatorioFuncionario();
    e01.print();
    e02.print();
    e03.print();


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01.getNumeroDeAtendimentos() + e02.getNumeroDeAtendimentos() + e03.getNumeroDeAtendimentos();
    
    g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    

    return 0;
}
