// Function : getAttributeFromStyleList
// Namespace: juce:SVGState
// Entry    : 002a21e0
// Prototype: undefined getAttributeFromStyleList(SVGState * this, String * param_1, byte * param_2, byte * param_3, undefined8 param_4, undefined8 param_5)
// Body     : 002a21e0 - 002a2340


/* juce::SVGState::getAttributeFromStyleList(juce::String const&, juce::StringRef, juce::String
   const&) */

void __thiscall
juce::SVGState::getAttributeFromStyleList
          (SVGState *this,String *param_1,byte *param_2,byte *param_3,undefined8 param_4,
          undefined8 param_5)

{
  byte *pbVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long in_RAX;
  byte *pbVar7;
  byte *pbVar8;
  int *piVar9;
  long local_38;
  
  iVar3 = 0;
  pbVar8 = param_3;
  local_38 = in_RAX;
LAB_002a2203:
  iVar3 = juce::String::indexOf(param_1,iVar3,param_2,pbVar8,param_4,param_5);
  if (-1 < iVar3) {
    if (iVar3 == 0) {
LAB_002a2239:
      iVar5 = 0;
      pbVar8 = param_2;
      do {
        if ((char)*pbVar8 < '\0') {
          do {
            pbVar1 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar8;
          } while ((*pbVar1 & 0xc0) == 0x80);
        }
        else {
          pbVar7 = pbVar8 + 1;
          if (*pbVar8 == 0) goto LAB_002a2280;
        }
        iVar5 = iVar5 + 1;
        pbVar8 = pbVar7;
      } while( true );
    }
    uVar4 = juce::String::operator[](param_1,iVar3 + -1);
    iVar5 = iswalpha(uVar4);
    if ((uVar4 != 0x2d) && (iVar5 == 0)) goto LAB_002a2239;
    goto LAB_002a2200;
  }
LAB_002a2318:
  lVar2 = *(long *)param_3;
  *(long *)this = lVar2;
  piVar9 = (int *)(lVar2 + -0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  return;
LAB_002a2280:
  uVar4 = juce::String::operator[](param_1,iVar5 + iVar3);
  iVar5 = iswalpha(uVar4);
  if ((uVar4 != 0x2d) && (iVar5 == 0)) {
    iVar3 = juce::String::indexOfChar(param_1,iVar3,0x3a);
    if (-1 < iVar3) {
      iVar6 = juce::String::indexOfChar(param_1,iVar3,0x3b);
      iVar5 = 0x7ffff;
      if (-1 < iVar6) {
        iVar5 = iVar6;
      }
      juce::String::substring(&local_38,(undefined8 *)param_1,iVar3 + 1,iVar5);
                    /* try { // try from 002a22e5 to 002a22ef has its CatchHandler @ 002a2341 */
      juce::String::trim((long *)this,&local_38);
      piVar9 = (int *)(local_38 + -0x10);
      if (piVar9 == &emptyString) {
        return;
      }
      LOCK();
      iVar3 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        operator_delete__(piVar9);
        return;
      }
      return;
    }
    goto LAB_002a2318;
  }
LAB_002a2200:
  iVar3 = iVar3 + 1;
  goto LAB_002a2203;
}


