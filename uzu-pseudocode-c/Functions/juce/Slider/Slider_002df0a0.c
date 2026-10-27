// Function : Slider
// Namespace: juce:Slider
// Entry    : 002df0a0
// Prototype: undefined Slider(undefined8 param_1, undefined8 param_2, undefined8 param_3, Slider * this)
// Body     : 002df0a0 - 002df67e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::Slider::Slider() */

void __thiscall
juce::Slider::Slider(undefined8 param_1,undefined8 param_2,undefined8 param_3,Slider *this)

{
  int *piVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  *(undefined1 **)(this + 8) = &DAT_0061ac58;
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
  *(undefined ***)this = &PTR__Slider_0070c458;
  *(undefined ***)(this + 0xf0) = &PTR__Slider_0070c640;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
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
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  this[0xea] = (Slider)0x0;
  *(undefined2 *)(this + 0xe8) = 0x4000;
                    /* try { // try from 002df19f to 002df1a8 has its CatchHandler @ 002df6ed */
  puVar8 = operator_new(0x280);
  *puVar8 = &PTR__AsyncUpdater_00712b58;
  puVar8[1] = 0;
                    /* try { // try from 002df1be to 002df1c7 has its CatchHandler @ 002df6e8 */
  puVar9 = operator_new(0x20);
  *(undefined4 *)(puVar9 + 1) = 0;
  *puVar9 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar9[2] = puVar8;
  *(undefined4 *)(puVar9 + 3) = 0;
  LOCK();
  *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
  UNLOCK();
  pvVar3 = (void *)puVar8[1];
  puVar8[1] = puVar9;
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar3);
    }
  }
  *puVar8 = &PTR__Pimpl_007101c8;
  puVar8[2] = &PTR__Pimpl_007101f8;
  puVar8[3] = this;
  *(undefined4 *)(puVar8 + 4) = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  *(undefined4 *)(puVar8 + 9) = 0;
                    /* try { // try from 002df241 to 002df24a has its CatchHandler @ 002df6c7 */
  puVar9 = operator_new(0x40);
  *puVar9 = &PTR__ReferenceCountedObject_00706828;
  *(undefined4 *)(puVar9 + 1) = 0;
  puVar9[2] = &PTR__AsyncUpdater_00712b58;
  puVar9[3] = 0;
                    /* try { // try from 002df26b to 002df274 has its CatchHandler @ 002df6ba */
  puVar10 = operator_new(0x20);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar10[2] = puVar9 + 2;
  *(undefined4 *)(puVar10 + 3) = 0;
  LOCK();
  *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
  UNLOCK();
  pvVar3 = (void *)puVar9[3];
  puVar9[3] = puVar10;
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar3);
    }
  }
  puVar9[4] = 0;
  puVar9[5] = 0;
  *puVar9 = &PTR__SimpleValueSource_00713f78;
  puVar9[2] = &PTR__SimpleValueSource_00713fb0;
  puVar9[6] = &var::Instance::attributesVoid;
  puVar8[10] = puVar9;
  LOCK();
  *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
  UNLOCK();
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  *(undefined4 *)(puVar8 + 0xf) = 0;
                    /* try { // try from 002df2f5 to 002df2fe has its CatchHandler @ 002df6ab */
  puVar9 = operator_new(0x40);
  *puVar9 = &PTR__ReferenceCountedObject_00706828;
  *(undefined4 *)(puVar9 + 1) = 0;
  puVar9[2] = &PTR__AsyncUpdater_00712b58;
  puVar9[3] = 0;
                    /* try { // try from 002df326 to 002df32f has its CatchHandler @ 002df69e */
  puVar10 = operator_new(0x20);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar10[2] = puVar9 + 2;
  *(undefined4 *)(puVar10 + 3) = 0;
  LOCK();
  *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
  UNLOCK();
  pvVar3 = (void *)puVar9[3];
  puVar9[3] = puVar10;
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar3);
    }
  }
  puVar9[4] = 0;
  puVar9[5] = 0;
  *puVar9 = &PTR__SimpleValueSource_00713f78;
  puVar9[2] = &PTR__SimpleValueSource_00713fb0;
  puVar9[6] = &var::Instance::attributesVoid;
  puVar8[0x10] = puVar9;
  LOCK();
  *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
  UNLOCK();
  puVar8[0x13] = 0;
  puVar8[0x14] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  *(undefined4 *)(puVar8 + 0x15) = 0;
                    /* try { // try from 002df3ae to 002df3b7 has its CatchHandler @ 002df68c */
  puVar9 = operator_new(0x40);
  *puVar9 = &PTR__ReferenceCountedObject_00706828;
  *(undefined4 *)(puVar9 + 1) = 0;
  puVar9[2] = &PTR__AsyncUpdater_00712b58;
  puVar9[3] = 0;
                    /* try { // try from 002df3df to 002df3e8 has its CatchHandler @ 002df67f */
  puVar10 = operator_new(0x20);
  *(undefined4 *)(puVar10 + 1) = 0;
  *puVar10 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar10[2] = puVar9 + 2;
  *(undefined4 *)(puVar10 + 3) = 0;
  LOCK();
  *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
  UNLOCK();
  pvVar3 = (void *)puVar9[3];
  puVar9[3] = puVar10;
  if (pvVar3 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar3);
    }
  }
  uVar11 = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *puVar9 = &PTR__SimpleValueSource_00713f78;
  puVar9[2] = &PTR__SimpleValueSource_00713fb0;
  puVar9[6] = &var::Instance::attributesVoid;
  puVar8[0x16] = puVar9;
  LOCK();
  *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
  UNLOCK();
  puVar8[0x19] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  *(undefined4 *)(puVar8 + 0x1b) = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x20] = _DAT_00655e08;
  puVar8[0x21] = 0;
  puVar8[0x22] = 0x3ff0000000000000;
  *(undefined1 *)(puVar8 + 0x23) = 0;
  puVar8[0x24] = 0;
  puVar8[0x25] = 0;
  puVar8[0x26] = 0;
  puVar8[0x27] = 0;
  puVar8[0x28] = 0;
  puVar8[0x29] = 0;
  puVar8[0x2a] = 0;
  puVar8[0x2b] = 0;
  puVar8[0x2c] = 0;
  puVar8[0x2d] = 0;
  puVar8[0x2e] = 0;
  puVar8[0x2f] = 0;
  puVar8[0x30] = 0;
  puVar8[0x31] = 0;
  puVar8[0x32] = 0;
  puVar8[0x33] = 0;
  puVar8[0x34] = 0x3ff0000000000000;
  puVar8[0x35] = 0;
  puVar8[0x36] = 0;
  *(undefined4 *)(puVar8 + 0x37) = 1;
  puVar8[0x39] = 0;
  puVar8[0x3a] = 0;
  *(undefined4 *)(puVar8 + 0x3b) = 0;
  *(undefined8 *)((long)puVar8 + 0x1dc) = 0xffffffff00000001;
  *(undefined4 *)((long)puVar8 + 0x1e4) = 0xfa;
  puVar8[0x3d] = 0;
  puVar8[0x3e] = 0;
  puVar8[0x3f] = 0;
  puVar8[0x40] = 0;
  *(undefined4 *)(puVar8 + 0x41) = 1;
  puVar8[0x42] = &DAT_0061ac58;
  uVar7 = _UNK_005dd2cc;
  uVar6 = _UNK_005dd2c8;
  uVar13 = _UNK_005dd2c4;
  uVar12 = _DAT_005dd2c0;
  *(undefined4 *)(puVar8 + 0x43) = _DAT_005dd2c0;
  *(undefined4 *)((long)puVar8 + 0x21c) = uVar13;
  *(undefined4 *)(puVar8 + 0x44) = uVar6;
  *(undefined4 *)((long)puVar8 + 0x224) = uVar7;
  puVar8[0x45] = 0x600000000;
  puVar8[0x46] = 0x1000001;
  *(undefined4 *)((long)puVar8 + 0x237) = 0;
  *(undefined2 *)((long)puVar8 + 0x23b) = 0x101;
  *(undefined4 *)(puVar8 + 0x48) = 2000;
  puVar8[0x49] = 0;
  *(undefined4 *)(puVar8 + 0x4a) = 0;
  puVar8[0x4d] = 0;
  puVar8[0x4e] = 0;
  puVar8[0x4b] = 0;
  puVar8[0x4c] = 0;
  puVar8[0x4f] = 0;
  *(undefined8 *)((long)puVar8 + 0x1bc) = 0x410cbe4c4071463b;
  *(undefined1 *)((long)puVar8 + 0x1c4) = 1;
  plVar4 = *(long **)(this + 0x1a0);
  *(undefined8 **)(this + 0x1a0) = puVar8;
  if (plVar4 != (long *)0x0) {
    uVar11 = (**(code **)(*plVar4 + 8))();
  }
                    /* try { // try from 002df625 to 002df638 has its CatchHandler @ 002df6ed */
  lookAndFeelChanged(uVar11,CONCAT44(uVar13,uVar12),param_3,this);
  Pimpl::updateText(*(Pimpl **)(this + 0x1a0));
  lVar5 = *(long *)(this + 0x1a0);
  lVar2 = lVar5 + 0x10;
  Value::addListener((Value *)(lVar5 + 0x50),lVar2);
  Value::addListener((Value *)(lVar5 + 0x80),lVar2);
  Value::addListener((Value *)(lVar5 + 0xb0),lVar2);
  return;
}


