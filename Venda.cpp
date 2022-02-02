#include "Venda.hpp"

void Venda::print() {

        std::cout << "Especialista: ";
        std::cout << esp.get_nome();

        std::cout << " Cliente: ";
        std::cout << get_cliente();
    }
void Venda::set_VALOR(double _VALOR){
    VALOR = _VALOR;
}

double Venda::get_VALOR(){
    return VALOR;
}
		
void Venda::set_descricao(std::string _descricao){
    descricao = _descricao;
}

std::string Venda::get_descricao(){
    return descricao;
}
	
void Venda::set_esp(Especialista _esp){
    esp = _esp;
}

Especialista Venda::get_esp(){
   return esp; 
}
		
void Venda::set_cliente(std::string _cliente){
    cliente = _cliente;
}

std::string Venda::get_cliente(){
    return cliente;
}
