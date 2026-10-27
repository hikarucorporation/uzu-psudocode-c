// Function : replaceColour
// Namespace: juce:Drawable
// Entry    : 00286130
// Prototype: byte replaceColour(Drawable * this, undefined4 param_1, undefined4 param_2)
// Body     : 00286130 - 002861ba


/* juce::Drawable::replaceColour(juce::Colour, juce::Colour) */

byte __thiscall juce::Drawable::replaceColour(Drawable *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  byte bVar5;
  long lVar6;
  
  iVar1 = *(int *)(this + 100);
  if ((long)iVar1 == 0) {
    bVar5 = 0;
  }
  else {
    lVar2 = *(long *)(this + 0x58);
    lVar6 = 0;
    bVar5 = 0;
    do {
      if (*(long *)(lVar2 + lVar6) != 0) {
        plVar4 = (long *)__dynamic_cast(*(long *)(lVar2 + lVar6),&Component::typeinfo,&typeinfo,0);
        if (plVar4 != (long *)0x0) {
          bVar3 = (**(code **)(*plVar4 + 0x1b0))(plVar4,param_1,param_2);
          bVar5 = bVar5 & 1 | bVar3;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((long)iVar1 * 8 != lVar6);
  }
  return bVar5 & 1;
}


