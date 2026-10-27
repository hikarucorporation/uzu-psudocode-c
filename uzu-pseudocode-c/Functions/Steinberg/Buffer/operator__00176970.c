// Function : operator=
// Namespace: Steinberg:Buffer
// Entry    : 00176970
// Prototype: undefined operator=(Buffer * this, Buffer * param_1)
// Body     : 00176970 - 001769b6


/* Steinberg::Buffer::TEMPNAMEPLACEHOLDERVALUE(Steinberg::Buffer const&) */

void __thiscall Steinberg::Buffer::operator=(Buffer *this,Buffer *param_1)

{
  if (param_1 != this) {
    setSize(this,*(uint *)(param_1 + 0x10));
    if (((ulong)*(uint *)(param_1 + 0x10) != 0) && (*(void **)(this + 8) != (void *)0x0)) {
      memcpy(*(void **)(this + 8),*(void **)(param_1 + 8),(ulong)*(uint *)(param_1 + 0x10));
    }
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  return;
}


