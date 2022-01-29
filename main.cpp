#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>
void InsereCliente (std::string Nome, std::string Endereco, std::string Cep,  std::vector <Cliente*> &Clientes){
    Cliente* NovoCliente = new Cliente(Nome, Endereco, Cep);
    Clientes.push_back(NovoCliente);
}

void InsereEspecialista(double Salario, std::string Idade, std::string Nome, int RgFuncionario, 
std::string Especialidade, int NumAtendimentos, double Comissao, std::vector <Especialista*> &Especialistas){
    Especialista* NovoEspecialista = new Especialista (Salario, Idade, Nome, RgFuncionario, 
    Especialidade, NumAtendimentos,Comissao);
    Especialistas.push_back(NovoEspecialista);
}
void InsereGerente(double Salario, std::string Idade, std::string Nome, int RgFuncionario,
double Bonificacao, std::vector <Gerente*> &Gerentes){
    Gerente* NovoGerente = new Gerente (Salario, Idade, Nome, RgFuncionario, Bonificacao);
    Gerentes.push_back(NovoGerente);
}
void InsereVenda(){}


int main()
{
    std::vector <Cliente*> Clientes;
        InsereCliente("J. Jonah Jameson", "Nova York", "35690000", Clientes);
        InsereCliente("Norman Osborn", "Hartlford", "22061955", Clientes);
        InsereCliente("Otto Octavius", "Schenectady", "24051953", Clientes);
        InsereCliente("Bruce Benner", "Dayton", "22111967", Clientes);
        InsereCliente("Steve Rogers", "Lower East Side", "13061981", Clientes);

            for (const auto& iterator_1:Clientes){
                iterator_1->Print();
            }
     std::vector <Especialista*> Especialistas;
        InsereEspecialista(3000, "46", "Peter Parker", 27061975, "Fotografia", 0, 0, Especialistas);
        InsereEspecialista(1000, "56", "Tony Stark", 4041965, "Consertos de equipamentos eletronicos", 0, 0, Especialistas);
        InsereEspecialista(5000, "32", "Wanda Maximoff", 16021989,  "Engenharia e Designeeeeer", 0, 0, Especialistas);

            for (const auto& iterator_1:Clientes){
                iterator_1->Print();
            }
        
    std::vector<Gerente*> Gerentes;
        InsereGerente(10000, "72", "Nick Fury", 21121948, 0, Gerentes);
    
    std::vector<Venda*> Vendas;
        InsereVenda()



    Venda v01;
    v01.cliente= "J. Jonah Jameson";
    v01.esp = e01;
    v01.descricao = "Fotos do Homem Aranha";
    v01.VALOR = 100;
    comissao01 += e01.comissao(v01.VALOR);
    numAtendimentos01+=1;


    Venda v02;
    v02.cliente= "Bruce Benner";
    v02.esp = e02;
    v02.descricao = "Troca da tela do telefone";
    v02.VALOR = 100;
    comissao02 += e02.comissao(v02.VALOR);
    numAtendimentos02+=1;


    Venda v03;
    v03.cliente= "Norman Osborn";
    v03.esp = e01;
    v03.descricao = "Fotos do novo planador";
    v03.VALOR = 150;
    comissao01 += e01.comissao(v03.VALOR);
    numAtendimentos01+=1;


    Venda v04;
    v04.cliente= "J. Jonah Jameson";
    v04.esp = e02;
    v04.descricao = "Recarga de cartucho";
    v04.VALOR = 10;
    comissao02 += e02.comissao(v04.VALOR);
    numAtendimentos02+=1;


    Venda v05;
    v05.cliente= "Bruce Benner";
    v05.esp = e03;
    v05.descricao = "Reconstrucao de Predio";
    v05.VALOR = 10000;
    comissao03 += e03.comissao(v05.VALOR);
    numAtendimentos03+=1;


    Venda v06;
    v06.cliente= "Steve Rogers";
    v06.esp = e03;
    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;
    comissao03 += e03.comissao(v06.VALOR);
    numAtendimentos03+=1;


    v06.descricao = "Decoracao de Apartamento no Brooklyn";
    v06.VALOR = 3000;



    Venda v07;
    v07.cliente= "J. Jonah Jameson";
    v07.esp = e03;
    v07.descricao = "Reforma do Clarim Diario";
    v07.VALOR = 5000;
    comissao03 += e03.comissao(v07.VALOR);
    numAtendimentos03+=1;


    Venda v08;
    v08.cliente= "Otto Octavius";
    v08.esp = e02;
    v08.descricao = "Formatacao do PC";
    v08.VALOR = 80;
    comissao02 += e02.comissao(v08.VALOR);
    numAtendimentos02+=1;



    cout <<" \n \n           Relatorio das Vendas \n" << endl;

    v01.print();
    cout << " Descricao: " << v01.descricao << endl;

    v02.print();
    cout << " Descricao: " << v02.descricao << endl;

    v03.print();
    cout << " Descricao: " << v03.descricao << endl;

    v04.print();
    cout << " Descricao: " << v04.descricao << endl;

    v05.print();
    cout << " Descricao: " << v05.descricao << endl;

    v06.print();
    cout << " Descricao: " << v06.descricao << endl;

    v06.print();
    cout << " Descricao: " << v06.descricao << endl;

    v07.print();
    cout << " Descricao: " << v07.descricao << endl;

    v08.print();
    cout << " Descricao: " << v08.descricao << endl;






    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.print();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.SalarioBase+comissao01<<endl;

    e02.print();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.SalarioBase+comissao02<<endl;

    e03.print();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.SalarioBase+comissao03<<endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    g01.print();
    cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
