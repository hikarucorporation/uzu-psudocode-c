// Function : Label
// Namespace: juce:Label
// Entry    : 00234c00
// Prototype: undefined Label(Label * this, long * param_1, long * param_2)
// Body     : 00234c00 - 00235101


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Label::Label(juce::String const&, juce::String const&) */

void __thiscall juce::Label::Label(Label *this,long *param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long local_108;
  long local_100;
  long local_f8;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  void *local_d0;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  *(undefined ***)this = &PTR__Component_00707878;
  lVar3 = *param_1;
  *(long *)(this + 8) = lVar3;
  piVar6 = (int *)(lVar3 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  *(undefined1 **)(this + 0x10) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(this + 0x28) = &DAT_0061ac58;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xe5) = 0;
  *(undefined1 **)(this + 0xf8) = &DAT_0061ac58;
  *(undefined ***)this = &PTR__Label_0070c150;
  *(undefined ***)(this + 0xf0) = &PTR__Label_0070c360;
  *(undefined ***)(this + 0x100) = &PTR__Label_0070c390;
  *(undefined ***)(this + 0x108) = &PTR__Label_0070c3d0;
  *(undefined ***)(this + 0x110) = &PTR__Label_0070c430;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  local_108 = *param_2;
  piVar6 = (int *)(local_108 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
                    /* try { // try from 00234d50 to 00234d59 has its CatchHandler @ 00235158 */
  puVar7 = operator_new(0x40);
  *puVar7 = &PTR__ReferenceCountedObject_00706828;
  *(undefined4 *)(puVar7 + 1) = 0;
  puVar7[2] = &PTR__AsyncUpdater_00712b58;
  puVar7[3] = 0;
                    /* try { // try from 00234d81 to 00234d8a has its CatchHandler @ 00235147 */
  puVar8 = operator_new(0x20);
  *(undefined4 *)(puVar8 + 1) = 0;
  *puVar8 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar8[2] = puVar7 + 2;
  *(undefined4 *)(puVar8 + 3) = 0;
  LOCK();
  *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
  UNLOCK();
  pvVar4 = (void *)puVar7[3];
  puVar7[3] = puVar8;
  if (pvVar4 != (void *)0x0) {
    LOCK();
    piVar6 = (int *)((long)pvVar4 + 8);
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (*piVar6 == 0) {
      operator_delete(pvVar4);
    }
  }
  puVar7[4] = 0;
  puVar7[5] = 0;
  *puVar7 = &PTR__SimpleValueSource_00713f78;
  puVar7[2] = &PTR__SimpleValueSource_00713fb0;
  puVar7[6] = &var::Instance::attributesString;
                    /* try { // try from 00234dfa to 00234dff has its CatchHandler @ 00235139 */
  (*(code *)PTR_stringCreateCopy_00713860)(puVar7 + 7);
  *(undefined8 **)(this + 0x178) = puVar7;
  LOCK();
  *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
  UNLOCK();
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
                    /* try { // try from 00234e2f to 00234e34 has its CatchHandler @ 00235131 */
  (*(code *)PTR_stringCleanUp_00713858)(&local_108);
  lVar3 = *param_2;
  *(long *)(this + 0x1a8) = lVar3;
  piVar6 = (int *)(lVar3 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
                    /* try { // try from 00234e53 to 00234e66 has its CatchHandler @ 00235128 */
  FontOptions::FontOptions(DAT_005d906c,(FontOptions *)&local_100,0);
                    /* try { // try from 00234e67 to 00234e7b has its CatchHandler @ 00235115 */
  Component::withDefaultMetrics(&local_98,(long)this,&local_100);
                    /* try { // try from 00234e83 to 00234e92 has its CatchHandler @ 00235102 */
  Font::Font((Font *)(this + 0x1b0),&local_98);
  plVar1 = local_80;
  if (local_68 != (void *)0x0) {
    operator_delete(local_68);
    plVar1 = local_80;
  }
  for (; plVar1 != local_78; plVar1 = plVar1 + 1) {
    piVar6 = (int *)(*plVar1 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar6);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_88 + 8))();
    }
  }
  piVar6 = (int *)(local_90 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  piVar6 = (int *)(local_98 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  plVar1 = local_e8;
  if (local_d0 != (void *)0x0) {
    operator_delete(local_d0);
    plVar1 = local_e8;
  }
  for (; plVar1 != local_e0; plVar1 = plVar1 + 1) {
    piVar6 = (int *)(*plVar1 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar6);
      }
    }
  }
  if (local_e8 != (long *)0x0) {
    operator_delete(local_e8);
  }
  if (local_f0 != (long *)0x0) {
    LOCK();
    plVar1 = local_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_f0 + 8))();
    }
  }
  piVar6 = (int *)(local_f8 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  piVar6 = (int *)(local_100 + -0x10);
  if (piVar6 != &emptyString) {
    LOCK();
    iVar2 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar6);
    }
  }
  *(undefined4 *)(this + 0x1b8) = 0x21;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1dc) = 0;
  *(undefined8 *)(this + 0x1e4) = 0;
  uVar5 = _UNK_005dd0e8;
  *(undefined8 *)(this + 0x1f8) = _DAT_005dd0e0;
  *(undefined8 *)(this + 0x200) = uVar5;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x210) = 0;
                    /* try { // try from 0023501b to 0023504d has its CatchHandler @ 00235176 */
  Component::setColour((Component *)this,0x1000201,_ZN4juce7ColoursL5blackE_14);
  Component::setColour((Component *)this,0x1000200,_ZN4juce7ColoursL16transparentBlackE_5);
  Component::setColour((Component *)this,0x1000205,_ZN4juce7ColoursL16transparentBlackE_5);
  Value::addListener((Value *)(this + 0x178),(long)(this + 0x110));
  return;
}


