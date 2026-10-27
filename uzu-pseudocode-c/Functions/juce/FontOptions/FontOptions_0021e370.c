// Function : FontOptions
// Namespace: juce:FontOptions
// Entry    : 0021e370
// Prototype: undefined FontOptions(FontOptions * this, long * param_1)
// Body     : 0021e370 - 0021e5fe


/* juce::FontOptions::FontOptions(juce::FontOptions const&) */

void __thiscall juce::FontOptions::FontOptions(FontOptions *this,long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
  lVar18 = *param_1;
  *(long *)this = lVar18;
  piVar10 = (int *)(lVar18 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  lVar18 = param_1[1];
  *(long *)(this + 8) = lVar18;
  piVar10 = (int *)(lVar18 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  lVar18 = param_1[2];
  *(long *)(this + 0x10) = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  lVar18 = param_1[4];
  lVar17 = param_1[3];
  uVar15 = lVar18 - lVar17 >> 3;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (lVar18 - lVar17 == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar15;
    if (SUB168(auVar5 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0021e5f5 to 0021e5f9 has its CatchHandler @ 0021e60c */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 0021e3f5 to 0021e3fc has its CatchHandler @ 0021e60c */
    plVar11 = operator_new(SUB168(auVar5 * ZEXT816(8),0));
  }
  *(long **)(this + 0x18) = plVar11;
  *(long **)(this + 0x20) = plVar11;
  *(long **)(this + 0x28) = plVar11 + uVar15;
  plVar3 = (long *)param_1[4];
  for (plVar13 = (long *)param_1[3]; plVar13 != plVar3; plVar13 = plVar13 + 1) {
    lVar18 = *plVar13;
    *plVar11 = lVar18;
    piVar10 = (int *)(lVar18 + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    plVar11 = plVar11 + 1;
  }
  *(long **)(this + 0x20) = plVar11;
  lVar18 = param_1[7];
  lVar17 = param_1[6];
  uVar15 = lVar18 - lVar17 >> 3;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  if (lVar18 - lVar17 == 0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    if (SUB168(auVar6 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0021e5fa to 0021e5fe has its CatchHandler @ 0021e5ff */
      std::__throw_bad_array_new_length();
    }
                    /* try { // try from 0021e47f to 0021e486 has its CatchHandler @ 0021e5ff */
    puVar12 = operator_new(SUB168(auVar6 * ZEXT816(8),0));
  }
  *(undefined8 **)(this + 0x30) = puVar12;
  *(undefined8 **)(this + 0x38) = puVar12;
  *(undefined8 **)(this + 0x40) = puVar12 + uVar15;
  puVar14 = (undefined8 *)param_1[6];
  puVar4 = (undefined8 *)param_1[7];
  if (puVar14 != puVar4) {
    uVar15 = (long)puVar4 + (-8 - (long)puVar14);
    if ((0x17 < uVar15) &&
       ((uVar15 = (uVar15 >> 3) + 1, puVar14 + uVar15 <= puVar12 || (puVar12 + uVar15 <= puVar14))))
    {
      uVar19 = uVar15 & 0xfffffffffffffffc;
      uVar16 = (uVar19 - 4 >> 2) + 1;
      uVar20 = (ulong)((uint)uVar16 & 3);
      if (uVar19 - 4 < 0xc) {
        lVar18 = 0;
      }
      else {
        uVar16 = uVar16 & 0xfffffffffffffffc;
        lVar18 = 0;
        do {
          uVar7 = (puVar14 + lVar18)[1];
          uVar8 = puVar14[lVar18 + 2];
          uVar9 = (puVar14 + lVar18 + 2)[1];
          puVar12[lVar18] = puVar14[lVar18];
          (puVar12 + lVar18)[1] = uVar7;
          puVar12[lVar18 + 2] = uVar8;
          (puVar12 + lVar18 + 2)[1] = uVar9;
          uVar7 = (puVar14 + lVar18 + 4)[1];
          uVar8 = puVar14[lVar18 + 6];
          uVar9 = (puVar14 + lVar18 + 6)[1];
          puVar12[lVar18 + 4] = puVar14[lVar18 + 4];
          (puVar12 + lVar18 + 4)[1] = uVar7;
          puVar12[lVar18 + 6] = uVar8;
          (puVar12 + lVar18 + 6)[1] = uVar9;
          uVar7 = (puVar14 + lVar18 + 8)[1];
          uVar8 = puVar14[lVar18 + 10];
          uVar9 = (puVar14 + lVar18 + 10)[1];
          puVar12[lVar18 + 8] = puVar14[lVar18 + 8];
          (puVar12 + lVar18 + 8)[1] = uVar7;
          puVar12[lVar18 + 10] = uVar8;
          (puVar12 + lVar18 + 10)[1] = uVar9;
          uVar7 = (puVar14 + lVar18 + 0xc)[1];
          uVar8 = puVar14[lVar18 + 0xe];
          uVar9 = (puVar14 + lVar18 + 0xe)[1];
          puVar12[lVar18 + 0xc] = puVar14[lVar18 + 0xc];
          (puVar12 + lVar18 + 0xc)[1] = uVar7;
          puVar12[lVar18 + 0xe] = uVar8;
          (puVar12 + lVar18 + 0xe)[1] = uVar9;
          lVar18 = lVar18 + 0x10;
          uVar16 = uVar16 - 4;
        } while (uVar16 != 0);
      }
      if (uVar20 != 0) {
        lVar17 = 0;
        do {
          puVar2 = (undefined8 *)((long)puVar14 + lVar17 + lVar18 * 8);
          uVar7 = puVar2[1];
          puVar1 = (undefined8 *)((long)puVar14 + lVar17 + lVar18 * 8 + 0x10);
          uVar8 = *puVar1;
          uVar9 = puVar1[1];
          puVar1 = (undefined8 *)((long)puVar12 + lVar17 + lVar18 * 8);
          *puVar1 = *puVar2;
          puVar1[1] = uVar7;
          puVar1 = (undefined8 *)((long)puVar12 + lVar17 + lVar18 * 8 + 0x10);
          *puVar1 = uVar8;
          puVar1[1] = uVar9;
          lVar17 = lVar17 + 0x20;
        } while (uVar20 * 0x20 != lVar17);
      }
      puVar12 = puVar12 + uVar19;
      if (uVar15 == uVar19) goto LAB_0021e5d3;
      puVar14 = puVar14 + uVar19;
    }
    do {
      *puVar12 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar12 = puVar12 + 1;
    } while (puVar14 != puVar4);
  }
LAB_0021e5d3:
  *(undefined8 **)(this + 0x38) = puVar12;
  lVar18 = param_1[10];
  uVar7 = *(undefined8 *)((long)param_1 + 0x56);
  uVar8 = *(undefined8 *)((long)param_1 + 0x5e);
  *(long *)(this + 0x48) = param_1[9];
  *(long *)(this + 0x50) = lVar18;
  *(undefined8 *)(this + 0x56) = uVar7;
  *(undefined8 *)(this + 0x5e) = uVar8;
  return;
}


