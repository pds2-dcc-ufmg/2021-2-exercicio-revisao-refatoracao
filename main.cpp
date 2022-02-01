#include "util.hpp"



int main()
{
    std::vector <Cliente*> Clientes;
        InsereCliente("J. Jonah Jameson", "Nova York", "35690000", Clientes);
        InsereCliente("Norman Osborn", "Hartlford", "22061955", Clientes);
        InsereCliente("Otto Octavius", "Schenectady", "24051953", Clientes);
        InsereCliente("Bruce Benner", "Dayton", "22111967", Clientes);
        InsereCliente("Steve Rogers", "Lower East Side", "13061981", Clientes);

     std::vector <Especialista*> Especialistas;
        InsereEspecialista(3000, "46", "Peter Parker", 27061975, "Fotografia", 0, 0, Especialistas);
        InsereEspecialista(1000, "56", "Tony Stark", 4041965, "Consertos de equipamentos eletronicos", 0, 0, Especialistas);
        InsereEspecialista(5000, "32", "Wanda Maximoff", 16021989,  "Engenharia e Designeeeeer", 0, 0, Especialistas);
        
    std::vector<Gerente*> Gerentes;
        InsereGerente(10000, "72", "Nick Fury", 21121948, Gerentes);
    
    std::vector<Venda*> Vendas1;
        InsereVenda(100,  "Fotos do Homem Aranha", "Peter Parker", "J. Jonah Jameson", Especialistas, Clientes, Vendas1);
        InsereVenda(100,  "Troca da tela do telefone", "Tony Stark", "Bruce Benner", Especialistas, Clientes, Vendas1);
        InsereVenda(150,  "Fotos do novo planador", "Peter Parker", "Norman Osborn", Especialistas, Clientes, Vendas1);        
        InsereVenda(10,  "Recarga de cartucho", "Tony Stark", "J. Jonah Jameson", Especialistas, Clientes, Vendas1);
        InsereVenda(10000,  "Reconstrucao de Predio", "Wanda Maximoff", "Bruce Benner", Especialistas, Clientes, Vendas1);
        InsereVenda(3000,  "Decoracao de Apartamento no Brooklyn", "Wanda Maximoff", "Steve Rogers", Especialistas, Clientes, Vendas1);
        InsereVenda(5000,  "Reforma do Clarim Diario", "Wanda Maximoff", "J. Jonah Jameson", Especialistas, Clientes, Vendas1);
        InsereVenda(80, "Formatacao do PC", "Tony Stark", "Otto Octavius", Especialistas, Clientes, Vendas1);
        setGerenteDaVenda("Nick Fury", Gerentes, Vendas1);


        ImprimeStatus<Cliente>(Clientes);

        std::cout <<" \n \n           Relatorio das Vendas \n" << std::endl;

        ImprimeStatus<Venda>(Vendas1);

        std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;

        ImprimeStatus<Especialista>(Especialistas);
        ImprimeStatus<Gerente>(Gerentes);

        RemoveVector<Especialista>(Especialistas);
        RemoveVector<Cliente>(Clientes);
        RemoveVector<Gerente>(Gerentes);
        RemoveVector<Venda>(Vendas1);



    return 0;
}
