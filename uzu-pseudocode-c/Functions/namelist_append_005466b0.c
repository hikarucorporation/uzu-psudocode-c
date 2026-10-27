// Function : namelist_append
// Namespace: 
// Entry    : 005466b0
// Prototype: undefined8 * namelist_append(undefined8 * param_1, char * param_2, int param_3)
// Body     : 005466b0 - 00546791


undefined8 * namelist_append(undefined8 *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  size_t sVar5;
  char *pcVar6;
  char cVar7;
  undefined8 *puVar8;
  
  puVar4 = getbytes(0x10);
  *puVar4 = 0;
  sVar5 = strlen(param_2);
  pcVar6 = getbytes(sVar5 + 1);
  puVar4[1] = pcVar6;
  strcpy(pcVar6,param_2);
  pcVar6 = (char *)puVar4[1];
  cVar7 = *pcVar6;
  if (cVar7 == '\0') {
    *pcVar6 = '\0';
  }
  else {
    do {
      pcVar1 = pcVar6 + 1;
      *pcVar6 = cVar7;
      cVar7 = pcVar6[1];
      pcVar6 = pcVar1;
    } while (cVar7 != '\0');
    *pcVar1 = '\0';
  }
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = param_1;
    if (param_3 == 0) {
      do {
        puVar8 = puVar2;
        iVar3 = strcmp((char *)puVar8[1],param_2);
        if (iVar3 == 0) {
          pcVar6 = (char *)puVar4[1];
          strlen(pcVar6);
          freebytes(pcVar6);
          return param_1;
        }
        puVar2 = (undefined8 *)*puVar8;
      } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
    }
    else {
      do {
        puVar8 = puVar2;
        puVar2 = (undefined8 *)*puVar8;
      } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
    }
    *puVar8 = puVar4;
    puVar4 = param_1;
  }
  return puVar4;
}


