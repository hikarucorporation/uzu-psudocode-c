// Function : atoif
// Namespace: 
// Entry    : 005c6b20
// Prototype: char * atoif(char * param_1, float * param_2, undefined8 * param_3)
// Body     : 005c6b20 - 005c6beb


char * atoif(char *param_1,float *param_2,undefined8 *param_3)

{
  char cVar1;
  char *pcVar2;
  float fVar3;
  double dVar4;
  char *local_30;
  
  dVar4 = strtod(param_1,&local_30);
  fVar3 = strtof(param_1,&local_30);
  if ((long)dVar4 == (long)(int)fVar3) {
    if (local_30 != param_1) {
      pcVar2 = param_1;
      do {
        cVar1 = *pcVar2;
        if (cVar1 < 'X') {
          if ((cVar1 == '.') || (cVar1 == 'E')) goto LAB_005c6baa;
        }
        else {
          if ((cVar1 == 'X') || (cVar1 == 'x')) break;
          if (cVar1 == 'e') {
LAB_005c6baa:
            *param_3 = 2;
            *param_2 = fVar3;
            return local_30;
          }
        }
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 != local_30);
      if (local_30 != param_1) {
        *param_3 = 1;
        *(long *)param_2 = (long)dVar4;
        return local_30;
      }
    }
    local_30 = (char *)0x0;
  }
  else {
    *param_3 = 2;
    *param_2 = fVar3;
  }
  return local_30;
}


