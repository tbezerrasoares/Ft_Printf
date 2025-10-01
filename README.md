# 📟 ft_printf

<div align="center">
  
  ![42 School Badge](https://img.shields.io/badge/42-School-000000?style=flat&logo=42&logoColor=white)
  ![Language](https://img.shields.io/badge/Language-C-blue?style=flat&logo=c)
  ![Norm](https://img.shields.io/badge/Norm-42-success?style=flat)
  ![Grade](https://img.shields.io/badge/Grade-125%2F100-brightgreen?style=flat)
  ![Build Status](https://img.shields.io/badge/Build-Passing-success?style=flat)
  
  **Uma recriação da função printf() da biblioteca padrão de C**
  
</div>

## 📋 Índice

- [Sobre o Projeto](#-sobre-o-projeto)
- [Funcionalidades](#-funcionalidades)
- [Instalação](#-instalação)
- [Uso](#-uso)
- [Estrutura do Projeto](#-estrutura-do-projeto)
- [Funções Implementadas](#-funções-implementadas)
- [Testes](#-testes)
- [Normas da 42](#-normas-da-42)
- [Autor](#-autor)

## 🎯 Sobre o Projeto

O **ft_printf** é um projeto da **42 School** que consiste em recriar a função `printf()` da biblioteca padrão de C. Este projeto é fundamental para compreender:

- 🔄 **Argumentos variáveis** (`va_list`, `va_start`, `va_arg`, `va_end`)
- 📊 **Formatação de dados** e conversões de tipos
- 🧮 **Manipulação de strings** e números
- 🎨 **Formatação de saída** em diferentes bases numéricas
- 💾 **Gestão de memória** e ponteiros

### Objetivos de Aprendizagem
- Compreender o funcionamento interno da função `printf()`
- Trabalhar com argumentos variáveis em C
- Implementar conversões de tipos e formatação
- Aplicar as normas de código da 42 School

## ⚡ Funcionalidades

A função `ft_printf()` suporta as seguintes conversões:

| Especificador | Descrição | Exemplo |
|:-------------:|-----------|---------|
| `%c` | Imprime um único caractere | `ft_printf("%c", 'A')` → `A` |
| `%s` | Imprime uma string | `ft_printf("%s", "Hello")` → `Hello` |
| `%p` | Imprime um ponteiro em hexadecimal | `ft_printf("%p", ptr)` → `0x7fff5fbff6ac` |
| `%d` | Imprime um número decimal | `ft_printf("%d", 42)` → `42` |
| `%i` | Imprime um inteiro | `ft_printf("%i", -42)` → `-42` |
| `%u` | Imprime um unsigned int | `ft_printf("%u", 42U)` → `42` |
| `%x` | Imprime hexadecimal (minúsculas) | `ft_printf("%x", 255)` → `ff` |
| `%X` | Imprime hexadecimal (maiúsculas) | `ft_printf("%X", 255)` → `FF` |
| `%%` | Imprime o caractere '%' | `ft_printf("%%")` → `%` |

## 🚀 Instalação

### Pré-requisitos
- **GCC** ou **Clang** compiler
- **Make**
- Sistema **Unix/Linux** ou **macOS**

### Compilação

```bash
# Clone o repositório
git clone https://github.com/tbezerrasoares/Ft_Printf.git
cd Ft_Printf

# Compile a biblioteca
make

# Isso criará o arquivo libftprintf.a
```

### Comandos Make Disponíveis

```bash
make        # Compila a biblioteca
make clean  # Remove arquivos objeto
make fclean # Remove arquivos objeto e a biblioteca
make re     # Recompila tudo do zero
```

## 🔧 Uso

### Exemplo Básico

```c
#include "ft_printf.h"

int main(void)
{
    int len;
    
    // Exemplos de uso
    len = ft_printf("Caractere: %c\n", 'A');
    len = ft_printf("String: %s\n", "Hello, World!");
    len = ft_printf("Número: %d\n", 42);
    len = ft_printf("Hexadecimal: %x\n", 255);
    len = ft_printf("Ponteiro: %p\n", &len);
    
    return (0);
}
```

### Compilação com seu Programa

```bash
# Compile sua aplicação linkando com a biblioteca
gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o program

# Execute
./program
```

## 📁 Estrutura do Projeto

```
ft_printf/
├── 📜 ft_printf.h          # Header principal
├── 📄 ft_printf.c          # Função principal ft_printf()
├── 📄 ft_printf_aux.c      # Funções auxiliares
├── 📄 ft_printf_mem.c      # Tratamento de ponteiros
├── 📄 ft_printf_unsigned.c # Números unsigned
├── 📄 ft_printf_utils.c    # Utilitários gerais
├── 📄 ft_print_hex.c       # Conversões hexadecimais
├── 📚 libft/               # Biblioteca libft integrada
├── ⚙️ Makefile             # Sistema de build
└── 📖 README.md            # Este arquivo
```

## 🛠 Funções Implementadas

### Funções Principais
- `ft_printf()` - Função principal que mimifica printf()
- `ft_putchar_var()` - Processa argumentos variáveis
- `ft_putnbr_base()` - Imprime números em diferentes bases
- `ft_printmem()` - Formatação de endereços de memória

### Funções Auxiliares
- `ft_putchar_len()` - Imprime caractere e retorna comprimento
- `ft_printstr()` - Imprime string com tratamento de NULL
- `ft_printnbr()` - Imprime números decimais
- `ft_printpercent()` - Imprime o caractere '%'

## 🧪 Testes

### Teste Manual
```c
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ft_len, printf_len;
    
    // Compare com printf original
    ft_len = ft_printf("ft_printf: %d\n", 42);
    printf_len = printf("printf:    %d\n", 42);
    
    printf("Comprimentos: ft=%d, original=%d\n", ft_len, printf_len);
    
    return (0);
}
```

### Casos de Teste Recomendados
- ✅ Valores NULL para strings
- ✅ Números negativos e positivos
- ✅ Valores extremos (INT_MAX, INT_MIN)
- ✅ Ponteiros NULL
- ✅ Strings vazias
- ✅ Múltiplos especificadores na mesma chamada

## 📏 Normas da 42

Este projeto segue rigorosamente as **normas da 42 School**:

- ✅ Máximo de 25 linhas por função
- ✅ Máximo de 5 funções por arquivo
- ✅ Nomenclatura padronizada
- ✅ Sem vazamentos de memória
- ✅ Tratamento adequado de erros
- ✅ Uso restrito de funções da biblioteca padrão

### Funções Autorizadas
- `malloc`, `free`
- `write`
- `va_start`, `va_arg`, `va_copy`, `va_end`

## 👨‍💻 Autor

**Thiago Bezerra**
- GitHub: [@tbezerrasoares](https://github.com/tbezerrasoares)
- Email: tbezerra@student.42porto.com
- 42 Intra: tbezerra

---

<div align="center">
  
  **Feito com ❤️ na 42 Porto**
  
  [![42 Porto](https://img.shields.io/badge/42-Porto-000000?style=flat&logo=42&logoColor=white)](https://www.42porto.com/)
  
</div>