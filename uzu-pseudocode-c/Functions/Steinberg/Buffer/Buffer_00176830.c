// Function : Buffer
// Namespace: Steinberg:Buffer
// Entry    : 00176830
// Prototype: undefined Buffer(Buffer * this, void * param_1, uint param_2)
// Body     : 00176830 - 00176892


/* Steinberg::Buffer::Buffer(void const*, unsigned int) */

void __thiscall Steinberg::Buffer::Buffer(Buffer *this,void *param_1,uint param_2)

{
  void *__dest;
  
  *(undefined ***)this = &PTR__Buffer_00702ba0;
  *(undefined8 *)(this + 8) = 0;
  *(uint *)(this + 0x10) = param_2;
  *(uint *)(this + 0x14) = param_2;
  *(undefined4 *)(this + 0x18) = 0x1000;
  if (param_2 != 0) {
    __dest = malloc((ulong)param_2);
    *(void **)(this + 8) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,(ulong)param_2);
      return;
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  return;
}


