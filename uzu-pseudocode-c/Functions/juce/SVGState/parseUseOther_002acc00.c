// Function : parseUseOther
// Namespace: juce:SVGState
// Entry    : 002acc00
// Prototype: undefined parseUseOther(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, SVGState * this, long * param_5)
// Body     : 002acc00 - 002acc38


/* juce::SVGState::parseUseOther(juce::SVGState::XmlPath const&) const */

void __thiscall
juce::SVGState::parseUseOther
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,SVGState *this,long *param_5)

{
  Drawable *pDVar1;
  undefined8 uVar2;
  undefined8 in_R9;
  
  uVar2 = 0;
  pDVar1 = parseText(param_1_00,param_2,param_3,this,param_5,0,(float *)0x0,(Drawable *)0x0,in_R9);
  if (pDVar1 == (Drawable *)0x0) {
    parseImage(this,param_5,0,(float *)0x0,uVar2,in_R9);
    return;
  }
  return;
}


