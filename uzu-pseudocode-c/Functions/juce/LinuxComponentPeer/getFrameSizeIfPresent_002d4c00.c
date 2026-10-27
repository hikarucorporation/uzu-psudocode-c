// Function : getFrameSizeIfPresent
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d4c00
// Prototype: undefined8 * getFrameSizeIfPresent(undefined8 * param_1, long param_2)
// Body     : 002d4c00 - 002d4c16


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LinuxComponentPeer::getFrameSizeIfPresent() const */

undefined8 * __cdecl
juce::LinuxComponentPeer::getFrameSizeIfPresent(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x150);
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *param_1 = *(undefined8 *)(param_2 + 0x140);
  param_1[1] = uVar1;
  return param_1;
}


