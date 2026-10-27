// Function : iemgui_all_put_in_braces
// Namespace: 
// Entry    : 00576a00
// Prototype: undefined iemgui_all_put_in_braces(undefined8 * param_1)
// Body     : 00576a00 - 00576b2f


void iemgui_all_put_in_braces(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  char local_408;
  char local_407 [1007];
  
  puVar5 = (undefined8 *)*param_1;
  pcVar2 = (char *)*puVar5;
  sVar3 = strlen(pcVar2);
  pcVar4 = &local_408;
  if (sVar3 < 1000) {
    lVar6 = 0;
    do {
      *pcVar4 = '{';
      pcVar4 = pcVar4 + 1;
      do {
        cVar1 = pcVar2[lVar6];
        *pcVar4 = cVar1;
        if (cVar1 == '\0') {
          pcVar4[0] = '}';
          pcVar4[1] = '\0';
          puVar5 = gensym(&local_408);
          goto LAB_00576a5f;
        }
        pcVar4 = pcVar4 + 1;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 != 0);
    } while( true );
  }
LAB_00576a5f:
  *param_1 = puVar5;
  puVar5 = (undefined8 *)param_1[1];
  pcVar2 = (char *)*puVar5;
  sVar3 = strlen(pcVar2);
  pcVar4 = &local_408;
  if (sVar3 < 1000) {
    lVar6 = 0;
    do {
      *pcVar4 = '{';
      pcVar4 = pcVar4 + 1;
      do {
        cVar1 = pcVar2[lVar6];
        *pcVar4 = cVar1;
        if (cVar1 == '\0') {
          pcVar4[0] = '}';
          pcVar4[1] = '\0';
          puVar5 = gensym(&local_408);
          goto LAB_00576abf;
        }
        pcVar4 = pcVar4 + 1;
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 != 0);
    } while( true );
  }
LAB_00576abf:
  param_1[1] = puVar5;
  puVar5 = (undefined8 *)param_1[2];
  pcVar2 = (char *)*puVar5;
  sVar3 = strlen(pcVar2);
  pcVar4 = &local_408;
  if (999 < sVar3) {
LAB_00576b1f:
    param_1[2] = puVar5;
    return;
  }
  lVar6 = 0;
  do {
    *pcVar4 = '{';
    pcVar4 = pcVar4 + 1;
    do {
      cVar1 = pcVar2[lVar6];
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        pcVar4[0] = '}';
        pcVar4[1] = '\0';
        puVar5 = gensym(&local_408);
        goto LAB_00576b1f;
      }
      pcVar4 = pcVar4 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 != 0);
  } while( true );
}


