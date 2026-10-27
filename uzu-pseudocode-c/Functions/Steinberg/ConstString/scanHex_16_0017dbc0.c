// Function : scanHex_16
// Namespace: Steinberg:ConstString
// Entry    : 0017dbc0
// Prototype: ulong scanHex_16(short * param_1, undefined1 * param_2, char param_3)
// Body     : 0017dbc0 - 0017dd36


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::scanHex_16(char16_t const*, unsigned char&, bool) */

ulong __cdecl Steinberg::ConstString::scanHex_16(short *param_1,undefined1 *param_2,char param_3)

{
  char *pcVar1;
  short *psVar2;
  int iVar3;
  undefined2 *__dest;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 local_44 [4];
  undefined **local_40;
  undefined2 *local_38;
  uint local_30;
  
  if ((param_1 == (short *)0x0) || (*param_1 == 0)) {
    puVar6 = (undefined1 *)0x0;
    goto LAB_0017dd28;
  }
  local_38 = (undefined2 *)0x0;
  local_40 = &PTR__String_00702c10;
  uVar7 = 2;
  do {
    psVar2 = (short *)((long)param_1 + uVar7);
    uVar7 = uVar7 + 2;
  } while (*psVar2 != 0);
  uVar5 = (int)(uVar7 >> 1) - 1;
  if (uVar5 == 0) {
LAB_0017dc69:
    local_30 = uVar5 & 0x3fffffff | 0x40000000;
  }
  else {
    local_30 = 0x40000000;
    __dest = malloc(uVar7 & 0x1fffffffe);
    if (__dest != (undefined2 *)0x0) {
      *__dest = 0;
      __dest[uVar5] = 0;
      local_38 = __dest;
      if (0 < (int)uVar5) {
        memcpy(__dest,param_1,(ulong)uVar5 * 2);
      }
      goto LAB_0017dc69;
    }
  }
                    /* try { // try from 0017dc79 to 0017dc91 has its CatchHandler @ 0017dd37 */
  Steinberg::String::toMultiByte((String *)&local_40,0);
  pcVar4 = (char *)(*(code *)local_40[3])(&local_40);
  if (pcVar4 == (char *)0x0) {
LAB_0017dd12:
    puVar6 = (undefined1 *)0x0;
  }
  else {
    if (param_3 != '\0') {
      if (*pcVar4 != '\0') {
        puVar6 = local_44;
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
    iVar3 = __isoc99_sscanf(pcVar4,&DAT_005db3a6,local_44);
    if (iVar3 == 1) {
LAB_0017dd06:
      *param_2 = local_44[0];
      puVar6 = (undefined1 *)CONCAT71((int7)((ulong)puVar6 >> 8),1);
    }
  }
  local_40 = &PTR__String_00702c10;
  if (local_38 != (undefined2 *)0x0) {
    free(local_38);
  }
LAB_0017dd28:
  return (ulong)puVar6 & 0xffffffff;
}


