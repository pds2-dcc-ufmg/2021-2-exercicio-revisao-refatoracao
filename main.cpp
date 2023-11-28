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
    cliente1.Name = "J. Jonah Jameson";
    cliente1.Address ="Nova York";
	cliente1.Zip = "35690000";
    cliente1.print();

    Cliente cliente2;
    cliente2.Name = "Norman Osborn";
    cliente2.Address ="Hartlford";
	cliente2.Zip = "22061955";
    cliente2.print();

    Cliente cliente3;
    cliente3.Name = "Otto Octavius";
    cliente3.Address ="Schenectady";
	cliente3.Zip = "24051953";
    cliente3.print();

    Cliente cliente4;
    cliente4.Name = "Bruce Benner";
    cliente4.Address ="Dayton";
	cliente4.Zip = "22111967";
    cliente4.print();

    Cliente cliente5;
    cliente5.Name = "Steve Rogers";
    cliente5.Address ="Lower East Side";
	cliente5.Zip = "13061981";
    cliente5.print();




    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.Name = "Peter Parker";
    e01.Age = "46";
    e01.ID = 27061975;
    e01.BaseSalary = 3000;
    e01.Specialty = "Fotografia";



    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.Name = "Tony Stark";
    e02.Age = "56";
    e02.ID = 4041965;
    e02.BaseSalary = 1000;
    e02.Specialty = "Consertos de equipamentos eletronicos";


    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.Name = "Wanda Maximoff";
    e03.Age = "32";
    e03.ID = 16021989;
    e03.BaseSalary = 5000;
    e03.Specialty = "Engenharia e Designeeeeer";


    Gerente g01;
    double bonificacao01 = 0;
    g01.Name = "Nick Fury";
    g01.Age = "72";
    g01.ID = 21121948;
    g01.BaseSalary = 10000;


    Venda v01;
    v01.Client= "J. Jonah Jameson";
    v01.Esp = e01;
    v01.Description = "Fotos do Homem Aranha";
    v01.Amount = 100;
    comissao01 += e01.comissao(v01.Amount);
    numAtendimentos01+=1;


    Venda v02;
    v02.Client= "Bruce Benner";
    v02.Esp = e02;
    v02.Description = "Troca da tela do telefone";
    v02.Amount = 100;
    comissao02 += e02.comissao(v02.Amount);
    numAtendimentos02+=1;


    Venda v03;
    v03.Client= "Norman Osborn";
    v03.Esp = e01;
    v03.Description = "Fotos do novo planador";
    v03.Amount = 150;
    comissao01 += e01.comissao(v03.Amount);
    numAtendimentos01+=1;


    Venda v04;
    v04.Client= "J. Jonah Jameson";
    v04.Esp = e02;
    v04.Description = "Recarga de cartucho";
    v04.Amount = 10;
    comissao02 += e02.comissao(v04.Amount);
    numAtendimentos02+=1;


    Venda v05;
    v05.Client= "Bruce Benner";
    v05.Esp = e03;
    v05.Description = "Reconstrucao de Predio";
    v05.Amount = 10000;
    comissao03 += e03.comissao(v05.Amount);
    numAtendimentos03+=1;


    Venda v06;
    v06.Client= "Steve Rogers";
    v06.Esp = e03;
    v06.Description = "Decoracao de Apartamento no Brooklyn";
    v06.Amount = 3000;
    comissao03 += e03.comissao(v06.Amount);
    numAtendimentos03+=1;


    v06.Description = "Decoracao de Apartamento no Brooklyn";
    v06.Amount = 3000;



    Venda v07;
    v07.Client= "J. Jonah Jameson";
    v07.Esp = e03;
    v07.Description = "Reforma do Clarim Diario";
    v07.Amount = 5000;
    comissao03 += e03.comissao(v07.Amount);
    numAtendimentos03+=1;


    Venda v08;
    v08.Client= "Otto Octavius";
    v08.Esp = e02;
    v08.Description = "Formatacao do PC";
    v08.Amount = 80;
    comissao02 += e02.comissao(v08.Amount);
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Description: " << v01.Description << endl;

    v02.print();
    cout << " Description: " << v02.Description << endl;

    v03.print();
    cout << " Description: " << v03.Description << endl;

    v04.print();
    cout << " Description: " << v04.Description << endl;

    v05.print();
    cout << " Description: " << v05.Description << endl;

    v06.print();
    cout << " Description: " << v06.Description << endl;

    v06.print();
    cout << " Description: " << v06.Description << endl;

    v07.print();
    cout << " Description: " << v07.Description << endl;

    v08.print();
    cout << " Description: " << v08.Description << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.BaseSalary+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.BaseSalary+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.BaseSalary+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.Bonus = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.BaseSalary + g01.Bonus<<endl;

    return 0;
}
