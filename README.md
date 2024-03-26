# TL1 | TP1 | Ignacio Arturo de la Vega
Primer trabajo practico de la materia "Taller de Lenguajes 1".
## Punto 2: Inciso 2: Preguntas y Respuestas sobre ".gitignore":
#### 1- ¿Por qué es conveniente incluirlo?
- Porque nos permite ignorar archivos, ya sean puntuales o en general, para que los mismos no sean considerados a la hora de utilizar comandos en git.
- Esto nos permite, por ejemplo, evitar subir archivos pesados o inecesarios, o que los mismos no se consideren a la hora de hacer un commit.
#### 2- ¿Cuándo se debe hacer?
- Siempre que nuestro proyecto genere sub-archivos a la hora de compilacion o ejecucion, por ejemplo un archivo '.exe' o un archivo de opciones locales como '.ini' o '.json'. Ya que estos archivos no son necesarios para correr o editar el proyecto y se crean localmente.
- A veces cuando tenemos ciertos archivos muy grandes que no son convenientes de estar actualizando y teniendo en cuenta de forma permanente.
#### 3- ¿Cómo configuraría el archivo .gitignore?
- Primero se debe crear un nuevo archivo ".gitignore" dentro de la carpeta que contiene el repositorio de git, junto a "README.md".
- Luego lo abrimos con un editor de texto o con VSCode para empezar a añadir condiciones. Cada linea indica una condicion nueva a ser evaluada. A continuacion se muestran algunas condiciones:
    * Se pueden ignorar archivos especificos colocando su nombre y extension, como por ejemplo "ignorar.txt".
    * Se pueden ignorar tipos de archivos, en cuyo caso cualquier archivo de dicho tipo, indistinto del nombre, sera ignorado. Se usa de la siguiente manera: '*.tipo' por ejemplo "*.exe" para ignorar todo ejecutable que se cree.
    * Se pueden colocar comentarios para guiarnos si la lista de archivos a ignorar es muy grande. Toda linea que comienze con '#' sera considerada un comentario.
    * Por ultimo, se puede colocar un signo de admiracion al inicio para asegurarse que un archivo **NO** sea ignorado, por ejemplo "!*.c" para que todos los codigos en 'C' sean incluidos siempre.