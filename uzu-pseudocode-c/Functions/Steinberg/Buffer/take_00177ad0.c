// Function : take
// Namespace: Steinberg:Buffer
// Entry    : 00177ad0
// Prototype: undefined take(Buffer * this, long param_1)
// Body     : 00177ad0 - 00177b47


/* Steinberg::Buffer::take(Steinberg::Buffer&) */

void __thiscall Steinberg::Buffer::take(Buffer *this,long param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    if (*(void **)(this + 8) == (void *)0x0) {
      pvVar2 = malloc(0);
      *(void **)(this + 8) = pvVar2;
      *(undefined4 *)(this + 0x10) = 0;
      iVar1 = *(int *)(this + 0x14);
    }
    else {
      free(*(void **)(this + 8));
      *(undefined8 *)(this + 8) = 0;
      *(undefined4 *)(this + 0x10) = 0;
      iVar1 = *(int *)(this + 0x14);
    }
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x14) = 0;
    }
  }
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


