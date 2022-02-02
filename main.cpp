#include "Venda.hpp"
#include "Gerente.hpp"

int main()
{
    Cliente cliente1;
    cliente1.set_NOME("J. Jonah Jameson");
    cliente1.set_Endereco("Nova York");
	cliente1.set_Cep("35690000");
    cliente1.print();

    Cliente cliente2;
    cliente2.set_NOME("Norman Osborn");
    cliente2.set_Endereco("Hartlford");
	cliente2.set_Cep("22061955");
    cliente2.print();

    Cliente cliente3;
    cliente3.set_NOME("Otto Octavius");
    cliente3.set_Endereco("Schenectady");
	cliente3.set_Cep("24051953");
    cliente3.print();

    Cliente cliente4;
    cliente4.set_NOME("Bruce Benner");
    cliente4.set_Endereco("Dayton");
	cliente4.set_Cep("22111967");
    cliente4.print();

    Cliente cliente5;
    cliente5.set_NOME("Steve Rogers");
    cliente5.set_Endereco("Lower East Side");
	cliente5.set_Cep("13061981");
    cliente5.print();




    Especialista e01;
    int numAtendimentos01 = 0;
    double comissao01 = 0;
    e01.set_nome("Peter Parker");
    e01.set_IDADE("46");
    e01.set_rgFunc(27061975);
    e01.set_SalarioBase(3000);
    e01.set_especialidade("Fotografia");



    Especialista e02;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    e02.set_nome("Tony Stark");
    e02.set_IDADE("56");
    e02.set_rgFunc(4041965);
    e02.set_SalarioBase(1000);
    e02.set_especialidade("Consertos de equipamentos eletronicos");


    Especialista e03;
    int numAtendimentos03 = 0;
    double comissao03 = 0;
    e03.set_nome("Wanda Maximoff");
    e03.set_IDADE("32");
    e03.set_rgFunc(16021989);
    e03.set_SalarioBase(5000);
    e03.set_especialidade("Engenharia e Designeeeeer");


    Gerente g01;
    double bonificacao01 = 0;
    g01.set_nome("Nick Fury");
    g01.set_IDADE("72");
    g01.set_rgFunc(21121948);
    g01.set_SalarioBase(10000);


    Venda v01;
    v01.set_cliente("J. Jonah Jameson");
    v01.set_esp(e01);
    v01.set_descricao("Fotos do Homem Aranha");
    v01.set_VALOR(100);
    comissao01 += e01.comissao(v01.get_VALOR());
    numAtendimentos01+=1;


    Venda v02;
    v02.set_cliente("Bruce Benner");
    v02.set_esp(e02);
    v02.set_descricao("Troca da tela do telefone");
    v02.set_VALOR(100);
    comissao02 += e02.comissao(v02.get_VALOR());
    numAtendimentos02+=1;


    Venda v03;
    v03.set_cliente("Norman Osborn");
    v03.set_esp(e01);
    v03.set_descricao("Fotos do novo planador");
    v03.set_VALOR(150);
    comissao01 += e01.comissao(v03.get_VALOR());
    numAtendimentos01+=1;


    Venda v04;
    v04.set_cliente("J. Jonah Jameson");
    v04.set_esp(e02);
    v04.set_descricao("Recarga de cartucho");
    v04.set_VALOR(10);
    comissao02 += e02.comissao(v04.get_VALOR());
    numAtendimentos02+=1;


    Venda v05;
    v05.set_cliente("Bruce Benner");
    v05.set_esp(e03);
    v05.set_descricao("Reconstrucao de Predio");
    v05.set_VALOR(10000);
    comissao03 += e03.comissao(v05.get_VALOR());
    numAtendimentos03+=1;


    Venda v06;
    v06.set_cliente("Steve Rogers");
    v06.set_esp(e03);
    v06.set_descricao("Decoracao de Apartamento no Brooklyn");
    v06.set_VALOR(3000);
    comissao03 += e03.comissao(v06.get_VALOR());
    numAtendimentos03+=1;


    Venda v07;
    v07.set_cliente("J. Jonah Jameson");
    v07.set_esp(e03);
    v07.set_descricao("Reforma do Clarim Diario");
    v07.set_VALOR(5000);
    comissao03 += e03.comissao(v07.get_VALOR());
    numAtendimentos03+=1;


    Venda v08;
    v08.set_cliente("Otto Octavius");
    v08.set_esp(e02);
    v08.set_descricao("Formatacao do PC");
    v08.set_VALOR(80);
    comissao02 += e02.comissao(v08.get_VALOR());
    numAtendimentos02+=1;



    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.print();
    std::cout << " Descricao: " << v01.get_descricao() << std::endl;

    v02.print();
    std::cout << " Descricao: " << v02.get_descricao() << std::endl;

    v03.print();
    std::cout << " Descricao: " << v03.get_descricao() << std::endl;

    v04.print();
    std::cout << " Descricao: " << v04.get_descricao() << std::endl;

    v05.print();
    std::cout << " Descricao: " << v05.get_descricao() << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.get_descricao() << std::endl;

    v06.print();
    std::cout << " Descricao: " << v06.get_descricao() << std::endl;

    v07.print();
    std::cout << " Descricao: " << v07.get_descricao() << std::endl;

    v08.print();
    std::cout << " Descricao: " << v08.get_descricao() << std::endl;






    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    e01.print();
    std::cout << "Num Atendimentos: " << numAtendimentos01 << std::endl;
    std::cout << "Salario Total: " << e01.get_SalarioBase()+comissao01<<std::endl;

    e02.print();
    std::cout << "Num Atendimentos: " << numAtendimentos02 << std::endl;
    std::cout << "Salario Total: " << e02.get_SalarioBase()+comissao02<<std::endl;

    e03.print();
    std::cout << "Num Atendimentos: " << numAtendimentos03 << std::endl;
    std::cout << "Salario Total: " << e03.get_SalarioBase()+comissao03<<std::endl;


    int NUMTOTALservicos = 0;
    NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.set_bonificacao(g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos));
    g01.print();
    std::cout << "Salario Total: " << g01.get_SalarioBase() + g01.get_bonificacao()<<std::endl;

    return 0;
}
