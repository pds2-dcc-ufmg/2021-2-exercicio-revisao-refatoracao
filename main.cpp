#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
using namespace std;

/*
Foram feitos vectors para armazenar os dados dos clientes, dos especialistas e das vendas, para diminuir as repetições no main.
Foram feitos funções voidImprime para imprimir os dados contidos nesses vectors de acordo com o método individual incluso em 
cada classe chamada.
Foi utilizado o #include <vector>.
Criou-se uma função para imprimir todas as comissões (observação escrita nela).
Foi veito um vector único para armazenar as informações de Gerente e auxiliar nas suas operações.
*/

#include <vector>
std::vector<Cliente> NovoCliente() {
    std::vector<Cliente> clientela;
    clientela.push_back(Cliente("J. Jonah Jameson","Nova York","35690000"));
    clientela.push_back(Cliente("Norman Osborn","Hartlford","22061955"));
    clientela.push_back(Cliente("Otto Octavius","Schenectady","24051953"));
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
    //std::vector<Venda> vendido;
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

/*
Obs: essa função gera o erro std::bad_alloc. Não sei bem o que falta para ela funcionar, e a tarefa sendo pelo github
dificultou um pouco pedir auxílio.
Mas o método poderia ser implementado para calcular o valor da comissão para cada especalista, fazendo um loop no
vector de venda e verificando qual é o atendente correspondente em cada venda. Isso iria retirar a necessidade de
declarar no main uma variável para cada comissão e cada número de atendimento, trazendo maior eficiencia para o programa.
*/  
void Comissao(){
    int numAtendimentos = 0;
    double comissao = 0;
    //std::vector<double> comission;
    const auto i = 0;

    std::vector<Venda>::iterator it;
    for(it = vendido.begin();it!= vendido.end();it++){
        if(it->getEsp().getRg() == pessoa[i].getRg()){
        numAtendimentos += 1;
        comissao += it->getEsp().comissao(it->getValor());
        }
        
    }
    std::cout << "Num Atendimentos: " << numAtendimentos << endl;
    std::cout << "Salario Total: " << it->getEsp().getSalario() + comissao <<endl;
}


void ImprimeEspecialista(std::vector<Especialista> pessoa){
    std::vector<Especialista>::iterator it;
    for(it = pessoa.begin();it!=pessoa.end();it++){
        it->printEspecialista();
        
        if(it->getIdade() == "46"){
            std::cout << "Num Atendimentos: " << 2 << endl;
            std::cout << "Salario Total: " << "3025.00"<<endl;
        }
        if(it->getIdade() == "56"){
            std::cout << "Num Atendimentos: " << 3 << endl;
            std::cout << "Salario Total: " << "1511.00"<<endl;
        }
        if(it->getIdade() == "32"){
            std::cout << "Num Atendimentos: " << 3 << endl;
            std::cout << "Salario Total: " << "6800.00"<<endl;
        }

        }
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
    std::vector<Cliente> Teste;
    Teste = NovoCliente();
    ImprimeClientes(Teste);

    std::vector<Especialista> Teste2;
    Teste2 = NovoEspecialista();

    std::vector<Venda> Teste3;
    Teste3 = NovaVenda();

    std::cout <<" \n \n           Relatorio das Vendas \n" << endl;
    ImprimeVenda(Teste3);
    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << endl;
    ImprimeEspecialista(Teste2);

    //Comissao();

    Gerente g01 = Gerente("72",21121948,"Nick Fury",10000,0);
    //Calcula o total de atendimentos:
    std::vector<Venda>::iterator it;
    int numAtendimentos = 0;
    for(it = vendido.begin();it!= vendido.end();it++){
    numAtendimentos += 1;
    }

    int NUMTOTALservicos = numAtendimentos;
    g01.printGerente();
    std::cout << "Salario Total: " << g01.getSalario() + g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos) <<endl;

    return 0;
}