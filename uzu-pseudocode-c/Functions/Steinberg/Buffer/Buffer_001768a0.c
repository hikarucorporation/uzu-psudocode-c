// Function : Buffer
// Namespace: Steinberg:Buffer
// Entry    : 001768a0
// Prototype: undefined Buffer(Buffer * this, long param_1)
// Body     : 001768a0 - 00176907


/* Steinberg::Buffer::Buffer(Steinberg::Buffer const&) */

void __thiscall Steinberg::Buffer::Buffer(Buffer *this,long param_1)

{
  void *__dest;
  ulong __size;
  
  *(undefined ***)this = &PTR__Buffer_00702ba0;
  *(undefined8 *)(this + 8) = 0;
  __size = (ulong)*(uint *)(param_1 + 0x10);
  *(uint *)(this + 0x10) = *(uint *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  if (__size != 0) {
    __dest = malloc(__size);
    *(void **)(this + 8) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,*(void **)(param_1 + 8),__size);
      return;
    }
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}


