// Function : operator==
// Namespace: juce:ColourGradient:ColourPoint
// Entry    : 002ec980
// Prototype: undefined4 operator==(double param_1, double param_2, uint param_3, uint param_4)
// Body     : 002ec980 - 002eca77


/* juce::ColourGradient::ColourPoint::TEMPNAMEPLACEHOLDERVALUE(juce::ColourGradient::ColourPoint)
   const */

undefined4 __thiscall
juce::ColourGradient::ColourPoint::operator==
          (double param_1,double param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_3 >> 8;
  uVar5 = param_3 >> 0x10;
  uVar4 = param_3 >> 0x18;
  cVar1 = (char)(param_3 >> 0x18);
  if (cVar1 == -1) {
    uVar4 = param_3;
  }
  else if (cVar1 == '\0') {
    uVar5 = 0;
    uVar7 = 0;
    uVar4 = 0;
  }
  else {
    uVar7 = (uVar7 & 0xff) * uVar4 + 0x7f >> 8;
    uVar5 = (uVar5 & 0xff) * uVar4 + 0x7f >> 8;
    uVar4 = (param_3 & 0xff) * uVar4 + 0x7f >> 8;
  }
  uVar3 = param_4 >> 8;
  uVar2 = param_4 >> 0x10;
  uVar6 = param_4 >> 0x18;
  cVar1 = (char)(param_4 >> 0x18);
  if (cVar1 == -1) {
    uVar6 = param_4;
  }
  else if (cVar1 == '\0') {
    uVar2 = 0;
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    uVar3 = (uVar3 & 0xff) * uVar6 + 0x7f >> 8;
    uVar2 = (uVar2 & 0xff) * uVar6 + 0x7f >> 8;
    uVar6 = (param_4 & 0xff) * uVar6 + 0x7f >> 8;
  }
  uVar3 = (uVar3 & 0xff) << 8 | (uVar2 & 0xff) << 0x10 | param_4 & 0xff000000;
  return CONCAT31((int3)(uVar3 >> 8),
                  (uVar4 & 0xff |
                  (uVar7 & 0xff) << 8 | param_3 & 0xff000000 | (uVar5 & 0xff) << 0x10) ==
                  (uVar6 & 0xff | uVar3) && param_1 == param_2);
}


