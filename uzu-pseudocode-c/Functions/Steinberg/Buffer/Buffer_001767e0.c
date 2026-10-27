// Function : Buffer
// Namespace: Steinberg:Buffer
// Entry    : 001767e0
// Prototype: undefined Buffer(Buffer * this, uint param_1)
// Body     : 001767e0 - 00176825


/* Steinberg::Buffer::Buffer(unsigned int) */

void __thiscall Steinberg::Buffer::Buffer(Buffer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__Buffer_00702ba0;
  *(undefined8 *)(this + 8) = 0;
  *(uint *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x14) = 0x100000000000;
  if (param_1 != 0) {
    pvVar1 = malloc((ulong)param_1);
    *(void **)(this + 8) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      *(undefined4 *)(this + 0x10) = 0;
      return;
    }
  }
  return;
}


