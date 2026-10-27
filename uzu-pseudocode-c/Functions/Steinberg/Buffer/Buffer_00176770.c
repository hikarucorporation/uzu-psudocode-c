// Function : Buffer
// Namespace: Steinberg:Buffer
// Entry    : 00176770
// Prototype: undefined Buffer(Buffer * this, uint param_1, uint param_2)
// Body     : 00176770 - 001767d2


/* Steinberg::Buffer::Buffer(unsigned int, unsigned char) */

void __thiscall Steinberg::Buffer::Buffer(Buffer *this,uint param_1,uint param_2)

{
  void *__s;
  
  *(undefined ***)this = &PTR__Buffer_00702ba0;
  *(undefined8 *)(this + 8) = 0;
  *(uint *)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x14) = 0x100000000000;
  if (param_1 != 0) {
    __s = malloc((ulong)param_1);
    *(void **)(this + 8) = __s;
    if (__s != (void *)0x0) {
      memset(__s,param_2 & 0xff,(ulong)param_1);
      return;
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}


