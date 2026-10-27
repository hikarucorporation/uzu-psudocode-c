// Function : shiftAt
// Namespace: Steinberg:Buffer
// Entry    : 00177600
// Prototype: undefined shiftAt(Buffer * this, uint param_1, uint param_2)
// Body     : 00177600 - 001776bb


/* Steinberg::Buffer::shiftAt(unsigned int, int) */

void __thiscall Steinberg::Buffer::shiftAt(Buffer *this,uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  if ((int)param_2 < 1) {
    if (-1 < (int)param_2) {
      return;
    }
    uVar3 = *(uint *)(this + 0x14);
    if (uVar3 == 0) {
      return;
    }
    if (uVar3 <= -param_2) {
      return;
    }
    if (uVar3 <= param_1) goto LAB_00177673;
    lVar5 = *(long *)(this + 8);
    lVar4 = (ulong)-param_2 + lVar5;
    uVar2 = (param_2 - param_1) + uVar3;
  }
  else {
    uVar3 = *(uint *)(this + 0x14);
    if (*(uint *)(this + 0x10) < uVar3 + param_2) {
      uVar2 = *(uint *)(this + 0x18);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x18) = 0x1000;
        uVar2 = 0x1000;
      }
      uVar3 = (uVar3 + param_2 + uVar2) - 1;
      bVar1 = setSize(this,uVar3 - uVar3 % uVar2);
      if (!bVar1) {
        return;
      }
      uVar3 = *(uint *)(this + 0x14);
    }
    uVar2 = uVar3 - param_1;
    if (uVar3 < param_1 || uVar2 == 0) goto LAB_00177673;
    lVar4 = *(long *)(this + 8);
    lVar5 = (ulong)param_2 + lVar4;
  }
  memmove((void *)(lVar5 + (ulong)param_1),(void *)(lVar4 + (ulong)param_1),(ulong)uVar2);
  uVar3 = *(uint *)(this + 0x14);
LAB_00177673:
  *(uint *)(this + 0x14) = uVar3 + param_2;
  return;
}


