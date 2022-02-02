#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

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



    Especialista e01("Peter Parker", "46", 27061975, 3000, "Fotografia");
    int numAtendimentos01 = 0;
    double comissao01 = 0;

    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    int numAtendimentos02 = 0;
    double comissao02 = 0;

    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");
    int numAtendimentos03 = 0;
    double comissao03 = 0;



    Gerente g01("Nick Fury", "72", 21121948, 10000);
    double bonificacao01 = 0;


    Venda v01("J. Jonah Jameson", &e01, "Fotos do Homem Aranha", 100);
    comissao01 += e01.comissao(v01.get_valor());
    numAtendimentos01+=1;

    Venda v02("Bruce Benner", &e02, "Troca da tela do telefone", 100);
    comissao02 += e02.comissao(v02.get_valor());
    numAtendimentos02+=1;

    Venda v03("Norman Osborn", &e01, "Fotos do novo planador", 150);
    comissao01 += e01.comissao(v03.get_valor());
    numAtendimentos01+=1;

    Venda v04("J. Jonah Jameson", &e02, "Recarga de cartucho", 10);
    comissao02 += e02.comissao(v04.get_valor());
    numAtendimentos02+=1;

    Venda v05("Bruce Benner", &e03, "Reconstrucao de Predio", 10000);
    comissao03 += e03.comissao(v05.get_valor());
    numAtendimentos03+=1;

    Venda v06("Steve Rogers", &e03, "Decoracao de Apartamento no Brooklyn", 3000);
    comissao03 += e03.comissao(v06.get_valor());
    numAtendimentos03+=1;

    Venda v07("J. Jonah Jameson", &e03, "Reforma do Clarim Diario", 5000);
    comissao03 += e03.comissao(v07.get_valor());
    numAtendimentos03+=1;

    Venda v08("Otto Octavius", &e02, "Formatacao do PC", 80);
    comissao02 += e02.comissao(v08.get_valor());
    numAtendimentos02+=1;



    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();
    std::cout << " Descricao: " << v01.get_descricao() << std::endl;

    v02.print();
    std::cout << " Descricao: " << v02.get_descricao() << std::endl;

    v03.print();
    std::cout << " Descricao: " << v03.get_descricao() << std::endl;

    v04.print();
    std::cout << " Descricao: " << v04.get_descricao() << std::endl;

    v05.print();
    std::cout << " Descricao: " << v05.get_descricao() << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.get_descricao() << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.get_descricao() << std::endl;

    v07.print();
    std::cout << " Descricao: " << v07.get_descricao() << std::endl;

    v08.print();
    std::cout << " Descricao: " << v08.get_descricao() << std::endl;



    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01.print();
    std::cout << "Num Atendimentos: " << numAtendimentos01 << std::endl;
    std::cout << "Salario Total: " << (e01.get_salario_base())+comissao01 << std::endl;

    e02.print();
    std::cout << "Num Atendimentos: " << numAtendimentos02 << std::endl;
    std::cout << "Salario Total: " << (e02.get_salario_base())+comissao02 << std::endl;

    e03.print();
    std::cout << "Num Atendimentos: " << numAtendimentos03 << std::endl;
    std::cout << "Salario Total: " << (e03.get_salario_base())+comissao03 << std::endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.set_bonificacao(g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    g01.print();
    std::cout << "Salario Total: " << (g01.get_salario_base()) + (g01.get_bonificacao()) << std::endl;

    return 0;
}
