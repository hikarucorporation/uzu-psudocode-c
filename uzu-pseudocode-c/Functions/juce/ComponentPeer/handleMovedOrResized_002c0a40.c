// Function : handleMovedOrResized
// Namespace: juce:ComponentPeer
// Entry    : 002c0a40
// Prototype: undefined handleMovedOrResized(ComponentPeer * this)
// Body     : 002c0a40 - 002c0e84


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ComponentPeer::handleMovedOrResized() */

void __thiscall juce::ComponentPeer::handleMovedOrResized(ComponentPeer *this)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  ComponentPeer CVar7;
  char cVar8;
  long *plVar9;
  undefined4 uVar10;
  double dVar12;
  undefined1 auVar11 [16];
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar20;
  double dVar19;
  undefined1 auVar18 [16];
  float fVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  double local_58;
  double dStack_50;
  undefined1 local_40 [16];
  
  CVar7 = (ComponentPeer)(**(code **)(*(long *)this + 0x78))();
  if ((CVar7 != (ComponentPeer)0x0) ||
     (lVar1 = *(long *)(this + 8), (*(ushort *)(lVar1 + 0xe8) & 1) == 0)) goto LAB_002c0de6;
  plVar9 = *(long **)(lVar1 + 0xd8);
  if (plVar9 == (long *)0x0) {
    plVar9 = operator_new(0x18);
    *(undefined4 *)(plVar9 + 1) = 0;
    *plVar9 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar9[2] = lVar1;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(lVar1 + 0xd8);
    *(long **)(lVar1 + 0xd8) = plVar9;
    if (plVar2 == (long *)0x0) goto LAB_002c0a86;
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar9 = *(long **)(lVar1 + 0xd8);
    if (plVar9 != (long *)0x0) goto LAB_002c0a86;
    plVar9 = (long *)0x0;
  }
  else {
LAB_002c0a86:
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  plVar2 = *(long **)(this + 8);
                    /* try { // try from 002c0a93 to 002c0a98 has its CatchHandler @ 002c0e8d */
  auVar25 = (**(code **)(*(long *)this + 0x48))(this);
  local_40._8_8_ = auVar25._8_8_;
  pfVar3 = (float *)plVar2[10];
  auVar16 = auVar25;
  if (pfVar3 != (float *)0x0) {
    local_70 = *pfVar3;
    local_6c = pfVar3[1];
    local_68 = pfVar3[2];
    local_64 = pfVar3[3];
    local_60 = pfVar3[4];
    local_5c = pfVar3[5];
    fVar21 = local_70 * local_60 - local_64 * local_6c;
    dVar22 = (double)fVar21;
    uVar23 = _DAT_005d91b0 & SUB84(dVar22,0);
    uVar24 = _UNK_005d91b4 & (uint)((ulong)dVar22 >> 0x20);
    if ((double)CONCAT44(uVar24,uVar23) == DAT_005d94e0) {
      if ((fVar21 != 0.0) || (NAN(fVar21))) goto LAB_002c0b28;
    }
    else if ((DAT_005db368 < (double)CONCAT44(uVar24,uVar23)) &&
            (DAT_005db370 * (double)CONCAT44(uVar24,uVar23) < (double)CONCAT44(uVar24,uVar23))) {
LAB_002c0b28:
      dVar22 = _DAT_005d9000 / dVar22;
      dVar14 = (double)local_60;
      local_64 = (float)((double)(float)((uint)local_64 ^ _DAT_006524b0) * dVar22);
      local_6c = (float)((double)(float)((uint)local_6c ^ _DAT_006524b0) * dVar22);
      local_60 = (float)((double)local_70 * dVar22);
      fVar21 = (float)((uint)local_68 ^ _DAT_006524b0);
      local_68 = fVar21 * (float)(dVar14 * dVar22) - local_5c * local_6c;
      local_5c = fVar21 * local_64 - local_5c * local_60;
      local_70 = (float)(dVar14 * dVar22);
    }
    local_40 = auVar25;
    auVar25 = Rectangle<int>::transformedBy((Rectangle<int> *)local_40,&local_70);
    auVar16._8_8_ = auVar25._8_8_;
    auVar16._0_8_ = local_40._0_8_;
  }
  dStack_50 = auVar16._8_8_;
  local_40._0_8_ = auVar16._0_8_;
  local_58 = auVar25._0_8_;
                    /* try { // try from 002c0c66 to 002c0c6e has its CatchHandler @ 002c0e85 */
  auVar25._0_4_ = (float)(**(code **)(*plVar2 + 0x88))(plVar2);
  dVar22 = (double)((ulong)local_58 >> 0x20);
  fVar21 = (float)(_DAT_005d91c0 & (uint)auVar25._0_4_);
  iVar20 = (int)((ulong)dStack_50 >> 0x20);
  if (fVar21 == DAT_005d94c8) {
    if ((auVar25._0_4_ == DAT_005d9038) && (!NAN(auVar25._0_4_) && !NAN(DAT_005d9038)))
    goto LAB_002c0d28;
LAB_002c0cd3:
    auVar15._0_4_ = (float)SUB84(local_58,0);
    auVar15._4_4_ = (float)SUB84(dStack_50,0);
    auVar15._8_4_ = 0;
    auVar15._12_4_ = (float)iVar20;
    auVar25._4_4_ = auVar25._0_4_;
    auVar25._8_4_ = auVar25._0_4_;
    auVar25._12_4_ = auVar25._0_4_;
    auVar16 = divps(auVar15,auVar25);
    auVar17._0_4_ = (float)(int)((ulong)local_58 >> 0x20);
    auVar17._4_4_ = (float)iVar20;
    auVar17._8_8_ = 0;
    auVar25 = divps(auVar17,auVar25);
    dVar22 = (double)auVar25._0_4_ + _DAT_005d9a90;
    dVar12 = (double)auVar25._4_4_ + _UNK_005d9a98;
    dVar14 = (double)auVar16._0_4_ + _DAT_005d9a90;
    dVar19 = (double)auVar16._4_4_ + _UNK_005d9a98;
  }
  else {
    fVar13 = (float)((uint)(auVar25._0_4_ + DAT_005d9054) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar13) {
      fVar5 = DAT_005d9038;
      if (DAT_005d9038 <= fVar21) {
        fVar5 = fVar21;
      }
      if (fVar5 * DAT_005d94d0 < fVar13) goto LAB_002c0cd3;
    }
LAB_002c0d28:
    dVar12 = (double)((ulong)dStack_50 >> 0x20);
    dVar14 = local_58;
    dVar19 = dStack_50;
  }
  auVar11._0_8_ = (long)dVar22 << 0x20;
  auVar11._8_8_ = (long)dVar12 << 0x20;
  auVar18._0_8_ = (ulong)dVar14 & _DAT_005d9aa0;
  auVar18._8_8_ = (ulong)dVar19 & _UNK_005d9aa8;
  auVar18 = auVar18 | auVar11;
  lVar1 = *(long *)(this + 8);
  lVar4 = *(long *)(lVar1 + 0x38);
  if ((int)*(undefined8 *)(lVar1 + 0x40) == auVar18._8_4_) {
    iVar20 = (int)((ulong)*(undefined8 *)(lVar1 + 0x40) >> 0x20);
    if ((lVar4 != auVar18._0_8_) || (iVar20 != auVar18._12_4_)) {
      *(undefined1 (*) [16])(lVar1 + 0x38) = auVar18;
      if (iVar20 != auVar18._12_4_) goto LAB_002c0d98;
      uVar10 = 0;
      goto LAB_002c0daf;
    }
    if (plVar9 == (long *)0x0) goto LAB_002c0de6;
  }
  else {
    *(undefined1 (*) [16])(lVar1 + 0x38) = auVar18;
LAB_002c0d98:
    uVar10 = 1;
                    /* try { // try from 002c0da3 to 002c0dc4 has its CatchHandler @ 002c0e8f */
    Component::internalRepaintUnchecked
              (*(long *)(this + 8),0,*(ulong *)(*(long *)(this + 8) + 0x40),'\x01');
LAB_002c0daf:
    Component::sendMovedResizedMessages(*(Component **)(this + 8),lVar4 != auVar18._0_8_,uVar10);
    if (plVar9 == (long *)0x0) {
      return;
    }
    if (plVar9[2] == 0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002c0e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 8))(plVar9);
        return;
      }
      return;
    }
  }
  LOCK();
  plVar2 = plVar9 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)(*plVar9 + 8))(plVar9);
  }
LAB_002c0de6:
  if (this[0xb8] != CVar7) {
    this[0xb8] = CVar7;
    (**(code **)(**(long **)(this + 8) + 0x80))(*(long **)(this + 8),CVar7);
    Component::sendVisibilityChangeMessage(*(Component **)(this + 8));
  }
  cVar8 = (**(code **)(*(long *)this + 0x90))(this);
  if (((cVar8 == '\0') &&
      (cVar8 = (**(code **)(*(long *)this + 0x98))(this), CVar7 == (ComponentPeer)0x0)) &&
     (cVar8 == '\0')) {
    uVar6 = *(undefined8 *)(*(long *)(this + 8) + 0x40);
    *(undefined8 *)(this + 0x14) = *(undefined8 *)(*(long *)(this + 8) + 0x38);
    *(undefined8 *)(this + 0x1c) = uVar6;
  }
  return;
}


