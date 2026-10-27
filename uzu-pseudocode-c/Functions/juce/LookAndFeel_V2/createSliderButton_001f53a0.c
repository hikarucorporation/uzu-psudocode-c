// Function : createSliderButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f53a0
// Prototype: Button * createSliderButton(LookAndFeel_V2 * this, undefined8 param_1, int param_2)
// Body     : 001f53a0 - 001f54fb


/* juce::LookAndFeel_V2::createSliderButton(juce::Slider&, bool) */

Button * __thiscall
juce::LookAndFeel_V2::createSliderButton(LookAndFeel_V2 *this,undefined8 param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  Button *this_00;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  byte *local_30;
  
  this_00 = operator_new(0x1f8);
  pbVar5 = &DAT_0065dc2b;
  if (param_2 != 0) {
    pbVar5 = &DAT_0065b9f8;
  }
  bVar2 = *pbVar5;
  if (bVar2 == 0) {
    local_30 = &DAT_0061ac58;
  }
  else {
    lVar7 = 0;
    pbVar4 = pbVar5;
    do {
      pbVar4 = pbVar4 + 1;
      lVar6 = lVar7 + (ulong)(bVar2 >> 7);
      lVar7 = lVar6 + 1;
      bVar2 = *pbVar4;
    } while (bVar2 != 0);
    uVar8 = lVar6 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 001f5404 to 001f5408 has its CatchHandler @ 001f54fc */
    puVar3 = operator_new__(uVar8 + 0x17);
    LOCK();
    *puVar3 = 0;
    UNLOCK();
    *(ulong *)(puVar3 + 2) = uVar8;
    local_30 = (byte *)(puVar3 + 4);
    bVar2 = *pbVar5;
    pbVar4 = local_30;
    if (bVar2 != 0) {
      do {
        pbVar5 = pbVar5 + 1;
        if ((char)bVar2 < '\0') {
          *pbVar4 = bVar2 >> 6 | 0xc0;
          pbVar4[1] = bVar2 & 0x3f | 0x80;
          pbVar4 = pbVar4 + 1;
        }
        else {
          *pbVar4 = bVar2;
        }
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar5;
      } while (bVar2 != 0);
    }
    *pbVar4 = 0;
  }
                    /* try { // try from 001f546f to 001f547b has its CatchHandler @ 001f5501 */
  Button::Button(this_00,(long *)&local_30);
  *(undefined ***)this_00 = &PTR__Button_00707668;
  *(undefined ***)(this_00 + 0xf0) = &PTR__TextButton_00707848;
  LOCK();
  lVar7 = *(long *)(this_00 + 0xf8);
  *(undefined1 **)(this_00 + 0xf8) = &DAT_0061ac58;
  UNLOCK();
  piVar9 = (int *)(lVar7 + -0x10);
  if (piVar9 != &emptyString) {
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar9);
    }
  }
  this_00[0x1f7] = (Button)0x0;
  pbVar5 = local_30 + -0x10;
  if (pbVar5 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)pbVar5;
    *(int *)pbVar5 = *(int *)pbVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(pbVar5);
    }
  }
  return this_00;
}


