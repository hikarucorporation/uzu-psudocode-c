// Function : parseCoords
// Namespace: juce:SVGState
// Entry    : 002a06a0
// Prototype: ulong parseCoords(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, SVGState * this, undefined8 * param_5, undefined4 * param_6, char param_7)
// Body     : 002a06a0 - 002a079f


/* juce::SVGState::parseCoords(juce::CharPointer_UTF8&, juce::Point<float>&, bool) const */

ulong __thiscall
juce::SVGState::parseCoords
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,SVGState *this,
          undefined8 *param_5,undefined4 *param_6,char param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined1 *local_38;
  
  local_38 = &DAT_0061ac58;
                    /* try { // try from 002a06c1 to 002a06cd has its CatchHandler @ 002a07b2 */
  uVar2 = parseNextNumber(param_5,(long *)&local_38,param_7);
  if ((char)uVar2 == '\0') {
    *param_6 = 0;
    piVar4 = (int *)(local_38 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
      }
    }
    uVar6 = 0;
  }
  else {
    uVar6 = getCoordLength(*(float *)(this + 0x20),param_2_00,param_3_00,(String *)&local_38);
    *param_6 = (int)uVar6;
    piVar4 = (int *)(local_38 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
      }
    }
    local_38 = &DAT_0061ac58;
                    /* try { // try from 002a0713 to 002a0721 has its CatchHandler @ 002a07a0 */
    uVar3 = parseNextNumber(param_5,(long *)&local_38,param_7);
    uVar6 = uVar3 & 0xffffffff;
    uVar5 = 0;
    if ((char)uVar3 != '\0') {
      uVar3 = getCoordLength(*(float *)(this + 0x24),param_2_00,param_3_00,(String *)&local_38);
      uVar5 = (undefined4)uVar3;
    }
    param_6[1] = uVar5;
    piVar4 = (int *)(local_38 + -0x10);
    if (piVar4 != &emptyString) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar4);
      }
    }
  }
  return uVar6;
}


