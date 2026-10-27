// Function : parseDefs
// Namespace: juce:SVGState
// Entry    : 002acd80
// Prototype: undefined parseDefs(SVGState * this, long * param_1)
// Body     : 002acd80 - 002acdcd


/* juce::SVGState::parseDefs(juce::SVGState::XmlPath const&) */

void __thiscall juce::SVGState::parseDefs(SVGState *this,long *param_1)

{
  XmlElement *pXVar1;
  uint uVar2;
  
  pXVar1 = *(XmlElement **)(*param_1 + 8);
  while( true ) {
    if (pXVar1 == (XmlElement *)0x0) {
      return;
    }
    uVar2 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (*(byte **)(pXVar1 + 0x18),(byte *)0x5e3c05);
    if (uVar2 == 0) break;
    pXVar1 = *(XmlElement **)pXVar1;
  }
  parseCSSStyle((long)this,pXVar1);
  return;
}


