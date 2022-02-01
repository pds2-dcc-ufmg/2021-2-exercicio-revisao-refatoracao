#include <iostream>

#include "./include/Cliente.hpp"
#include "./include/Especialista.hpp"
#include "./include/Gerente.hpp"
#include "./include/Venda.hpp"

using namespace std;

int main()
{
    //clientes (nome, endereco, cep)
    Cliente cliente1 ("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.printDados();

    Cliente cliente2 ("Norman Osborn", "Hartlford", "22061955");
    cliente2.printDados();

    Cliente cliente3("Otto Octavius", "Schenectady", "24051953");
    cliente3.printDados();

    Cliente cliente4("Bruce Benner", "Dayton", "22111967");
    cliente4.printDados();
    cliente4.printDados();

    Cliente cliente5("Steve Rogers", "Lower East Side", "13061981");
    cliente5.printDados();


    //especialistas (nome, idade, rg, salário base, especialidade)
    Especialista e01("Peter Parker", 46, "27061975", 3000, "Fotografia");
    e01.setPercentualComissao(0);
    int numAtendimentos01 = 0;

    Especialista e02("Tony Stark", 56, "4041965", 1000, "Consertos de equipamentos eletronicos");
    e02.setPercentualComissao(0);
    int numAtendimentos02 = 0;

    Especialista e03("Wanda Maximoff", 32, "16021989", 5000, "Engenharia e Designeeeeer");
    e03.setPercentualComissao(0);
    int numAtendimentos03 = 0;


    //gerentes (nome, idade, rg, salário base, valor bonificação)
    Gerente g01("Nick Fury", 72, "21121948", 10000, 0);


    //vendas (valor, descricao, especialista, cliente)
    Venda v01(100, "Fotos do Homem Aranha", e01, cliente1); 
    double comissaoV01 = e01.CalcularComissao(v01.getValor());
    e01.setComissaoTotal(v01.getValor());
    numAtendimentos01+=1;

    Venda v02(100, "Troca da tela do telefone", e02, cliente4);
    e02.setComissaoTotal(v02.getValor());
    numAtendimentos02+=1;

    Venda v03(150, "Fotos do novo planador", e01, cliente2);
    e01.setComissaoTotal(v03.getValor());
    numAtendimentos01+=1;

    Venda v04(10, "Recarga de cartucho", e02, cliente1);
    e02.setComissaoTotal(v04.getValor());
    numAtendimentos02+=1;

    Venda v05(10000, "Reconstrucao de Predio", e03, cliente4);
    e03.setComissaoTotal(v05.getValor());
    numAtendimentos03+=1;

    Venda v06(3000, "Decoracao de Apartamento no Brooklyn", e03, cliente5);
    e03.setComissaoTotal(v06.getValor());
    numAtendimentos03+=1;

    Venda v07(5000, "Reforma do Clarim Diario", e03, cliente1);
    e03.setComissaoTotal(v07.getValor());
    numAtendimentos03+=1;

    Venda v08(80,  "Formatacao do PC", e02, cliente3);
    e02.setComissaoTotal(v08.getValor());
    numAtendimentos02+=1;



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
    cout << " Descricao: " << v08.descricao() << endl;




    cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    e01.printDadosEspecialista();
    cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    cout << "Salario Total: " << e01.getSalarioBase() + comissao01 <endl;

    e02.printDadosEspecialista();
    cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    cout << "Salario Total: " << e02.getSalarioBase() + comissao02<<endl;

    e03.printDadosEspecialista();
    cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    cout << "Salario Total: " << e03.getSalarioBase() + comissao03<<endl;


    int numTotalServicos = 0;
    numTotalServicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.setBonificacao(g01.calcularBonificacao(numTotalServicos)_;
    g01.printDadosGerente();
    cout << "Salario Total: " << g01.getSalarioBase() + g01.getBonificacao()<<endl;

    return 0;
}
