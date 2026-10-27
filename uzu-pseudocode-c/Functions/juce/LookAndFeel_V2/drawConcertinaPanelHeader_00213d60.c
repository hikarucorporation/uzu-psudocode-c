// Function : drawConcertinaPanelHeader
// Namespace: juce:LookAndFeel_V2
// Entry    : 00213d60
// Prototype: undefined drawConcertinaPanelHeader(LookAndFeel_V2 * this, Graphics * param_1, undefined8 * param_2, int param_3, undefined8 param_4, undefined8 param_6_00, long param_6)
// Body     : 00213d60 - 002141be


/* juce::LookAndFeel_V2::drawConcertinaPanelHeader(juce::Graphics&, juce::Rectangle<int> const&,
   bool, bool, juce::ConcertinaPanel&, juce::Component&) */

void __thiscall
juce::LookAndFeel_V2::drawConcertinaPanelHeader
          (LookAndFeel_V2 *this,Graphics *param_1,undefined8 *param_2,int param_3,undefined8 param_4
          ,undefined8 param_6_00,long param_6)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  long *local_178;
  long *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  long *local_158;
  long *local_150;
  long *plStack_148;
  undefined8 local_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined8 uStack_10a;
  long local_f8;
  long lStack_f0;
  long *local_e8;
  long *local_e0;
  long *plStack_d8;
  undefined8 local_d0;
  void *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_9a;
  long local_90;
  long local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  void *local_60;
  
  uVar6 = 0xb2000000;
  if (param_3 != 0) {
    uVar6 = 0xe6000000;
  }
  Graphics::fillAll(param_1,_ZN4juce7ColoursL4greyE_57 & 0xffffff | uVar6);
  Graphics::setColour(param_1,_ZN4juce7ColoursL5blackE_14 & 0xffffff | 0x80000000);
  local_168 = (undefined1 *)CONCAT44((float)(int)((ulong)*param_2 >> 0x20),(float)(int)*param_2);
  uStack_160 = (undefined1 *)
               CONCAT44((float)(int)((ulong)param_2[1] >> 0x20),(float)(int)param_2[1]);
  (**(code **)(**(long **)(param_1 + 8) + 0xd0))(DAT_005d9038,*(long **)(param_1 + 8),&local_168);
  Graphics::setColour(param_1,_ZN4juce7ColoursL5whiteE_144);
  FontOptions::FontOptions
            ((float)*(int *)((long)param_2 + 0xc) * (float)s_333_power__f_00652630._0_4_,
             (FontOptions *)&local_90,0);
                    /* try { // try from 00213e2f to 00213e48 has its CatchHandler @ 00214230 */
  uVar5 = (**(code **)(*(long *)this + 0x50))(this);
  FontOptions::FontOptions((FontOptions *)&local_168,&local_90);
  local_f8 = (long)local_168;
  local_168 = &DAT_0061ac58;
  lStack_f0 = (long)uStack_160;
  uStack_160 = &DAT_0061ac58;
  local_e8 = local_158;
  local_158 = (long *)0x0;
  local_e0 = local_150;
  plStack_d8 = plStack_148;
  local_d0 = local_140;
  local_150 = (long *)0x0;
  plStack_148 = (long *)0x0;
  local_140 = 0;
  local_c8 = local_138;
  uStack_c0 = uStack_130;
  local_b8 = local_128;
  local_138 = (void *)0x0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_b0 = CONCAT44(uStack_11c,uVar5);
  uStack_9a = uStack_10a;
                    /* try { // try from 00213eee to 00213eff has its CatchHandler @ 002141ec */
  local_120 = uVar5;
  Font::Font((Font *)&local_170,&local_f8);
  uVar6 = Font::getStyleFlags((Font *)&local_170);
  local_178 = local_170;
  if (local_170 != (long *)0x0) {
    LOCK();
    *(int *)(local_170 + 1) = (int)local_170[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 00213f20 to 00213f29 has its CatchHandler @ 002141ea */
  Font::setStyleFlags((Font *)&local_178,uVar6 | 1);
  if (param_1[0x10] != (Graphics)0x0) {
    param_1[0x10] = (Graphics)0x0;
                    /* try { // try from 00213f3d to 00213f4f has its CatchHandler @ 002141f1 */
    (**(code **)(**(long **)(param_1 + 8) + 0x70))();
  }
  (**(code **)(**(long **)(param_1 + 8) + 0xf8))(*(long **)(param_1 + 8),&local_178);
  if (local_178 != (long *)0x0) {
    LOCK();
    plVar1 = local_178 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_178 + 8))();
    }
  }
  if (local_170 != (long *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_170 + 8))();
    }
  }
  plVar1 = local_e0;
  plVar3 = plStack_d8;
  if (local_c8 != (void *)0x0) {
    operator_delete(local_c8);
    plVar1 = local_e0;
    plVar3 = plStack_d8;
  }
  for (; plVar4 = plStack_d8, plVar1 != plStack_d8; plVar1 = plVar1 + 1) {
    piVar7 = (int *)(*plVar1 + -0x10);
    plStack_d8 = plVar3;
    if (piVar7 != &emptyString) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar7);
      }
    }
    plVar3 = plStack_d8;
    plStack_d8 = plVar4;
  }
  plStack_d8 = plVar3;
  if (local_e0 != (long *)0x0) {
    operator_delete(local_e0);
  }
  if (local_e8 != (long *)0x0) {
    LOCK();
    plVar1 = local_e8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_e8 + 8))();
    }
  }
  piVar7 = (int *)(lStack_f0 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  piVar7 = (int *)(local_f8 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  plVar1 = local_78;
  if (local_60 != (void *)0x0) {
    operator_delete(local_60);
    plVar1 = local_78;
  }
  for (; plVar1 != local_70; plVar1 = plVar1 + 1) {
    piVar7 = (int *)(*plVar1 + -0x10);
    if (piVar7 != &emptyString) {
      LOCK();
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar7);
      }
    }
  }
  if (local_78 != (long *)0x0) {
    operator_delete(local_78);
  }
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_80 + 8))();
    }
  }
  piVar7 = (int *)(local_88 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  piVar7 = (int *)(local_90 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  local_168 = *(undefined1 **)(param_6 + 8);
  piVar7 = (int *)((long)local_168 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
                    /* try { // try from 0021411d to 00214144 has its CatchHandler @ 002141bf */
  Graphics::drawFittedText
            (0,DAT_005d9960,(long)param_1,&local_168,4,
             CONCAT44(*(undefined4 *)((long)param_2 + 0xc),*(int *)(param_2 + 1) + -6),(uint *)0x21,
             1);
  piVar7 = (int *)((long)local_168 + -0x10);
  if (piVar7 != &emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  return;
}


