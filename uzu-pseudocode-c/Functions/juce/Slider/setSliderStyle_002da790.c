// Function : setSliderStyle
// Namespace: juce:Slider
// Entry    : 002da790
// Prototype: undefined setSliderStyle(Slider * this, int param_1)
// Body     : 002da790 - 002da7e4


/* juce::Slider::setSliderStyle(juce::Slider::SliderStyle) */

void __thiscall juce::Slider::setSliderStyle(Slider *this,int param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(this + 0x1a0);
  if (*(int *)(lVar1 + 0x20) != param_1) {
    *(int *)(lVar1 + 0x20) = param_1;
    Component::internalRepaintUnchecked
              (*(long *)(lVar1 + 0x18),0,*(ulong *)(*(long *)(lVar1 + 0x18) + 0x40),'\x01');
    (**(code **)(**(long **)(lVar1 + 0x18) + 200))();
    plVar2 = *(long **)(*(long *)(lVar1 + 0x18) + 0xe0);
    *(undefined8 *)(*(long *)(lVar1 + 0x18) + 0xe0) = 0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002da7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


