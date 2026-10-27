// Function : modifierKeysChanged
// Namespace: juce:Slider
// Entry    : 002e3ff0
// Prototype: undefined modifierKeysChanged(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, Slider * this, uint * param_5)
// Body     : 002e3ff0 - 002e4050


/* juce::Slider::modifierKeysChanged(juce::ModifierKeys const&) */

void __thiscall
juce::Slider::modifierKeysChanged
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,Slider *this,uint *param_5)

{
  Pimpl *this_00;
  Slider *pSVar1;
  
  pSVar1 = this;
  do {
    if ((*(ushort *)(pSVar1 + 0xe8) & 0x8000) != 0) {
      return;
    }
    pSVar1 = *(Slider **)(pSVar1 + 0x30);
  } while (pSVar1 != (Slider *)0x0);
  this_00 = *(Pimpl **)(this + 0x1a0);
  if (((*(int *)(this_00 + 0x20) == 4) || (*(int *)(this_00 + 0x20) == 8)) ||
     (this_00[0x232] !=
      (Pimpl)((*param_5 & *(uint *)(this_00 + 0x22c)) != 0 && this_00[0x233] != (Pimpl)0x0))) {
    return;
  }
  Pimpl::restoreMouseIfHidden(param_1_00,param_2,param_3,this_00);
  return;
}


