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

    Venda venda[8];
    venda[0].cliente.nome = "J. Jonah Jameson";
    venda[0].especialista = especialista1;
    venda[0].descricao = "Fotos do Homem Aranha";
    venda[0].valor = 100;
    comissao01  +=  especialista1.comissao(venda[0].valor);
    numAtendimentos01 += 1;

    venda[1].cliente.nome = "Bruce Benner";
    venda[1].especialista = especialista2;
    venda[1].descricao = "Troca da tela do telefone";
    venda[1].valor = 100;
    comissao02  +=  especialista2.comissao(venda[1].valor);
    numAtendimentos02 += 1;


    venda[2].cliente.nome = "Norman Osborn";
    venda[2].especialista = especialista1;
    venda[2].descricao = "Fotos do novo planador";
    venda[2].valor = 150;
    comissao01  +=  especialista1.comissao(venda[2].valor);
    numAtendimentos01 += 1;

  
    venda[3].cliente.nome = "J. Jonah Jameson";
    venda[3].especialista = especialista2;
    venda[3].descricao = "Recarga de cartucho";
    venda[3].valor = 10;
    comissao02  +=  especialista2.comissao(venda[3].valor);
    numAtendimentos02 += 1;


    venda[4].cliente.nome = "Bruce Benner";
    venda[4].especialista = especialista3;
    venda[4].descricao = "Reconstrucao de Predio";
    venda[4].valor = 10000;
    comissao03  +=  especialista3.comissao(venda[4].valor);
    numAtendimentos03 += 1;

 
    venda[5].cliente.nome = "Steve Rogers";
    venda[5].especialista = especialista3;
    venda[5].descricao = "Decoracao de Apartamento no Brooklyn";
    venda[5].valor = 3000;
    comissao03  +=  especialista3.comissao(venda[5].valor);
    numAtendimentos03 += 1;

 
    venda[6].cliente.nome = "J. Jonah Jameson";
    venda[6].especialista = especialista3;
    venda[6].descricao = "Reforma do Clarim Diario";
    venda[6].valor = 5000;
    comissao03  +=  especialista3.comissao(venda[6].valor);
    numAtendimentos03 += 1;

 
    venda[7].cliente.nome = "Otto Octavius";
    venda[7].especialista = especialista2;
    venda[7].descricao = "Formatacao do PC";
    venda[7].valor = 80;
    comissao02  +=  especialista2.comissao(venda[7].valor);
    numAtendimentos02 += 1;


    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    for (int i = 0; i<8; i++){
    venda[i].print();
    }

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
