// Function : getTrailingNumberIndex
// Namespace: Steinberg:ConstString
// Entry    : 0017e5e0
// Prototype: int getTrailingNumberIndex(ConstString * this, int param_1)
// Body     : 0017e5e0 - 0017e691


/* Steinberg::ConstString::getTrailingNumberIndex(unsigned int) const */

int __thiscall Steinberg::ConstString::getTrailingNumberIndex(ConstString *this,int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar2 = *(long *)(this + 8);
  if (lVar2 != 0) {
    uVar3 = *(uint *)(this + 0x10);
    if ((uVar3 & 0x3fffffff) != 0) {
      uVar5 = (uVar3 & 0x3fffffff) - 1;
      uVar4 = uVar5;
      do {
        if ((uVar3 & 0x40000000) == 0) {
          if (9 < (int)*(char *)(lVar2 + (ulong)uVar4) - 0x30U) goto LAB_0017e66a;
        }
        else {
          iVar1 = iswdigit((uint)*(ushort *)(lVar2 + (ulong)uVar4 * 2));
          if (iVar1 == 0) {
LAB_0017e66a:
            if ((int)uVar5 <= (int)uVar4) {
              return -1;
            }
            iVar1 = -1;
            if (uVar5 - uVar4 == param_1) {
              iVar1 = uVar4 + 1;
            }
            if (param_1 == 0) {
              return uVar4 + 1;
            }
            return iVar1;
          }
        }
        uVar4 = uVar4 - 1;
        lVar2 = *(long *)(this + 8);
        if (lVar2 == 0) goto LAB_0017e66a;
        uVar3 = *(uint *)(this + 0x10);
        if (((uVar3 & 0x3fffffff) == 0) || ((uVar3 & 0x3fffffff) <= uVar4)) goto LAB_0017e66a;
      } while( true );
    }
  }
  return -1;
}


