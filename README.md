### Revisão e Refatoração


## Soluções utilizadas na prática de refactoring:

# Remove Dead Code
**Especialista.hpp**
    Linha 10: váriavel não usada (percWanda).   
    Linha 18: Variável c apenas pra retorno.

**Gerente.hpp**
    Linha 30: Variável não usada (x).

**Venda**
    Comentários de códigos desnecessários.

**Cliente.hpp**
    A variável alturaDosPais nunca é usada.

# Extract Superclass
**Gerente.hpp**
    Gerente possui muito em comum com a supperclasse Funcionário por isso deve extende-la.

# Pull Up Field
**Gerente.hpp**
    Os campos da linha 13 a 16 se repetem da super classe, portanto é necessário deixa-los apenas na superclasse.

# Encapsulate Variável
**Funcionario.hpp**
**Especialista.hpp**
**Gerente.hpp**
**Venda**
    As variáveis sensiveis das classes estão sendo inicializadas diretamebte diretamente. (devem ser inicializadas pelo construtor).

# Replace Primitive with Object
**Venda.hpp**
    a variável cliente deveria ser um objeto é não uma string.

# Rename Variable
    Estabelecendo um padrão que variáveis privadas terminam com _ e estão em camel case.
