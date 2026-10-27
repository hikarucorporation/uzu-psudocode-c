// Function : mouseDrag
// Namespace: juce:Slider
// Entry    : 002e2f00
// Prototype: undefined mouseDrag(Slider * this, float * param_1)
// Body     : 002e2f00 - 002e2f34


/* juce::Slider::mouseDrag(juce::MouseEvent const&) */

void __thiscall juce::Slider::mouseDrag(Slider *this,float *param_1)

{
  Slider *pSVar1;
  
  pSVar1 = this;
  do {
    if ((*(ushort *)(pSVar1 + 0xe8) & 0x8000) != 0) {
      return;
    }
    pSVar1 = *(Slider **)(pSVar1 + 0x30);
  } while (pSVar1 != (Slider *)0x0);
  Pimpl::mouseDrag(*(Pimpl **)(this + 0x1a0),param_1);
  return;
}


