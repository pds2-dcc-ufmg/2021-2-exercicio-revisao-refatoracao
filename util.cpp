
#include "util.hpp"

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
std::vector <Gerente*> &Gerentes){
    Gerente* NovoGerente = new Gerente (Salario, Idade, Nome, RgFuncionario);
    Gerentes.push_back(NovoGerente);
}


Cliente* VerificaClienteDaVenda (std::string ClienteVenda, std::vector <Cliente*> &Clientes){
     Cliente* MeuCliente;
                for(const auto& iterator_1:Clientes){
                if (ClienteVenda == iterator_1->getNome()){
                MeuCliente = iterator_1;
                }
            }
        return MeuCliente;
}


Especialista* VerificaEspecialistaDaVenda (std::string EspecialistaVenda, std::vector <Especialista*> &Especialistas){
     Especialista* MeuEspecialista;
                for(const auto& iterator_1:Especialistas){
                if (EspecialistaVenda == iterator_1->getNome()){
                MeuEspecialista = iterator_1;
                }
            }
        return MeuEspecialista;
}


void setGerenteDaVenda (std::string GerenteVenda, std::vector <Gerente*> &Gerentes, std::vector <Venda*> &Vendas ){
    Gerente* MeuGerente;
    int NumTotalServicos = Vendas.size();
                for(const auto& iterator_1:Gerentes){
                    if (GerenteVenda == iterator_1->getNome()){
                    MeuGerente = iterator_1;
                    }
                }
                for (const auto& iterator_2:Vendas){
                    iterator_2->_Gerente=MeuGerente;
                }
                MeuGerente->setSalarioTotal(MeuGerente->calculaBonificacaoGerente(NumTotalServicos));
}


void InsereVenda(double ValorVenda, std::string Descricao, std::string EspecialistaVenda, std::string ClienteVenda,
std::vector <Especialista*> &Especialistas, std::vector <Cliente*> &Clientes, std::vector <Venda*> &Vendas){

    Cliente* MeuCliente = VerificaClienteDaVenda(ClienteVenda,Clientes);
    Especialista* MeuEspecialista = VerificaEspecialistaDaVenda(EspecialistaVenda, Especialistas);

    Venda* NovaVenda = new Venda(ValorVenda, Descricao, MeuEspecialista, MeuCliente);
    Vendas.push_back(NovaVenda);
}
