# MyQueue

# Descripcion del proyecto
En este proyecto se crea una estructura de tipo cola la cual tiene un comportamiento de tipo FIFO (First input first output) lo cual significa que el primer elemento agregado es el primero en salir. 
El lenguaje de programación utilizado es C standard, el cual es un lenguaje de bajo nivel que permite un control directo sobre el hardware y la memoria, pero con una sintaxis más simple que el ensamblador.
C sigue el paradigma de programación estructurada, donde el flujo del programa está controlado por estructuras como bucles y condicionales. Además, es imperativo porque el enfoque principal está en la ejecución secuencial de instrucciones que cambian el estado del programa.


# Requerimientos de software
Para poder ejecutar el programa se necesita el compilador de C

Para usuarios de Windows:
-Se tiene que instalar MinGW (Minimalist GNU for Windows), se recomienda usar MinGW GCC 8.2.0 o superior
1.	link para instalarlo https://sourceforge.net/projects/mingw/
2.	En el instalador aparece una serie de opciones que se pueden marcar, pero las necesarias son: mingw32-base y mingw32-gcc-g++ y se aplican los cambios para instalarlas
3.	Ir a explorador de archivos, ubicarse en Este Equipo, darle click derecho y dirigirse a propiedades, seguido a esto dirigirse al apartado de Configuración avanzada del sistema, después ir a variables de entorno posicionarse encima de Path y darle al botón editar, debe aparecer una nueva ventana y ahí pega la dirección donde se guardó todos los archivos de MinGW (la ubicación predeterminada generalmente es C:\MinGW\bin) y se le da al botón aceptar. 
4.	Teniendo el compilador ya instalado se puede verificar que está instalado usando el siguiente comando en el terminal de powerShell
gcc –version
Y de esa forma se sabe que está instalado y su respectiva versión.

-Para usuarios de mac:
Instalar Xcode Command Line Tools usando xcode-select --install.

-Para usuarios Linux:
Ejecuta sudo apt install gcc en el terminal

# Ejecutar el programa
Para poder ejecutar este o cualquier programa de C, tiene que abrir una ventana de powerShell, seguido a ello ejecuta los siguientes comandos
gcc -o nombre_del_archivo  nombre_del_archivo.c
Lo que se hace en ese comando es crear un ejecutable con el nombre del archivo, después se ejecuta el siguiente comando para poder ejecutar el programa, tener en cuenta que se debe ejecutar dentro la carpeta en donde está el ejecutable
./nombre_del_ejecutable
Y de esa forma puede ejecutar el programa
Otra forma, para poder ejecutarlo es usando un entorno de desarrollo, en nuestro caso se usó VisualStudioCode, entonces en ese caso se tiene que instalar 2 extensiones, las cuales son C/C++ y C/C++ Compile Run. Y después se abre el proyecto y se le da al botón de ejecutar
Contenido de ayuda para instalar winGW y ejecutar el programa: https://www.youtube.com/watch?v=GEZLjRSY_m8

