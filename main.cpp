#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    Cliente cliente1 ("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.Print();

    Cliente cliente2 ("Norman Osborn", "Hartlford", "22061955");
    cliente2.Print();

    Cliente cliente3 ("Otto Octavius", "Schenectady", "24051953");
    cliente3.Print();

    Cliente cliente4 ("Bruce Benner", "Dayton", "22111967");
    cliente4.Print();

    Cliente cliente5 ("Steve Rogers", "Lower East Side", "13061981");
    cliente5.Print();


    Especialista *e01 = new Especialista("Peter Parker", "46", 27061975, 3000, "Fotografia", 0, 0);

    Especialista *e02 = new Especialista("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos", 0, 0);

    Especialista *e03 = new Especialista("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer", 0, 0);

    Gerente g01 ("Nick Fury", "72", 21121948, 10000, 0);

    Venda v01 ("J. Jonah Jameson", e01, "Fotos do Homem Aranha", 100);
    e01->AddComissao(e01->comissao(v01.get_Valor()));
    e01->AddAtendimento();
    
    Venda v02 ("Bruce Benner", e02, "Troca da tela do telefone", 100);
    e02->AddComissao(e02->comissao(v01.get_Valor()));
    e02->AddAtendimento();

    Venda v03 ("Norman Osborn", e01, "Fotos do novo planador", 150);
    e01->AddComissao(e01->comissao(v03.get_Valor()));
    e01->AddAtendimento();

    Venda v04 ("J. Jonah Jameson", e02, "Recarga de cartucho", 10);
    e02->AddComissao(e02->comissao(v04.get_Valor()));
    e02->AddAtendimento();

    Venda v05 ("Bruce Benner", e03, "Reconstrucao de Predio", 10000);
    e03->AddComissao(e03->comissao(v05.get_Valor()));
    e03->AddAtendimento();

    Venda v06 ("Steve Rogers", e03, "Decoracao de Apartamento no Brooklyn", 3000);
    e03->AddComissao(e03->comissao(v06.get_Valor()));
    e03->AddAtendimento();

    Venda v07 ("J. Jonah Jameson", e03, "Reforma do Clarim Diario", 5000);
    e03->AddComissao(e03->comissao(v07.get_Valor()));
    e03->AddAtendimento();

    Venda v08 ("Otto Octavius", e02, "Formatacao do PC", 80);
    e02->AddComissao(e02->comissao(v08.get_Valor()));
    e02->AddAtendimento();


    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.Print();
    std::cout << " Descricao: " << v01.get_Descricao() << std::endl;

    v02.Print();
    std::cout << " Descricao: " << v02.get_Descricao() << std::endl;

    v03.Print();
    std::cout << " Descricao: " << v03.get_Descricao() << std::endl;

    v04.Print();
    std::cout << " Descricao: " << v04.get_Descricao() << std::endl;

    v05.Print();
    std::cout << " Descricao: " << v05.get_Descricao() << std::endl;

    v06.Print();
    std::cout << " Descricao: " << v06.get_Descricao() << std::endl;

    v06.Print();
    std::cout << " Descricao: " << v06.get_Descricao() << std::endl;

    v07.Print();
    std::cout << " Descricao: " << v07.get_Descricao() << std::endl;

    v08.Print();
    std::cout << " Descricao: " << v08.get_Descricao() << std::endl;






    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01->Print();
    std::cout << "Num Atendimentos: " << e01->get_NumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e01->get_SalarioBase() + e01->get_Comissao()<<std::endl;

    e02->Print();
    std::cout << "Num Atendimentos: " << e02->get_NumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e02->get_SalarioBase() + e02->get_Comissao()<<std::endl;

    e03->Print();
    std::cout << "Num Atendimentos: " << e03->get_NumAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e03->get_SalarioBase() + e03->get_Comissao()<<std::endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01->get_NumAtendimentos() + e02->get_NumAtendimentos() + e03->get_NumAtendimentos();
    g01.set_Bonificacao(g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    g01.Print();
    std::cout << "Salario Total: " << g01.get_SalarioBase() + g01.get_Bonificacao()<< std::endl;

    return 0;
}
