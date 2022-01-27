#include "FerramentaADM.hpp"


int main() {
    FerramentaADM adm;


    Cliente cliente1 = Cliente("J. Jonah Jameson", "Nova York", "35690000");
    Cliente cliente2 = Cliente("Norman Osborn", "Hartlford", "22061955");
    Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", "24051953");
    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");

    adm.add_cliente(cliente1);
    adm.add_cliente(cliente2);
    adm.add_cliente(cliente3);
    adm.add_cliente(cliente4);
    adm.add_cliente(cliente5);

    adm.imprime_clientes();


    Especialista e01 = Especialista("Peter Parker", 46, 27061975, 3000, "Fotografia", 0.1);
    Especialista e02 = Especialista("Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos", 0.1);
    Especialista e03 = Especialista("Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designeeeeer", 0.1);

    adm.add_especialista(e01);
    adm.add_especialista(e02);
    adm.add_especialista(e03);


    Gerente g01 = Gerente("Nick Fury", 72, 21121948, 10000, 15);


    Venda v01 = Venda(cliente1, e01, "Fotos do Homem Aranha", 100);
    Venda v02 = Venda(cliente4, e02, "Troca da tela do telefone", 100);
    Venda v03 = Venda(cliente2, e01, "Fotos do novo planador", 150);
    Venda v04 = Venda(cliente1, e02, "Regarda de cartucho", 10);
    Venda v05 = Venda(cliente4, e03, "Reconstrucao de Predio", 10000);
    Venda v06 = Venda(cliente5, e03, "Decoracao de Apartamento no Brooklyn", 3000);
    Venda v07 = Venda(cliente1, e03, "Reforma do Clarim Diario", 5000);
    Venda v08 = Venda(cliente3, e02, "Formatacao do PC", 80);

    adm.add_venda(v01);
    adm.add_venda(v02);
    adm.add_venda(v03);
    adm.add_venda(v04);
    adm.add_venda(v05);
    adm.add_venda(v06);
    adm.add_venda(v07);
    adm.add_venda(v08);

    adm.imprime_vendas();

    adm.relatorio_funcs();

    adm.relatorio_gerente();

    return 0;
}
