<h1 align="center">⚡ Registradores e Bitwise no Arduino</h1>

<p align="center">
  Estudos sobre manipulação de bits e acesso direto aos registradores do microcontrolador.
</p>

---

# 🧠 Sobre

Este diretório contém exemplos práticos utilizando:

- Operadores bitwise
- Manipulação direta de registradores
- Controle de GPIO em baixo nível
- Otimização de velocidade no Arduino

---

# ⚡ Operadores Bitwise

| Operador | Nome |
|---|---|
| `&` | AND |
| `|` | OR |
| `^` | XOR |
| `~` | NOT |
| `<<` | Shift Left |
| `>>` | Shift Right |

---

# 🛠️ Registradores

## 🔹 DDR
Define se o pino será:
- INPUT
- OUTPUT

## 🔹 PORT
Controla:
- HIGH
- LOW

## 🔹 PIN
Realiza leitura digital do pino.

---

# 💻 Exemplo

```cpp
DDRB |= (1 << DDB5);
PORTB |= (1 << PORTB5);
```

O código acima:
- configura o pino como saída
- ativa o nível HIGH

---

# 📚 Conteúdo

## 📁 Operadores Bitwise
- AND
- OR
- XOR
- NOT
- Shift Left
- Shift Right

## 📁 Registradores
- DDR
- PORT
- PIN

## 📁 Manipulação direta
- Blink rápido
- Controle de LED
- Leitura de botão

---

# 🎯 Objetivo

Aprender programação de baixo nível e otimização em sistemas embarcados.
