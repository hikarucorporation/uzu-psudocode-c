// Function : isWideString
// Namespace: Steinberg:StringObject
// Entry    : 00183a20
// Prototype: byte isWideString(StringObject * this)
// Body     : 00183a20 - 00183a28


/* Steinberg::StringObject::isWideString() const */

byte __thiscall Steinberg::StringObject::isWideString(StringObject *this)

{
  return ((byte)this[0x23] & 0x40) >> 6;
}


