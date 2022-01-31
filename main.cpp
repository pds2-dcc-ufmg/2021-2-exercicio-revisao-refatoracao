#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

int main() {
    //-------------Clientes-------------
    Cliente cliente1("J. Jonah Jameson", "Nova York", 35690000);
    cliente1.imprimirDados();

    Cliente cliente2("Norman Osborn", "Hartlford", 22061955);
    cliente2.imprimirDados();

    Cliente cliente3("Otto Octavius", "Schenectady", 24051953);
    cliente3.imprimirDados();

    Cliente cliente4("Bruce Benner", "Dayton", 22111967);
    cliente4.imprimirDados();

    Cliente cliente5("Steve Rogers", "Lower East Side", 13061981);
    cliente5.imprimirDados();

    //-------------Especialistas-------------
    Especialista especialista1("Peter Parker", 46, 3000, 27061975, "Fotografia");
    especialista1.imprimirDados();

    Especialista especialista2("Tony Stark", 56, 1000, 4041965, "Consertos de equipamentos eletronicos");
    especialista2.imprimirDados();

    Especialista especialista3("Wanda Maximoff", 32, 5000, 16021989, "Engenharia e Designer");
    especialista3.imprimirDados();

    //-------------Gerente-------------
    Gerente gerente1("Nick Fury", 72, 10000, 21121948);
    gerente1.imprimirDados();

    //-------------Vendas-------------
    Venda venda1(100.0, "Fotos do Homem Aranha", especialista1, cliente1);
    especialista1.adicionaAtendimento();
    especialista1.adicionaComissao(venda1.getValor());

    Venda venda2(100.0, "Troca da tela do telefone", especialista2, cliente4);
    especialista2.adicionaAtendimento();
    especialista2.adicionaComissao(venda2.getValor());

    Venda venda3(150.0, "Fotos do novo planador", especialista1, cliente2);
    especialista1.adicionaAtendimento();
    especialista1.adicionaComissao(venda3.getValor());

    Venda venda4(10.0, "Recarga de cartucho", especialista2, cliente1);
    especialista2.adicionaAtendimento();
    especialista2.adicionaComissao(venda4.getValor());

    Venda venda5(10000.0, "Reconstrucao de Predio", especialista3, cliente4);
    especialista3.adicionaAtendimento();
    especialista3.adicionaComissao(venda5.getValor());

    Venda venda6(3000.0, "Decoracao de Apartamento no Brooklyn", especialista3, cliente5);
    especialista3.adicionaAtendimento();
    especialista3.adicionaComissao(venda6.getValor());

    Venda venda7(5000.0, "Reforma do Clarim Diario", especialista3, cliente1);
    especialista3.adicionaAtendimento();
    especialista3.adicionaComissao(venda7.getValor());

    Venda venda8(80.0, "Formatacao do PC", especialista2, cliente3);
    especialista2.adicionaAtendimento();
    especialista2.adicionaComissao(venda8.getValor());

    //-------------Relatorio das Vendas-------------
    std::cout <<"\n\n-------------Relatorio das Vendas-------------\n" << std::endl;

    venda1.relatorioVendas();
    venda2.relatorioVendas();
    venda3.relatorioVendas();
    venda4.relatorioVendas();
    venda5.relatorioVendas();
    venda6.relatorioVendas();
    venda7.relatorioVendas();
    venda8.relatorioVendas();

    //-------------Relatorio dos Funcionarios-------------
    std::cout <<"\n\n-------------Relatorio dos Funcionarios-------------\n" << std::endl;

    especialista1.imprimirDados();
    especialista2.imprimirDados();
    especialista3.imprimirDados();

    //-------------Relatorio do Gerente-------------

    int totalServicos = 0;
    totalServicos = especialista1.getNumAtendimentos() + especialista2.getNumAtendimentos() + especialista3.getNumAtendimentos();
    gerente1.adicionaComissao(totalServicos);
    gerente1.imprimirDados();

    return 0;
}
