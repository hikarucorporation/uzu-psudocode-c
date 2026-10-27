// Function : handleAsyncUpdate
// Namespace: juce:ComponentRestarter
// Entry    : 001b5130
// Prototype: undefined handleAsyncUpdate(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001b5130 - 001b5144


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ComponentRestarter::handleAsyncUpdate() */

void __cdecl
juce::ComponentRestarter::handleAsyncUpdate(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = 0;
  UNLOCK();
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(param_1 + 0x10) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x001b5143. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(long **)(param_1 + 0x10),uVar1,param_3,UNRECOVERED_JUMPTABLE);
  return;
}


