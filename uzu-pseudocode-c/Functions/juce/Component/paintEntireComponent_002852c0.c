// Function : paintEntireComponent
// Namespace: juce:Component
// Entry    : 002852c0
// Prototype: undefined paintEntireComponent(Component * param_1, long param_2)
// Body     : 002852c0 - 002853ba


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::paintEntireComponent(juce::Graphics&, bool) */

void __cdecl juce::Component::paintEntireComponent(Component *param_1,long param_2)

{
  Component CVar1;
  float fVar2;
  
  CVar1 = param_1[0xea];
  if (((byte)CVar1 & 0xc) != 0) {
    *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(param_1 + 0xe8);
    param_1[0xea] = (Component)((byte)CVar1 & 0xf3);
    sendMovedResizedMessages(param_1,(byte)CVar1 >> 2 & 1,(byte)CVar1 >> 3 & 1);
  }
  if (*(EffectState **)(param_1 + 0x80) != (EffectState *)0x0) {
    EffectState::paint(*(EffectState **)(param_1 + 0x80),param_2,param_1,0);
    return;
  }
  CVar1 = param_1[0xec];
  if (CVar1 == (Component)0xff) {
    return;
  }
  if (CVar1 == (Component)0x0) {
    paintComponentAndChildren(param_1,param_2);
    return;
  }
  fVar2 = (float)(byte)~(byte)CVar1 / DAT_005de3b0;
  if (*(char *)(param_2 + 0x10) != '\0') {
    *(undefined1 *)(param_2 + 0x10) = 0;
    (**(code **)(**(long **)(param_2 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_2 + 8) + 0x80))(fVar2);
  paintComponentAndChildren(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x002853b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_2 + 8) + 0x88))();
  return;
}


