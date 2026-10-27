// Function : prependString16
// Namespace: Steinberg:Buffer
// Entry    : 00176f70
// Prototype: bool prependString16(Buffer * this, void * param_1)
// Body     : 00176f70 - 00177030


/* Steinberg::Buffer::prependString16(char16_t const*) */

bool __thiscall Steinberg::Buffer::prependString16(Buffer *this,void *param_1)

{
  short *psVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if (param_1 == (void *)0x0) {
    return false;
  }
  lVar6 = 0;
  do {
    psVar1 = (short *)((long)param_1 + lVar6);
    lVar6 = lVar6 + 2;
  } while (*psVar1 != 0);
  uVar5 = (int)lVar6 + 0x7ffffffeU & 0x7ffffffe;
  if (uVar5 == 0) goto LAB_00177020;
  uVar7 = *(uint *)(this + 0x14);
  if (*(uint *)(this + 0x10) < uVar7 + uVar5) {
    uVar4 = *(uint *)(this + 0x18);
    if (uVar4 == 0) {
      *(undefined4 *)(this + 0x18) = 0x1000;
      uVar4 = 0x1000;
    }
    uVar7 = (uVar7 + uVar5 + uVar4) - 1;
    bVar2 = setSize(this,uVar7 - uVar7 % uVar4);
    if (bVar2) {
      uVar7 = *(uint *)(this + 0x14);
      goto LAB_00176fed;
    }
  }
  else {
LAB_00176fed:
    if (uVar7 == 0) {
      iVar3 = 0;
    }
    else {
      memmove((void *)((ulong)uVar5 + (long)*(void **)(this + 8)),*(void **)(this + 8),(ulong)uVar7)
      ;
      iVar3 = *(int *)(this + 0x14);
    }
    *(uint *)(this + 0x14) = iVar3 + uVar5;
  }
  memcpy(*(void **)(this + 8),param_1,(ulong)uVar5);
LAB_00177020:
  return uVar5 != 0;
}


