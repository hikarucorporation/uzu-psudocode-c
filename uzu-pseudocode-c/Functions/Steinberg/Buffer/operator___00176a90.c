// Function : operator==
// Namespace: Steinberg:Buffer
// Entry    : 00176a90
// Prototype: bool operator==(Buffer * this, Buffer * param_1)
// Body     : 00176a90 - 00176ab9


/* Steinberg::Buffer::TEMPNAMEPLACEHOLDERVALUE(Steinberg::Buffer const&) const */

bool __thiscall Steinberg::Buffer::operator==(Buffer *this,Buffer *param_1)

{
  int iVar1;
  
  if (param_1 == this) {
    return true;
  }
  if (*(uint *)(param_1 + 0x10) == *(uint *)(this + 0x10)) {
    iVar1 = bcmp(*(void **)(this + 8),*(void **)(param_1 + 8),(ulong)*(uint *)(param_1 + 0x10));
    return iVar1 == 0;
  }
  return false;
}


