#include "Venda.hpp"

Venda::Venda(Cliente *_cliente, Especialista *_especialista, std::string _descricao, double _valor) :
    
    valor(_valor), descricao(_descricao), especialista(_especialista), cliente(_cliente) 
    
    {

        _especialista->comissionar_venda(_valor);
        _especialista->Atender();

    }

void Venda::print() const {

    std::cout   << "Especialista: " << especialista->GetNome() << std::endl
                << " Cliente: " << cliente->GetNome() << std::endl
                << " Descricao: " << descricao << std::endl;

}