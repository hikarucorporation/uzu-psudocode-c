// Function : canUnderstand
// Namespace: juce:PNGImageFormat
// Entry    : 00393020
// Prototype: bool canUnderstand(undefined8 param_1_00, long * param_2)
// Body     : 00393020 - 00393054


/* juce::PNGImageFormat::canUnderstand(juce::InputStream&) */

bool __thiscall juce::PNGImageFormat::canUnderstand(undefined8 param_1_00,long *param_2)

{
  int iVar1;
  undefined8 in_RAX;
  bool bVar2;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  iVar1 = (**(code **)(*param_2 + 0x20))(param_2,(long)&uStack_8 + 4,4);
  bVar2 = false;
  if (((iVar1 == 4) && (uStack_8._5_1_ == 'P')) && (uStack_8._6_1_ == 'N')) {
    bVar2 = uStack_8._7_1_ == 'G';
  }
  return bVar2;
}


