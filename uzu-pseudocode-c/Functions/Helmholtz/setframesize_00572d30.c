// Function : setframesize
// Namespace: Helmholtz
// Entry    : 00572d30
// Prototype: undefined setframesize(Helmholtz * this, uint param_1)
// Body     : 00572d30 - 00572db1


/* Helmholtz::setframesize(int) */

void __thiscall Helmholtz::setframesize(Helmholtz *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = 0x400;
  if ((param_1 - 0x80 & 0xffffff7f) == 0) {
    uVar1 = param_1;
  }
  if (param_1 == 0x200) {
    uVar1 = param_1;
  }
  if ((param_1 - 0x400 & 0xfffffbff) == 0) {
    uVar1 = param_1;
  }
  *(uint *)(this + 0x1c) = uVar1;
  if (*(void **)this != (void *)0x0) {
    pvVar2 = realloc(*(void **)this,(ulong)uVar1 << 2);
    *(void **)this = pvVar2;
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    pvVar2 = realloc(*(void **)(this + 8),(long)*(int *)(this + 0x1c) << 2);
    *(void **)(this + 8) = pvVar2;
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    pvVar2 = realloc(*(void **)(this + 0x10),(long)*(int *)(this + 0x1c) << 3);
    *(void **)(this + 0x10) = pvVar2;
  }
  *(undefined4 *)(this + 0x18) = 0;
  return;
}


