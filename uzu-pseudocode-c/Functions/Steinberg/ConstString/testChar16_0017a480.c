// Function : testChar16
// Namespace: Steinberg:ConstString
// Entry    : 0017a480
// Prototype: ulong testChar16(ConstString * this, uint param_1, ushort param_2)
// Body     : 0017a480 - 0017a4ec


/* WARNING: Removing unreachable block (ram,0x0017a4c3) */
/* Steinberg::ConstString::testChar16(unsigned int, char16_t) const */

ulong __thiscall Steinberg::ConstString::testChar16(ConstString *this,uint param_1,ushort param_2)

{
  uint uVar1;
  char cVar2;
  
  uVar1 = *(uint *)(this + 0x10);
  if ((uVar1 & 0x3fffffff) <= param_1) {
    return (ulong)CONCAT31((int3)(uVar1 >> 8),param_2 == 0);
  }
  if ((uVar1 & 0x40000000) != 0) {
    return CONCAT71((int7)((ulong)*(long *)(this + 8) >> 8),
                    *(ushort *)(*(long *)(this + 8) + (ulong)param_1 * 2) == param_2);
  }
  if (param_2 == 0) {
    return 0;
  }
  cVar2 = '_';
  if (param_2 < 0x80) {
    cVar2 = (char)param_2;
  }
  return CONCAT71((int7)((ulong)*(long *)(this + 8) >> 8),
                  *(char *)(*(long *)(this + 8) + (ulong)param_1) == cVar2);
}


