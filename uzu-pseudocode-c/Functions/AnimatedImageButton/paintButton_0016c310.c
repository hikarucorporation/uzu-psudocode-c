// Function : paintButton
// Namespace: AnimatedImageButton
// Entry    : 0016c310
// Prototype: undefined paintButton(Component * param_1, Graphics * param_2)
// Body     : 0016c310 - 0016c3ec


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* AnimatedImageButton::paintButton(juce::Graphics&, bool, bool) */

void __cdecl AnimatedImageButton::paintButton(Component *param_1,Graphics *param_2)

{
  Image *this;
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  
  this = (Image *)(param_1 + 0x268);
  bVar2 = juce::Image::isValid(this);
  if ((bVar2) && (0 < *(int *)(param_1 + 0x270))) {
    auVar5 = juce::Component::getLocalBounds(param_1);
    iVar3 = juce::Image::getWidth(this);
    iVar1 = *(int *)(param_1 + 0x270);
    iVar4 = juce::Image::getHeight(this);
    juce::Graphics::drawImage
              (param_2,(long *)this,(int)(float)auVar5._0_4_,(int)(float)auVar5._4_4_,
               (int)(float)auVar5._8_4_,(int)(float)auVar5._12_4_,
               *(int *)(param_1 + 0x274) * (iVar3 / iVar1),0,iVar3 / iVar1,iVar4,'\0');
  }
  return;
}


