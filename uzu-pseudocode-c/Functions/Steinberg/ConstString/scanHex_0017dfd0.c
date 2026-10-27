// Function : scanHex
// Namespace: Steinberg:ConstString
// Entry    : 0017dfd0
// Prototype: ulong scanHex(short * param_1, undefined1 * param_2, char param_3)
// Body     : 0017dfd0 - 0017dfd4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::scanHex(char16_t const*, unsigned char&, bool) */

ulong __cdecl Steinberg::ConstString::scanHex(short *param_1,undefined1 *param_2,char param_3)

{
  char *pcVar1;
  short *psVar2;
  int iVar3;
  undefined2 *__dest;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auStack_44 [4];
  undefined **ppuStack_40;
  undefined2 *puStack_38;
  uint uStack_30;
  
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) {
    puVar6 = (undefined1 *)0x0;
    goto LAB_0017dd28;
  }
  puStack_38 = (undefined2 *)0x0;
  ppuStack_40 = &PTR__String_00702c10;
  uVar7 = 2;
  do {
    psVar2 = (short *)((long)param_1 + uVar7);
    uVar7 = uVar7 + 2;
  } while (*psVar2 != 0);
  uVar5 = (int)(uVar7 >> 1) - 1;
  if (uVar5 == 0) {
LAB_0017dc69:
    uStack_30 = uVar5 & 0x3fffffff | 0x40000000;
  }
  else {
    uStack_30 = 0x40000000;
    __dest = malloc(uVar7 & 0x1fffffffe);
    if (__dest != (undefined2 *)0x0) {
      *__dest = 0;
      __dest[uVar5] = 0;
      puStack_38 = __dest;
      if (0 < (int)uVar5) {
        memcpy(__dest,param_1,(ulong)uVar5 * 2);
      }
      goto LAB_0017dc69;
    }
  }
  Steinberg::String::toMultiByte((String *)&ppuStack_40,0);
  pcVar4 = (char *)(*(code *)ppuStack_40[3])(&ppuStack_40);
  if (pcVar4 == (char *)0x0) {
LAB_0017dd12:
    puVar6 = (undefined1 *)0x0;
  }
  else {
    if (param_3 != '\0') {
      if (*pcVar4 != '\0') {
        puVar6 = auStack_44;
        do {
          iVar3 = __isoc99_sscanf(pcVar4,&DAT_005db3a6,puVar6);
          if (iVar3 == 1) goto LAB_0017dd06;
          pcVar1 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar1 != '\0');
      }
      goto LAB_0017dd12;
    }
    if (*pcVar4 == '\0') goto LAB_0017dd12;
    puVar6 = (undefined1 *)0x0;
    iVar3 = __isoc99_sscanf(pcVar4,&DAT_005db3a6,auStack_44);
    if (iVar3 == 1) {
LAB_0017dd06:
      *param_2 = auStack_44[0];
      puVar6 = (undefined1 *)CONCAT71((int7)((ulong)puVar6 >> 8),1);
    }
  }
  ppuStack_40 = &PTR__String_00702c10;
  if (puStack_38 != (undefined2 *)0x0) {
    free(puStack_38);
  }
LAB_0017dd28:
  return (ulong)puVar6 & 0xffffffff;
}


