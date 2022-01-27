#include <iostream>
#include "Manager.hpp"


int main(){
    Manager m1;

    m1.add_cliente("J. Jonah Jameson", "Nova York", "35690000");
    m1.add_cliente("Norman Osborn", "Hartlford", "22061955");
    m1.add_cliente("Otto Octavius", "Schenectady", "24051953");
    m1.add_cliente("Bruce Benner", "Dayton", "22111967");
    m1.add_cliente("Steve Rogers", "Lower East Side", "13061981");

    m1.add_especialista("Peter Parker", "46", 27061975, 3000, "Fotografia");
    m1.add_especialista("Tony Stark", "56", 4041965, 1000, "Consertos de equipamentos eletronicos");
    m1.add_especialista("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer");

    m1.add_gerente("Nick Fury", "72", 21121948, 10000);

    m1.add_venda(m1.clientes[0], m1.especialistas[0], "Fotos do Homem Aranha", 100);
    m1.add_venda(m1.clientes[3], m1.especialistas[1],"Troca da tela do telefone", 100);
    m1.add_venda(m1.clientes[1], m1.especialistas[0], "Fotos do novo planador", 150);
    m1.add_venda(m1.clientes[0], m1.especialistas[1], "Recarga de cartucho", 10);
    m1.add_venda(m1.clientes[3], m1.especialistas[2], "Reconstrucao de Predio", 10000);
    m1.add_venda(m1.clientes[4], m1.especialistas[2], "Decoracao de Apartamento no Brooklyn", 3000);
    m1.add_venda(m1.clientes[0], m1.especialistas[2], "Reforma do Clarim Diario", 5000);
    m1.add_venda(m1.clientes[2], m1.especialistas[1], "Formatacao do PC", 80);

    m1.relatorioClientes();

    m1.relatorioVendas();

    m1.relatorioFuncionarios();

    return 0;
}