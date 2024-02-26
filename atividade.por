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

    escreva("\na média é: ", media)
    escreva("\na soma é: ", soma)
    escreva("\no produto é: ", produto)
    escreva("\no menorValor é: ", menorValor)
    escreva("\no maior valor é: ", maiorValor)


  }
}
