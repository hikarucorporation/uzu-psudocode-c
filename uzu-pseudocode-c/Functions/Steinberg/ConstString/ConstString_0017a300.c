// Function : ConstString
// Namespace: Steinberg:ConstString
// Entry    : 0017a300
// Prototype: undefined ConstString(ConstString * this, ushort * param_1)
// Body     : 0017a300 - 0017a3d2


/* Steinberg::ConstString::ConstString(Steinberg::FVariant const&) */

void __thiscall Steinberg::ConstString::ConstString(ConstString *this,ushort *param_1)

{
  short *psVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  
  *(undefined ***)this = &PTR__ConstString_00704d88;
  *(undefined8 *)(this + 8) = 0;
  uVar5 = *(uint *)(this + 0x10) & 0x80000000;
  *(uint *)(this + 0x10) = uVar5;
  uVar3 = *param_1;
  if ((uVar3 & 0xffef) == 0x20) {
    uVar6 = 0;
    if ((uVar3 & 0x20) == 0) {
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 4);
      *(long *)(this + 8) = lVar4;
      if (lVar4 != 0) {
        uVar7 = 0;
        do {
          psVar1 = (short *)(lVar4 + uVar7);
          uVar7 = uVar7 + 2;
        } while (*psVar1 != 0);
        uVar6 = ((uint)(uVar7 >> 1) & 0x7fffffff) - 1 & 0x3fffffff;
      }
    }
    uVar6 = uVar5 | uVar6 | 0x40000000;
  }
  else {
    if ((uVar3 & 0xffef) != 4) {
      return;
    }
    uVar6 = 0;
    if ((uVar3 & 4) == 0) {
      *(undefined8 *)(this + 8) = 0;
    }
    else {
      pcVar8 = *(char **)(param_1 + 4);
      *(char **)(this + 8) = pcVar8;
      if (pcVar8 != (char *)0x0) {
        uVar6 = 0xffffffff;
        do {
          uVar6 = uVar6 + 1;
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        uVar6 = uVar6 & 0x3fffffff;
      }
    }
    uVar6 = uVar6 | uVar5;
  }
  *(uint *)(this + 0x10) = uVar6;
  return;
}


