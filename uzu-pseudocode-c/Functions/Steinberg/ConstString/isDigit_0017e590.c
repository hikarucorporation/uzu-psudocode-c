// Function : isDigit
// Namespace: Steinberg:ConstString
// Entry    : 0017e590
// Prototype: ulong isDigit(ConstString * this, uint param_1)
// Body     : 0017e590 - 0017e5d5


/* Steinberg::ConstString::isDigit(unsigned int) const */

ulong __thiscall Steinberg::ConstString::isDigit(ConstString *this,uint param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined4 extraout_var;
  uint uVar4;
  
  lVar1 = *(long *)(this + 8);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar4 = *(uint *)(this + 0x10) & 0x3fffffff;
    if ((uVar4 != 0) && (param_1 < uVar4)) {
      if ((*(uint *)(this + 0x10) & 0x40000000) != 0) {
        iVar2 = iswdigit((uint)*(ushort *)(lVar1 + (ulong)param_1 * 2));
        return CONCAT71((int7)(CONCAT44(extraout_var,iVar2) >> 8),iVar2 != 0);
      }
      uVar4 = (int)*(char *)(lVar1 + (ulong)param_1) - 0x30;
      uVar3 = (ulong)CONCAT31((int3)(uVar4 >> 8),uVar4 < 10);
    }
  }
  return uVar3;
}


