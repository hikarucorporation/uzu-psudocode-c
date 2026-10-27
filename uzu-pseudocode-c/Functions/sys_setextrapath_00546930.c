// Function : sys_setextrapath
// Namespace: 
// Entry    : 00546930
// Prototype: undefined sys_setextrapath(char * param_1)
// Body     : 00546930 - 00546ab0


void sys_setextrapath(char *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  size_t sVar4;
  char *pcVar5;
  char cVar6;
  char *pcVar7;
  char acStack_408 [1000];
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar3 = *(undefined8 **)(*(long *)(*plVar2 + 0x50) + 0x10);
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    pcVar5 = (char *)puVar3[1];
    strlen(pcVar5);
    freebytes(pcVar5);
    freebytes(puVar3);
    puVar3 = puVar1;
  }
  sys_expandpath("~/.local/lib/pd/extra/",acStack_408,1000);
  puVar3 = getbytes(0x10);
  *puVar3 = 0;
  sVar4 = strlen(acStack_408);
  pcVar5 = getbytes(sVar4 + 1);
  puVar3[1] = pcVar5;
  strcpy(pcVar5,acStack_408);
  pcVar5 = (char *)puVar3[1];
  cVar6 = *pcVar5;
  if (cVar6 == '\0') {
    pcVar7 = pcVar5;
  }
  else {
    do {
      pcVar7 = pcVar5 + 1;
      *pcVar5 = cVar6;
      cVar6 = pcVar5[1];
      pcVar5 = pcVar7;
    } while (cVar6 != '\0');
  }
  *pcVar7 = '\0';
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  *(undefined8 **)(*(long *)(*plVar2 + 0x50) + 0x10) = puVar3;
  sys_expandpath("~/pd-externals",acStack_408,1000);
  puVar3 = namelist_append(*(undefined8 **)(*(long *)(*plVar2 + 0x50) + 0x10),acStack_408,0);
  *(undefined8 **)(*(long *)(*plVar2 + 0x50) + 0x10) = puVar3;
  puVar3 = namelist_append(puVar3,"/usr/local/lib/pd-externals",0);
  *(undefined8 **)(*(long *)(*plVar2 + 0x50) + 0x10) = puVar3;
  puVar3 = namelist_append(puVar3,param_1,0);
  *(undefined8 **)(*(long *)(*plVar2 + 0x50) + 0x10) = puVar3;
  return;
}


