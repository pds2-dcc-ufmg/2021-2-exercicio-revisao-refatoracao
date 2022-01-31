#include "Venda.hpp"

Venda :: Venda(Cliente c,
               Especialista e,
               std::string d,
               double v)
               {
                   cliente = c;
                   esp = e;
                   descricao = d;
                   valor = v;
                   esp.comissao(valor);
                   esp.contagemAtendimento();
               };