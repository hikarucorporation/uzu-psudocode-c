// Function : buttonClicked
// Namespace: juce:ButtonParameterAttachment
// Entry    : 001c1750
// Prototype: undefined buttonClicked(long param_1)
// Body     : 001c1750 - 001c17b6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ButtonParameterAttachment::buttonClicked(juce::Button*) */

void __cdecl juce::ButtonParameterAttachment::buttonClicked(long param_1)

{
  char cVar1;
  uint uVar2;
  long local_28;
  undefined1 local_20 [8];
  
  if (*(char *)(param_1 + 0x60) == '\0') {
                    /* try { // try from 001c176f to 001c1774 has its CatchHandler @ 001c17c7 */
    (**(code **)(**(long **)(*(long *)(param_1 + 8) + 0x1c0) + 0x10))(&local_28);
                    /* try { // try from 001c177e to 001c1783 has its CatchHandler @ 001c17bf */
    cVar1 = (**(code **)(local_28 + 0x30))(local_20);
                    /* try { // try from 001c178a to 001c178f has its CatchHandler @ 001c17b7 */
    (**(code **)(local_28 + 0x58))(local_20);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = DAT_005d9038;
    }
    ParameterAttachment::setValueAsCompleteGesture
              ((ulong)uVar2,(ParameterAttachment *)(param_1 + 0x10));
  }
  return;
}


