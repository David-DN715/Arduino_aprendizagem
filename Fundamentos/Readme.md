<h1 align="center">⚡ Fundamentos</h1>

<p align="center">
  Estudos iniciais sobre programação embarcada utilizando Arduino e ESP32.
</p>

---

# 🧠 Sobre

Esta seção reúne conceitos fundamentais utilizados no desenvolvimento de sistemas embarcados.

Os exemplos presentes aqui servem como base para compreender:
- GPIO
- lógica digital
- PWM
- comunicação serial
- leitura de entradas
- controle de saídas

---

# 📚 Conteúdo

## 💡 Blink LED
Primeiro contato com GPIO e controle digital de saída.

### Conceitos:
- `pinMode()`
- `digitalWrite()`
- `delay()`

---

## 🖥️ Serial Monitor
Comunicação serial entre microcontrolador e computador.

### Conceitos:
- `Serial.begin()`
- `Serial.print()`
- Baud rate

---

## 🎚️ PWM
Controle de intensidade utilizando modulação por largura de pulso.

### Conceitos:
- Duty Cycle
- Frequência
- Controle de brilho
- Controle de velocidade

---

## 🔘 Botões
Leitura de entradas digitais.

### Conceitos:
- `digitalRead()`
- Pull-up
- Debounce

---

# 🛠️ Tecnologias

<p align="center">
  <img src="https://skillicons.dev/icons?i=arduino,c,cpp,vscode"/>
</p>

---

# ⚡ Estrutura

```bash
fundamentos/
│
├── blink_led/
├── serial_monitor/
├── pwm/
└── button/
