// Function : setTextBoxStyle
// Namespace: juce:Slider
// Entry    : 002e7a50
// Prototype: undefined setTextBoxStyle(Slider * this, int param_1, byte param_2, int param_3, int param_4)
// Body     : 002e7a50 - 002e7abb


/* juce::Slider::setTextBoxStyle(juce::Slider::TextEntryBoxPosition, bool, int, int) */

void __thiscall
juce::Slider::setTextBoxStyle(Slider *this,int param_1,byte param_2,int param_3,int param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x1a0);
  if ((((*(int *)(lVar1 + 0x208) == param_1) && (*(byte *)(lVar1 + 0x230) == (param_2 ^ 1))) &&
      (*(int *)(lVar1 + 0x220) == param_3)) && (*(int *)(lVar1 + 0x224) == param_4)) {
    return;
  }
  *(int *)(lVar1 + 0x208) = param_1;
  *(byte *)(lVar1 + 0x230) = param_2 ^ 1;
  *(int *)(lVar1 + 0x220) = param_3;
  *(int *)(lVar1 + 0x224) = param_4;
  Component::internalRepaintUnchecked
            (*(long *)(lVar1 + 0x18),0,*(ulong *)(*(long *)(lVar1 + 0x18) + 0x40),'\x01');
                    /* WARNING: Could not recover jumptable at 0x002e7ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x18) + 200))();
  return;
}


