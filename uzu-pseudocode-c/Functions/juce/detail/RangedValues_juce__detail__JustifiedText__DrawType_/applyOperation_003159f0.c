// Function : applyOperation
// Namespace: juce:detail:RangedValues_juce__detail__JustifiedText__DrawType_
// Entry    : 003159f0
// Prototype: undefined applyOperation(RangedValues<juce::detail::JustifiedText::DrawType> * this, long * param_1)
// Body     : 003159f0 - 00315f83


/* juce::detail::RangedValues<juce::detail::JustifiedText::DrawType>::applyOperation(std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> const&) */

void __thiscall
juce::detail::RangedValues<juce::detail::JustifiedText::DrawType>::applyOperation
          (RangedValues<juce::detail::JustifiedText::DrawType> *this,long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  undefined4 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  
  if ((char)param_1[5] == '\x02') {
    lVar17 = *param_1;
    lVar11 = param_1[1];
    if (lVar17 == lVar11) {
      return;
    }
    lVar23 = *(long *)(this + 0x18);
    uVar19 = lVar23 + lVar17 * 4;
    uVar18 = lVar23 + lVar11 * 4;
    lVar7 = *(long *)(this + 0x20);
    uVar25 = lVar7 - uVar18;
    if ((uVar25 != 0) && (0 < (long)uVar25)) {
      uVar20 = uVar25 >> 2;
      uVar26 = uVar20 + (uVar25 < 4);
      if ((uVar26 < 8) ||
         ((uVar19 < lVar23 + ((lVar11 + uVar20) - (ulong)(3 < uVar25)) * 4 + 4 &&
          (uVar18 < lVar23 + ((uVar20 + lVar17) - (ulong)(3 < uVar25)) * 4 + 4)))) {
        uVar26 = uVar19;
      }
      else {
        uVar13 = uVar26 & 0xfffffffffffffff8;
        uVar14 = (uVar13 - 8 >> 3) + 1;
        uVar27 = (ulong)((uint)uVar14 & 3);
        if (uVar13 - 8 < 0x18) {
          lVar21 = 0;
        }
        else {
          uVar14 = uVar14 & 0xfffffffffffffffc;
          lVar2 = lVar23 + lVar11 * 4;
          lVar3 = lVar23 + lVar17 * 4;
          lVar21 = 0;
          do {
            puVar1 = (undefined8 *)(lVar2 + lVar21 * 4);
            uVar8 = puVar1[1];
            puVar4 = (undefined8 *)(lVar2 + 0x10 + lVar21 * 4);
            uVar9 = *puVar4;
            uVar10 = puVar4[1];
            puVar4 = (undefined8 *)(lVar3 + lVar21 * 4);
            *puVar4 = *puVar1;
            puVar4[1] = uVar8;
            puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar21 * 4);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar21 * 4);
            uVar8 = puVar1[1];
            puVar4 = (undefined8 *)(lVar2 + 0x30 + lVar21 * 4);
            uVar9 = *puVar4;
            uVar10 = puVar4[1];
            puVar4 = (undefined8 *)(lVar3 + 0x20 + lVar21 * 4);
            *puVar4 = *puVar1;
            puVar4[1] = uVar8;
            puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar21 * 4);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar21 * 4);
            uVar8 = puVar1[1];
            puVar4 = (undefined8 *)(lVar2 + 0x50 + lVar21 * 4);
            uVar9 = *puVar4;
            uVar10 = puVar4[1];
            puVar4 = (undefined8 *)(lVar3 + 0x40 + lVar21 * 4);
            *puVar4 = *puVar1;
            puVar4[1] = uVar8;
            puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar21 * 4);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            puVar4 = (undefined8 *)(lVar2 + 0x60 + lVar21 * 4);
            uVar8 = puVar4[1];
            puVar1 = (undefined8 *)(lVar2 + 0x70 + lVar21 * 4);
            uVar9 = *puVar1;
            uVar10 = puVar1[1];
            puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar21 * 4);
            *puVar1 = *puVar4;
            puVar1[1] = uVar8;
            puVar1 = (undefined8 *)(lVar3 + 0x70 + lVar21 * 4);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            lVar21 = lVar21 + 0x20;
            uVar14 = uVar14 - 4;
          } while (uVar14 != 0);
        }
        if (uVar27 != 0) {
          lVar11 = lVar23 + (lVar11 + lVar21) * 4;
          lVar23 = lVar23 + (lVar17 + lVar21) * 4;
          lVar17 = 0;
          do {
            puVar4 = (undefined8 *)(lVar11 + lVar17);
            uVar8 = puVar4[1];
            puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar17);
            uVar9 = *puVar1;
            uVar10 = puVar1[1];
            puVar1 = (undefined8 *)(lVar23 + lVar17);
            *puVar1 = *puVar4;
            puVar1[1] = uVar8;
            puVar1 = (undefined8 *)(lVar23 + 0x10 + lVar17);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            lVar17 = lVar17 + 0x20;
          } while (uVar27 * 0x20 != lVar17);
        }
        if (uVar26 == uVar13) goto LAB_00315b24;
        uVar20 = uVar20 - uVar13;
        uVar26 = uVar19 + uVar13 * 4;
        uVar18 = uVar18 + uVar13 * 4;
      }
      uVar20 = uVar20 + 1;
      lVar17 = 0;
      do {
        *(undefined4 *)(uVar26 + lVar17) = *(undefined4 *)(uVar18 + lVar17);
        uVar20 = uVar20 - 1;
        lVar17 = lVar17 + 4;
      } while (1 < uVar20);
    }
