/* Brief:
  *Retirei variável desenecessárias 
   * Mudei os tributos para private
   * Os tributos foram padronizados para minusculos
   * Criei um construtor para cada classe
   * Criei um arquivo cpp e hpp para cada classe
   * retirei funções que não estavam sendo usadas
   * O percentual de especialista e bonificação de gerente 
devem ser inicializados no construtor, pois na instrução do programa diz que esses valores podem variar para cada funcionário. 
*/

#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

using namespace std;

int main()
{  
  
  Cliente cliente1("J. Jonah Jameson", "Nova York", "35690000");
  cliente1.print();

  Cliente cliente2("Norman Osborn", "Hartlford", "22061955");
  cliente2.print();

  Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
  cliente3.print();

  Cliente cliente4("Bruce Benner", "Dayton", "22111967");
  cliente4.print();

  Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
  cliente5.print();

  
  Especialista especialista1("Peter Parker", "46", 27061975, 3000, "Fotografia", 0.1, 0);
  especialista1.print();
  
    Especialista especialista2("Tony Stark", "56", 4041965, 1000, 
    "Consertos de equipamentos eletronicos", 0.1, 0);
    especialista2.print();

    Especialista especialista3("Wanda Maximoff", "32", 16021989, 5000, "Engenharia e Designeeeeer", 0.1, 0);
    especialista3.print();

  
    Gerente gerente1("Nick Fury", "72", 21121948, 10000, 10);
    gerente1.print(); 

  
    cout <<" \n \n           Relatorio das Vendas \n" << endl;
  
    Venda venda1(100, "Fotos do Homem Aranha", especialista1, "J. Jonah Jameson");
    venda1.print();
    especialista1.incrementarAtendimento();
    especialista1.acumulaVenda(100); 

    Venda venda2(100, "Troca da tela do telefone",              especialista2, "Bruce Benner");
    venda2.print();
    especialista2 .incrementarAtendimento();
    especialista2.acumulaVenda(100);

    Venda venda3(150, "Fotos do novo planador",           
    especialista1, "Norman Osborn");
    venda3.print();
    especialista1.incrementarAtendimento();
    especialista1.acumulaVenda(150);
  
      Venda venda4(10, "Recarga de cartucho", 
     especialista2, "J. Jonah Jameson");
      venda4.print();
      especialista2.incrementarAtendimento();
      especialista2.acumulaVenda(10);

    Venda venda5(10000, "Reconstrucao de Predio", 
    especialista3, "Bruce Benner");
    venda5.print();
    especialista3.incrementarAtendimento();
    especialista3.acumulaVenda(10000);

    Venda venda6(3000, "Decoracao de Apartamento no  Brooklyn", especialista3, "Steve Rogers");
    venda6.print();
    especialista3.incrementarAtendimento();
    especialista3.acumulaVenda(3000);


    Venda venda7(5000, "Reforma do Clarim Diario", especialista3, "J. Jonah Jameson");
  venda7.print();
  especialista3.incrementarAtendimento();
  especialista3.acumulaVenda(5000);

    Venda venda8(80, "Formatacao do PC", especialista2, 
  "Otto Octavius");
  venda8.print();
  especialista2.incrementarAtendimento();
  especialista2.acumulaVenda(80);

  
    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    especialista1.print();
    cout << "Num Atendimentos: " << especialista1.getNumAtendimentos()<< endl;
    cout << "Salario Total: " <<       
    especialista1.getSalarioBase() +     
    especialista1.getTotalvendas() << endl << "\n";

    especialista2.print();
    cout << "Num Atendimentos: " << especialista2.getNumAtendimentos() << endl;
    cout << "Salario Total: " <<   
     especialista2.getSalarioBase() +     
     especialista2.getTotalvendas() << endl << "\n";

    especialista3.print();
    cout << "Num Atendimentos: " << especialista3.getNumAtendimentos() << endl;
    cout << "Salario Total: " <<   
     especialista3.getSalarioBase() +   
     especialista3.getTotalvendas() << endl << "\n";


    int NUMTOTALservicos = 0;
    NUMTOTALservicos =     especialista1.getNumAtendimentos() + especialista2.getNumAtendimentos() + especialista3.getNumAtendimentos();
  
    gerente1.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    gerente1.print();
    cout << "Salario Total: " << gerente1.getSalarioBase() + gerente1.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos) << endl;

  
    return 0;
}
