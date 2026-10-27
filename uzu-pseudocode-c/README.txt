UZU.so - pseudocodigo exportado desde Ghidra 12.3
================================================

Estructura (equivalente al Symbol Tree de Ghidra):

  Imports/     funciones importadas (stubs de _EXTERNAL_) + _imports.txt
  Exports/     enlaces simbolicos a las funciones exportadas del .so
  Functions/   todas las funciones, anidadas por namespace/clase
  Labels/      _labels.txt
  Classes/     _classes.txt
  Namespaces/  _namespaces.txt (vacio: el binario no tiene namespaces puros)
  index.tsv    direccion <TAB> tipo <TAB> namespace <TAB> nombre <TAB> fichero
  _types/types.h      3029 tipos ANSI-C exportados del DataTypeManager
  _types/functions.h  9144 prototipos de funciones
  _data/globals.h     18868 declaraciones extern de globales/strings
  _data/globals.tsv   mapa direccion / nombre / tipo / tamano / valor
  _data/strings.txt   2874 strings con direccion y contenido
  COMPILABILIDAD.txt  por que el pseudocodigo NO se puede compilar tal cual

Detalles:
  - Funciones totales exportadas : 11831
  - Con pseudocodigo C            : 11829
  - Recuperadas tras reintento    : 8 (ver _recovered.txt)
  - Sin C (2)                     : ver _failed.txt (tienen .asm al lado)
  - Los 2 sin C fallan por limitaciones del decompilador:
      * accelerator_t_003ed550      -> Backward normalization not implemented
      * create<Chain<ObsoleteTypes>> -> el proceso del decompilador muere
  - Los ficheros se llaman <nombre>_<direccion>.c
  - Los nombres largos se recortan a 90 caracteres + hash para no superar
    el limite de 255 bytes por componente de ruta.
  - Exports/ contiene enlaces relativos; si mueves la carpeta completa
    los enlaces siguen funcionando.
  - Funciones en _EXTERNAL_ son stubs de imports (PLT): estan en Imports/.
