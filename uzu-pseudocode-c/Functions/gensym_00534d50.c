// Function : gensym
// Namespace: 
// Entry    : 00534d50
// Prototype: undefined8 * gensym(char * param_1)
// Body     : 00534d50 - 00534e2f


undefined8 * gensym(char *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  char *__dest;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char cVar7;
  undefined8 *puVar8;
  size_t sVar9;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  cVar7 = *param_1;
  if (cVar7 == '\0') {
    sVar9 = 1;
    uVar5 = 0x1505;
    lVar6 = *(long *)(*plVar2 + 0x28);
    puVar3 = *(undefined8 **)(lVar6 + 0xa828);
  }
  else {
    uVar4 = 0x1505;
    lVar6 = 1;
    do {
      uVar4 = (int)cVar7 + uVar4 * 0x21;
      cVar7 = param_1[lVar6];
      lVar6 = lVar6 + 1;
    } while (cVar7 != '\0');
    uVar5 = (ulong)(uVar4 & 0x3fff);
    sVar9 = (size_t)(int)lVar6;
    lVar6 = *(long *)(*plVar2 + 0x28);
    puVar3 = *(undefined8 **)(lVar6 + uVar5 * 8);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)(lVar6 + uVar5 * 8);
  }
  else {
    do {
      puVar8 = puVar3;
      iVar1 = strcmp((char *)*puVar8,param_1);
      if (iVar1 == 0) {
        return puVar8;
      }
      puVar3 = (undefined8 *)puVar8[2];
    } while ((undefined8 *)puVar8[2] != (undefined8 *)0x0);
    puVar8 = puVar8 + 2;
  }
  puVar3 = getbytes(0x18);
  __dest = getbytes(sVar9);
  puVar3[1] = 0;
  puVar3[2] = 0;
  strcpy(__dest,param_1);
  *puVar3 = __dest;
  *puVar8 = puVar3;
  return puVar3;
}


