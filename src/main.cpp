#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>


int main()
{
    std::vector<Venda*> vendas;
    std::vector<Especialista*> especialistas;

///////////////////////////////////// CADASTRANDO CLIENTES /////////////////////////////////////
    Cliente cliente1 = Cliente ("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.ImprimeDados();

    Cliente cliente2 = Cliente ("Norman Osborn", "Hartlford", "22061955");
    cliente2.ImprimeDados();

    Cliente cliente3 = Cliente ("Otto Octavius", "Schenectady", "24051953");
    cliente3.ImprimeDados();

    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
    cliente4.ImprimeDados();

    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");
    cliente5.ImprimeDados();

///////////////////////////////////// CADASTRANDO ESPECIALISTAS /////////////////////////////////////

    Especialista e01 = Especialista("Peter Parker", 46, 27061975, 0, 3000, "Fotografia", 0);
    especialistas.push_back(&e01);

    Especialista e02 = Especialista("Tony Stark", 56, 4041965, 0, 1000, "Consertos de equipamentos eletronicos", 0);
    especialistas.push_back(&e02);
    
    Especialista e03 = Especialista("Wanda Maximoff", 32, 16021989, 0, 5000, "Engenharia e Designeeeeer", 0);
    especialistas.push_back(&e03);

///////////////////////////////////// CADASTRANDO GERENTE /////////////////////////////////////

    Gerente g01 = Gerente("Nick Fury", 72, 21121948, 10000);

///////////////////////////////////// REALIZANDO VENDAS /////////////////////////////////////

    Venda v01 = Venda(e01, cliente1, "Fotos do Homem Aranha", 100);
    e01.Comissao += e01.CalculaComissao(v01.Valor);
    e01.NumAtendimentos++;
    vendas.push_back(&v01);


    Venda v02 = Venda(e02, cliente4, "Troca da tela do telefone", 100);
    e02.Comissao += e02.CalculaComissao(v02.Valor);
    e02.NumAtendimentos++;
    vendas.push_back(&v02);


    Venda v03 = Venda(e01, cliente2, "Fotos do novo planador", 150);
    e01.Comissao += e01.CalculaComissao(v03.Valor);
    e01.NumAtendimentos++;
    vendas.push_back(&v03);


    Venda v04 = Venda(e02, cliente1, "Recarga de cartucho", 10);
    e02.Comissao += e02.CalculaComissao(v04.Valor);
    e02.NumAtendimentos++;
    vendas.push_back(&v04);


    Venda v05 = Venda(e03, cliente4, "Reconstrucao de Predio", 10000);
    e03.Comissao += e03.CalculaComissao(v05.Valor);
    e03.NumAtendimentos++;
    vendas.push_back(&v05);


    Venda v06 = Venda(e03, cliente5, "Decoracao de Apartamento no Brooklyn", 3000);
    e03.Comissao += e03.CalculaComissao(v06.Valor);
    e03.NumAtendimentos++;
    vendas.push_back(&v06);


    Venda v07 = Venda(e03, cliente1, "Reforma do Clarim Diario", 5000);
    e03.Comissao += e03.CalculaComissao(v07.Valor);
    e03.NumAtendimentos++;
    vendas.push_back(&v07);


    Venda v08 = Venda(e02, cliente3, "Formatacao do PC", 80);
    e02.Comissao += e02.CalculaComissao(v08.Valor);
    e02.NumAtendimentos++;
    vendas.push_back(&v08);


///////////////////////////////////// RELATORIOS FINAIS /////////////////////////////////////

    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;
    int cont = 1;
    for (Venda *i : vendas)
    {
        if (cont == 6)
        {
            i->ImprimeVenda();
            std::cout << " Descricao: " << i->Descricao << std::endl;
            i->ImprimeVenda();
            std::cout << " Descricao: " << i->Descricao << std::endl;
            cont++;
        }else{
            i->ImprimeVenda();
            std::cout << " Descricao: " << i->Descricao << std::endl;
            cont++;
        }

    }


////////////////////////////////////////////////////////////////////////////////////////////

    int TotalServicos = 0;
    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    for (Especialista *i : especialistas)
    {
        i->ImprimeDados();
        std::cout << "Num Atendimentos: " << i->NumAtendimentos << std::endl;
        std::cout << "Salario Total: " << i->SalarioBase + i->Comissao << std::endl;
        TotalServicos += i->NumAtendimentos;

    }

    g01.Comissao = g01.CalculaBonificacao(TotalServicos);
    g01.ImprimeDados();
    std::cout << "Salario Total: " << g01.SalarioBase + g01.Comissao << std::endl;

    return 0;
}
