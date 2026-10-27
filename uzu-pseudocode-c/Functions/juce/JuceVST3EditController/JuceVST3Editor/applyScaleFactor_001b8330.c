// Function : applyScaleFactor
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b8330
// Prototype: undefined applyScaleFactor(float param_1, long param_2, ulong param_3)
// Body     : 001b8330 - 001b842d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JuceVST3EditController::JuceVST3Editor::applyScaleFactor(juce::JuceVST3EditController::JuceVST3Editor::StoredScaleFactor)
    */

void __cdecl
juce::JuceVST3EditController::JuceVST3Editor::applyScaleFactor
          (float param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MessageManagerLock aMStack_a8 [160];
  
  uVar1 = *(ulong *)(param_2 + 0xe0);
  fVar2 = *(float *)(param_2 + 0xe8);
  *(ulong *)(param_2 + 0xe0) = param_3;
  *(float *)(param_2 + 0xe8) = param_1;
  if ((uVar1 & 0xff00000000) != 0) {
    fVar2 = (float)uVar1;
  }
  if ((param_3 & 0xff00000000) != 0) {
    param_1 = (float)param_3;
  }
  fVar4 = (float)((uint)fVar2 & _DAT_005d91c0);
  if ((fVar4 == DAT_005d94c8) ||
     (fVar3 = (float)(_DAT_005d91c0 & (uint)param_1), fVar3 == DAT_005d94c8)) {
    if ((fVar2 == param_1) && (!NAN(fVar2) && !NAN(param_1))) {
      return;
    }
  }
  else {
    fVar2 = (float)((uint)(fVar2 - param_1) & _DAT_005d91c0);
    if (fVar2 <= DAT_005d94cc) {
      return;
    }
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    if (fVar2 <= fVar3 * DAT_005d94d0) {
      return;
    }
  }
  if (*(long *)(param_2 + 200) != 0) {
    *(float *)(*(long *)(param_2 + 200) + 0x62bc) = param_1;
  }
  if (*(long *)(param_2 + 0xd8) == 0) {
    return;
  }
  MessageManagerLock::MessageManagerLock(aMStack_a8,0);
                    /* try { // try from 001b8418 to 001b841c has its CatchHandler @ 001b842e */
  ContentWrapperComponent::setEditorScaleFactor
            (*(undefined4 *)(param_2 + 0xe0 + (ulong)(*(char *)(param_2 + 0xe4) == '\0') * 8),
             *(ContentWrapperComponent **)(param_2 + 0xd8));
  MessageManagerLock::~MessageManagerLock(aMStack_a8);
  return;
}


