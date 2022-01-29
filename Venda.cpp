#include "Venda.hpp"

Venda::Venda(double ValorVenda, std::string Descricao, Especialista* Especialista, Cliente* Cliente) : ValorVenda(ValorVenda),
Descricao(Descricao), _Especialista(Especialista), _Cliente(Cliente) {

    /*Acresce ao salario do especialista envolvido na venda
    */
    this-> _Especialista->setSalarioTotal(this->_Especialista->getComissao(ValorVenda));
}


 std::string Venda::getDescricao() const{
        return this->Descricao;
    }

void Venda::Print() const {

        std::cout << "Especialista: "<<
         this->_Especialista->getNome();

        std::cout << " Cliente: "<<
         this->_Cliente->getNome();

        std::cout << " Descricao: "<<
         this->getDescricao()<< std::endl;


}
void Venda::setGerente(Gerente* _Gerente){
    this->_Gerente=_Gerente;

}