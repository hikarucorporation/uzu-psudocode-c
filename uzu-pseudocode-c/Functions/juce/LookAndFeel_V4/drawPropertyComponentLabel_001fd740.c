// Function : drawPropertyComponentLabel
// Namespace: juce:LookAndFeel_V4
// Entry    : 001fd740
// Prototype: undefined drawPropertyComponentLabel(LookAndFeel_V4 * this, Graphics * param_1, undefined8 param_3_00, int param_3, Component * param_4)
// Body     : 001fd740 - 001fd8b5


/* juce::LookAndFeel_V4::drawPropertyComponentLabel(juce::Graphics&, int, int,
   juce::PropertyComponent&) */

void __thiscall
juce::LookAndFeel_V4::drawPropertyComponentLabel
          (LookAndFeel_V4 *this,Graphics *param_1,undefined8 param_3_00,int param_3,
          Component *param_4)

{
  double dVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  Component *pCVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  long local_38;
  
  uVar8 = 10;
  if (*(int *)(param_4 + 0x40) / 10 < 10) {
    uVar8 = *(int *)(param_4 + 0x40) / 10;
  }
  uVar3 = Component::findColour(param_4,0x1008301,'\0');
  pCVar5 = param_4;
  do {
    uVar2 = (uint)(uVar3 >> 0x18);
    if ((*(ushort *)(pCVar5 + 0xe8) & 0x8000) != 0) {
      dVar1 = (double)((float)(uVar2 & 0xff) * DAT_005d98e8);
      goto LAB_001fd7c8;
    }
    pCVar5 = *(Component **)(pCVar5 + 0x30);
  } while (pCVar5 != (Component *)0x0);
  dVar1 = (double)(uVar2 & 0xff);
LAB_001fd7c8:
  iVar4 = SUB84(dVar1 + DAT_005d9098,0);
  iVar7 = 0xff;
  if (iVar4 < 0xff) {
    iVar7 = iVar4;
  }
  Graphics::setColour(param_1,(uint)uVar3 & 0xffffff | iVar7 << 0x18);
  iVar7 = 0x18;
  if (param_3 < 0x18) {
    iVar7 = param_3;
  }
  Graphics::setFont((float)iVar7 * DAT_005de438,param_1);
  auVar9 = (**(code **)(*(long *)this + 0x438))(this,param_4);
  local_38 = *(long *)(param_4 + 8);
  piVar6 = (int *)(local_38 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
                    /* try { // try from 001fd867 to 001fd887 has its CatchHandler @ 001fd8b6 */
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_1,&local_38,auVar9._0_8_ & 0xffffffff00000000 | (ulong)uVar8
             ,(ulong)(auVar9._0_4_ - 5) | auVar9._8_8_ & 0xffffffff00000000,(uint *)0x21,2);
  piVar6 = (int *)(local_38 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar7 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      operator_delete__(piVar6);
    }
  }
  return;
}


