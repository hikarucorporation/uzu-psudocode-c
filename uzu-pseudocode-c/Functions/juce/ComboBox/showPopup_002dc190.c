// Function : showPopup
// Namespace: juce:ComboBox
// Entry    : 002dc190
// Prototype: undefined showPopup(ComboBox * this)
// Body     : 002dc190 - 002dc759


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::ComboBox::showPopup() */

void __thiscall juce::ComboBox::showPopup(ComboBox *this)

{
  uint uVar1;
  long *plVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [14];
  undefined1 auVar12 [15];
  undefined1 auVar13 [14];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  undefined1 auVar18 [15];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  unkuint9 Var23;
  undefined1 auVar24 [15];
  undefined1 auVar25 [11];
  undefined1 auVar26 [15];
  undefined1 auVar27 [14];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [11];
  undefined1 auVar31 [15];
  undefined1 auVar32 [14];
  uint6 uVar33;
  undefined8 __ptr;
  undefined1 auVar34 [16];
  ulong uVar35;
  int *piVar36;
  ComboBox *pCVar37;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar38;
  long *plVar39;
  undefined8 *puVar40;
  ulong uVar41;
  int iVar42;
  long lVar43;
  Item *this_01;
  undefined1 *puVar44;
  long lVar45;
  ulong uVar46;
  int iVar47;
  uint uVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  undefined1 auVar56 [15];
  undefined1 auVar57 [15];
  undefined1 local_a8 [16];
  long *local_98;
  long local_88;
  MenuItemIterator local_80 [8];
  undefined4 *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  pCVar37 = this;
  do {
    if ((*(ushort *)(pCVar37 + 0xe8) & 0x8000) != 0) {
      return;
    }
    pCVar37 = *(ComboBox **)(pCVar37 + 0x30);
  } while (pCVar37 != (ComboBox *)0x0);
  if (this[0x185] == (ComboBox)0x0) {
    this[0x185] = (ComboBox)0x1;
  }
  local_a8 = (undefined1  [16])0x0;
  plVar39 = *(long **)(this + 0x138);
  uVar1 = *(uint *)(this + 0x144);
  if ((int)uVar1 < 1) {
    lVar45 = 0;
    iVar47 = 0;
  }
  else {
    uVar48 = uVar1 + (uVar1 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar48 < 1) {
      lVar45 = 0;
      iVar47 = 0;
    }
    else {
      ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection>::setAllocatedSizeInternal
                ((ArrayBase<juce::PopupMenu::Item,juce::DummyCriticalSection> *)local_a8,uVar48);
      lVar45 = local_a8._0_8_;
      iVar47 = local_a8._12_4_;
    }
    local_a8._8_4_ = uVar48;
  }
  iVar42 = uVar1 + 1;
  this_01 = (Item *)((long)iVar47 * 0x70 + lVar45);
  while (auVar34 = local_a8, iVar42 = iVar42 + -1, 0 < iVar42) {
                    /* try { // try from 002dc24f to 002dc256 has its CatchHandler @ 002dc7db */
    PopupMenu::Item::Item(this_01,plVar39);
    this_01 = this_01 + 0x70;
    plVar39 = plVar39 + 0xe;
  }
  iVar47 = uVar1 + local_a8._12_4_;
  local_a8._12_4_ = iVar47;
  local_98 = *(long **)(this + 0x148);
  if (local_98 != (long *)0x0) {
    LOCK();
    *(int *)(local_98 + 1) = (int)local_98[1] + 1;
    UNLOCK();
  }
  if (iVar47 == 0) {
LAB_002dc450:
    local_88 = *(long *)(this + 0x1c8);
    piVar36 = (int *)(local_88 + -0x10);
    if (piVar36 != &emptyString) {
      LOCK();
      *piVar36 = *piVar36 + 1;
      UNLOCK();
    }
                    /* try { // try from 002dc470 to 002dc486 has its CatchHandler @ 002dc77a */
    PopupMenu::addItem((PopupMenu *)local_a8,1,&local_88,0,0);
    piVar36 = (int *)(local_88 + -0x10);
    if (piVar36 != &emptyString) {
      LOCK();
      iVar47 = *piVar36;
      *piVar36 = *piVar36 + -1;
      UNLOCK();
      if (iVar47 == 0) {
        operator_delete__(piVar36);
      }
    }
  }
  else {
    local_a8._0_8_ = auVar34._0_8_;
    uVar35 = (long)iVar47 * 0x70 - 0x70;
    iVar42 = 0;
    lVar45 = local_a8._0_8_;
    if (uVar35 < 0x310) {
LAB_002dc39e:
      do {
        iVar42 = iVar42 + (*(byte *)(lVar45 + 0x66) ^ 1);
        lVar45 = lVar45 + 0x70;
      } while (lVar45 != local_a8._0_8_ + (long)iVar47 * 0x70);
    }
    else {
      uVar41 = uVar35 / 0x70 + 1;
      uVar46 = uVar41 & 0xfffffffffffffff8;
      puVar44 = (undefined1 *)(local_a8._0_8_ + 0x376);
      iVar52 = 0;
      iVar53 = 0;
      iVar54 = 0;
      iVar55 = 0;
      iVar42 = 0;
      iVar49 = 0;
      iVar50 = 0;
      iVar51 = 0;
      uVar35 = uVar46;
      do {
        auVar56 = ZEXT415(CONCAT22(CONCAT11(puVar44[-0x1c0],puVar44[-0x230]),
                                   CONCAT11(puVar44[-0x2a0],puVar44[-0x310]))) ^ DAT_005dcdf0._0_15_
        ;
        auVar57 = ZEXT415(CONCAT22(CONCAT11(*puVar44,puVar44[-0x70]),
                                   CONCAT11(puVar44[-0xe0],puVar44[-0x150]))) ^ DAT_005dcdf0._0_15_;
        auVar3[0xd] = 0;
        auVar3._0_13_ = auVar56._0_13_;
        auVar3[0xe] = auVar56[7];
        auVar6[0xc] = auVar56[6];
        auVar6._0_12_ = auVar56._0_12_;
        auVar6._13_2_ = auVar3._13_2_;
        auVar8[0xb] = 0;
        auVar8._0_11_ = auVar56._0_11_;
        auVar8._12_3_ = auVar6._12_3_;
        auVar10[10] = auVar56[5];
        auVar10._0_10_ = auVar56._0_10_;
        auVar10._11_4_ = auVar8._11_4_;
        auVar14[9] = 0;
        auVar14._0_9_ = auVar56._0_9_;
        auVar14._10_5_ = auVar10._10_5_;
        auVar16[8] = auVar56[4];
        auVar16._0_8_ = auVar56._0_8_;
        auVar16._9_6_ = auVar14._9_6_;
        auVar22._7_8_ = 0;
        auVar22._0_7_ = auVar16._8_7_;
        Var23 = CONCAT81(SUB158(auVar22 << 0x40,7),auVar56[3]);
        auVar24._9_6_ = 0;
        auVar24._0_9_ = Var23;
        auVar25._1_10_ = SUB1510(auVar24 << 0x30,5);
        auVar25[0] = auVar56[2];
        auVar26._11_4_ = 0;
        auVar26._0_11_ = auVar25;
        auVar18[2] = auVar56[1];
        auVar18._0_2_ = auVar56._0_2_;
        auVar18._3_12_ = SUB1512(auVar26 << 0x20,3);
        auVar20._2_13_ = auVar18._2_13_;
        auVar20._0_2_ = auVar56._0_2_ & 0xff;
        auVar4._10_2_ = 0;
        auVar4._0_10_ = auVar20._0_10_;
        auVar4._12_2_ = (short)Var23;
        uVar33 = CONCAT42(auVar4._10_4_,auVar25._0_2_);
        auVar27._6_8_ = 0;
        auVar27._0_6_ = uVar33;
        auVar11._4_2_ = auVar18._2_2_;
        auVar11._0_4_ = auVar20._0_4_;
        auVar11._6_8_ = SUB148(auVar27 << 0x40,6);
        iVar52 = iVar52 + (auVar20._0_4_ & 0xffff);
        iVar53 = iVar53 + auVar11._4_4_;
        iVar54 = iVar54 + (int)uVar33;
        iVar55 = iVar55 + (auVar4._10_4_ >> 0x10);
        auVar56[0xd] = 0;
        auVar56._0_13_ = auVar57._0_13_;
        auVar56[0xe] = auVar57[7];
        auVar7[0xc] = auVar57[6];
        auVar7._0_12_ = auVar57._0_12_;
        auVar7._13_2_ = auVar56._13_2_;
        auVar9[0xb] = 0;
        auVar9._0_11_ = auVar57._0_11_;
        auVar9._12_3_ = auVar7._12_3_;
        auVar12[10] = auVar57[5];
        auVar12._0_10_ = auVar57._0_10_;
        auVar12._11_4_ = auVar9._11_4_;
        auVar15[9] = 0;
        auVar15._0_9_ = auVar57._0_9_;
        auVar15._10_5_ = auVar12._10_5_;
        auVar17[8] = auVar57[4];
        auVar17._0_8_ = auVar57._0_8_;
        auVar17._9_6_ = auVar15._9_6_;
        auVar28._7_8_ = 0;
        auVar28._0_7_ = auVar17._8_7_;
        Var23 = CONCAT81(SUB158(auVar28 << 0x40,7),auVar57[3]);
        auVar29._9_6_ = 0;
        auVar29._0_9_ = Var23;
        auVar30._1_10_ = SUB1510(auVar29 << 0x30,5);
        auVar30[0] = auVar57[2];
        auVar31._11_4_ = 0;
        auVar31._0_11_ = auVar30;
        auVar19[2] = auVar57[1];
        auVar19._0_2_ = auVar57._0_2_;
        auVar19._3_12_ = SUB1512(auVar31 << 0x20,3);
        auVar21._2_13_ = auVar19._2_13_;
        auVar21._0_2_ = auVar57._0_2_ & 0xff;
        auVar5._10_2_ = 0;
        auVar5._0_10_ = auVar21._0_10_;
        auVar5._12_2_ = (short)Var23;
        uVar33 = CONCAT42(auVar5._10_4_,auVar30._0_2_);
        auVar32._6_8_ = 0;
        auVar32._0_6_ = uVar33;
        auVar13._4_2_ = auVar19._2_2_;
        auVar13._0_4_ = auVar21._0_4_;
        auVar13._6_8_ = SUB148(auVar32 << 0x40,6);
        iVar42 = iVar42 + (auVar21._0_4_ & 0xffff);
        iVar49 = iVar49 + auVar13._4_4_;
        iVar50 = iVar50 + (int)uVar33;
        iVar51 = iVar51 + (auVar5._10_4_ >> 0x10);
        puVar44 = puVar44 + 0x380;
        uVar35 = uVar35 - 8;
      } while (uVar35 != 0);
      iVar42 = iVar51 + iVar55 + iVar49 + iVar53 + iVar50 + iVar54 + iVar42 + iVar52;
      if (uVar41 != uVar46) {
        lVar45 = uVar46 * 0x70 + local_a8._0_8_;
        goto LAB_002dc39e;
      }
    }
    if (iVar42 == 0) goto LAB_002dc450;
    iVar47 = getSelectedId(this);
    local_80[0] = (MenuItemIterator)0x1;
    local_78 = malloc(0x20);
    local_58 = (long *)0x0;
    local_70 = (long *)&DAT_100000008;
    *local_78 = 0;
    local_68 = malloc(0x40);
    local_60 = (long *)&DAT_100000008;
    *local_68 = (long)local_a8;
    while (uVar35 = PopupMenu::MenuItemIterator::next(local_80), (char)uVar35 != '\0') {
      if ((int)local_58[1] != 0) {
        *(bool *)((long)local_58 + 0x65) = (int)local_58[1] == iVar47;
      }
    }
    free(local_68);
    free(local_78);
  }
  pCVar37 = this;
  do {
    if ((*(long *)(pCVar37 + 0x68) != 0) &&
       (pLVar38 = *(LookAndFeel_V4 **)(*(long *)(pCVar37 + 0x68) + 0x10),
       pLVar38 != (LookAndFeel_V4 *)0x0)) {
      plVar39 = *(long **)(pLVar38 + 0x120);
      goto joined_r0x002dc4f5;
    }
    pCVar37 = *(ComboBox **)(pCVar37 + 0x30);
  } while (pCVar37 != (ComboBox *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002dc509 to 002dc512 has its CatchHandler @ 002dc76d */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002dc516 to 002dc51d has its CatchHandler @ 002dc75a */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar38 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  plVar39 = *(long **)(pLVar38 + 0x120);
joined_r0x002dc4f5:
  if (plVar39 == (long *)0x0) {
                    /* try { // try from 002dc53c to 002dc545 has its CatchHandler @ 002dc775 */
    plVar39 = operator_new(0x18);
    *(undefined4 *)(plVar39 + 1) = 0;
    *plVar39 = (long)&PTR__ReferenceCountedObject_00710ff8;
    plVar39[2] = (long)pLVar38;
    LOCK();
    *(int *)(plVar39 + 1) = (int)plVar39[1] + 1;
    UNLOCK();
    plVar2 = *(long **)(pLVar38 + 0x120);
    *(long **)(pLVar38 + 0x120) = plVar39;
    if (plVar2 == (long *)0x0) goto LAB_002dc590;
    LOCK();
    plVar39 = plVar2 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_98;
    plVar39 = *(long **)(pLVar38 + 0x120);
    if (plVar39 != (long *)0x0) goto LAB_002dc590;
    local_98 = (long *)0x0;
    plVar39 = local_98;
  }
  else {
LAB_002dc590:
    LOCK();
    *(int *)(plVar39 + 1) = (int)plVar39[1] + 1;
    UNLOCK();
    plVar2 = local_98;
  }
  local_98 = plVar39;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar39 = plVar2 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
                    /* try { // try from 002dc5c0 to 002dc5cd has its CatchHandler @ 002dc7b9 */
  (**(code **)(*(long *)(pLVar38 + 0x48) + 0x30))
            (local_80,pLVar38 + 0x48,this,*(undefined8 *)(this + 0x1b8));
  puVar40 = *(undefined8 **)(this + 0xd8);
  if (puVar40 == (undefined8 *)0x0) {
                    /* try { // try from 002dc6de to 002dc6e7 has its CatchHandler @ 002dc7be */
    puVar40 = operator_new(0x18);
    *(undefined4 *)(puVar40 + 1) = 0;
    *puVar40 = &PTR__ReferenceCountedObject_00714b80;
    puVar40[2] = this;
    LOCK();
    *(int *)(puVar40 + 1) = *(int *)(puVar40 + 1) + 1;
    UNLOCK();
    plVar39 = *(long **)(this + 0xd8);
    *(undefined8 **)(this + 0xd8) = puVar40;
    if (plVar39 != (long *)0x0) {
      LOCK();
      plVar2 = plVar39 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar39 + 8))();
      }
      puVar40 = *(undefined8 **)(this + 0xd8);
      if (puVar40 == (undefined8 *)0x0) {
        puVar40 = (undefined8 *)0x0;
        goto LAB_002dc5e3;
      }
    }
  }
  LOCK();
  *(int *)(puVar40 + 1) = *(int *)(puVar40 + 1) + 1;
  UNLOCK();
