# Ejercicio de laboratorio 2 – Múltiplos

## Descripción

Escriba un programa que lea en dos números enteros y determine e imprima si el primero es un múltiplo del segundo. [Sugerencia: use el operador de módulo.]

```cmd
Ingrese dos enteros: 22 8
22 no es un múltiplo de 8
```

## Contesta las siguientes preguntas

1. - ¿Se puede utilizar el operador de módulo con operandos no enteros? 
      no, ya que el modulo solo acepta numeros enteros.
    ![alt text](image.png)
   - ¿Se puede usar con números negativos? Si
   - Supongamos que el usuario ha introducido los siguientes conjuntos de números. Para cada serie, ¿qué produce   en la tercera columna? Si hay un error, explique por qué. 
      r= si ocurrio un error por  una excepcion ya que ninguna divion puede ser entre 0.

   | Entero 1 | Entero 2 | Expresión        |            Salida           |
   | -------- | -------- | ---------------- | --------------------------- |
   | 73       | 22       | cout << 73 % 22; |  73 no es multiplo de 22    |
   | 0        | 100      | cout << 0 % 100; |    0 es multiplo de 100     |
   | 100      | 0        | cout << 100 % 0; |    Arithmetic exception.    |
   | -3       | 3        | cout << -3 % 3;  |     -3 es multiplo de 3     |
   | 9        | 4.5      | cout << 9 % 4.5; |    9 no es multiplo de 4    |
   | 16       | 2        | cout << 16 % 2;  |     12 es multiplo de 2     |

2. ¿Qué pasa si colocamos un punto y coma (;) después del final de la expresión de condición de una declaración if?
   R= l colocar evitamos la accion que hara el if despues de verificar su condicion.
   ![alt text](image-1.png)

3. Modifique el programa para determinar si un número ingresado es par o impar. [Nota: Ahora, el usuario necesita ingresar solo un número.]

## ✅ Resultado

![alt text](image-2.png)
