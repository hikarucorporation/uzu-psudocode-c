// Function : findParameter
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b7020
// Prototype: undefined8 findParameter(JuceVST3Editor * this, int param_1, int param_2, undefined4 * param_3)
// Body     : 001b7020 - 001b70b9


/* non-virtual thunk to juce::JuceVST3EditController::JuceVST3Editor::findParameter(int, int,
   unsigned int&) */

undefined8 __thiscall
juce::JuceVST3EditController::JuceVST3Editor::findParameter
          (JuceVST3Editor *this,int param_1,int param_2,undefined4 *param_3)

{
  JuceAudioProcessor *pJVar1;
  undefined4 uVar2;
  Component *pCVar3;
  long *plVar4;
  JuceAudioProcessor *this_00;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  
  pCVar3 = *(Component **)(this + 0x98);
  uVar7 = 1;
  if (pCVar3 != (Component *)0x0) {
    lVar6 = Component::getComponentAt(pCVar3,param_1,param_2);
    if ((lVar6 != 0) && (plVar4 = *(long **)(pCVar3 + 0xf0), plVar4 != (long *)0x0)) {
      uVar5 = (**(code **)(*plVar4 + 0x1a0))(plVar4,lVar6);
      if ((-1 < (int)uVar5) &&
         (this_00 = *(JuceAudioProcessor **)(*(long *)(this + 0x88) + 0xe8),
         this_00 != (JuceAudioProcessor *)0x0)) {
        LOCK();
        *(int *)(this_00 + 0xd0) = *(int *)(this_00 + 0xd0) + 1;
        UNLOCK();
        uVar2 = *(undefined4 *)(*(long *)(this_00 + 8) + (ulong)uVar5 * 4);
        LOCK();
        pJVar1 = this_00 + 0xd0;
        *(int *)pJVar1 = *(int *)pJVar1 + -1;
        UNLOCK();
        if (*(int *)pJVar1 == 0) {
          JuceAudioProcessor::~JuceAudioProcessor(this_00);
          operator_delete(this_00);
        }
        *param_3 = uVar2;
        uVar7 = 0;
      }
    }
  }
  return uVar7;
}


