// Function : setChar16
// Namespace: Steinberg:String
// Entry    : 0017f980
// Prototype: ulong setChar16(String * this, uint param_1, uint param_2)
// Body     : 0017f980 - 0017fafc


/* Steinberg::String::setChar16(unsigned int, char16_t) */

ulong __thiscall Steinberg::String::setChar16(String *this,uint param_1,uint param_2)

{
  short *psVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  undefined8 unaff_R14;
  undefined7 uVar11;
  ulong uVar10;
  
  uVar7 = *(uint *)(this + 0x10);
  uVar9 = uVar7 & 0x3fffffff;
  uVar11 = (undefined7)((ulong)unaff_R14 >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if ((param_2 == 0) && (uVar9 == param_1)) goto LAB_0017fa78;
  sVar8 = (short)param_2;
  if (param_1 < uVar9) {
LAB_0017f9f4:
    if ((param_1 < uVar9) && (lVar5 = *(long *)(this + 8), lVar5 != 0)) {
      if ((uVar7 & 0x40000000) != 0) {
        *(short *)(lVar5 + (ulong)param_1 * 2) = sVar8;
        if (sVar8 != 0) goto LAB_0017fa78;
        if (((byte)this[0x13] & 0x40) == 0) {
          pcVar4 = (char *)(**(code **)(*(long *)this + 0x18))(this);
          uVar7 = 0xffffffff;
          do {
            uVar7 = uVar7 + 1;
            cVar2 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar2 != '\0');
        }
        else {
          lVar5 = (**(code **)(*(long *)this + 0x20))(this);
          uVar6 = 0;
          do {
            psVar1 = (short *)(lVar5 + uVar6);
            uVar6 = uVar6 + 2;
          } while (*psVar1 != 0);
          uVar7 = ((uint)(uVar6 >> 1) & 0x7fffffff) + 0x3fffffff;
        }
        uVar7 = *(uint *)(this + 0x10) & 0xc0000000 | uVar7 & 0x3fffffff;
LAB_0017faf4:
        *(uint *)(this + 0x10) = uVar7;
        goto LAB_0017fa78;
      }
      if (sVar8 != 0) {
        uVar7 = 0x5f;
        if ((param_2 & 0xffff) < 0x80) {
          uVar7 = param_2;
        }
        uVar10 = CONCAT71(uVar11,1);
        *(char *)(lVar5 + (ulong)param_1) = (char)uVar7;
        goto LAB_0017fa78;
      }
    }
  }
  else if (sVar8 == 0) {
    uVar3 = resize(this,param_1,uVar7 >> 0x1e & 1,'\x01');
    if ((char)uVar3 != '\0') {
      uVar7 = *(uint *)(this + 0x10) & 0xc0000000 | param_1 & 0x3fffffff;
      goto LAB_0017faf4;
    }
  }
  else {
    uVar3 = resize(this,param_1 + 1,uVar7 >> 0x1e & 1,'\x01');
    if ((char)uVar3 != '\0') {
      uVar9 = param_1 + 1 & 0x3fffffff;
      uVar7 = *(uint *)(this + 0x10) & 0xc0000000 | uVar9;
      *(uint *)(this + 0x10) = uVar7;
      goto LAB_0017f9f4;
    }
  }
  uVar10 = 0;
LAB_0017fa78:
  return uVar10 & 0xffffffff;
}


