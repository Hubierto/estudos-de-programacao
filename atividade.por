programa {
  funcao inicio() {
    
    inteiro primeiroNumero, segundoNumero, soma, produto, menorValor, maiorValor
    real media

    escreva("digite o primeiroNumero: ")
    leia(primeiroNumero)

    escreva("digite o segundo numero: ")
    leia(segundoNumero)

    media = (primeiroNumero + segundoNumero)/2
    soma = primeiroNumero + segundoNumero
    produto = primeiroNumero * segundoNumero
    
    
    se (primeiroNumero > segundoNumero) {
       menorValor = segundoNumero
       maiorValor = primeiroNumero
    } senao { 
      menorValor = primeiroNumero 
      maiorValor = segundoNumero

    }

    escreva("\na m�dia �: ", media)
    escreva("\na soma �: ", soma)
    escreva("\no produto �: ", produto)
    escreva("\no menorValor �: ", menorValor)
    escreva("\no maior valor �: ", maiorValor)


  }
}
