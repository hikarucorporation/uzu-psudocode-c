// Function : iemgui_all_raute2dollar
// Namespace: 
// Entry    : 00576850
// Prototype: undefined iemgui_all_raute2dollar(undefined8 * param_1)
// Body     : 00576850 - 00576982


void iemgui_all_raute2dollar(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  long lVar4;
  undefined8 *puVar5;
  char local_408 [1008];
  
  puVar5 = (undefined8 *)*param_1;
  pcVar2 = (char *)*puVar5;
  sVar3 = strlen(pcVar2);
  if (sVar3 < 1000) {
    lVar4 = 0;
    cVar1 = *pcVar2;
    while( true ) {
      while (cVar1 == '#') {
        local_408[lVar4] = '$';
        lVar4 = lVar4 + 1;
        cVar1 = pcVar2[lVar4];
      }
      local_408[lVar4] = cVar1;
      if (cVar1 == '\0') break;
      lVar4 = lVar4 + 1;
      cVar1 = pcVar2[lVar4];
    }
    puVar5 = gensym(local_408);
  }
  *param_1 = puVar5;
  puVar5 = (undefined8 *)param_1[1];
  pcVar2 = (char *)*puVar5;
  sVar3 = strlen(pcVar2);
  if (sVar3 < 1000) {
    lVar4 = 0;
    cVar1 = *pcVar2;
    while( true ) {
      while (cVar1 == '#') {
        local_408[lVar4] = '$';
        lVar4 = lVar4 + 1;
        cVar1 = pcVar2[lVar4];
      }
      local_408[lVar4] = cVar1;
      if (cVar1 == '\0') break;
      lVar4 = lVar4 + 1;
      cVar1 = pcVar2[lVar4];
    }
    puVar5 = gensym(local_408);
  }
  param_1[1] = puVar5;
  puVar5 = (undefined8 *)param_1[2];
  pcVar2 = (char *)*puVar5;
  sVar3 = strlen(pcVar2);
  if (sVar3 < 1000) {
    lVar4 = 0;
    cVar1 = *pcVar2;
    while( true ) {
      while (cVar1 == '#') {
        local_408[lVar4] = '$';
        lVar4 = lVar4 + 1;
        cVar1 = pcVar2[lVar4];
      }
      local_408[lVar4] = cVar1;
      if (cVar1 == '\0') break;
      lVar4 = lVar4 + 1;
      cVar1 = pcVar2[lVar4];
    }
    puVar5 = gensym(local_408);
  }
  param_1[2] = puVar5;
  return;
}


