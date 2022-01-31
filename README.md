# Exercício de Revisão e Refatoração

**Considere a seguinte descrição em alto nível da funcionalidade do código:**  
> Uma empresa prestadora de diferentes serviços quer armazenar dados das vendas, cliente e funcionários. A empresa possui um gerente que recebe um bônus para cada serviço vendido. Outro tipo de funcionário é o especialista, a pessoa que realizará o serviço e que recebe uma comissão sob o valor da venda. A porcentagem da comissão e o valor da bonificação podem variar para cada funcionário.

## Lista das alterações feitas
*Em ordem cronológica por arquivo.*

**Cliente.cpp**
- padronizei a identação da saída do método print
- eliminei o include de string
- exclui kkkk

<br>

**Cliente.hpp**
- padronizei os nomes dos atibutos utilizando o camelCase
- eliminei um atributo não utilizado
- eliminei o include de string
- coloquei a função que tinha no Cliente.cpp
- padronizei a identação do arquivo
- criei um construtor

<br>

**Especialista.hpp**
- eliminei o "public:" solto da linha 15
- consertei a identação 
- padronizei os nomes das variáveis utilizando o camelCase
- eliminei os "std::" pois já está importado
- corrigi a identação do arquivo
- eliminei o import de cliente
- eliminei o atributo "percWanda"
- renomeei o método que calcula a comissão adicionando um verbo
- tornei o atributo do percentual um atributo privado da classe 
- criei o atributo numAtendimentos
- criei o atributo comissao
- coloquei o numero de atendimentos e o salario total na funcao "print"
- substitui a chamada do metodo print de funcionario
- reorganizei os atributos por questão estetica

<br>

**Funcionario.hpp**
- padronizei os nomes dos atibutos utilizando o camelCase
- mudei o nome do atributo "rgFunc" para "rg" por ser redundante
- alterei o comentário substituindo os caracteres especiais
- eliminei a funcao "print_oi"
- corrigi a identação do arquivo
- idade se tornou int
- exclui o metodo nao utilizado "print"
- reorganizei os atributos por questão estetica

<br>

**Gerente.hpp**
- corrigi a identação do arquivo
- padronizei os nomes dos atibutos e métodos utilizando o camelCase e underline, respectivamente
- coloquei como classe filha de Funcionario
- eliminei os atributos duplicados da classe mãe
- eliminei o atributo inutilizado "x" da função que calcula a boniticação
- eliminei a variavel global ValorBONIFICACAO e o coloquei como atributo da classe inicializado com o valor fornecido
- modifiquei o metodo que calculal a bonificação para substituir o valor na instancia da classe 
- coloquei o salario total na funcao "print"
- criei um construtor
- modifiquei o metodo que calcula a bonificação para calcular a partir de um vector de ponteiros de especialista

<br>

**Venda.hpp**
- padronizei os nomes dos atibutos utilizando o camelCase
- substitui a string cliente por um atributo do tipo cliente
- corrigi o método "print" para imprimir o nome do atributo do tipo cliente
- eliminei os "std::" pois já está importado
- corrigi a identação do arquivo
- eliminei os comentários inúteis
- criei um construtor
- coloquei a descricao no print()
- coloquei o atributo do tipo Especialista como um ponteiro do mesmo tipo e coloquei a implementação do numero de atendimentos e o cálculo da comissão no próprio construtor

<br>

**main.cpp**
- corrigi a identação do arquivo
- substitui os nomes dos atributos
- corrigi e padronizei o espaçamento entre os símbolos 
- atribui os objetos do tipo cliente em suas respectivas vendas, e não só o nome deles
- eliminei a atribuição repetida de valores dos objetos declarados
- substitui as inicializações usando os construtores que implementei
- substitui os "+=1" por "++"
- reposicionei o print dos clientes
- reposiconei as declarações de forma a ficar mais agradavel visualmente
- criei um vector de ponteiros de especialista para calcular o numero de servicos de forma menos trabalhosa
