#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main(){  
    Cliente cliente[5];
    cliente[0].NOME = "J. Jonah Jameson";
    cliente[0].endereco ="Nova York";
	cliente[0].Cep = "35690000";

    
    cliente[1].NOME = "Norman Osborn";
    cliente[1].endereco ="Hartlford";
	cliente[1].Cep = "22061955";


    
    cliente[2].NOME = "Otto Octavius";
    cliente[2].endereco ="Schenectady";
	cliente[2].Cep = "24051953";


    
    cliente[3].NOME = "Bruce Benner";
    cliente[3].endereco ="Dayton";
	cliente[3].Cep = "22111967";
 

    
    cliente[4].NOME = "Steve Rogers";
    cliente[4].endereco ="Lower East Side";
	cliente[4].Cep = "13061981";
 
    
    for(int i=0;i<5;i++){
    cliente[i].print();
    }




    Especialista e[3];
    int numAtendimentos[3];
    double comissao[3];
    comissao[0]=0;
    numAtendimentos[0]=0;
    e[0].nome = "Peter Parker";
    e[0].IDADE = "46";
    e[0].rgFunc = 27061975;
    e[0].SalarioBase = 3000;
    e[0].especialidade = "Fotografia";



   
    numAtendimentos[1]=0;
    comissao[1]=0;
    e[1].nome = "Tony Stark";
    e[1].IDADE = "56";
    e[1].rgFunc = 4041965;
    e[1].SalarioBase = 1000;
    e[1].especialidade = "Consertos de equipamentos eletronicos";


    numAtendimentos[2]=0;
    comissao[2]=0;
    e[2].nome = "Wanda Maximoff";
    e[2].IDADE = "32";
    e[2].rgFunc = 16021989;
    e[2].SalarioBase = 5000;
    e[2].especialidade = "Engenharia e Designeeeeer";


    Gerente g01;
    double bonificacao01 = 0;
    g01.nome = "Nick Fury";
    g01.IDADE = "72";
    g01.rgFunc = 21121948;
    g01.SalarioBase = 10000;


    Venda v[8];
    v[0].cliente= "J. Jonah Jameson";
    v[0].esp = e[0];
    v[0].descricao = "Fotos do Homem Aranha";
    v[0].VALOR = 100;
    comissao[0] += e[0].comissao(v[0].VALOR);
    numAtendimentos[0]+=1;


    v[1].cliente= "Bruce Benner";
    v[1].esp = e[1];
    v[1].descricao = "Troca da tela do telefone";
    v[1].VALOR = 100;
    comissao[1] += e[1].comissao(v[1].VALOR);
    numAtendimentos[1]+=1;


    v[2].cliente= "Norman Osborn";
    v[2].esp = e[0];
    v[2].descricao = "Fotos do novo planador";
    v[2].VALOR = 150;
    comissao[0] += e[0].comissao(v[2].VALOR);
    numAtendimentos[0]+=1;


    v[3].cliente= "J. Jonah Jameson";
    v[3].esp = e[1];
    v[3].descricao = "Recarga de cartucho";
    v[3].VALOR = 10;
    comissao[1] += e[1].comissao(v[3].VALOR);
    numAtendimentos[1]+=1;



    v[4].cliente= "Bruce Benner";
    v[4].esp = e[2];
    v[4].descricao = "Reconstrucao de Predio";
    v[4].VALOR = 10000;
    comissao[2] += e[2].comissao(v[4].VALOR);
    numAtendimentos[2]+=1;



    v[5].cliente= "Steve Rogers";
    v[5].esp = e[2];
    v[5].descricao = "Decoracao de Apartamento no Brooklyn";
    v[5].VALOR = 3000;
    comissao[2] += e[2].comissao(v[5].VALOR);
    numAtendimentos[2]+=1;


    v[5].descricao = "Decoracao de Apartamento no Brooklyn";
    v[5].VALOR = 3000;



    v[6].cliente= "J. Jonah Jameson";
    v[6].esp = e[2];
    v[6].descricao = "Reforma do Clarim Diario";
    v[6].VALOR = 5000;
    comissao[2] += e[2].comissao(v[6].VALOR);
    numAtendimentos[2]+=1;



    v[7].cliente= "Otto Octavius";
    v[7].esp = e[1];
    v[7].descricao = "Formatacao do PC";
    v[7].VALOR = 80;
    comissao[2] += e[1].comissao(v[7].VALOR);
    numAtendimentos[1]+=1;
     
    cout <<" \n \n           Relatorio das Vendas \n" << endl;
    
    for(int i=0;i<8;i++){
    v[i].print();
    cout << " Descricao: " << v[i].descricao << endl;
    }


    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    
    for(int i=0;i<3;i++){
    e[i].print();
    cout << "Num Atendimentos: " << numAtendimentos[i] << endl;
    cout << "Salario Total: " << e[i].SalarioBase+comissao[i]<<endl;
    }

    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos[0] + numAtendimentos[1] + numAtendimentos[2];
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
