# TL1 | TP1 | Ignacio Arturo de la Vega
Primer trabajo practico de la materia "Taller de Lenguajes 1".
## Punto 2: Inciso 2: Preguntas y Respuestas sobre ".gitignore":
1- ¿Por qué es conveniente incluirlo?
- 
2- ¿Cuándo se debe hacer?
- 
3- ¿Cómo configuraría el archivo .gitignore?
- Primero se debe crear un nuevo archivo ".gitignore" dentro de la carpeta que contiene el repositorio de git, junto a "README.md".
- Luego lo abrimos con un editor de texto o con VSCode para empezar a añadir condiciones. Cada linea indica una condicion nueva a ser evaluada. A continuacion se muestran algunas condiciones:
    * Se pueden ignorar archivos especificos colocando su nombre y extension, como por ejemplo "ignorar.txt".
    * Se pueden ignorar tipos de archivos, en cuyo caso cualquier archivo de dicho tipo, indistinto del nombre, sera ignorado. Se usa de la siguiente manera: '*.tipo' por ejemplo "*.exe" para ignorar todo ejecutable que se cree.
    * Se pueden colocar comentarios para guiarnos si la lista de archivos a ignorar es muy grande. Toda linea que comienze con '#' sera considerada un comentario.
    * Por ultimo, se puede colocar un signo de admiracion al inicio para asegurarse que un archivo **NO** ser ignorado, por ejemplo "!*.c".