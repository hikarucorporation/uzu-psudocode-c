// Function : swapIfLittleEndian<unsigned_short>
// Namespace: juce:ByteOrder
// Entry    : 00497700
// Prototype: ushort swapIfLittleEndian<unsigned_short>(ushort param_1)
// Body     : 00497700 - 00497706


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* unsigned short juce::ByteOrder::swapIfLittleEndian<unsigned short>(unsigned short) */

ushort __cdecl juce::ByteOrder::swapIfLittleEndian<unsigned_short>(ushort param_1)

{
  return param_1 << 8 | param_1 >> 8;
}


