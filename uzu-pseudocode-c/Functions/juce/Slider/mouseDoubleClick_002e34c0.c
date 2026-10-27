// Function : mouseDoubleClick
// Namespace: juce:Slider
// Entry    : 002e34c0
// Prototype: undefined mouseDoubleClick(long param_1)
// Body     : 002e34c0 - 002e34f4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Slider::mouseDoubleClick(juce::MouseEvent const&) */

void __cdecl juce::Slider::mouseDoubleClick(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  do {
    if ((*(ushort *)(lVar1 + 0xe8) & 0x8000) != 0) {
      return;
    }
    lVar1 = *(long *)(lVar1 + 0x30);
  } while (lVar1 != 0);
  Pimpl::mouseDoubleClick(*(Pimpl **)(param_1 + 0x1a0));
  return;
}


