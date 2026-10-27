// Function : scanHex
// Namespace: Steinberg:ConstString
// Entry    : 0017dae0
// Prototype: ulong scanHex(ConstString * this, undefined1 * param_1, uint param_2, char param_3)
// Body     : 0017dae0 - 0017dbb5


/* Steinberg::ConstString::scanHex(unsigned char&, unsigned int, bool) const */

ulong __thiscall
Steinberg::ConstString::scanHex(ConstString *this,undefined1 *param_1,uint param_2,char param_3)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 in_RAX;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uStack_28;
  
  uStack_28._4_1_ = (undefined1)((ulong)in_RAX >> 0x20);
  lVar2 = *(long *)(this + 8);
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar6 = *(uint *)(this + 0x10) & 0x3fffffff;
    if ((uVar6 != 0) && (param_2 < uVar6)) {
      uVar4 = (ulong)param_2;
      if ((*(uint *)(this + 0x10) & 0x40000000) != 0) {
        uVar4 = scanHex_16((short *)(lVar2 + uVar4 * 2),param_1,param_3);
        return uVar4;
      }
      lVar5 = lVar2 + uVar4;
      if (param_3 == '\0') {
        if (*(char *)(lVar2 + uVar4) != '\0') {
          uVar4 = 0;
          iVar3 = __isoc99_sscanf(lVar5,&DAT_005db3a6,(long)&uStack_28 + 4);
          if (iVar3 == 1) {
LAB_0017db9b:
            *param_1 = uStack_28._4_1_;
            uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
          }
          goto LAB_0017dba9;
        }
      }
      else if (*(char *)(lVar2 + uVar4) != '\0') {
        uVar4 = (long)&uStack_28 + 4;
        uStack_28 = in_RAX;
        do {
          iVar3 = __isoc99_sscanf(lVar5,&DAT_005db3a6,uVar4);
          if (iVar3 == 1) goto LAB_0017db9b;
          pcVar1 = (char *)(lVar5 + 1);
          lVar5 = lVar5 + 1;
        } while (*pcVar1 != '\0');
      }
      uVar4 = 0;
    }
  }
LAB_0017dba9:
  return uVar4 & 0xffffffff;
}


