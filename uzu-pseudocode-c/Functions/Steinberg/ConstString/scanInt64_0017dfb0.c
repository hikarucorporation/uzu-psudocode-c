// Function : scanInt64
// Namespace: Steinberg:ConstString
// Entry    : 0017dfb0
// Prototype: ulong scanInt64(short * param_1, undefined8 param_2, char param_3)
// Body     : 0017dfb0 - 0017dfb4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::scanInt64(char16_t const*, long&, bool) */

ulong __cdecl Steinberg::ConstString::scanInt64(short *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  short *psVar2;
  int iVar3;
  undefined2 *__dest;
  char *pcVar4;
  uint uVar5;
  ulong uVar6;
  undefined **ppuStack_40;
  undefined2 *puStack_38;
  uint uStack_30;
  
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) {
    param_1 = (short *)0x0;
    goto LAB_0017d750;
  }
  puStack_38 = (undefined2 *)0x0;
  ppuStack_40 = &PTR__String_00702c10;
  uVar6 = 2;
  do {
    psVar2 = (short *)((long)param_1 + uVar6);
    uVar6 = uVar6 + 2;
  } while (*psVar2 != 0);
  uVar5 = (int)(uVar6 >> 1) - 1;
  if (uVar5 == 0) {
LAB_0017d6aa:
    uStack_30 = uVar5 & 0x3fffffff | 0x40000000;
  }
  else {
    uStack_30 = 0x40000000;
    __dest = malloc(uVar6 & 0x1fffffffe);
    if (__dest != (undefined2 *)0x0) {
      *__dest = 0;
      __dest[uVar5] = 0;
      puStack_38 = __dest;
      if (0 < (int)uVar5) {
        memcpy(__dest,param_1,(ulong)uVar5 * 2);
      }
      goto LAB_0017d6aa;
    }
  }
  Steinberg::String::toMultiByte((String *)&ppuStack_40,0);
  pcVar4 = (char *)(*(code *)ppuStack_40[3])(&ppuStack_40);
  if (pcVar4 == (char *)0x0) {
LAB_0017d73a:
    param_1 = (short *)0x0;
  }
  else if (param_3 == '\0') {
    if (*pcVar4 == '\0') goto LAB_0017d73a;
    iVar3 = __isoc99_sscanf(pcVar4,&DAT_005db39c,param_2);
    param_1 = (short *)CONCAT71((int7)((ulong)param_1 >> 8),iVar3 == 1);
  }
  else {
    if (*pcVar4 == '\0') goto LAB_0017d73a;
    do {
      iVar3 = __isoc99_sscanf(pcVar4,&DAT_005db39c,param_2);
      param_1 = (short *)CONCAT71((int7)((ulong)param_1 >> 8),iVar3 == 1);
      if (iVar3 == 1) break;
      pcVar1 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar1 != '\0');
  }
  ppuStack_40 = &PTR__String_00702c10;
  if (puStack_38 != (undefined2 *)0x0) {
    free(puStack_38);
  }
LAB_0017d750:
  return (ulong)param_1 & 0xffffffff;
}


