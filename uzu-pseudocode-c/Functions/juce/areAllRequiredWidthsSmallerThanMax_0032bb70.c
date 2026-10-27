// Function : areAllRequiredWidthsSmallerThanMax
// Namespace: juce
// Entry    : 0032bb70
// Prototype: undefined8 areAllRequiredWidthsSmallerThanMax(float param_1, juce * this, long param_3)
// Body     : 0032bb70 - 0032bc51


/* juce::areAllRequiredWidthsSmallerThanMax(juce::detail::ShapedText const&, float) */

undefined8 __thiscall
juce::areAllRequiredWidthsSmallerThanMax(float param_1,juce *this,long param_3)

{
  juce *pjVar1;
  juce *pjVar2;
  undefined7 uVar3;
  long lVar4;
  ulong uVar5;
  juce *pjVar6;
  
  uVar5 = param_3 - (long)this;
  pjVar2 = this + (uVar5 & 0xfffffffffffffffc);
  uVar3 = (undefined7)((ulong)pjVar2 >> 8);
  if (0xf < (long)uVar5) {
    lVar4 = (uVar5 >> 4) + 1;
    uVar5 = ((long)uVar5 >> 2) << 2;
    pjVar1 = this + 8;
    do {
      pjVar6 = pjVar1;
      if (param_1 < *(float *)(pjVar6 + -8)) {
        return CONCAT71(uVar3,pjVar6 + -8 == pjVar2);
      }
      if (param_1 < *(float *)(pjVar6 + -4)) {
        return CONCAT71(uVar3,pjVar6 + -4 == pjVar2);
      }
      if (param_1 < *(float *)pjVar6) goto LAB_0032bc01;
      if (param_1 < *(float *)(pjVar6 + 4)) {
        return CONCAT71(uVar3,pjVar6 + 4 == pjVar2);
      }
      lVar4 = lVar4 + -1;
      uVar5 = uVar5 - 0x10;
      pjVar1 = pjVar6 + 0x10;
    } while (1 < lVar4);
    this = pjVar6 + 8;
  }
  lVar4 = (long)uVar5 >> 2;
  pjVar6 = this;
  if (lVar4 != 1) {
    if (lVar4 != 2) {
      pjVar6 = pjVar2;
      if (lVar4 != 3) goto LAB_0032bc01;
      if (param_1 < *(float *)this) {
        pjVar6 = this;
        goto LAB_0032bc01;
      }
      this = this + 4;
    }
    if (param_1 < *(float *)this) {
      return CONCAT71(uVar3,this == pjVar2);
    }
    pjVar6 = this + 4;
  }
  if (*(float *)pjVar6 <= param_1) {
    return CONCAT71(uVar3,1);
  }
LAB_0032bc01:
  return CONCAT71(uVar3,pjVar6 == pjVar2);
}