LAB_00315b24:
    if (lVar7 == uVar19 + uVar25) {
      return;
    }
    *(ulong *)(this + 0x20) = uVar19 + uVar25;
    return;
  }
  if ((char)param_1[5] != '\x01') {
    return;
  }
  puVar16 = *(undefined4 **)(this + 0x18);
  puVar6 = *(undefined4 **)(this + 0x20);
  lVar17 = *param_1;
  puVar22 = puVar16 + lVar17;
  if (puVar6 != *(undefined4 **)(this + 0x28)) {
    if (puVar6 == puVar22) {
      *(undefined4 **)(this + 0x20) = puVar22 + 1;
      return;
    }
    uVar5 = *puVar22;
    puVar16 = puVar6 + -1;
    *puVar6 = puVar6[-1];
    *(undefined4 **)(this + 0x20) = puVar6 + 1;
    if (0 < (long)puVar16 - (long)puVar22) {
      uVar19 = ((ulong)((long)puVar16 - (long)puVar22) >> 2) + 1;
      do {
        *puVar16 = puVar16[-1];
        puVar16 = puVar16 + -1;
        uVar19 = uVar19 - 1;
      } while (1 < uVar19);
    }
    *puVar22 = uVar5;
    return;
  }
  lVar11 = (long)puVar6 - (long)puVar16;
  if (lVar11 == 0x7ffffffffffffffc) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar18 = lVar11 >> 2;
  uVar19 = 1;
  if (lVar11 != 0) {
    uVar19 = uVar18;
  }
  uVar25 = uVar19 + uVar18;
  if (uVar25 >> 0x3d != 0) {
    uVar25 = 0x1fffffffffffffff;
  }
  if (CARRY8(uVar19,uVar18)) {
    uVar25 = 0x1fffffffffffffff;
  }
  if (uVar25 == 0) {
    puVar12 = (undefined4 *)0x0;
    *(undefined4 *)(lVar17 * 4) = *puVar22;
    if (0 < lVar17) goto LAB_00315bb9;
LAB_00315c1d:
    puVar15 = puVar12 + lVar17;
  }
  else {
    puVar12 = operator_new(uVar25 * 4);
    puVar12[lVar17] = *puVar22;
    if (lVar17 < 1) goto LAB_00315c1d;
LAB_00315bb9:
    uVar19 = (long)puVar22 + (-4 - (long)puVar16);
    puVar15 = puVar12;
    puVar24 = puVar16;
    if (uVar19 < 0x1c) {
LAB_00315d20:
      do {
        *puVar15 = *puVar24;
        puVar24 = puVar24 + 1;
        puVar15 = puVar15 + 1;
      } while (puVar24 != puVar22);
    }
    else {
      uVar18 = (uVar19 >> 2) + 1;
      uVar20 = uVar18 & 0x7ffffffffffffff8;
      uVar26 = (uVar20 - 8 >> 3) + 1;
      uVar19 = (ulong)((uint)uVar26 & 3);
      if (uVar20 - 8 < 0x18) {
        lVar11 = 0;
      }
      else {
        uVar26 = uVar26 & 0xfffffffffffffffc;
        lVar11 = 0;
        do {
          uVar8 = *(undefined8 *)((long)(puVar16 + lVar11) + 8);
          uVar9 = *(undefined8 *)(puVar16 + lVar11 + 4);
          uVar10 = *(undefined8 *)((long)(puVar16 + lVar11 + 4) + 8);
          *(undefined8 *)(puVar12 + lVar11) = *(undefined8 *)(puVar16 + lVar11);
          *(undefined8 *)((long)(puVar12 + lVar11) + 8) = uVar8;
          *(undefined8 *)(puVar12 + lVar11 + 4) = uVar9;
          *(undefined8 *)((long)(puVar12 + lVar11 + 4) + 8) = uVar10;
          uVar8 = *(undefined8 *)((long)(puVar16 + lVar11 + 8) + 8);
          uVar9 = *(undefined8 *)(puVar16 + lVar11 + 0xc);
          uVar10 = *(undefined8 *)((long)(puVar16 + lVar11 + 0xc) + 8);
          *(undefined8 *)(puVar12 + lVar11 + 8) = *(undefined8 *)(puVar16 + lVar11 + 8);
          *(undefined8 *)((long)(puVar12 + lVar11 + 8) + 8) = uVar8;
          *(undefined8 *)(puVar12 + lVar11 + 0xc) = uVar9;
          *(undefined8 *)((long)(puVar12 + lVar11 + 0xc) + 8) = uVar10;
          uVar8 = *(undefined8 *)((long)(puVar16 + lVar11 + 0x10) + 8);
          uVar9 = *(undefined8 *)(puVar16 + lVar11 + 0x14);
          uVar10 = *(undefined8 *)((long)(puVar16 + lVar11 + 0x14) + 8);
          *(undefined8 *)(puVar12 + lVar11 + 0x10) = *(undefined8 *)(puVar16 + lVar11 + 0x10);
          *(undefined8 *)((long)(puVar12 + lVar11 + 0x10) + 8) = uVar8;
          *(undefined8 *)(puVar12 + lVar11 + 0x14) = uVar9;
          *(undefined8 *)((long)(puVar12 + lVar11 + 0x14) + 8) = uVar10;
          uVar8 = *(undefined8 *)((long)(puVar16 + lVar11 + 0x18) + 8);
          uVar9 = *(undefined8 *)(puVar16 + lVar11 + 0x1c);
          uVar10 = *(undefined8 *)((long)(puVar16 + lVar11 + 0x1c) + 8);
          *(undefined8 *)(puVar12 + lVar11 + 0x18) = *(undefined8 *)(puVar16 + lVar11 + 0x18);
          *(undefined8 *)((long)(puVar12 + lVar11 + 0x18) + 8) = uVar8;
          *(undefined8 *)(puVar12 + lVar11 + 0x1c) = uVar9;
          *(undefined8 *)((long)(puVar12 + lVar11 + 0x1c) + 8) = uVar10;
          lVar11 = lVar11 + 0x20;
          uVar26 = uVar26 - 4;
        } while (uVar26 != 0);
      }
      if (uVar19 != 0) {
        lVar23 = 0;
        do {
          puVar4 = (undefined8 *)((long)puVar16 + lVar23 + lVar11 * 4);
          uVar8 = puVar4[1];
          puVar1 = (undefined8 *)((long)puVar16 + lVar23 + lVar11 * 4 + 0x10);
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          puVar1 = (undefined8 *)((long)puVar12 + lVar23 + lVar11 * 4);
          *puVar1 = *puVar4;
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)((long)puVar12 + lVar23 + lVar11 * 4 + 0x10);
          *puVar1 = uVar9;
          puVar1[1] = uVar10;
          lVar23 = lVar23 + 0x20;
        } while (uVar19 * 0x20 != lVar23);
      }
      puVar15 = puVar12 + uVar20;
      if (uVar18 != uVar20) {
        puVar24 = puVar16 + uVar20;
        goto LAB_00315d20;
      }
    }
  }
  puVar24 = puVar15 + 1;
  if ((long)puVar6 - (long)puVar22 < 1) {
    puVar24 = (undefined4 *)((long)puVar24 + ((long)puVar6 - (long)puVar22));
  }
  else if ((long)puVar6 - (long)puVar22 != 0) {
    uVar19 = ((long)puVar6 - (long)puVar22) - 4;
    if (0x1b < uVar19) {
      uVar20 = (uVar19 >> 2) + 1;
      uVar26 = uVar20 & 0x7ffffffffffffff8;
      uVar18 = (uVar26 - 8 >> 3) + 1;
      uVar19 = (ulong)((uint)uVar18 & 3);
      if (uVar26 - 8 < 0x18) {
        lVar11 = 0;
      }
      else {
        uVar18 = uVar18 & 0xfffffffffffffffc;
        lVar11 = 0;
        do {
          uVar8 = *(undefined8 *)((long)(puVar16 + lVar17 + lVar11) + 8);
          uVar9 = *(undefined8 *)(puVar16 + lVar17 + lVar11 + 4);
          uVar10 = *(undefined8 *)((long)(puVar16 + lVar17 + lVar11 + 4) + 8);
          *(undefined8 *)(puVar15 + lVar11 + 1) = *(undefined8 *)(puVar16 + lVar17 + lVar11);
          *(undefined8 *)((long)(puVar15 + lVar11 + 1) + 8) = uVar8;
          *(undefined8 *)(puVar15 + lVar11 + 5) = uVar9;
          *(undefined8 *)((long)(puVar15 + lVar11 + 5) + 8) = uVar10;
          uVar8 = *(undefined8 *)((long)(puVar16 + lVar17 + lVar11 + 8) + 8);
          uVar9 = *(undefined8 *)(puVar16 + lVar17 + lVar11 + 0xc);
          uVar10 = *(undefined8 *)((long)(puVar16 + lVar17 + lVar11 + 0xc) + 8);
          *(undefined8 *)(puVar15 + lVar11 + 9) = *(undefined8 *)(puVar16 + lVar17 + lVar11 + 8);
          *(undefined8 *)((long)(puVar15 + lVar11 + 9) + 8) = uVar8;
          *(undefined8 *)(puVar15 + lVar11 + 0xd) = uVar9;
          *(undefined8 *)((long)(puVar15 + lVar11 + 0xd) + 8) = uVar10;
          uVar8 = *(undefined8 *)((long)(puVar16 + lVar17 + lVar11 + 0x10) + 8);
          uVar9 = *(undefined8 *)(puVar16 + lVar17 + lVar11 + 0x14);
          uVar10 = *(undefined8 *)((long)(puVar16 + lVar17 + lVar11 + 0x14) + 8);
          *(undefined8 *)(puVar15 + lVar11 + 0x11) =
               *(undefined8 *)(puVar16 + lVar17 + lVar11 + 0x10);
          *(undefined8 *)((long)(puVar15 + lVar11 + 0x11) + 8) = uVar8;
          *(undefined8 *)(puVar15 + lVar11 + 0x15) = uVar9;
          *(undefined8 *)((long)(puVar15 + lVar11 + 0x15) + 8) = uVar10;
          uVar8 = *(undefined8 *)((long)(puVar16 + lVar17 + lVar11 + 0x18) + 8);
          uVar9 = *(undefined8 *)(puVar16 + lVar17 + lVar11 + 0x1c);
          uVar10 = *(undefined8 *)((long)(puVar16 + lVar17 + lVar11 + 0x1c) + 8);
          *(undefined8 *)(puVar15 + lVar11 + 0x19) =
               *(undefined8 *)(puVar16 + lVar17 + lVar11 + 0x18);
          *(undefined8 *)((long)(puVar15 + lVar11 + 0x19) + 8) = uVar8;
          *(undefined8 *)(puVar15 + lVar11 + 0x1d) = uVar9;
          *(undefined8 *)((long)(puVar15 + lVar11 + 0x1d) + 8) = uVar10;
          lVar11 = lVar11 + 0x20;
          uVar18 = uVar18 - 4;
        } while (uVar18 != 0);
      }
      if (uVar19 != 0) {
        lVar23 = 0;
        do {
          puVar4 = (undefined8 *)((long)puVar16 + lVar23 + (lVar17 + lVar11) * 4);
          uVar8 = puVar4[1];
          puVar1 = (undefined8 *)((long)puVar16 + lVar23 + (lVar17 + lVar11) * 4 + 0x10);
          uVar9 = *puVar1;
          uVar10 = puVar1[1];
          puVar1 = (undefined8 *)((long)puVar15 + lVar23 + lVar11 * 4 + 4);
          *puVar1 = *puVar4;
          puVar1[1] = uVar8;
          puVar1 = (undefined8 *)((long)puVar15 + lVar23 + lVar11 * 4 + 0x14);
          *puVar1 = uVar9;
          puVar1[1] = uVar10;
          lVar23 = lVar23 + 0x20;
        } while (uVar19 * 0x20 != lVar23);
      }
      puVar24 = puVar24 + uVar26;
      if (uVar20 == uVar26) goto LAB_00315e62;
      puVar22 = puVar22 + uVar26;
    }
    do {
      *puVar24 = *puVar22;
      puVar22 = puVar22 + 1;
      puVar24 = puVar24 + 1;
    } while (puVar22 != puVar6);
  }
LAB_00315e62:
  if (puVar16 != (undefined4 *)0x0) {
    operator_delete(puVar16);
  }
  *(undefined4 **)(this + 0x18) = puVar12;
  *(undefined4 **)(this + 0x20) = puVar24;
  *(undefined4 **)(this + 0x28) = puVar12 + uVar25;
  return;
}


