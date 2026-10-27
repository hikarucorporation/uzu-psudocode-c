// Function : drawToggleButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020cfd0
// Prototype: undefined drawToggleButton(LookAndFeel_V2 * this, Graphics * param_1, Component * param_2, undefined1 param_3, undefined1 param_4)
// Body     : 0020cfd0 - 0020d20d


/* juce::LookAndFeel_V2::drawToggleButton(juce::Graphics&, juce::ToggleButton&, bool, bool) */

void __thiscall
juce::LookAndFeel_V2::drawToggleButton
          (LookAndFeel_V2 *this,Graphics *param_1,Component *param_2,undefined1 param_3,
          undefined1 param_4)

{
  Component *pCVar1;
  undefined1 uVar2;
  int iVar3;
  ulong uVar4;
  Component *pCVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  long local_40;
  undefined8 uStack_38;
  
  for (pCVar5 = Component::currentlyFocusedComponent; pCVar5 != param_2;
      pCVar5 = *(Component **)(pCVar5 + 0x30)) {
    if (pCVar5 == (Component *)0x0) goto LAB_0020d054;
  }
  uVar4 = Component::findColour(param_2,0x1000206,'\0');
  Graphics::setColour(param_1,(int)uVar4);
  uStack_38 = CONCAT44((float)(int)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20),
                       (float)(int)*(undefined8 *)(param_2 + 0x40));
  local_40 = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_1 + 8),&local_40);
LAB_0020d054:
  iVar3 = *(int *)(param_2 + 0x44);
                    /* try { // try from 0020d06c to 0020d073 has its CatchHandler @ 0020d21e */
  (**(code **)(**(long **)(param_2 + 0x1c0) + 0x10))(&local_40);
                    /* try { // try from 0020d07e to 0020d083 has its CatchHandler @ 0020d216 */
  uVar2 = (**(code **)(local_40 + 0x30))(&uStack_38);
                    /* try { // try from 0020d08c to 0020d091 has its CatchHandler @ 0020d20e */
  (**(code **)(local_40 + 0x58))(&uStack_38);
  fVar7 = DAT_0065b218 * (float)iVar3;
  if (DAT_005d906c <= fVar7) {
    fVar7 = DAT_005d906c;
  }
  fVar8 = DAT_005de3ec * fVar7;
  pCVar5 = param_2;
  do {
    pCVar1 = pCVar5 + 0xe8;
    if ((*(uint3 *)pCVar1 & 0x8000) != 0) break;
    pCVar5 = *(Component **)(pCVar5 + 0x30);
  } while (pCVar5 != (Component *)0x0);
  (**(code **)(*(long *)this + 200))
            (DAT_005d94d4,((float)iVar3 - fVar8) * DAT_005d9044,fVar8,fVar8,this,param_1,param_2,
             uVar2,(*(uint3 *)pCVar1 & 0x8000) == 0,param_3,param_4);
  uVar4 = Component::findColour(param_2,0x1006501,'\0');
  Graphics::setColour(param_1,(int)uVar4);
  Graphics::setFont(fVar7,param_1);
  pCVar5 = param_2;
  do {
    if ((*(ushort *)(pCVar5 + 0xe8) & 0x8000) != 0) {
      if (param_1[0x10] != (Graphics)0x0) {
        param_1[0x10] = (Graphics)0x0;
        (**(code **)(**(long **)(param_1 + 8) + 0x70))();
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x98))(DAT_005d9044);
      break;
    }
    pCVar5 = *(Component **)(pCVar5 + 0x30);
  } while (pCVar5 != (Component *)0x0);
  uVar6 = SUB84((double)fVar8 + DAT_005d9098,0) + 5;
  iVar3 = *(int *)(param_2 + 0x40) - uVar6;
  uVar4 = 0;
  if (2 < iVar3) {
    uVar4 = (ulong)(iVar3 - 2);
  }
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_1,(long *)(param_2 + 0x158),(ulong)uVar6,
             uVar4 | (ulong)*(uint *)(param_2 + 0x44) << 0x20,(uint *)0x21,10);
  return;
}


