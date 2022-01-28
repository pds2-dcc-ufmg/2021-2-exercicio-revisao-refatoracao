/*
Embora apenas os includes Venda.hpp e Gerente.hpp fossem necessarios,
uma vez que, por uma relacao de cascata, esses dois juntos incluem todos
os arquivos necessarios, foram colocados os includes de todos os 
arquivos necessarios separadamente por questao de clareza e organizacao
*/
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"

/*
Programa que realiza o cadastro de 5 clientes, 3 especialistas,
e 1 gerente, alem de simular vendas e imprime:

    1-Uma lista com os clientes cadastrados e suas respectivas informacoes

    2-Um relatorio de vendas com o especialista responsavel, o cliente envolvido,
      e o servico realizado em cada venda

    3-Um relatorio de funcionarios com seus cargos, suas informacoes, numero de 
      atendimentos realizados (em caso de funcionario especialista), e salarios totais
      
*/
int main() {

    /*
    Cadastramento dos clientes
    */
    Cliente cliente1 = Cliente("J. Jonah Jameson", "Nova York", "35690000");
    cliente1.imprimir_dados_cliente(); //impressao dos dados do cliente cadastrado

    //Processos sucessivos equivalentes ao anterior
    Cliente cliente2 = Cliente("Norman Osborn", "Hartlford", "22061955");
    cliente2.imprimir_dados_cliente(); 

    Cliente cliente3 = Cliente("Otto Octavius", "Schenectady", "24051953");
    cliente3.imprimir_dados_cliente(); 

    Cliente cliente4 = Cliente("Bruce Benner", "Dayton", "22111967");
    cliente4.imprimir_dados_cliente(); 

    Cliente cliente5 = Cliente("Steve Rogers", "Lower East Side", "13061981");
    cliente5.imprimir_dados_cliente(); 



    /*
    Cadastramento dos funcionarios especialistas
    */
    Especialista e01 = Especialista(3000, "46", "Peter Parker", 27061975, "Fotografia");
    Especialista e02 = Especialista(1000, "56", "Tony Stark", 4041965, "Consertos de equipamentos eletronicos");
    Especialista e03 = Especialista(5000, "32", "Wanda Maximoff", 16021989, "Engenharia e Designeeeeer");
    


    /*
    Cadastramento do funcionario gerente
    */
    Gerente g01 = Gerente(10000, "72", "Nick Fury", 21121948);



    /*
    Realizacao das vendas
    */
    Venda v01 = Venda("Fotos do Homem Aranha", e01, cliente1, 100); //cadastro da venda no sistema
    //registro do valor da comissao a ser recebida pelo especialista responsavel no sistema
    e01.adicionar_comissao(v01.getvalor());
    //contagem da venda no numero de atendimentos do especialista
    e01.contador_de_atend();

    //Processos sucessivos equivalentes ao anterior
    Venda v02 = Venda("Troca da tela do telefone", e02, cliente4, 100); 
    e02.adicionar_comissao(v02.getvalor());
    e02.contador_de_atend();
    
    Venda v03 = Venda("Fotos do novo planador", e01, cliente2, 150); 
    e01.adicionar_comissao(v03.getvalor());
    e01.contador_de_atend();

    Venda v04 = Venda("Recarga de cartucho", e02, cliente1, 10); 
    e02.adicionar_comissao(v04.getvalor());
    e02.contador_de_atend();

    Venda v05 = Venda("Reconstrucao de Predio", e03, cliente4, 10000); 
    e03.adicionar_comissao(v05.getvalor());
    e03.contador_de_atend();

    Venda v06 = Venda("Decoracao de Apartamento no Brooklyn", e03, cliente5, 3000); 
    e03.adicionar_comissao(v06.getvalor());
    e03.contador_de_atend();

    Venda v07 = Venda("Reforma do Clarim Diario", e03, cliente1, 5000); 
    e03.adicionar_comissao(v07.getvalor());
    e03.contador_de_atend();

    Venda v08 = Venda("Formatacao do PC", e02, cliente3, 80); 
    e02.adicionar_comissao(v08.getvalor());
    e02.contador_de_atend();



    /*
    Impressao do relatorio de vendas
    */
    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

    v01.imprime_venda();
    v02.imprime_venda();
    v03.imprime_venda();
    v04.imprime_venda();
    v05.imprime_venda();
    v06.imprime_venda();
    v06.imprime_venda();
    v07.imprime_venda();
    v08.imprime_venda();
    


    /*
    Impressao do relatorio dos funcionario
    */
    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    
    /*
    Parte dos funcionarios especialistas
    */
    e01.imprimir_dados_funcionario(); //imprime os dados do funcionario
    //imprime o numero de atendimentos realizados pelo especialista
    std::cout << "Num Atendimentos: " << e01.get_num_atend() << std::endl; 
    //imprime o salario o salario total do especialista
    std::cout << "Salario Total: " << (e01.get_salario_base()) + (e01.get_comissao_total()) << std::endl;

    //Processos sucessivos equivalentes ao anterior
    e02.imprimir_dados_funcionario();
    std::cout << "Num Atendimentos: " << e02.get_num_atend() << std::endl;
    std::cout << "Salario Total: " << (e02.get_salario_base()) + (e02.get_comissao_total()) << std::endl;

    e03.imprimir_dados_funcionario();
    std::cout << "Num Atendimentos: " << e03.get_num_atend() << std::endl;
    std::cout << "Salario Total: " << (e03.get_salario_base()) + (e03.get_comissao_total()) << std::endl;


    /*
    Parte do funcionario gerente
    */
    //calcula o numero total de atendimentos dos especialistas da empresa
    int num_tot_atend = e01.get_num_atend() + e02.get_num_atend() + e03.get_num_atend();
    //registra o valor da bonificacao total a ser recebida pelo gerente no sistema
    g01.calcula_bonificacao_total(num_tot_atend);
    //imprime os dados do funcionario gerente
    g01.imprimir_dados_funcionario();
    //imprime o salario total do gerente
    std::cout << "Salario Total: " << g01.get_salario_base() + g01.getbonificacao_tot() << std::endl;



    return 0;
}
