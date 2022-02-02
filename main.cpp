#include <iostream>

#include "Cliente.hpp"
#include "Especialista.hpp"

#include "Gerente.hpp"

int main()
{
    
    Cliente cliente1 = Cliente("J. Jonah Jameson", 20, "Nova York", 35690000);
    cliente1.print();

    Cliente cliente2 = Cliente("Norman Osborn", 40, "Hartlford", 22061955);
    cliente2.print();

    Cliente cliente3 = Cliente("Otto Octavius", 35, "Schenectady", 24051953);
    cliente3.print();

    return 0;
}
