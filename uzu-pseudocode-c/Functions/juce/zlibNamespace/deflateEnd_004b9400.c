// Function : deflateEnd
// Namespace: juce:zlibNamespace
// Entry    : 004b9400
// Prototype: int deflateEnd(long param_1)
// Body     : 004b9400 - 004b94f8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::deflateEnd(juce::zlibNamespace::z_stream_s*) */

int __cdecl juce::zlibNamespace::deflateEnd(long param_1)

{
  int iVar1;
  long *plVar2;
  
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
      (*(code **)(param_1 + 0x48) != (code *)0x0)) &&
     ((plVar2 = *(long **)(param_1 + 0x38), plVar2 != (long *)0x0 && (*plVar2 == param_1)))) {
    iVar1 = (int)plVar2[1];
    if (((iVar1 - 0x39U < 0x39) &&
        ((0x100400400011001U >> ((ulong)(iVar1 - 0x39U) & 0x3f) & 1) != 0)) ||
       ((iVar1 == 0x29a || (iVar1 == 0x2a)))) {
      if (plVar2[2] != 0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar2[2]);
        plVar2 = *(long **)(param_1 + 0x38);
      }
      if (plVar2[0xf] != 0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar2[0xf]);
        plVar2 = *(long **)(param_1 + 0x38);
      }
      if (plVar2[0xe] != 0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar2[0xe]);
        plVar2 = *(long **)(param_1 + 0x38);
      }
      if (plVar2[0xc] != 0) {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar2[0xc]);
        plVar2 = *(long **)(param_1 + 0x38);
      }
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar2);
      *(undefined8 *)(param_1 + 0x38) = 0;
      return (uint)(iVar1 != 0x71) * 3 + -3;
    }
  }
  return -2;
}


