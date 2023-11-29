#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>
using namespace std;

int main()
{
    Cliente cliente1 = Cliente("J. Jonah Jameson","Nova York", "35690000");
    Cliente cliente2 = Cliente("Norman Osborn", "Hartlford","22061955");
    Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", "24051953");
    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");
    
    std::vector<Cliente> clientes = {cliente1, cliente2, cliente3, cliente4, cliente5};
    
    for(std::vector<Cliente>::iterator it = clientes.begin(); it != clientes.end(); it++)
    {
        it->print();
    }

    Especialista e01 = Especialista("Peter Parker", "46", 3000, 27061975, "Fotografia");
    int numAtendimentos01 = 0;
    double comissao01 = 0;
   


    Especialista e02 = Especialista("Tony Stark", "56", 1000, 4041965, "Consertos de equipamentos eletronicos");
    int numAtendimentos02 = 0;
    double comissao02 = 0;


    Especialista e03 =Especialista("Wanda Maximoff", "32", 5000, 16021989, "Engenharia e Designeeeeer");
    int numAtendimentos03 = 0;
    double comissao03 = 0;
 

    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.IDADE = "72";
    g01.rgFunc = 21121948;
    g01.SalarioBase = 10000;


    Venda v01 = Venda("Fotos do Homem Aranha", 100, cliente1, e01);
    comissao01 += e01.comissao(v01.get_valor());
    numAtendimentos01+=1;


    Venda v02 = Venda("Troca da tela do telefone", 100, cliente4, e02);
    comissao02 += e02.comissao(v02.get_valor());
    numAtendimentos02+=1;


    Venda v03 = Venda("Fotos do novo planador",150 ,cliente2, e01);
    comissao01 += e01.comissao(v03.get_valor());
    numAtendimentos01+=1;


    Venda v04 = Venda("Recarga de cartucho", 10, cliente1, e02);
    comissao02 += e02.comissao(v04.get_valor());
    numAtendimentos02+=1;


    Venda v05 = Venda("Reconstrucao de Predio", 10000, cliente4, e03);
    comissao03 += e03.comissao(v05.get_valor());
    numAtendimentos03+=1;


    Venda v06 = Venda("Decoracao de Apartamento no Brooklyn", 3000, cliente5, e03);
    comissao03 += e03.comissao(v06.get_valor());
    numAtendimentos03+=1;




    Venda v07 = Venda("Reforma do Clarim Diario", 5000, cliente1, e03);
    comissao03 += e03.comissao(v07.get_valor());
    numAtendimentos03+=1;


    Venda v08 = Venda("Formatacao do PC", 80, cliente3, e02);
    comissao02 += e02.comissao(v08.get_valor());
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.get_descricao() << endl;

    v02.print();
    cout << " Descricao: " << v02.get_descricao() << endl;

    v03.print();
    cout << " Descricao: " << v03.get_descricao() << endl;

    v04.print();
    cout << " Descricao: " << v04.get_descricao() << endl;

    v05.print();
    cout << " Descricao: " << v05.get_descricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.get_descricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.get_descricao() << endl;

    v07.print();
    cout << " Descricao: " << v07.get_descricao() << endl;

    v08.print();
    cout << " Descricao: " << v08.get_descricao() << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.get_salario_base()+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.get_salario_base()+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.get_salario_base()+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
