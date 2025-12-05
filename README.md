# Proyecto-C-

**DESCRIPÇIÓN**
- Este proyecto es un sistema simple para gestionar diferentes tipos de plantas dentro de un jardín virtual. Permite crear objetos de distintos tipos de plantas (PlantaDecorativa, PlantaComestible y Arbol) y agregarlos a un Jardin, que mantiene una lista de todas las plantas registradas donde cada tipo de planta tiene atributos y métodos específicos, además de compartir atributos comunes a través de la clase base Planta mediante herencia.

**PARA QUE SIRVE**
- Registrar y almacenar plantas en un jardín virtual.
- Diferenciar distintos tipos de plantas y sus características:
	- PlantaDecorativa: color de la flor.
	- PlantaComestible: parte de la planta que se puede consumir.
	- Arbol: altura del árbol.
- Mostrar información de todas las plantas en el jardín.

**PARA QUE NO SIRVE**
- No realiza gestión real de un jardín físico.
- No almacena información en archivos o bases de datos.
- No realiza cálculos de crecimiento, riego o fertilización.
- No incluye interfaz gráfica; solo funciona por consola.

**COMO USARLO**
- Abrir todos los archivos .cpp en un proyecto de C++ (Planta.cpp, PlantaDecorativa.cpp, PlantaComestible.cpp, Arbol.cpp, Jardin.cpp, main.cpp)
- Abrir una terminal o consola y navegar a la carpeta donde están los archivos
- Compilar todos los archivos juntos usando un compilador de C++
	- g++ main.cpp  -o main.exe
- Ejecutar el programa resultante: (en Windows, Linux o IOs)
	- ./main.exe

*CORRECCIONES*
- Se separaron los archivos en plantaComestible, plantaDecorativa, Arbol, Planta, Jardin, Cuidados y se agrego un main