LAB_002dc5e3:
                    /* try { // try from 002dc5e3 to 002dc5ec has its CatchHandler @ 002dc79f */
  plVar39 = operator_new(0x18);
  *plVar39 = (long)&PTR__Callable_00711390;
  plVar39[1] = (long)comboBoxPopupMenuFinishedCallback;
  plVar39[2] = (long)puVar40;
                    /* try { // try from 002dc606 to 002dc615 has its CatchHandler @ 002dc7be */
  PopupMenu::showWithOptionalCallback((long *)local_a8,(undefined8 *)local_80,plVar39);
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar39 = local_58 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)(*local_58 + 8))();
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar39 = local_60 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)(*local_60 + 8))();
    }
  }
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar39 = local_68 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)(*local_68 + 8))();
    }
  }
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar39 = local_70 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)(*local_70 + 8))();
    }
  }
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar39 = local_98 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)(*local_98 + 8))();
    }
  }
  if (0 < (int)local_a8._12_4_) {
    lVar45 = 0;
    lVar43 = 0;
    do {
      PopupMenu::Item::~Item((Item *)(local_a8._0_8_ + lVar45));
      lVar43 = lVar43 + 1;
      lVar45 = lVar45 + 0x70;
    } while (lVar43 < (int)local_a8._12_4_);
  }
  local_a8._12_4_ = 0;
  auVar34 = local_a8;
  __ptr = local_a8._0_8_;
  local_a8 = auVar34;
  free((void *)__ptr);
  return;
}


