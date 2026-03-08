# 🧮 calculadora-c
> Calculadora interativa para terminal, desenvolvida em C.

---

## 📋 Sobre o projeto

A **calculadora-c** é uma aplicação de linha de comando que permite realizar as quatro operações aritméticas básicas de forma simples e intuitiva. O projeto foi desenvolvido com foco em boas práticas de organização de código, como uso de `switch/case` para controle de fluxo e tratamento de entradas inválidas.

---

## ⚙️ Funcionalidades

- ➕ **Adição**
- ➖ **Subtração**
- ✖️ **Multiplicação**
- ➗ **Divisão** (com tratamento de divisão por zero)

---

## 🚀 Como executar

### Opção 1 — Compilador online
Acesse [OnlineGDB](https://www.onlinegdb.com/), cole o código diretamente no editor e clique em **Run**.

### Opção 2 — Localmente com GCC

#### Pré-requisitos
- GCC instalado — [Download aqui](https://gcc.gnu.org/)

```bash
# Clone o repositório
git clone https://github.com/MateusAlcantara13/calculadora-c.git

# Acesse a pasta
cd calculadora-c

# Compile o programa
gcc calculadora.c -o calculadora

# Execute o programa
./calculadora
```

---

## 🖥️ Exemplo de uso

```
╔══════════════════════════════╗
║       CALCULADORA BÁSICA     ║
╠══════════════════════════════╣
║  Operações disponíveis:      ║
║  + Adição                    ║
║  - Subtração                 ║
║  * Multiplicação             ║
║  / Divisão                   ║
╚══════════════════════════════╝

Digite o 1° número: 10
Digite a operação ( + , - , * , / ): +
Digite o 2° número: 5

──────────────────────────────
10.00 + 5.00 = 15.00
```

---

## 🗂️ Estrutura do projeto

```
calculadora-c/
│
├── calculadora.c   # Código principal da aplicação
└── README.md       # Documentação do projeto
```

---

## 🧠 O que aprendi com esse projeto

- Uso de `switch/case` para controle de fluxo
- Leitura de entradas do usuário com `scanf`
- Tratamento do buffer de entrada com `%c`
- Formatação de saída com `%.2f`
- Tratamento de erros como divisão por zero

---

## 🛠️ Tecnologias utilizadas

![C](https://img.shields.io/badge/C-Language-blue?logo=c&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-Compiler-orange?logo=gnu&logoColor=white)

---

## 👤 Autor

Feito por **Mateus Alcantara** — sinta-se à vontade para entrar em contato!

[![LinkedIn](https://img.shields.io/badge/LinkedIn-Mateus--Alcantara-blue?logo=linkedin)](https://www.linkedin.com/in/mateusalcantara13/)
[![GitHub](https://img.shields.io/badge/GitHub-MateusAlcantara13-black?logo=github)](https://github.com/MateusAlcantara13/)
