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
	
    Especialista e02("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
	
    Especialista e03("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");


    Gerente g01("Nick Fury", "72", 21121948, 10000); 


    Venda v01("J. Jonah Jameson", e01, "Fotos do Homem Aranha", 100);
    Venda v02("Bruce Benner", e02, "Troca da tela do telefone", 100);
    Venda v03("Norman Osborn", e01, "Fotos do novo planador", 150);
    Venda v04("J. Jonah Jameson", e02, "Recarga de cartucho", 10);
    Venda v05("Bruce Benner", e03, "Reconstrucao de Predio", 10000);
    Venda v06("Steve Rogers", e03, "Decoracao de Apartamento no Brooklyn", 3000);
    Venda v07("J. Jonah Jameson", e03, "Reforma do Clarim Diario", 5000);
    Venda v08("Otto Octavius", e02, "Formatacao do PC", 80);


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.descricao << endl;

    v02.print();
    cout << " Descricao: " << v02.descricao << endl;

    v03.print();
    cout << " Descricao: " << v03.descricao << endl;

    v04.print();
    cout << " Descricao: " << v04.descricao << endl;

    v05.print();
    cout << " Descricao: " << v05.descricao << endl;

    v06.print();
    cout << " Descricao: " << v06.descricao << endl;

    v06.print();
    cout << " Descricao: " << v06.descricao << endl;

    v07.print();
    cout << " Descricao: " << v07.descricao << endl;

    v08.print();
    cout << " Descricao: " << v08.descricao << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    std::cout << "Num Atendimentos: " << num_atendimentos_01 << std::endl;
    std::cout << "Salario Total: " << e01.salario_base+comissao_01<<std::endl;

    e02.print();
    std::cout << "Num Atendimentos: " << num_atendimentos_02 << std::endl;
    cout << "Salario Total: " << e02.salario_base+comissao_02<<std::endl;

    e03.print();
    std::cout << "Num Atendimentos: " << num_atendimentos_03 << std::endl;
    std::cout << "Salario Total: " << e03.salario_base+comissao_03<<std::endl;


    int num_total_servicos = 0;
    num_total_servicos = num_atendimentos_01 + num_atendimentos_02 + num_atendimentos_03;
    g01.bonificacao = g01.calculaBonificacaoGerente(num_total_servicos);
    g01.print();
    cout << "Salario Total: " << g01.salario_base + g01.bonificacao<<endl;

    return 0;
}
