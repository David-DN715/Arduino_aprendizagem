Claro! Vou te ajudar a fazer isso. Para ler e gravar uma variável com um valor digitado no Monitor Serial do Arduino, siga os passos abaixo:

1. **Configuração Inicial:**
   - Conecte o seu Arduino à porta USB do seu computador.
   - Abra a IDE do Arduino no seu PC.

2. **Abra o Monitor Serial:**
   - Clique no botão "Serial Monitor" na barra de ferramentas da IDE.
   - Selecione a taxa de transferência desejada (bauds) no Monitor Serial. Essa taxa deve ser a mesma que você usará no código.

3. **Comandos Serial:**
   - O Arduino possui uma classe chamada `Serial` que permite a comunicação com a porta serial.
   - Alguns comandos úteis da classe `Serial` incluem:
     - `Serial.available()`: Retorna o número de bytes disponíveis para leitura na porta serial.
     - `Serial.read()`: Lê dados da porta serial.
     - `Serial.print()`: Imprime dados na porta serial em formato legível por humanos (texto ASCII).
     - `Serial.println()`: Similar ao `Serial.print()`, mas adiciona um caractere de retorno de carro (ASCII 13) e uma nova linha (ASCII 10) no final da string.

4. **Exemplo de Leitura e Gravação:**
   - Vamos criar um exemplo simples que lê um número digitado no Monitor Serial e o armazena em uma variável:
     ```cpp
     void setup() {
         Serial.begin(9600); // Inicializa a comunicação serial com taxa de 9600 bauds
     }

     void loop() {
         int valorLido;
         if (Serial.available()) { // Verifica se há dados disponíveis para leitura
             valorLido = Serial.read(); // Lê o valor digitado
             Serial.print("Valor lido: ");
             Serial.println(valorLido); // Imprime o valor lido
         }
     }
     ```
   - No exemplo acima, o Arduino aguarda até que algum dado seja digitado no Monitor Serial. Quando isso acontece, ele lê o valor e o imprime.

Lembre-se de adaptar o código conforme suas necessidades específicas. Você pode usar diferentes tipos de variáveis (como `int`, `float`, etc.) para armazenar os valores lidos. Experimente e divirta-se programando com o Arduino! 🚀

⁴: [Fonte](https://www.bosontreinamentos.com.br/eletronica/arduino/enviando-e-recebendo-dados-com-serial-monitor-no-arduino/)
⁶: [Referência do Arduino](https://www.arduino.cc/reference/pt/language/functions/communication/serial/read/)
⁷: [Vídeo Tutorial](https://gvensino.com.br/aulas/arduino-40-aprenda-como-ler-dados-da-serial-parte-1/)

Fonte: conversa com o Copilot, 24/05/2024
(1) Enviando e recebendo dados com Serial Monitor no Arduino. https://www.bosontreinamentos.com.br/eletronica/arduino/enviando-e-recebendo-dados-com-serial-monitor-no-arduino/.
(2) Serial.read() - Documentação de Referência do Arduino. https://www.arduino.cc/reference/pt/language/functions/communication/serial/read/.
(3) ARDUÍNO #40: APRENDA COMO LER DADOS DA SERIAL (PARTE 1). https://gvensino.com.br/aulas/arduino-40-aprenda-como-ler-dados-da-serial-parte-1/.
(4) ARDUÍNO #40: APRENDA COMO LER DADOS DA SERIAL (PARTE 1). https://www.youtube.com/watch?v=BKdrmHEDYgs.
(5) ARDUÍNO #41: APRENDA COMO LER DADOS DA SERIAL (PARTE 2: DETALHES AVANÇADOS). https://www.youtube.com/watch?v=EGghflVogT8.
(6) Curso de Arduino - Aula 02 - Variáveis. https://www.youtube.com/watch?v=l8wxl6xeljQ.
(7) Variáveis Múltiplas de Impressão em Série Arduino | Delft Stack. https://www.delftstack.com/pt/howto/arduino/arduino-serial-print-multiple-variables/.

void setup() {
    Serial.begin(9600); // Inicializa a comunicação serial com taxa de 9600 bauds
}

void loop() {
    int valorLido;
    if (Serial.available()) { // Verifica se há dados disponíveis para leitura
        valorLido = Serial.read(); // Lê o valor digitado
        Serial.print("Valor lido: ");
        Serial.println(valorLido); // Imprime o valor lido
    }
}
