// Function : Colour
// Namespace: juce:Colour
// Entry    : 002eb660
// Prototype: undefined Colour(float param_1, float param_2, float param_3, float param_4, Colour * this)
// Body     : 002eb660 - 002eb69f


/* juce::Colour::Colour(float, float, float, float) */

void __thiscall
juce::Colour::Colour(float param_1,float param_2,float param_3,float param_4,Colour *this)

{
  byte bVar1;
  uint uVar2;
  
  if (param_4 <= 0.0) {
    bVar1 = 0;
  }
  else {
    bVar1 = 0xff;
    if (param_4 < DAT_005d9038) {
      bVar1 = SUB81((double)(param_4 * DAT_005de3b0) + DAT_005d9098,0);
    }
  }
  uVar2 = ColourHelpers::HSB::toRGB(param_1,param_2,param_3,(uint)bVar1);
  *(uint *)this = uVar2;
  return;
}


