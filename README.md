# Seminario-de-Traductores-ll
Mini analizador lexico
  {
  Genera un pequeño analizador léxico, que identifique los siguientes tokens (identificadores y números reales) construidos de la siguiente manera.

  identificadores = letra(letra|digito)*
  Real = entero.entero+
 
  ![image](https://user-images.githubusercontent.com/92611433/171043966-37484d0f-b4e7-4b6b-bad1-7f97a1110476.png)
  ![image](https://user-images.githubusercontent.com/92611433/171043993-492d22ef-eeb2-495d-932c-284b89db7ffa.png)
  ![image](https://user-images.githubusercontent.com/92611433/171044013-9b321c87-f735-4f16-927e-81f6e8852eea.png)

  }
 
Modulo 1(Analizador lexico)
  {
  Genera un analizador léxico utilizando todos los símbolos léxicos en el archivo simbolos_lexicos.pdf
  Modificar el codigo previamente realizado en clase para la mejora del mismo y este pueda resibir los simbolos establecidos en el pdf mencionado en clase, una vez aceptados el programa indicara si fueron definidos de manera correcta.
  ![image](https://user-images.githubusercontent.com/92611433/171044612-430d2abe-a1e0-4563-94a7-51a006ed9492.png)
   }


Modulo 2(Analizador sintactico)
  {
  El programa sera capaz de comprender el analisis sintactico de una manera completa introduciendo todos los diferentes datos solicitados en clase
  
  Al ingresar la cadena: hola + mundo, el resultado del programa es:
  ![image](https://user-images.githubusercontent.com/92611433/171045063-17a44ba1-fc92-463e-a9ad-660e3d9bd8be.png)

  }


Modulo 3(Analizador Sintactico(objetos))
  {
  En esta práctica utilizaras una pila de objetos en lugar de enteros, de esta forma al
  momento que imprimas la pila aparecerán los símbolos de forma similar a cuando realizas
  el análisis manualmente.
  
  Requerimientos:
  Para esta práctica necesitaras crear una clase ElementoPila y modificaras la clase pila para
  que acepte objetos de este tipo en lugar de enteros.
  Necesitaras crear 3 clases más, las cuales heredan de ElementoPila, las clases son:
   Terminal
   No terminal
   Estado
  ![image](https://user-images.githubusercontent.com/92611433/171045338-3fc4fd95-803f-443f-91be-208b0e9ee1d9.png)
![image](https://user-images.githubusercontent.com/92611433/171045355-722b1102-0883-4101-aef1-58395df23fcf.png)
![image](https://user-images.githubusercontent.com/92611433/171045386-fd36d099-cd7f-4340-b459-b8ed76c29167.png)
![image](https://user-images.githubusercontent.com/92611433/171045404-3cf06a19-1631-4016-a1d8-82e3a1cb51aa.png)
![image](https://user-images.githubusercontent.com/92611433/171045416-a8f13074-3a6c-4172-adf0-df78fd5f372f.png)
  }


Gramatica del compilador Modulo 4
  {
  Esta parte del programa es una mejora de las partes anteriores solo que ahora ya comprende y entiende el archivo lr el cual contiene la tabla de simbolos que es leida y guardada en una matriz para poder ser empleada para la ejecucion del programa
  ![image](https://user-images.githubusercontent.com/92611433/171045620-07cc663a-d76d-443c-bd84-43def58e986b.png)
    .
    . 
    .
    ![image](https://user-images.githubusercontent.com/92611433/171045676-12cc328c-799d-422a-92c3-af97060cb0a1.png)

  }



Analisis Semantico
  {
  Implementacion del analisis Semantico ya finalizado el cual comprende todos los modulos vistos en clase
  
  ![image](https://user-images.githubusercontent.com/92611433/171046185-b1500911-e086-4c8a-ad7e-af6d23b21953.png)

  }


