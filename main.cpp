#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"


void construtorCliente(Cliente* cliente, std::string nome, std::string endereco, std::string cep){
	cliente->setNome(nome);
	cliente->setEndereco(endereco);
	cliente->setCep(cep);
        cliente->imprimeDadosCliente();

}

void construtorEspecialista(Especialista* especialista, const std::string& nome, 
                            int idade, int rgFunc, double salarioMin, const std::string& especialidade,
                            int numAtendimentos, double comissao){
        especialista->initDados();
	especialista->setNome(nome);
	especialista->setIdade(idade);
	especialista->setRgFunc(rgFunc);
        especialista->setSalarioMin(salarioMin);
	especialista->setEspecialidade(especialidade);
        especialista->setNumAtendimentos(numAtendimentos);
        especialista->setComissao(comissao);
}

void construtorGerente(Gerente* gerente, double bonificacao, const std::string& nome, 
                       int idade, int rgFunc, double salarioMin){
	gerente->setBonificacao(bonificacao);
	gerente->setNome(nome);
	gerente->setIdade(idade);
	gerente->setRgFunc(rgFunc);
	gerente->setSalarioMin(salarioMin);
}

void construtorVenda(Venda* venda, Cliente cliente, Especialista esp,
                     const std::string& descricao, double valor, Especialista* especialista){
	venda->setCliente(cliente);
	venda->setEsp(esp);
	venda->setDescricao(descricao);
	venda->setValor(valor);
        especialista->setComissao(especialista->comissao(venda->getValor()));
        especialista->setNumAtendimentos(1);
}

int main(){

std::cout <<"\n ****** RELATÓRIO DE CLIENTES ****** \n" << std::endl;
    //NOVOS CLIENTES
    Cliente cliente1;
    construtorCliente(&cliente1, "J. Jonah Jameson", "Nova York", "35690000");

    Cliente cliente2;
    construtorCliente(&cliente2, "Norman Osborn", "Hartlford", "22061955");

    Cliente cliente3;
    construtorCliente(&cliente3, "Otto Octavius", "Schenectady", "24051953");

    Cliente cliente4;
    construtorCliente(&cliente4, "Bruce Benner", "Dayton", "22111967");

    Cliente cliente5;
    construtorCliente(&cliente5, "Steve Rogers", "Lower East Side", "13061981");

    //NOVOS ESPECIALISTAS
    Especialista e01;
    construtorEspecialista(&e01, "Peter Parker", 46, 27061975, 3000, "Fotografia", 0, 0);

    Especialista e02;
    construtorEspecialista(&e02, "Tony Stark", 56, 4041965, 1000, "Consertos de equipamentos eletronicos", 0, 0);

    Especialista e03;
    construtorEspecialista(&e03, "Wanda Maximoff", 32, 16021989, 5000, "Engenharia e Designer", 0 , 0);

    //NOVOS GERENTES
    Gerente g01;
    construtorGerente(&g01, 0, "Nick Fury", 72, 21121948, 10000);

    //NOVAS VENDAS
    Venda v01;
    construtorVenda(&v01, cliente1, e01, "Fotos do Homem Aranha", 100, &e01);

    Venda v02;
    construtorVenda(&v02, cliente4, e02, "Troca da tela do telefone", 100, &e02);

    Venda v03;
    construtorVenda(&v03, cliente2, e01, "Fotos do novo planador", 150, &e01);

    Venda v04;
    construtorVenda(&v04, cliente1, e02, "Recarga de cartucho", 10, &e02);

    Venda v05;
    construtorVenda(&v05, cliente4, e03, "Reconstrucao de Predio", 10000, &e03);

    Venda v06;
    construtorVenda(&v06, cliente5, e03, "Decoracao de Apartamento no Brooklyn", 3000, &e03);

    Venda v07;
    construtorVenda(&v07, cliente1, e03, "Reforma do Clarim Diario", 5000, &e03);

    Venda v08;
    construtorVenda(&v08, cliente3, e02, "Formatacao do PC", 80, &e02);


    std::cout <<"\n ****** RELATÓRIO DE VENDAS ****** \n" << std::endl;
    v01.imprimeDadosVenda();
    v02.imprimeDadosVenda();
    v03.imprimeDadosVenda();
    v04.imprimeDadosVenda();
    v05.imprimeDadosVenda();
    v06.imprimeDadosVenda();
    v07.imprimeDadosVenda();
    v08.imprimeDadosVenda();

    std::cout <<" \n \n ****** RELATÓRIO DE FUNCIONÁRIOS ****** \n" << std::endl;
    e01.imprimeDadosEspecialista();
    e02.imprimeDadosEspecialista();
    e03.imprimeDadosEspecialista();

    int numTotalServicos = 0;
    numTotalServicos = e01.getNumAtendimentos() + e02.getNumAtendimentos() + e03.getNumAtendimentos();
    g01.setBonificacao(g01.calculaBonificacaoGerente(numTotalServicos));
    g01.imprimeDadosGerente();

    return 0;
}
