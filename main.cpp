#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

using namespace std;

int main()
{
      double SalarioBase;

      int RgDoFuncionario, Valor;

      string nome, endereco, cep, idade, Especialidade, descricao;
      string cliente_;
      Especialista* especialista;
     
   
   
   

    
    nome = "J. Jonah Jameson";
    endereco ="Nova York";
    cep = "35690000";
    Cliente cliente1(nome,endereco,cep);
    cliente1.print();

    
    nome = "Norman Osborn";
    endereco ="Hartlford";
	  cep = "22061955";
    Cliente cliente2(nome,endereco,cep);
    cliente2.print();

    
    nome = "Otto Octavius";
    endereco ="Schenectady";
	  cep = "24051953";
    Cliente cliente3(nome,endereco,cep);
    cliente3.print();

   
     nome = "Bruce Benner";
     endereco ="Dayton";
	   cep = "22111967";
     Cliente cliente4(nome,endereco,cep);
     cliente4.print();


    nome = "Steve Rogers";
    endereco ="Lower East Side";
	  cep = "13061981";
    Cliente cliente5(nome,endereco,cep);
    cliente5.print();




    
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    nome = "Peter Parker";
    idade = "46";
    RgDoFuncionario = 27061975;
    SalarioBase = 3000;
    Especialidade = "Fotografia";
    Especialista e01(nome, idade, RgDoFuncionario,SalarioBase,Especialidade);



    
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    nome  = "Tony Stark";
    idade = "56";
    RgDoFuncionario = 4041965;
    SalarioBase = 1000;
    Especialidade = "Consertos de equipamentos eletronicos";
    Especialista e02(nome, idade, RgDoFuncionario,SalarioBase,Especialidade);


    
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    nome  = "Wanda Maximoff";
    idade = "32";
    RgDoFuncionario = 16021989;
    SalarioBase = 5000;
    Especialidade = "Engenharia e Designeeeeer";
    Especialista e03(nome, idade, RgDoFuncionario,SalarioBase,Especialidade);

    
    double bonificacao01 = 0;
    nome  = "Nick Fury";
    idade= "72";
    RgDoFuncionario = 21121948;
    SalarioBase = 10000;
    Gerente g01(nome,idade,RgDoFuncionario,SalarioBase);

  
    
    cliente_ = "J. Jonah Jameson";
    especialista = &e01;
    descricao = "Fotos do Homem Aranha";
    Valor = 100;
    Venda v01(cliente_,descricao,Valor,*especialista);
    comissao01 += e01.Comissao(v01.getValor());
    numAtendimentos01+=1;

  


    
    cliente_= "Bruce Benner";
    especialista  = &e02;
    descricao = "Troca da tela do telefone";
    Valor = 100;
    Venda v02(cliente_,descricao,Valor,*especialista);
    comissao02 += e02.Comissao(v02.getValor());
    numAtendimentos02+=1;


   
    cliente_= "Norman Osborn";
    especialista  = &e01;
    descricao = "Fotos do novo planador";
    Valor = 150;
     Venda v03(cliente_,descricao,Valor,*especialista);
    comissao01 += e01.Comissao(v03.getValor());
    numAtendimentos01+=1;


   
   cliente_= "J. Jonah Jameson";
  especialista  = &e02;
    descricao = "Recarga de cartucho";
    Valor = 10;
     Venda v04(cliente_,descricao,Valor,*especialista);
    comissao02 += e02.Comissao(v04.getValor());
    numAtendimentos02+=1;


    
    cliente_= "Bruce Benner";
    especialista  = &e03;
    descricao = "Reconstrucao de Predio";
    Valor = 10000;
    Venda v05(cliente_,descricao,Valor,*especialista);
    comissao03 += e03.Comissao(v05.getValor());
    numAtendimentos03+=1;


   
   cliente_= "Steve Rogers";
    especialista  = &e03;
    descricao = "Decoracao de Apartamento no Brooklyn";
    Valor = 3000;
     Venda v06(cliente_,descricao,Valor,*especialista);
    comissao03 += e03.Comissao(v06.getValor());
    numAtendimentos03+=1;



    
    cliente_= "J. Jonah Jameson";
    especialista  = &e03;
    descricao = "Reforma do Clarim Diario";
    Valor = 5000;
    Venda v07(cliente_,descricao,Valor,*especialista);
    comissao03 += e03.Comissao(v07.getValor());
    numAtendimentos03+=1;


    
    cliente_= "Otto Octavius";
    especialista  = &e02;
    descricao = "Formatacao do PC";
    Valor = 80;
    Venda v08(cliente_,descricao,Valor,*especialista);
    comissao02 += e02.Comissao(v08.getValor());
    numAtendimentos02+=1;

  

    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.getDescricao() << endl;

    v02.print();
    cout << " Descricao: " << v02.getDescricao()<< endl;

    v03.print();
    cout << " Descricao: " << v03.getDescricao() << endl;

    v04.print();
    cout << " Descricao: " << v04.getDescricao() << endl;

    v05.print();
    cout << " Descricao: " << v05.getDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getDescricao() << endl;

    v06.print();
    cout << " Descricao: " << v06.getDescricao()<< endl;

    v07.print();
    cout << " Descricao: " << v07.getDescricao() << endl;

    v08.print();
    cout << " Descricao: " << v08.getDescricao() << endl;

 
  

    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.getSalarioBase()+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.getSalarioBase()+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.getSalarioBase()+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.set_Bonificacao(g01.Calcula_Bonificacao_Gerente(NUMTOTALservicos));
    g01.print();
    cout << "Salario Total: " << g01.getSalarioBase() + g01.getBonificacao()<<endl;

    return 0;
}

