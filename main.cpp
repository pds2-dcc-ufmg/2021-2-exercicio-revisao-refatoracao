#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

int main()
{
    Cliente cliente1;
    cliente1.setNome("J. Jonah Jameson");
    cliente1.setEndereco("Nova York");
	cliente1.setCep("35690000");
    cliente1.print();

    Cliente cliente2;
    cliente2.setNome("Norman Osborn");
    cliente2.setEndereco("Hartlford");
	cliente2.setCep("22061955");
    cliente2.print();

    Cliente cliente3;
    cliente3.setNome("Otto Octavius");
    cliente3.setEndereco("Schenectady");
	cliente3.setCep("24051953");
    cliente3.print();

    Cliente cliente4;
    cliente4.setNome("Bruce Benner");
    cliente4.setEndereco("Dayton");
	cliente4.setCep("22111967");
    cliente4.print();

    Cliente cliente5;
    cliente5.setNome("Steve Rogers");
    cliente5.setEndereco("Lower East Side");
	cliente5.setCep("13061981");
    cliente5.print();




    Especialista e01 = Especialista(3000,"46","Peter Parker",27061975,"Fotografia");
    
    // e01.nome = "Peter Parker";
    // e01.IDADE = "46";
    // e01.rgFunc = 27061975;
    // e01.SalarioBase = 3000;
    // e01.especialidade = "Fotografia";
    


    Especialista e02 = Especialista(1000,"56","Tony Stark",4041965,"Consertos de equipamentos eletronicos"); 
    // e02.nome = "Tony Stark";
    // e02.IDADE = "56";
    // e02.rgFunc = 4041965;
    // e02.SalarioBase = 1000;
    // e02.especialidade = "Consertos de equipamentos eletronicos";


    Especialista e03 = Especialista(5000,"32","Wanda Maximoff",16021989,"Engenharia e Designeeeeer");
    // e03.nome = "Wanda Maximoff";
    // e03.IDADE = "32";
    // e03.rgFunc = 16021989;
    // e03.SalarioBase = 5000;
    // e03.especialidade = "Engenharia e Designeeeeer";


    Gerente g01 = Gerente(10000,"72","Nick Fury",21121948,0) ;
        
    // double bonificacao01 = 0;
    // g01.nome = "Nick Fury";
    // g01.IDADE = "72";
    // g01.rgFunc = 21121948;
    // g01.SalarioBase = 10000;


    Venda v01 = Venda(100,"Fotos do Homem Aranha",e01,"J. Jonah Jameson");
    e01.adicionarComissao(e01.comissao(v01.getValor()));
    e01.adicionarAtendimento(1);       
        
    // v01.cliente= "J. Jonah Jameson";
    // v01.esp = e01;
    // v01.descricao = "Fotos do Homem Aranha";
    // v01.VALOR = 100;
    // comissao01 += e01.comissao(v01.getValor());
    // numAtendimentos01+=1;


    Venda v02 = Venda(100,"Troca da tela do telefone",e02,"Bruce Benner");
    e02.adicionarComissao(e02.comissao(v02.getValor()));
    e02.adicionarAtendimento(1);       
   
    // v02.cliente= "Bruce Benner";
    // v02.esp = e02;
    // v02.descricao = "Troca da tela do telefone";
    // v02.VALOR = 100;
    // comissao02 += e02.comissao(v02.getValor());
    // numAtendimentos02+=1;


    Venda v03= Venda(150,"Fotos do novo planador",e01,"Norman Osborn");
    e01.adicionarComissao(e01.comissao(v03.getValor()));
    e01.adicionarAtendimento(1);       
   
    // v03.cliente= "Norman Osborn";
    // v03.esp = e01;
    // v03.descricao = "Fotos do novo planador";
    // v03.VALOR = 150;
    // comissao01 += e01.comissao(v03.getValor());
    // numAtendimentos01+=1;


    Venda v04 = Venda(10,"Recarga de cartucho",e02,"J. Jonah Jameson");
    e02.adicionarComissao(e02.comissao(v04.getValor()));
    e02.adicionarAtendimento(1);       
   
    // v04.cliente= "J. Jonah Jameson";
    // v04.esp = e02;
    // v04.descricao = "Recarga de cartucho";
    // v04.VALOR = 10;
    // comissao02 += e02.comissao(v04.getValor());
    // numAtendimentos02+=1;


    Venda v05 = Venda(10000,"Reconstrucao de Predio",e03,"Bruce Benner");
    e03.adicionarComissao(e03.comissao(v05.getValor()));
    e03.adicionarAtendimento(1);       
   
    // v05.cliente= "Bruce Benner";
    // v05.esp = e03;
    // v05.descricao = "Reconstrucao de Predio";
    // v05.VALOR = 10000;
    // comissao03 += e03.comissao(v05.getValor());
    // numAtendimentos03+=1;


    Venda v06 = Venda(3000,"Decoracao de Apartamento no Brooklyn",e03,"Steve Rogers");
    e03.adicionarComissao(e03.comissao(v06.getValor()));
    e03.adicionarAtendimento(1);       
   
    // v06.cliente= "Steve Rogers";
    // v06.esp = e03;
    // v06.descricao = "Decoracao de Apartamento no Brooklyn";
    // v06.VALOR = 3000;
    // comissao03 += e03.comissao(v06.getValor());
    // numAtendimentos03+=1;


    v06.setDescricao("Decoracao de Apartamento no Brooklyn");
    v06.setValor(3000);



    Venda v07 = Venda(5000,"Reforma do Clarim Diario",e03,"J. Jonah Jameson");
    e03.adicionarComissao(e03.comissao(v07.getValor()));
    e03.adicionarAtendimento(1);       
    
    // v07.cliente= "J. Jonah Jameson";
    // v07.esp = e03;
    // v07.descricao = "Reforma do Clarim Diario";
    // v07.VALOR = 5000;
    // comissao03 += e03.comissao(v07.getValor());
    // numAtendimentos03+=1;


    Venda v08 = Venda(80,"Formatacao do PC",e02,"Otto Octavius");
    e02.adicionarComissao(e02.comissao(v08.getValor()));
    e02.adicionarAtendimento(1);       
    // v08.cliente= "Otto Octavius";
    // v08.esp = e02;
    // v08.descricao = "Formatacao do PC";
    // v08.VALOR = 80;
    //comissao02 += e02.comissao(v08.getValor());
    //numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.getDescricao() << endl;

    v02.print();
    cout << " Descricao: " << v02.getDescricao() << endl;

    v03.print();
    cout << " Descricao: " << v03.getDescricao() << endl;

    v04.print();
    cout << " Descricao: " << v04.getDescricao() << endl;

    v05.print();
    cout << " Descricao: " << v05.getDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getDescricao() << endl;

    v07.print();
    cout << " Descricao: " << v07.getDescricao() << endl;

    v08.print();
    cout << " Descricao: " << v08.getDescricao() << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << e01.getNumAtendimento() << endl;
    cout << "Salario Total: " << e01.calcularTotal()<<endl;

    e02.print();
    cout << "Num Atendimentos: " << e02.getNumAtendimento() << endl;
    cout << "Salario Total: " << e02.calcularTotal()<<endl;

    e03.print();
    cout << "Num Atendimentos: " << e03.getNumAtendimento() << endl;
    cout << "Salario Total: " << e03.calcularTotal()<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = e01.getNumAtendimento() + e02.getNumAtendimento() + e03.getNumAtendimento();
    g01.setBonificao(g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    g01.print();
    cout << "Salario Total: " << g01.calcularTotal()<<endl;

    return 0;
}
