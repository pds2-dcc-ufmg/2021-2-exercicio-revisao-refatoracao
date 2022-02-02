#ifndef VENDA_HPP
#define VENDA_HPP


#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Cliente.hpp"
#include <vector>
#include <algorithm>



class Venda: public Atendente, Comprador{


    public:    
        //void print() const;
        Venda(double valor,std::string descricao,Atendente *ate, Comprador* comprador,double perComissao);
        

        std::string getNome() const{
            return _ate->getNome();
        }
        
        int getIdade() const{
            return _ate->getIdade();
        }

        double getSalarioBase() const{
            return _ate->getSalarioBase();
        }

        int getRgFunc() const{
            return _ate->getRgFunc();
        }

        double getPerComissao(){
            return _perComissao;
        }

        std::string getNomeCliente() const{
            return _comprador->getNomeCliente();
        }

        std::string getEndereco() const{
            return _comprador->getEndereco();
        }

        std::string getCep() const{
            return _comprador->getCep();
        }

        std::string getDescricao(){
            return _descricao;
        }
       
        static double getvalorTotalVendas(){
            return Venda::valorTotalVendas;
        }
        
        private:
        static double valorTotalVendas;        
        double _perComissao;
        double _valor;
        std::string _descricao;
        Atendente* _ate;
        Comprador* _comprador;
};
    double Venda::valorTotalVendas = 0;

    bool comparaClientes(Cliente lhs, Cliente rhs){
        return lhs.getNomeCliente() == rhs.getNomeCliente();
    }
class vendasList{
    private:
    static std::vector<Venda> vl;

    public:

    vendasList(){

    }


    static void pushVendasList(Venda v){
        vendasList::vl.push_back(v);
    }

    static std::vector<Venda> getVendasList(){
        return vl;
    }
    static void printEspecialistas(){
        std::vector<Funcionario> vecAte;
        for(auto it:vl){
            vecAte.emplace_back(it.getSalarioBase(),it.getIdade(),it.getNome(),it.getRgFunc());
        }
        std::vector<Funcionario>::iterator itv;
        std::vector<Funcionario>::iterator itv2;
        for(itv = vecAte.begin(); itv != vecAte.end(); itv ++){
            for(itv2 = vecAte.begin();itv2 != vecAte.end();itv2 ++){
                if(itv->getNome() == itv2->getNome() && itv != itv2){
                    vecAte.erase(itv);
                    break;
                }
            }
        }

        std::cout << "\n\n           Relatorio dos Funcionarios\n\n";
        for(auto it2: vecAte){
            std::cout << "[Especialista]\n[Funcionario]  Idade: " <<
            it2.getIdade()<< "\n  RGFunc: " <<
            it2.getRgFunc() << "\n  Nome: " <<
            it2.getNome() << "\n  SalarioBase: R$ " <<
            it2.getSalarioBase() << "\nNum Atendimentos: " <<
            "Salario Total: " << it2.getSalarioBase() << std::endl;

        }

    }
    static void printClientes(){
        std::vector<Cliente> vecCli;
        for(auto it:vl){
            vecCli.emplace_back(it.getNomeCliente(),it.getEndereco(),it.getCep());
        }
        std::vector<Cliente>::iterator itv;
        std::vector<Cliente>::iterator itv2;
        for(itv = vecCli.begin(); itv != vecCli.end(); itv ++){
            for(itv2 = vecCli.begin();itv2 != vecCli.end();itv2 ++){
                if(itv->getNomeCliente() == itv2->getNomeCliente() && itv != itv2){
                    vecCli.erase(itv);
                    break;
                }
            }
        }
        for(auto it2: vecCli){
            std::cout << "[Cliente]\n  Nome: " <<
            it2.getNomeCliente()<< "\n  Endereco: " <<
            it2.getEndereco() << "\n  CEP: " <<
            it2.getCep() << std::endl;
        }            
                                      
    }
             
    static void printRelatorioVendas(){
        std::cout << "           Relatorio das Vendas\n\n";
        for(auto it : vl){
            std::cout << "Especialista: " <<
            it.getNome() << " Cliente: " << 
            it.getNomeCliente() << " Descricao: " <<
            it.getDescricao() << std::endl;
        }
    }

};

std::vector<Venda> vendasList::vl; //Lista com todas as vendas realizadas

Venda::Venda(double valor,std::string descricao,Atendente *ate, Comprador* comprador,double perComissao){
    this->_valor = valor;
    this->_descricao = descricao;
    this->_ate = ate;
    this->_comprador = comprador;
    this->_perComissao = perComissao;
    vendasList::pushVendasList(*this);
    valorTotalVendas += valor;          
}

#endif