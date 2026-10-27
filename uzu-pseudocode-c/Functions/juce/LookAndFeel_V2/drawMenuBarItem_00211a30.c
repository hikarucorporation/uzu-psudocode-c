// Function : drawMenuBarItem
// Namespace: juce:LookAndFeel_V2
// Entry    : 00211a30
// Prototype: undefined drawMenuBarItem(LookAndFeel_V2 * this, Graphics * param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, long * param_5, char param_6, char param_7, undefined8 param_8, Component * param_9)
// Body     : 00211a30 - 00211bab


/* juce::LookAndFeel_V2::drawMenuBarItem(juce::Graphics&, int, int, int, juce::String const&, bool,
   bool, bool, juce::MenuBarComponent&) */

void __thiscall
juce::LookAndFeel_V2::drawMenuBarItem
          (LookAndFeel_V2 *this,Graphics *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,long *param_5,char param_6,char param_7,undefined8 param_8,
          Component *param_9)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  Component *pCVar6;
  long *local_40;
  undefined4 local_34;
  
  pCVar6 = param_9;
  do {
    local_34 = param_2;
    if ((*(ushort *)(pCVar6 + 0xe8) & 0x8000) != 0) {
      uVar3 = Component::findColour(param_9,0x1000600,'\0');
      iVar4 = SUB84((double)((float)((uint)(uVar3 >> 0x18) & 0xff) * DAT_005d9044) + DAT_005d9098,0)
      ;
      iVar5 = 0xff;
      if (iVar4 < 0xff) {
        iVar5 = iVar4;
      }
      uVar2 = (uint)uVar3 & 0xffffff | iVar5 << 0x18;
      goto LAB_00211b0d;
    }
    pCVar6 = *(Component **)(pCVar6 + 0x30);
  } while (pCVar6 != (Component *)0x0);
  if ((param_6 == '\0') && (param_7 == '\0')) {
    uVar2 = 0x1000600;
  }
  else {
    uVar3 = Component::findColour(param_9,0x1000900,'\0');
    Graphics::fillAll(param_1,(uint)uVar3);
    uVar2 = 0x1000800;
  }
  uVar3 = Component::findColour(param_9,uVar2,'\0');
  uVar2 = (uint)uVar3;
LAB_00211b0d:
  Graphics::setColour(param_1,uVar2);
  (**(code **)(*(long *)this + 0x228))(&local_40,this,param_9,param_4,param_5);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 00211b43 to 00211b57 has its CatchHandler @ 00211bac */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_40);
  if (local_40 != (long *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_40 + 8))();
    }
  }
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_1,param_5,0,CONCAT44(param_3,local_34),(uint *)0x24,1);
  return;
}


