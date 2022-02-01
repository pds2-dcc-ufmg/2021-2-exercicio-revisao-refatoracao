#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

#include <map>

int main()
{

  //o main comeca com a declaracao de tres vetores, um mapa para a listagem de clientes, outro para a lista de vendas e para lista de funcionarios especialista
 //observe que nao ha necessidade do vetor ordenarporinsercao nos comandos principais, mas apenas eh um auxiliar para que a impressao seja feita pela ordem de insercao
    std::map<std::string,Cliente> clientes;
    std::vector<std::string> ordenarporinsercao;
    std::vector<Venda> vendas;
    std::vector<Especialista*> trabalhadores;

  //lista de clientes, adicionando-os a lista
    Cliente cliente1;
    cliente1.NOME = "J. Jonah Jameson";
    cliente1.endereco ="Nova York";
	  cliente1.Cep = "35690000";
     clientes.insert({cliente1.NOME,cliente1});
     ordenarporinsercao.push_back(cliente1.NOME);
    
   

    Cliente cliente2;
    cliente2.NOME = "Norman Osborn";
    cliente2.endereco ="Hartlford";
	  cliente2.Cep = "22061955";
      clientes.insert({cliente2.NOME,cliente2});
      ordenarporinsercao.push_back(cliente2.NOME);
   

    Cliente cliente3;
    cliente3.NOME = "Otto Octavius";
    cliente3.endereco ="Schenectady";
	  cliente3.Cep = "24051953";
      clientes.insert({cliente3.NOME,cliente3});
      ordenarporinsercao.push_back(cliente3.NOME);
  

    Cliente cliente4;
    cliente4.NOME = "Bruce Benner";
    cliente4.endereco ="Dayton";
	  cliente4.Cep = "22111967";
      clientes.insert({cliente4.NOME,cliente4});
      ordenarporinsercao.push_back(cliente4.NOME);
    
    Cliente cliente5;
    cliente5.NOME = "Steve Rogers";
    cliente5.endereco ="Lower East Side";
  	cliente5.Cep = "13061981";
      clientes.insert({cliente5.NOME,cliente5});
      ordenarporinsercao.push_back(cliente5.NOME);
  


   //lista de especialistas,adicionando-os ao vetor
    Especialista e01;
    e01.nome = "Peter Parker";
    e01.IDADE = "46";
    e01.rgFunc = 27061975;
    e01.SalarioBase = 3000;
    e01.especialidade = "Fotografia";
      trabalhadores.push_back(&e01);



    Especialista e02;
    e02.nome = "Tony Stark";
    e02.IDADE = "56";
    e02.rgFunc = 4041965;
    e02.SalarioBase = 1000;
    e02.especialidade = "Consertos de equipamentos eletronicos";
      trabalhadores.push_back(&e02);


    Especialista e03;
    e03.nome = "Wanda Maximoff";
    e03.IDADE = "32";
    e03.rgFunc = 16021989;
    e03.SalarioBase = 5000;
    e03.especialidade = "Engenharia e Designeeeeer";
      trabalhadores.push_back(&e03);


    Gerente g01;
    g01.nome = "Nick Fury";
    g01.IDADE = "72";
    g01.rgFunc = 21121948;
    g01.SalarioBase = 10000;
   

   //lista de vendas, adicionando cada venda a informação do seu respectivo vendedor especialista com a funcao especialista.adicionavenda(Venda), alem disso o cliente da venda aponta para o ponteiro com os dados do cliente, pode ser util para verificar endereco e mais informacoes do cliente
    Venda v01;
    v01.cliente=&clientes["J. Jonah Jameson"];
    v01.esp = &e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.VALOR = 100;
    vendas.push_back(v01);
    e01.adicionavenda(v01);
    
    Venda v02;
    v02.cliente=&clientes["Bruce Benner"];
    v02.esp = &e02;
    v02.descricao = "Troca da tela do telefone";
    v02.VALOR = 100;
    vendas.push_back(v02);
    e02.adicionavenda(v02);

    Venda v03;
    v03.cliente=&clientes["Norman Osborn"];
    v03.esp = &e01;
    v03.descricao = "Fotos do novo planador";
    v03.VALOR = 150;
    e01.adicionavenda(v03);
    vendas.push_back(v03);

    Venda v04;
    v04.cliente= &clientes["J. Jonah Jameson"];
    v04.esp = &e02;
    v04.descricao = "Recarga de cartucho";
    v04.VALOR = 10;
    vendas.push_back(v04);
    e02.adicionavenda(v04);

    Venda v05;
    v05.cliente=& clientes["Bruce Benner"];
    v05.esp = &e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.VALOR = 10000;
    vendas.push_back(v05);
    e03.adicionavenda(v05);

    Venda v06;
    v06.cliente= &clientes["Steve Rogers"];
    v06.esp = &e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;
    vendas.push_back(v06);
    e03.adicionavenda(v06);

    Venda v07;
    v07.cliente= &clientes["J. Jonah Jameson"];
    v07.esp = &e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.VALOR = 5000;
    vendas.push_back(v07);
    e03.adicionavenda(v07);

    Venda v08;
    v08.cliente= &clientes["Otto Octavius"];
    v08.esp = &e02;
    v08.descricao = "Formatacao do PC";
    v08.VALOR = 80;
    vendas.push_back(v08);
    e02.adicionavenda(v08);



   //  impressao do relatorio dos clientes
   
  for(int y=0; y<ordenarporinsercao.size();y++){
    clientes[ordenarporinsercao[y]].print();
  }


  // impressao do relatorio das vendas utilizando a funcao imprimirvendas
    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

            for(int i=0;i<vendas.size();i++){
                vendas[i].imprimirvendas();
                std::cout<<std::endl;
              }

  //impressao do relatorio de cada funcionario, utilizando a funcao print propria da classe especialistas que segue como override do metodo print da classe funcionarios, base da heranca
    std::cout <<" \n \n           Relatorio dos Funcionarios \n" <<std::endl;
  
              for(int i=0;i<trabalhadores.size();i++){
                trabalhadores[i]->print();
              }
    
    //para impressao dos dados do gerente, soma-se o numero de vendas feitas como NUMTOTALservicos - o tamanho do vetor de vendas - e calcula seu salario total em sua classe
        
        int NUMTOTALservicos=vendas.size();
            g01.print();
        std::cout << "  Salario Total: " << g01.calculasalariototal(NUMTOTALservicos);

    return 0;
}
