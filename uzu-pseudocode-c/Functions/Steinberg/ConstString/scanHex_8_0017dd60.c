// Function : scanHex_8
// Namespace: Steinberg:ConstString
// Entry    : 0017dd60
// Prototype: ulong scanHex_8(char * param_1, undefined1 * param_2, char param_3)
// Body     : 0017dd60 - 0017ddec


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::scanHex_8(char const*, unsigned char&, bool) */

ulong __cdecl Steinberg::ConstString::scanHex_8(char *param_1,undefined1 *param_2,char param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 in_RAX;
  ulong uVar3;
  undefined8 uStack_28;
  
  uStack_28._4_1_ = (undefined1)((ulong)in_RAX >> 0x20);
  if (param_1 != (char *)0x0) {
    if (param_3 == '\0') {
      if (*param_1 != '\0') {
        uVar3 = 0;
        iVar2 = __isoc99_sscanf(param_1,&DAT_005db3a6,(long)&uStack_28 + 4);
        if (iVar2 == 1) {
LAB_0017ddd2:
          *param_2 = uStack_28._4_1_;
          uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
        }
        goto LAB_0017dde0;
      }
    }
    else if (*param_1 != '\0') {
      uVar3 = (long)&uStack_28 + 4;
      uStack_28 = in_RAX;
      do {
        iVar2 = __isoc99_sscanf(param_1,&DAT_005db3a6,uVar3);
        if (iVar2 == 1) goto LAB_0017ddd2;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
  uVar3 = 0;
LAB_0017dde0:
  return uVar3 & 0xffffffff;
}


