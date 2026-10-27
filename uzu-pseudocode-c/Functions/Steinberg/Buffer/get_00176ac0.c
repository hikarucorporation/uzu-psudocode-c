// Function : get
// Namespace: Steinberg:Buffer
// Entry    : 00176ac0
// Prototype: uint get(Buffer * this, void * param_1, uint param_2)
// Body     : 00176ac0 - 00176afc


/* Steinberg::Buffer::get(void*, unsigned int) */

uint __thiscall Steinberg::Buffer::get(Buffer *this,void *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0x14);
  uVar1 = *(int *)(this + 0x10) - uVar2;
  if (param_2 <= *(int *)(this + 0x10) - uVar2) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    memcpy(param_1,(void *)((ulong)uVar2 + *(long *)(this + 8)),(ulong)uVar1);
    uVar2 = *(uint *)(this + 0x14);
  }
  *(uint *)(this + 0x14) = uVar2 + uVar1;
  return uVar1;
}


