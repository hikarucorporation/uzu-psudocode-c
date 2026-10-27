// Function : operator+
// Namespace: Steinberg:Buffer
// Entry    : 00177770
// Prototype: undefined1 * operator+(Buffer * this, uint param_1)
// Body     : 00177770 - 0017778a


/* Steinberg::Buffer::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

undefined1 * __thiscall Steinberg::Buffer::operator+(Buffer *this,uint param_1)

{
  if (param_1 < *(uint *)(this + 0x10)) {
    return (undefined1 *)((ulong)param_1 + *(long *)(this + 8));
  }
  operator+(unsigned_int)::eof = 0;
  return &operator+(unsigned_int)::eof;
}


