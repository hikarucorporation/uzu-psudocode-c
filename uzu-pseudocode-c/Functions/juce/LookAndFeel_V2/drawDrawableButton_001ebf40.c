// Function : drawDrawableButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 001ebf40
// Prototype: undefined drawDrawableButton(undefined8 param_1, Graphics * param_2, Component * param_3)
// Body     : 001ebf40 - 001ec0cd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LookAndFeel_V2::drawDrawableButton(juce::Graphics&, juce::DrawableButton&, bool, bool) */

void __cdecl
juce::LookAndFeel_V2::drawDrawableButton(undefined8 param_1,Graphics *param_2,Component *param_3)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  Component *pCVar7;
  long local_30;
  undefined1 local_28 [8];
  
                    /* try { // try from 001ebf5b to 001ebf62 has its CatchHandler @ 001ec0de */
  (**(code **)(**(long **)(param_3 + 0x1c0) + 0x10))(&local_30);
                    /* try { // try from 001ebf6d to 001ebf72 has its CatchHandler @ 001ec0d6 */
  uVar2 = (**(code **)(local_30 + 0x30))(local_28);
                    /* try { // try from 001ebf7a to 001ebf7f has its CatchHandler @ 001ec0ce */
  (**(code **)(local_30 + 0x58))(local_28);
  uVar4 = Component::findColour(param_3,(uVar2 & 0xff) + 0x1004011,'\0');
  Graphics::fillAll(param_2,(uint)uVar4);
  if (*(int *)(param_3 + 0x1f8) == 2) {
    dVar1 = (double)((float)*(int *)(param_3 + 0x44) * DAT_0065b200) + DAT_005d9098;
    iVar3 = SUB84(dVar1,0);
    uVar4 = 0x10;
    if ((0xf < iVar3) || (uVar4 = (ulong)dVar1 & 0xffffffff, 0 < iVar3)) {
      Graphics::setFont((float)(int)(uint)uVar4,param_2);
      uVar5 = Component::findColour(param_3,(uVar2 & 0xff) * 3 | 0x1004010,'\0');
      pCVar7 = param_3;
      do {
        uVar2 = (uint)(uVar5 >> 0x18);
        if ((*(ushort *)(pCVar7 + 0xe8) & 0x8000) != 0) {
          dVar1 = (double)((float)(uVar2 & 0xff) * DAT_005d98f0);
          goto LAB_001ec04e;
        }
        pCVar7 = *(Component **)(pCVar7 + 0x30);
      } while (pCVar7 != (Component *)0x0);
      dVar1 = (double)(uVar2 & 0xff);
LAB_001ec04e:
      iVar6 = SUB84(dVar1 + DAT_005d9098,0);
      iVar3 = 0xff;
      if (iVar6 < 0xff) {
        iVar3 = iVar6;
      }
      Graphics::setColour(param_2,(uint)uVar5 & 0xffffff | iVar3 << 0x18);
      Graphics::drawFittedText
                (0,DAT_005d9960,(long)param_2,(long *)(param_3 + 0x158),
                 (ulong)(~(uint)uVar4 + *(int *)(param_3 + 0x44)) << 0x20 | 2,
                 (ulong)(*(int *)(param_3 + 0x40) - 4) | uVar4 << 0x20,(uint *)0x24,1);
    }
  }
  return;
}


