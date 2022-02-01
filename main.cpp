#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

/*
Foram feitos vectors para armazenar os dados dos clientes, dos especialistas e das vendas, para diminuir as repetições no main.
Foram feitos funções voidImprime para imprimir os dados contidos nesses vectors que continham as classes Cliente e Venda,
utilizando a recursividade.
Foi utilizado o #include <vector>.
A quantidade de informações no arquivo main para o cálculo das comissões foi reduzida, e adaptada para seguir os novos métodos
introduzidos em outros arquivos do programa a fim de seguir o princípio do encapsulamento.
Foi veito um vector único para armazenar as informações de Gerente e auxiliar nas suas operações.
*/

#include <vector>
std::vector<Cliente> NovoCliente() {
    std::vector<Cliente> clientela;
    clientela.push_back(Cliente("J. Jonah Jameson","Nova York","35690000"));
    clientela.push_back(Cliente("Norman Osborn","Hartlford","22061955"));
    clientela.push_back(Cliente("Otto Octavius","Schenectady","24051953"));
    clientela.push_back(Cliente("Bruce Benner","Dayton","22111967"));
    clientela.push_back(Cliente("Bruce Benner","Dayton","22111967"));
    clientela.push_back(Cliente("Steve Rogers","Lower East Side","13061981"));
    return clientela;
}

void ImprimeClientes(std::vector<Cliente> clientela){
    std::vector<Cliente>::iterator it;
    for(it = clientela.begin();it!=clientela.end();it++){
        it->print();
    }
}
    std::vector<Especialista> pessoa;
std::vector<Especialista> NovoEspecialista(){
    pessoa.push_back(Especialista("46",27061975,"Peter Parker",3000,"Fotografia"));
    pessoa.push_back(Especialista("56",4041965,"Tony Stark",1000,"Consertos de equipamentos eletronicos"));
    pessoa.push_back(Especialista("32",16021989,"Wanda Maximoff",5000,"Engenharia e Designeeeeer"));
    return pessoa;

} 


    std::vector<Venda> vendido;
std::vector<Venda> NovaVenda(){
    vendido.push_back(Venda(100,"Fotos do Homem Aranha",pessoa[0],"J. Jonah Jameson"));
    vendido.push_back(Venda(100,"Troca da tela do telefone",pessoa[1],"Bruce Benner"));
    vendido.push_back(Venda(150,"Fotos do novo planador",pessoa[0],"Norman Osborn"));
    vendido.push_back(Venda(10,"Recarga de cartucho",pessoa[1],"J. Jonah Jameson"));
    vendido.push_back(Venda(10000,"Reconstrucao de Predio",pessoa[2],"Bruce Benner"));
    vendido.push_back(Venda(3000,"Decoracao de Apartamento no Brooklyn",pessoa[2],"Steve Rogers"));
    vendido.push_back(Venda(5000,"Reforma do Clarim Diario",pessoa[2],"J. Jonah Jameson"));
    vendido.push_back(Venda(80,"Formatacao do PC",pessoa[1],"Norman Osborn"));    
    return vendido;
    
}

void ImprimeVenda(std::vector<Venda> vendido){
    std::vector<Venda>::iterator it;
    for(it = vendido.begin();it!= vendido.end();it++){
        it->printVenda();
        std::cout << " Descricao: " << it->getDescricao() << endl;
    }
}


int main()
{   
    std::vector<Cliente> Cliente;
    Cliente = NovoCliente();
    ImprimeClientes(Cliente);

    std::vector<Especialista> Especial;
    Especial = NovoEspecialista();

    std::vector<Venda> Vendeu;
    Vendeu = NovaVenda();

    std::cout <<" \n \n           Relatorio das Vendas \n" << endl;
    ImprimeVenda(Vendeu);

    int numAtendimentos01 = 0;
    double comissao01 = 0;
    int numAtendimentos02 = 0;
    double comissao02 = 0;
    int numAtendimentos03 = 0;
    double comissao03 = 0;

    Venda e01 = Vendeu[0];
    comissao01 += e01.getEsp().comissao(e01.getValor());
    numAtendimentos01 += 1;

    Venda e02 = Vendeu[1];
    comissao02 += e02.getEsp().comissao(e02.getValor());
    numAtendimentos02 += 1;

    Venda e03 = Vendeu[2];
    comissao01 += e03.getEsp().comissao(e03.getValor());
    numAtendimentos01 += 1;
    
    Venda e04 = Vendeu[3];
    comissao02 += e04.getEsp().comissao(e04.getValor());
    numAtendimentos02 += 1;
    
    Venda e05 = Vendeu[4];
    comissao03 += e05.getEsp().comissao(e05.getValor());
    numAtendimentos03 += 1;
    
    Venda e06 = Vendeu[5];
    comissao03 += e06.getEsp().comissao(e06.getValor());
    numAtendimentos03 += 1;
    
    Venda e07 = Vendeu[6];
    comissao03 += e07.getEsp().comissao(e07.getValor());
    numAtendimentos03 += 1;
    
    Venda e08 = Vendeu[7];
    comissao02 += e08.getEsp().comissao(e08.getValor());
    numAtendimentos02 += 1;

    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    Especialista v01 = Especial[0];
    v01.printEspecialista();
    std::cout << "Num Atendimentos: " << numAtendimentos01 << endl;
    std::cout << "Salario Total: " << v01.getSalario() + comissao01 <<endl;

    Especialista v02 = Especial[1];
    v02.printEspecialista();
    std::cout << "Num Atendimentos: " << numAtendimentos02 << endl;
    std::cout << "Salario Total: " << v02.getSalario() + comissao02 <<endl;

    Especialista v03 = Especial[2];
    v03.printEspecialista();
    std::cout << "Num Atendimentos: " << numAtendimentos03 << endl;
    std::cout << "Salario Total: " << v03.getSalario() + comissao03 <<endl;
    

    Gerente g01 = Gerente("72",21121948,"Nick Fury",10000,0);
    int NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    g01.printGerente();
    std::cout << "Salario Total: " << g01.getSalario() + g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos) <<endl;

    return 0;
}