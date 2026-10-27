// Function : getTrailingNumber
// Namespace: Steinberg:ConstString
// Entry    : 0017e6a0
// Prototype: undefined8 getTrailingNumber(ConstString * this, undefined8 param_1)
// Body     : 0017e6a0 - 0017e7dd


/* Steinberg::ConstString::getTrailingNumber(long) const */

undefined8 __thiscall
Steinberg::ConstString::getTrailingNumber(ConstString *this,undefined8 param_1)

{
  char *pcVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 local_30;
  
  lVar8 = *(long *)(this + 8);
  if (lVar8 == 0) {
    return param_1;
  }
  uVar4 = *(uint *)(this + 0x10);
  if ((uVar4 & 0x3fffffff) == 0) {
    return param_1;
  }
  uVar7 = (uVar4 & 0x3fffffff) - 1;
  uVar5 = uVar7;
  do {
    uVar6 = uVar5;
    if ((uVar4 & 0x40000000) == 0) {
      if (9 < (int)*(char *)(lVar8 + (ulong)uVar5) - 0x30U) break;
    }
    else {
      iVar2 = iswdigit((uint)*(ushort *)(lVar8 + (ulong)uVar5 * 2));
      if (iVar2 == 0) break;
      lVar8 = *(long *)(this + 8);
      uVar4 = *(uint *)(this + 0x10);
    }
    uVar6 = uVar5 - 1;
    if (lVar8 == 0) break;
    uVar5 = uVar5 - 1;
    uVar6 = uVar5;
    if (((uVar4 & 0x3fffffff) == 0) || ((uVar4 & 0x3fffffff) <= uVar5)) break;
  } while( true );
  if (((int)uVar6 < (int)uVar7) &&
     ((local_30 = 0, -2 < (int)uVar6 && (lVar8 = *(long *)(this + 8), lVar8 != 0)))) {
    uVar4 = *(uint *)(this + 0x10) & 0x3fffffff;
    if ((uVar4 != 0) && (uVar6 + 1 < uVar4)) {
      uVar3 = (ulong)(uVar6 + 1);
      if ((*(uint *)(this + 0x10) & 0x40000000) == 0) {
        if (*(char *)(lVar8 + uVar3) != '\0') {
          lVar8 = lVar8 + uVar3;
          do {
            iVar2 = __isoc99_sscanf(lVar8,&DAT_005db39c,&local_30);
            if (iVar2 == 1) goto LAB_0017e7c9;
            pcVar1 = (char *)(lVar8 + 1);
            lVar8 = lVar8 + 1;
          } while (*pcVar1 != '\0');
        }
      }
      else {
        uVar3 = scanInt64_16((short *)(lVar8 + uVar3 * 2),&local_30,'\x01');
        if ((char)uVar3 != '\0') {
LAB_0017e7c9:
          param_1 = local_30;
        }
      }
    }
  }
  return param_1;
}


