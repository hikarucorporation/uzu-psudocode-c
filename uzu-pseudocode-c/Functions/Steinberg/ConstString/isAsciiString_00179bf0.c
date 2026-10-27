// Function : isAsciiString
// Namespace: Steinberg:ConstString
// Entry    : 00179bf0
// Prototype: ulong isAsciiString(ConstString * this)
// Body     : 00179bf0 - 00179c72


/* Steinberg::ConstString::isAsciiString() const */

ulong __thiscall Steinberg::ConstString::isAsciiString(ConstString *this)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  
  uVar2 = *(uint *)(this + 0x10);
  uVar3 = (ulong)uVar2;
  uVar4 = uVar2 & 0x3fffffff;
  if ((uVar2 & 0x40000000) == 0) {
    if (uVar4 == 0) {
LAB_00179c70:
      return CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
    lVar5 = 0;
    do {
      bVar6 = *(char *)(*(long *)(this + 8) + lVar5) < '\0';
      uVar3 = CONCAT71((int7)(uVar3 >> 8),!bVar6);
      if (bVar6) {
        return uVar3;
      }
      bVar6 = (ulong)uVar4 - 1 != lVar5;
      lVar5 = lVar5 + 1;
    } while (bVar6);
  }
  else {
    if (uVar4 == 0) goto LAB_00179c70;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(*(long *)(this + 8) + lVar5 * 2);
      uVar3 = CONCAT71((int7)(uVar3 >> 8),uVar1 < 0x80);
      if (0x7f < uVar1) {
        return uVar3;
      }
      bVar6 = (ulong)uVar4 - 1 != lVar5;
      lVar5 = lVar5 + 1;
    } while (bVar6);
  }
  return uVar3;
}


