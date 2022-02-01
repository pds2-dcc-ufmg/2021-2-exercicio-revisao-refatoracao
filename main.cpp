#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main() {

    Cliente cliente1;
    cliente1.nome = "J. Jonah Jameson";
    cliente1.endereco ="Nova York";
	cliente1.cep = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2.nome = "Norman Osborn";
    cliente2.endereco ="Hartlford";
	cliente2.cep = "22061955";
    cliente2.print();

    Cliente cliente3;
    cliente3.nome = "Otto Octavius";
    cliente3.endereco ="Schenectady";
	cliente3.cep = "24051953";
    cliente3.print();

    Cliente cliente4;
    cliente4.nome = "Bruce Benner";
    cliente4.endereco ="Dayton";
	cliente4.cep = "22111967";
    cliente4.print();

    Cliente cliente5;
    cliente5.nome = "Steve Rogers";
    cliente5.endereco ="Lower East Side";
	cliente5.cep = "13061981";
    cliente5.print();


    Especialista especialista1;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    especialista1.nome = "Peter Parker";
    especialista1.idade = "46";
    especialista1.rg = 27061975;
    especialista1.salarioBase = 3000;
    especialista1.especialidade = "Fotografia";

    Especialista especialista2;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    especialista2.nome = "Tony Stark";
    especialista2.idade = "56";
    especialista2.rg = 4041965;
    especialista2.salarioBase = 1000;
    especialista2.especialidade = "Consertos de equipamentos eletronicos";

    Especialista especialista3;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    especialista3.nome = "Wanda Maximoff";
    especialista3.idade = "32";
    especialista3.rg = 16021989;
    especialista3.salarioBase = 5000;
    especialista3.especialidade = "Engenharia e Designeeeeer";


    Gerente gerente1;
    double bonificacao01 = 0;
    gerente1.nome = "Nick Fury";
    gerente1.idade = "72";
    gerente1.rg = 21121948;
    gerente1.salarioBase = 10000;


    Venda venda1;
    venda1.cliente.nome = "J. Jonah Jameson";
    venda1.especialista = especialista1;
    venda1.descricao = "Fotos do Homem Aranha";
    venda1.valor = 100;
    comissao01  +=  especialista1.comissao(venda1.valor);
    numAtendimentos01 += 1;

    Venda venda2;
    venda2.cliente.nome = "Bruce Benner";
    venda2.especialista = especialista2;
    venda2.descricao = "Troca da tela do telefone";
    venda2.valor = 100;
    comissao02  +=  especialista2.comissao(venda2.valor);
    numAtendimentos02 += 1;

    Venda venda3;
    venda3.cliente.nome = "Norman Osborn";
    venda3.especialista = especialista1;
    venda3.descricao = "Fotos do novo planador";
    venda3.valor = 150;
    comissao01  +=  especialista1.comissao(venda3.valor);
    numAtendimentos01 += 1;

    Venda venda4;
    venda4.cliente.nome = "J. Jonah Jameson";
    venda4.especialista = especialista2;
    venda4.descricao = "Recarga de cartucho";
    venda4.valor = 10;
    comissao02  +=  especialista2.comissao(venda4.valor);
    numAtendimentos02 += 1;

    Venda venda5;
    venda5.cliente.nome = "Bruce Benner";
    venda5.especialista = especialista3;
    venda5.descricao = "Reconstrucao de Predio";
    venda5.valor = 10000;
    comissao03  +=  especialista3.comissao(venda5.valor);
    numAtendimentos03 += 1;

    Venda venda6;
    venda6.cliente.nome = "Steve Rogers";
    venda6.especialista = especialista3;
    venda6.descricao = "Decoracao de Apartamento no Brooklyn";
    venda6.valor = 3000;
    comissao03  +=  especialista3.comissao(venda6.valor);
    numAtendimentos03 += 1;

    Venda venda7;
    venda7.cliente.nome = "J. Jonah Jameson";
    venda7.especialista = especialista3;
    venda7.descricao = "Reforma do Clarim Diario";
    venda7.valor = 5000;
    comissao03  +=  especialista3.comissao(venda7.valor);
    numAtendimentos03 += 1;

    Venda venda8;
    venda8.cliente.nome = "Otto Octavius";
    venda8.especialista = especialista2;
    venda8.descricao = "Formatacao do PC";
    venda8.valor = 80;
    comissao02  +=  especialista2.comissao(venda8.valor);
    numAtendimentos02 += 1;


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    venda1.print();
    

    venda2.print();

    cout << " Descricao: " << venda2.descricao << endl;

    venda3.print();
    cout << " Descricao: " << venda3.descricao << endl;

    venda4.print();
    cout << " Descricao: " << venda4.descricao << endl;

    venda5.print();
    cout << " Descricao: " << venda5.descricao << endl;

    venda6.print();
    cout << " Descricao: " << venda6.descricao << endl;

    venda6.print();
    cout << " Descricao: " << venda6.descricao << endl;

    venda7.print();
    cout << " Descricao: " << venda7.descricao << endl;

    venda8.print();
    cout << " Descricao: " << venda8.descricao << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    especialista1.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << especialista1.salarioBase+comissao01<<endl;

    especialista2.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << especialista2.salarioBase+comissao02<<endl;

    especialista3.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << especialista3.salarioBase+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    gerente1.valorBonificacao = gerente1.calcula_bonificacao_total(NUMTOTALservicos);
    gerente1.print();
    cout << "Salario Total: " << gerente1.salarioBase + gerente1.valorBonificacao<<endl;

    return 0;
}
