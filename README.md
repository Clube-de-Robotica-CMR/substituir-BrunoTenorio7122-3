# Substituir 🔏

Neste desafio, você implementará um sistema de criptografia que utiliza uma cifra de substituição. Diferente da Cifra de César, que apenas rotaciona o alfabeto, uma cifra de substituição utiliza uma "chave" completa de 26 caracteres para mapear cada letra do alfabeto para uma letra correspondente na chave.

## Especificação
Num arquivo `substituir.c`, crie um programa que criptografe mensagens utilizando uma chave de substituição:
1. O programa deve aceitar um único argumento de linha de comando: uma **chave** de 26 caracteres.
2. A chave deve ser válida:
    - Deve conter exatamente **26 caracteres**.
    - Deve conter apenas letras do alfabeto.
    - Não pode conter letras repetidas.
3. Se a chave for inválida ou se o programa não receber exatamente um argumento, exiba uma mensagem de erro (`Como usar: ./substituir key`) e retorne `1`.
4. Peça ao usuário o texto original (`plaintext`).
5. Calcule e exiba o texto cifrado (`ciphertext`):
    - A substituição deve manter a caixa (maiúsculas continuam maiúsculas, minúsculas continuam minúsculas).
    - Caracteres não alfabéticos devem ser impressos sem alteração.



## Exemplo de Lógica
Se a chave for `VCHPRZGJNTLSKFBDQWAXEUYMOI`:
- A letra 'A' (1ª letra do alfabeto) seria substituída por 'V' (1ª letra da chave).
- A letra 'B' (2ª letra do alfabeto) seria substituída por 'C' (2ª letra da chave).
- E assim por diante.

## Demonstração
```bash
$ ./substituir VCHPRZGJNTLSKFBDQWAXEUYMOI
plaintext:  HELLO
ciphertext: JRSSB

$ ./substituir VCHPRZGJNTLSKFBDQWAXEUYMOI
plaintext:  hello, world
ciphertext: jrssb, ybwsp

$ ./substituir ABC
Como usar: ./substituir key