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

void InsereVenda(double ValorVenda, std::string Descricao, std::string EspecialistaVenda, std::string ClienteVenda,
std::vector <Especialista*> &Especialistas, std::vector <Cliente*> &Clientes, std::vector <Venda*> &Vendas){

    /* Variavel que verificam se o cliente e o especialista da venda foram encontrados
    */
   Cliente* MeuCliente; Especialista* MeuEspecialista;

    bool ClienteEncontrado = false;
    bool EspecialistaEcontrado = false; 

            for(const auto& iterator_1:Clientes){
                if (ClienteVenda == iterator_1->getNome()){
                MeuCliente = iterator_1;
                ClienteEncontrado = true;

                }
            }
            for(const auto& iterator_2:Especialistas){
                if (EspecialistaVenda == iterator_2->getNome()){
                MeuEspecialista = iterator_2;
                EspecialistaEcontrado = true;
                MeuEspecialista->setSalarioTotal(MeuEspecialista->getComissao(ValorVenda));
                }
            }

        if (EspecialistaEcontrado && ClienteEncontrado){
            Venda* NovaVenda = new Venda(ValorVenda, Descricao, MeuEspecialista, MeuCliente);
            Vendas.push_back(NovaVenda);
        }


}



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

            // for (const auto& iterator_1:Especialistas){
            //     iterator_1->Print();
            // }
        
    std::vector<Gerente*> Gerentes;
        InsereGerente(10000, "72", "Nick Fury", 21121948, 0, Gerentes);
    
    std::vector<Venda*> Vendas;
        InsereVenda(100,  "Fotos do Homem Aranha", "Peter Parker", "J. Jonah Jameson", Especialistas, Clientes, Vendas);
        InsereVenda(100,  "Troca da tela do telefone", "Tony Stark", "Bruce Benner", Especialistas, Clientes, Vendas);
        InsereVenda(150,  "Fotos do novo planador", "Peter Parker", "Norman Osborn", Especialistas, Clientes, Vendas);        
        InsereVenda(10,  "Recarga de cartucho", "Tony Stark", "J. Jonah Jameson", Especialistas, Clientes, Vendas);
        InsereVenda(10000,  "Reconstrucao de Predio", "Wanda Maximoff", "Bruce Benner", Especialistas, Clientes, Vendas);
        InsereVenda(3000,  "Decoracao de Apartamento no Brooklyn", "Wanda Maximoff", "Steve Rogers", Especialistas, Clientes, Vendas);
        InsereVenda(5000,  "Reforma do Clarim Diario", "Wanda Maximoff", "J. Jonah Jameson", Especialistas, Clientes, Vendas);
        InsereVenda(80, "Formatacao do PC", "Tony Stark", "Otto Octavius", Especialistas, Clientes, Vendas);



    std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

        for (const auto& iterator_1:Vendas){
                iterator_1->Print();
                std::cout << " Descricao: " << iterator_1->getDescricao() << std::endl;
                
            }


    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    int NumTotalservicos = 0;  
            for (const auto& iterator_1:Especialistas){
                iterator_1->Print();
                std::cout << "Num Atendimentos: " << iterator_1->getNumAtendimentos() << std::endl;      
                std::cout << "Salario Total: " << iterator_1->getSalarioTotal() << std::endl; 
                 NumTotalservicos+=iterator_1->getNumAtendimentos(); 
            }


    // NUMTOTALservicos = numAtendimentos01 + numAtendimentos02 + numAtendimentos03;
    
    // g01.bonificacao = g01.calcula_BONIFICACAO_GERENTE(NUMTOTALservicos);
    // g01.print();
    // cout << "Salario Total: " << g01.SalarioBase + g01.bonificacao<<endl;

    return 0;
}
