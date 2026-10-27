// Function : isWideString
// Namespace: Steinberg:StringObject
// Entry    : 00183a30
// Prototype: byte isWideString(StringObject * this)
// Body     : 00183a30 - 00183a38


/* non-virtual thunk to Steinberg::StringObject::isWideString() const */

byte __thiscall Steinberg::StringObject::isWideString(StringObject *this)

{
  return ((byte)this[-0xd] & 0x40) >> 6;
}


