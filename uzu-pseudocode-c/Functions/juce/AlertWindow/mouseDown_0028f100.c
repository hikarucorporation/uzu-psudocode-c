// Function : mouseDown
// Namespace: juce:AlertWindow
// Entry    : 0028f100
// Prototype: undefined mouseDown(long * param_1, ulong * param_2)
// Body     : 0028f100 - 0028f159


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AlertWindow::mouseDown(juce::MouseEvent const&) */

void __cdecl juce::AlertWindow::mouseDown(long *param_1,ulong *param_2)

{
  float afStack_68 [10];
  float local_40;
  float local_3c;
  
  MouseEvent::getEventRelativeTo(afStack_68,param_2,param_1);
  param_1[0x6f] =
       (ulong)((double)local_40 + DAT_005d9098) & 0xffffffff |
       (long)((double)local_3c + DAT_005d9098) << 0x20;
  return;
}


