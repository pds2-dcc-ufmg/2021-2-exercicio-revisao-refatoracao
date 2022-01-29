#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"


int main()
{
    std::string nome, endereco, cep, idade, especialidade, cliente, descricao;
    int rgFunc, numAtendimentos;
    double salarioBase, bonificacao, valor;

    //Alterando a declaração dos clientes, para o método construtor

    Cliente cliente1(nome = "J. Jonah Jameson", endereco = "Nova York", cep = "35690000");
    cliente1.print();

    Cliente cliente2(nome = "Norman Osborn", endereco = "Hartlford", cep = "22061955");
    cliente2.print();

    Cliente cliente3(nome = "Otto Octavius", endereco = "Schenectady", cep = "24051953");
    cliente3.print();

    Cliente cliente4(nome = "Bruce Benner", endereco = "Dayton", cep = "22111967");
    cliente4.print();

    Cliente cliente5(nome = "Steve Rogers", endereco = "Lower East Side", cep = "13061981");
    cliente5.print();



    //As variaveis "numAtendimentos" e "comissao" foram retiradas pois agora fazem parte da classe
    //e alterando a declaração dos especialistas para o método construtor


    Funcionario f01(salarioBase = 3000, idade = "46", nome = "Peter Parker", rgFunc = 27061975);
    Especialista e01(&f01, especialidade = "Fotografia", numAtendimentos = 0);

    Funcionario f02(salarioBase = 1000, idade = "56", nome = "Tony Stark", rgFunc = 4041965);
    Especialista e02(&f02, especialidade = "Consertos de equipamentos eletronicos", numAtendimentos = 0);

    Funcionario f03(salarioBase = 5000, idade = "32", nome = "Wanda Maximoff", rgFunc = 16021989);
    Especialista e03(&f03, especialidade = "Engenharia e Designeeeeer", numAtendimentos = 0);


    Funcionario fg01(salarioBase = 10000, idade = "72", nome = "Nick Fury", rgFunc = 21121948);
    Gerente g01(&fg01, bonificacao = 0);


    //Alterando a declaração das vendas para o método construtor e realizando a manupilação das comissões
    //e atendimentos pelos seus respectivos metodos get e set

    Venda v01(valor = 100, descricao = "Fotos do Homem Aranha", cliente = "J. Jonah Jameson", e01);
    e01.setComissao(e01.getComissao() + e01.calculaComissao(v01.getValor()));
    e01.setAtendimentos(e01.getAtendimentos() + 1);
    
    
    Venda v02(valor = 100, descricao = "Troca da tela do telefone", cliente = "Bruce Benner", e02);
    e02.setComissao(e02.getComissao() + e02.calculaComissao(v02.getValor()));
    e02.setAtendimentos(e02.getAtendimentos() + 1);
   

    Venda v03(valor = 150, descricao = "Fotos do novo planador", cliente = "Norman Osborn", e01);
    e01.setComissao(e01.getComissao() + e01.calculaComissao(v03.getValor()));
    e01.setAtendimentos(e01.getAtendimentos() + 1);
    

    Venda v04(valor = 10, descricao = "Recarga de cartucho", cliente = "J. Jonah Jameson", e02);
    e02.setComissao(e02.getComissao() + e02.calculaComissao(v04.getValor()));
    e02.setAtendimentos(e02.getAtendimentos() + 1);
    

    Venda v05(valor = 10000, descricao = "Reconstrucao de Predio", cliente = "Bruce Benner", e03);
    e03.setComissao(e03.getComissao() + e03.calculaComissao(v05.getValor()));
    e03.setAtendimentos(e03.getAtendimentos() + 1);
    

    Venda v06(valor = 3000, descricao = "Decoracao de Apartamento no Brooklyn", cliente = "Steve Rogers", e03);
    e03.setComissao(e03.getComissao() + e03.calculaComissao(v06.getValor()));
    e03.setAtendimentos(e03.getAtendimentos() + 1);
    

    Venda v07(valor = 5000, descricao = "Reforma do Clarim Diario", cliente = "J. Jonah Jameson", e03);
    e03.setComissao(e03.getComissao() + e03.calculaComissao(v07.getValor()));
    e03.setAtendimentos(e03.getAtendimentos() + 1);
   

    Venda v08(valor = 80, descricao = "Formatacao do PC", cliente = "Otto Octavius", e02);
    e02.setComissao(e02.getComissao() + e02.calculaComissao(v08.getValor()));
    e02.setAtendimentos(e02.getAtendimentos() + 1);
    


    //Realocação do ultimo cout para dentro do método print

    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();

    v02.print();

    v03.print();

    v04.print();

    v05.print();

    v06.print();

    v06.print();

    v07.print();

    v08.print();
 




    //Utilização dos métodos getAtendimentos e calcula salários para gerar o relatório dos funcionários

    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01.print();
    std::cout << "Num Atendimentos: " << e01.getAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e01.calculaSalario() << std::endl;

    e02.print();
    std::cout << "Num Atendimentos: " << e02.getAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e02.calculaSalario() << std::endl;

    e03.print();
    std::cout << "Num Atendimentos: " << e03.getAtendimentos() << std::endl;
    std::cout << "Salario Total: " << e03.calculaSalario() << std::endl;



    //Utilização dos métodos getAtendimentos, setBonificacao e calculaSalario para gerar o salário total do gerente
    int numTotalServicos = 0;
    numTotalServicos = e01.getAtendimentos() + e02.getAtendimentos() + e03.getAtendimentos();
    g01.setBonificacao(g01.calculaBonificacaoGerente(numTotalServicos));
    g01.print();
    std::cout << "Salario Total: " << g01.calculaSalario() << std::endl;

    return 0;
}
