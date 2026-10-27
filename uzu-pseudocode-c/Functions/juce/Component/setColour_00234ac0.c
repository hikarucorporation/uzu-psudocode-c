// Function : setColour
// Namespace: juce:Component
// Entry    : 00234ac0
// Prototype: undefined setColour(Component * this, uint param_1, undefined4 param_2)
// Body     : 00234ac0 - 00234ba8


/* juce::Component::setColour(int, juce::Colour) */

void __thiscall juce::Component::setColour(Component *this,uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  long local_50;
  undefined1 *local_48;
  undefined4 local_40 [4];
  byte abStack_2f [5];
  byte local_2a [2];
  
  uVar3 = (ulong)param_1;
  local_2a[1] = 0;
  pbVar6 = abStack_2f;
  do {
    pbVar5 = pbVar6;
    uVar2 = (uint)uVar3;
    pbVar5[5] = "0123456789abcdef"[uVar2 & 0xf];
    uVar3 = uVar3 >> 4;
    pbVar6 = pbVar5 + -1;
  } while (0xf < uVar2);
  pbVar5[3] = 0x72;
  pbVar5[4] = 0x5f;
  pbVar6[0] = 0x6a;
  pbVar6[1] = 99;
  pbVar6[2] = 99;
  pbVar6[3] = 0x6c;
  Identifier::Identifier((Identifier *)&local_50,pbVar6);
  local_48 = &var::Instance::attributesInt;
                    /* try { // try from 00234b42 to 00234b51 has its CatchHandler @ 00234bb1 */
  local_40[0] = param_2;
  uVar4 = NamedValueSet::set((NamedValueSet *)(this + 200),&local_50,(long *)&local_48);
                    /* try { // try from 00234b59 to 00234b5e has its CatchHandler @ 00234ba9 */
  (**(code **)(local_48 + 0x58))(local_40);
  piVar7 = (int *)(local_50 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar7);
    }
  }
  if ((char)uVar4 != '\0') {
    (**(code **)(*(long *)this + 0x180))(this);
  }
  return;
}


