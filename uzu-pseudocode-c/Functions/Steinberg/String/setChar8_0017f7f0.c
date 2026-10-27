// Function : setChar8
// Namespace: Steinberg:String
// Entry    : 0017f7f0
// Prototype: ulong setChar8(String * this, uint param_1, char param_2)
// Body     : 0017f7f0 - 0017f97c


/* Steinberg::String::setChar8(unsigned int, char) */

ulong __thiscall Steinberg::String::setChar8(String *this,uint param_1,char param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 unaff_R14;
  ulong uVar10;
  char local_3a [2];
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar8 = *(uint *)(this + 0x10);
  uVar9 = uVar8 & 0x3fffffff;
  uVar10 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if ((param_2 == '\0') && (uVar9 == param_1)) goto LAB_0017f8b5;
  if (param_1 < uVar9) {
LAB_0017f85b:
    if ((param_1 < uVar9) && (lVar6 = *(long *)(this + 8), lVar6 != 0)) {
      if ((uVar8 & 0x40000000) == 0) {
        *(char *)(lVar6 + (ulong)param_1) = param_2;
        if (param_2 != '\0') goto LAB_0017f8b5;
      }
      else {
        if (param_2 != '\0') {
          local_3a[1] = 0;
          local_38 = 0;
          uStack_30 = 0;
          local_3a[0] = param_2;
          iVar3 = ConstString::multiByteToWideString((undefined2 *)&local_38,local_3a,2,0);
          if (0 < iVar3) {
            *(undefined2 *)(*(long *)(this + 8) + (ulong)param_1 * 2) = (undefined2)local_38;
          }
          goto LAB_0017f8b5;
        }
        *(undefined2 *)(lVar6 + (ulong)param_1 * 2) = 0;
      }
      if (((byte)this[0x13] & 0x40) == 0) {
        pcVar5 = (char *)(**(code **)(*(long *)this + 0x18))(this);
        uVar8 = 0xffffffff;
        do {
          uVar8 = uVar8 + 1;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
      }
      else {
        lVar6 = (**(code **)(*(long *)this + 0x20))(this);
        uVar7 = 0;
        do {
          psVar1 = (short *)(lVar6 + uVar7);
          uVar7 = uVar7 + 2;
        } while (*psVar1 != 0);
        uVar8 = ((uint)(uVar7 >> 1) & 0x7fffffff) + 0x3fffffff;
      }
      uVar8 = *(uint *)(this + 0x10) & 0xc0000000 | uVar8 & 0x3fffffff;
LAB_0017f974:
      *(uint *)(this + 0x10) = uVar8;
      goto LAB_0017f8b5;
    }
  }
  else if (param_2 == '\0') {
    uVar4 = resize(this,param_1,uVar8 >> 0x1e & 1,'\x01');
    if ((char)uVar4 != '\0') {
      uVar8 = *(uint *)(this + 0x10) & 0xc0000000 | param_1 & 0x3fffffff;
      goto LAB_0017f974;
    }
  }
  else {
    uVar4 = resize(this,param_1 + 1,uVar8 >> 0x1e & 1,'\x01');
    if ((char)uVar4 != '\0') {
      uVar9 = param_1 + 1 & 0x3fffffff;
      uVar8 = *(uint *)(this + 0x10) & 0xc0000000 | uVar9;
      *(uint *)(this + 0x10) = uVar8;
      goto LAB_0017f85b;
    }
  }
  uVar10 = 0;
LAB_0017f8b5:
  return uVar10 & 0xffffffff;
}


