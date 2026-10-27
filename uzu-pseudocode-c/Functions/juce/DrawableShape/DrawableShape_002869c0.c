// Function : DrawableShape
// Namespace: juce:DrawableShape
// Entry    : 002869c0
// Prototype: undefined DrawableShape(DrawableShape * this, long param_1)
// Body     : 002869c0 - 00286c80


/* juce::DrawableShape::DrawableShape(juce::DrawableShape const&) */

void __thiscall juce::DrawableShape::DrawableShape(DrawableShape *this,long param_1)

{
  uint uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  Drawable::Drawable((Drawable *)this,param_1);
  *(undefined ***)this = &PTR__DrawableShape_00708260;
  *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  uVar1 = *(uint *)(param_1 + 0x17c);
  if (0 < (int)uVar1) {
    pvVar2 = *(void **)(param_1 + 0x170);
    uVar8 = uVar1 + (uVar1 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar8 < 1) {
      pvVar6 = (void *)0x0;
    }
    else {
      pvVar6 = malloc((ulong)uVar8 << 2);
      *(void **)(this + 0x170) = pvVar6;
    }
    *(uint *)(this + 0x178) = uVar8;
    memcpy(pvVar6,pvVar2,(ulong)uVar1 * 4);
  }
  *(uint *)(this + 0x17c) = uVar1;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  this[0x1a0] = (DrawableShape)0x1;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  this[0x1c8] = (DrawableShape)0x1;
  *(undefined4 *)(this + 0x1d0) = *(undefined4 *)(param_1 + 0x1d0);
  puVar3 = *(undefined8 **)(param_1 + 0x1d8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 00286abd to 00286ac6 has its CatchHandler @ 00286c92 */
    puVar7 = operator_new(0x28);
    *puVar7 = *puVar3;
    puVar7[1] = puVar3[1];
    *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar3 + 2);
    puVar7[3] = 0;
    puVar7[4] = 0;
    uVar1 = *(uint *)((long)puVar3 + 0x24);
    if (0 < (int)uVar1) {
      pvVar2 = (void *)puVar3[3];
      uVar8 = (uVar1 >> 1) + uVar1 + 8 & 0xfffffff8;
      if ((int)uVar8 < 1) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = malloc((ulong)uVar8 << 4);
        puVar7[3] = pvVar6;
      }
      *(uint *)(puVar7 + 4) = uVar8;
      memcpy(pvVar6,pvVar2,(ulong)uVar1 << 4);
    }
    *(uint *)((long)puVar7 + 0x24) = uVar1;
  }
  *(undefined8 **)(this + 0x1d8) = puVar7;
  lVar4 = *(long *)(param_1 + 0x1e0);
  *(long *)(this + 0x1e0) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(this + 0x1f8) = *(undefined8 *)(param_1 + 0x1f8);
  uVar5 = *(undefined8 *)(param_1 + 0x1f0);
  *(undefined8 *)(this + 0x1e8) = *(undefined8 *)(param_1 + 0x1e8);
  *(undefined8 *)(this + 0x1f0) = uVar5;
  *(undefined4 *)(this + 0x200) = *(undefined4 *)(param_1 + 0x200);
  puVar3 = *(undefined8 **)(param_1 + 0x208);
  if (puVar3 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 00286bab to 00286bb4 has its CatchHandler @ 00286c81 */
    puVar7 = operator_new(0x28);
    *puVar7 = *puVar3;
    puVar7[1] = puVar3[1];
    *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(puVar3 + 2);
    puVar7[3] = 0;
    puVar7[4] = 0;
    uVar1 = *(uint *)((long)puVar3 + 0x24);
    if (0 < (int)uVar1) {
      pvVar2 = (void *)puVar3[3];
      uVar8 = (uVar1 >> 1) + uVar1 + 8 & 0xfffffff8;
      if ((int)uVar8 < 1) {
        pvVar6 = (void *)0x0;
      }
      else {
        pvVar6 = malloc((ulong)uVar8 << 4);
        puVar7[3] = pvVar6;
      }
      *(uint *)(puVar7 + 4) = uVar8;
      memcpy(pvVar6,pvVar2,(ulong)uVar1 << 4);
    }
    *(uint *)((long)puVar7 + 0x24) = uVar1;
  }
  *(undefined8 **)(this + 0x208) = puVar7;
  lVar4 = *(long *)(param_1 + 0x210);
  *(long *)(this + 0x210) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(this + 0x228) = *(undefined8 *)(param_1 + 0x228);
  uVar5 = *(undefined8 *)(param_1 + 0x220);
  *(undefined8 *)(this + 0x218) = *(undefined8 *)(param_1 + 0x218);
  *(undefined8 *)(this + 0x220) = uVar5;
  return;
}


