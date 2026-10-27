// Function : getAllComponents
// Namespace: juce:KeyboardFocusTraverser
// Entry    : 00226180
// Prototype: vector<juce::Component*,std::allocator<juce::Component*>> * getAllComponents(vector<juce::Component*,std::allocator<juce::Component*>> * param_1, undefined8 param_2, long param_3)
// Body     : 00226180 - 002265a3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::KeyboardFocusTraverser::getAllComponents(juce::Component*) */

vector<juce::Component*,std::allocator<juce::Component*>> * __cdecl
juce::KeyboardFocusTraverser::getAllComponents
          (vector<juce::Component*,std::allocator<juce::Component*>> *param_1,undefined8 param_2,
          long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* try { // try from 0022619d to 002261b3 has its CatchHandler @ 002265a4 */
  detail::FocusHelpers::findAllComponents(param_3,param_1,Component::isKeyboardFocusContainer,1);
  plVar12 = *(long **)param_1;
  plVar13 = *(long **)(param_1 + 8);
  uVar20 = (long)plVar13 - (long)plVar12;
  plVar21 = plVar12;
  uVar10 = uVar20;
  if (0x1f < (long)uVar20) {
    uVar10 = uVar20 >> 5;
    do {
      lVar11 = *plVar21;
      if ((*(ushort *)(lVar11 + 0xe8) & 0x8020) != 0x20) goto LAB_00226366;
      do {
        if (lVar11 == 0) goto LAB_00226366;
        lVar11 = *(long *)(lVar11 + 0x30);
      } while (lVar11 != param_3);
      lVar11 = plVar21[1];
      plVar9 = plVar21 + 1;
      if ((*(ushort *)(lVar11 + 0xe8) & 0x8020) != 0x20) {
LAB_00226363:
        plVar21 = plVar9;
        goto LAB_00226366;
      }
      do {
        if (lVar11 == 0) goto LAB_00226363;
        lVar11 = *(long *)(lVar11 + 0x30);
      } while (lVar11 != param_3);
      lVar11 = plVar21[2];
      plVar9 = plVar21 + 2;
      if ((*(ushort *)(lVar11 + 0xe8) & 0x8020) != 0x20) goto LAB_00226363;
      do {
        if (lVar11 == 0) goto LAB_00226363;
        lVar11 = *(long *)(lVar11 + 0x30);
      } while (lVar11 != param_3);
      lVar11 = plVar21[3];
      plVar9 = plVar21 + 3;
      if ((*(ushort *)(lVar11 + 0xe8) & 0x8020) != 0x20) goto LAB_00226363;
      do {
        if (lVar11 == 0) goto LAB_00226363;
        lVar11 = *(long *)(lVar11 + 0x30);
      } while (lVar11 != param_3);
      plVar21 = plVar21 + 4;
      bVar3 = 1 < (long)uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar3);
    uVar10 = (long)plVar13 - (long)plVar21;
  }
  lVar11 = (long)uVar10 >> 3;
  if (lVar11 == 1) {
LAB_00226332:
    lVar11 = *plVar21;
    if ((*(ushort *)(lVar11 + 0xe8) & 0x8020) != 0x20) goto LAB_00226366;
    do {
      if (lVar11 == 0) goto LAB_00226366;
      lVar11 = *(long *)(lVar11 + 0x30);
    } while (lVar11 != param_3);
LAB_0022635e:
    plVar21 = plVar13;
  }
  else {
    if (lVar11 == 2) {
LAB_00226302:
      lVar11 = *plVar21;
      if ((*(ushort *)(lVar11 + 0xe8) & 0x8020) == 0x20) {
        do {
          if (lVar11 == 0) goto LAB_00226366;
          lVar11 = *(long *)(lVar11 + 0x30);
        } while (lVar11 != param_3);
        plVar21 = plVar21 + 1;
        goto LAB_00226332;
      }
    }
    else {
      if (lVar11 != 3) goto LAB_0022635e;
      lVar11 = *plVar21;
      if ((*(ushort *)(lVar11 + 0xe8) & 0x8020) == 0x20) {
        do {
          if (lVar11 == 0) goto LAB_00226366;
          lVar11 = *(long *)(lVar11 + 0x30);
        } while (lVar11 != param_3);
        plVar21 = plVar21 + 1;
        goto LAB_00226302;
      }
    }
LAB_00226366:
    if ((plVar21 != plVar13) && (plVar9 = plVar21 + 1, plVar9 != plVar13)) {
      do {
        lVar11 = *plVar9;
        if ((*(ushort *)(lVar11 + 0xe8) & 0x8020) == 0x20) {
          lVar19 = lVar11;
          do {
            if (lVar19 == 0) goto LAB_00226380;
            lVar19 = *(long *)(lVar19 + 0x30);
          } while (lVar19 != param_3);
          *plVar21 = lVar11;
          plVar21 = plVar21 + 1;
        }
LAB_00226380:
        plVar9 = plVar9 + 1;
      } while (plVar9 != plVar13);
      plVar12 = *(long **)param_1;
      plVar13 = *(long **)(param_1 + 8);
      uVar20 = (long)plVar13 - (long)plVar12;
    }
  }
  lVar11 = (long)plVar21 - (long)plVar12 >> 3;
  lVar19 = (long)uVar20 >> 3;
  if (lVar11 == lVar19) {
    return param_1;
  }
  plVar9 = (long *)(((long)plVar21 - (long)plVar12 & 0xfffffffffffffff8U) + (long)plVar12);
  plVar21 = (long *)((uVar20 & 0xfffffffffffffff8) + (long)plVar12);
  if (plVar13 == plVar21) {
    plVar21 = plVar13;
    goto LAB_0022648f;
  }
  uVar10 = (long)plVar13 - (long)plVar21;
  if ((long)uVar10 < 1) goto LAB_0022648f;
  uVar20 = uVar10 >> 3;
  uVar17 = uVar20 + (uVar10 < 8);
  if ((uVar17 < 4) ||
     ((plVar9 < plVar12 + ((uVar20 + lVar19) - (ulong)(7 < uVar10)) + 1 &&
      (plVar21 < plVar12 + ((lVar11 + uVar20) - (ulong)(7 < uVar10)) + 1)))) {
    plVar12 = plVar9;
    plVar13 = plVar21;
LAB_00226467:
    uVar20 = uVar20 + 1;
    lVar11 = 0;
    do {
      *(undefined8 *)((long)plVar12 + lVar11) = *(undefined8 *)((long)plVar13 + lVar11);
      uVar20 = uVar20 - 1;
      lVar11 = lVar11 + 8;
    } while (1 < uVar20);
  }
  else {
    uVar16 = uVar17 & 0xfffffffffffffffc;
    uVar10 = (uVar16 - 4 >> 2) + 1;
    uVar18 = (ulong)((uint)uVar10 & 3);
    if (uVar16 - 4 < 0xc) {
      lVar14 = 0;
    }
    else {
      uVar10 = uVar10 & 0xfffffffffffffffc;
      lVar14 = 0;
      do {
        lVar15 = (plVar12 + lVar19 + lVar14)[1];
        lVar4 = plVar12[lVar19 + lVar14 + 2];
        lVar5 = (plVar12 + lVar19 + lVar14 + 2)[1];
        plVar12[lVar11 + lVar14] = plVar12[lVar19 + lVar14];
        (plVar12 + lVar11 + lVar14)[1] = lVar15;
        plVar12[lVar11 + lVar14 + 2] = lVar4;
        (plVar12 + lVar11 + lVar14 + 2)[1] = lVar5;
        lVar15 = (plVar12 + lVar19 + lVar14 + 4)[1];
        lVar4 = plVar12[lVar19 + lVar14 + 6];
        lVar5 = (plVar12 + lVar19 + lVar14 + 6)[1];
        plVar12[lVar11 + lVar14 + 4] = plVar12[lVar19 + lVar14 + 4];
        (plVar12 + lVar11 + lVar14 + 4)[1] = lVar15;
        plVar12[lVar11 + lVar14 + 6] = lVar4;
        (plVar12 + lVar11 + lVar14 + 6)[1] = lVar5;
        lVar15 = (plVar12 + lVar19 + lVar14 + 8)[1];
        lVar4 = plVar12[lVar19 + lVar14 + 10];
        lVar5 = (plVar12 + lVar19 + lVar14 + 10)[1];
        plVar12[lVar11 + lVar14 + 8] = plVar12[lVar19 + lVar14 + 8];
        (plVar12 + lVar11 + lVar14 + 8)[1] = lVar15;
        plVar12[lVar11 + lVar14 + 10] = lVar4;
        (plVar12 + lVar11 + lVar14 + 10)[1] = lVar5;
        lVar15 = (plVar12 + lVar19 + lVar14 + 0xc)[1];
        lVar4 = plVar12[lVar19 + lVar14 + 0xe];
        lVar5 = (plVar12 + lVar19 + lVar14 + 0xe)[1];
        plVar12[lVar11 + lVar14 + 0xc] = plVar12[lVar19 + lVar14 + 0xc];
        (plVar12 + lVar11 + lVar14 + 0xc)[1] = lVar15;
        plVar12[lVar11 + lVar14 + 0xe] = lVar4;
        (plVar12 + lVar11 + lVar14 + 0xe)[1] = lVar5;
        lVar14 = lVar14 + 0x10;
        uVar10 = uVar10 - 4;
      } while (uVar10 != 0);
    }
    if (uVar18 != 0) {
      lVar15 = 0;
      do {
        puVar2 = (undefined8 *)((long)plVar12 + lVar15 + (lVar19 + lVar14) * 8);
        uVar6 = puVar2[1];
        puVar1 = (undefined8 *)((long)plVar12 + lVar15 + (lVar19 + lVar14) * 8 + 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        puVar1 = (undefined8 *)((long)plVar12 + lVar15 + (lVar11 + lVar14) * 8);
        *puVar1 = *puVar2;
        puVar1[1] = uVar6;
        puVar1 = (undefined8 *)((long)plVar12 + lVar15 + (lVar11 + lVar14) * 8 + 0x10);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        lVar15 = lVar15 + 0x20;
      } while (uVar18 * 0x20 != lVar15);
    }
    if (uVar17 != uVar16) {
      uVar20 = uVar20 - uVar16;
      plVar12 = plVar9 + uVar16;
      plVar13 = plVar21 + uVar16;
      goto LAB_00226467;
    }
  }
  plVar13 = *(long **)(param_1 + 8);
LAB_0022648f:
  plVar9 = (long *)((long)plVar9 + ((long)plVar13 - (long)plVar21));
  if (plVar13 != plVar9) {
    *(long **)(param_1 + 8) = plVar9;
  }
  return param_1;
}


