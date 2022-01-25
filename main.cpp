#include "Venda.hpp"
#include "Gerente.hpp"

enum CLIENTES
{
    JJJ,
    DUENDE_VERDE,
    DOUTOR_OCTOPUS,
    HULK,
    CAPITAO
};
enum ESPECIALISTAS
{
    MIRANHA,
    IRONMAN,
    WANDA
};

int main()
{
    /* 
        Simulação de um programa de venda de serviço.
            Dependências:
                Deve saber o que é uma venda de serviço
                    Tem um valor/preco
                    Tem um cliente
                    Tem um prestador de serviço
                    Opcional(mas bom): descricao do servico
                Deve saber o que é um comprador/cliente
                    Possivelmente um nome, uma identificação de qualquer 
                        tipo que seja é estritamente necessaria
                    Informacoes de contato se o serviço poder ser prestado a 
                        distancia / o endereco se tiver que ser feito in loco
                        (teoricamente, ter o CEP e o endereço eh redundante)
                Deve saber o que é um prestador de serviços
                    Ele tem serviços que presta
                    Ele tem os preços por esse serviços
                    Ele tem uma identificacao
                Deveria saber o que é um serviço
                    Abstrai a complicacao de ficar inserindo servicos comuns
                    Este exercicio é como se todos os serviços fossem 
                        customizados
        
        A parte de ter clientes, prestadores de serviço e vendas poderia ser 
            um programa em si, enquanto gerar os relatorios de venda e dos
            funcionários e calcular quem é pago o que pode ser outro programa.
    
    */

    Cliente clientes[] = { 
        Cliente(
            "J. Jonah Jameson",
            "Nova York",
            "35690000"
        ),
        Cliente(
            "Norman Osborn", 
            "Hartlford", 
            "22061955"
        ),
        Cliente(
            "Otto Octavius", 
            "Schenectady", 
            "24051953"
        ),
        Cliente(
            "Bruce Benner", 
            "Dayton", 
            "22111967"
        ),
        Cliente(
            "Steve Rogers", 
            "Lower East Side", 
            "13061981"
        )
    };
    for (auto& c : clientes) {
        c.print();
    }

    Especialista especialistas[]{
        Especialista(
            "Peter Parker", 
            "46", 
            "27061975", 
            "Fotografia", 
            3000
        ),
        Especialista(
            "Tony Stark", 
            "56", 
            "4041965", 
            "Consertos de equipamentos eletronicos", 
            1000
        ),
        Especialista(
            "Wanda Maximoff", 
            "32", 
            "16021989", 
            "Engenharia e Design", 
            5000
        )
    };

    Gerente gerentes[] = {
        Gerente(
            "Nick Fury", 
            "72", 
            "21121948", 
            10000
        )
    };

    Venda vendas[] = {
        Venda(
            100, 
            "Fotos do Homem Aranha", 
            especialistas[MIRANHA], 
            clientes[JJJ]
        ), // v01
        Venda(
            100, 
            "Troca da tela do telefone", 
            especialistas[IRONMAN], 
            clientes[HULK]
        ), // v02
        Venda(
            150, 
            "Fotos do novo planador", 
            especialistas[MIRANHA], 
            clientes[DUENDE_VERDE]
        ), // v03
        Venda(
            10, 
            "Recarga de cartucho", 
            especialistas[IRONMAN], 
            clientes[JJJ]
        ), // v04
        Venda(
            10000, 
            "Reconstrucao de Predio", 
            especialistas[WANDA], 
            clientes[HULK]
        ), // v05
        Venda(
            3000, 
            "Decoracao de Apartamento no Brooklyn", 
            especialistas[WANDA], 
            clientes[CAPITAO]
        ), // v06
        Venda(
            5000, 
            "Reforma do Clarim Diario", 
            especialistas[WANDA], 
            clientes[JJJ]
        ), // v07
        Venda(
            80, 
            "Formatacao do PC", 
            especialistas[IRONMAN], 
            clientes[DOUTOR_OCTOPUS]
        ) // v08
    };

    std::cout << " \n \n           Relatorio das Vendas \n" << std::endl;
    for (auto& v : vendas) {
        v.print();
    }

    std::cout << " \n \n           Relatorio dos Funcionarios \n" << std::endl;
    for (auto& e : especialistas) {
        e.print();
        e.printResults();
    }

    int total_servicos = 0;
    for (auto& e : especialistas) {
        total_servicos += e.getNumAtendimentos();
    }
    
    gerentes[0].print();
    std::cout << "Salario Total: " << gerentes[0].calculaSalarioTotal(total_servicos) << std::endl;

    return 0;
}
