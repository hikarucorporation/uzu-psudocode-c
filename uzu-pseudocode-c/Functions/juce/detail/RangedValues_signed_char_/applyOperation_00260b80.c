// Function : applyOperation
// Namespace: juce:detail:RangedValues_signed_char_
// Entry    : 00260b80
// Prototype: undefined applyOperation(RangedValues<signed_char> * this, long * param_1)
// Body     : 00260b80 - 00261192


/* juce::detail::RangedValues<signed
   char>::applyOperation(std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> const&) */

void __thiscall
juce::detail::RangedValues<signed_char>::applyOperation
          (RangedValues<signed_char> *this,long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  undefined1 *puVar26;
  bool bVar27;
  
  if ((char)param_1[5] == '\x02') {
    lVar22 = *param_1;
    lVar23 = param_1[1];
    if (lVar22 == lVar23) {
      return;
    }
    lVar8 = *(long *)(this + 0x18);
    uVar14 = lVar8 + lVar22;
    uVar13 = lVar8 + lVar23;
    uVar20 = *(ulong *)(this + 0x20);
    uVar24 = uVar20 - uVar13;
    if ((uVar24 == 0) || ((long)uVar24 < 1)) goto LAB_00260cd0;
    if ((uVar24 < 8) || ((uVar14 < uVar20 && (uVar13 < ((uVar20 + lVar22) - uVar13) + lVar8)))) {
      uVar20 = uVar14;
      uVar25 = uVar13;
LAB_00260ca0:
      uVar24 = uVar24 + 1;
      lVar22 = 0;
      do {
        *(undefined1 *)(uVar20 + lVar22) = *(undefined1 *)(uVar25 + lVar22);
        uVar24 = uVar24 - 1;
        lVar22 = lVar22 + 1;
      } while (1 < uVar24);
    }
    else if (uVar24 < 0x20) {
      uVar21 = 0;
LAB_00261139:
      uVar25 = uVar24 & 0xfffffffffffffff8;
      uVar20 = uVar14 + uVar25;
      do {
        *(undefined8 *)(uVar14 + uVar21) = *(undefined8 *)(uVar13 + uVar21);
        uVar21 = uVar21 + 8;
      } while (uVar25 != uVar21);
      if (uVar24 != uVar25) {
        uVar24 = (ulong)((uint)uVar24 & 7);
        uVar25 = uVar25 + uVar13;
        goto LAB_00260ca0;
      }
    }
    else {
      uVar21 = uVar24 & 0xffffffffffffffe0;
      uVar20 = (uVar21 - 0x20 >> 5) + 1;
      uVar25 = (ulong)((uint)uVar20 & 3);
      if (uVar21 - 0x20 < 0x60) {
        lVar18 = 0;
      }
      else {
        uVar20 = uVar20 & 0xfffffffffffffffc;
        lVar2 = lVar23 + lVar8;
        lVar3 = lVar22 + lVar8;
        lVar18 = 0;
        do {
          uVar9 = ((undefined8 *)(lVar2 + lVar18))[1];
          puVar4 = (undefined8 *)(lVar2 + 0x10 + lVar18);
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          *(undefined8 *)(lVar3 + lVar18) = *(undefined8 *)(lVar2 + lVar18);
          ((undefined8 *)(lVar3 + lVar18))[1] = uVar9;
          puVar4 = (undefined8 *)(lVar3 + 0x10 + lVar18);
          *puVar4 = uVar10;
          puVar4[1] = uVar11;
          puVar4 = (undefined8 *)(lVar2 + 0x20 + lVar18);
          uVar9 = puVar4[1];
          puVar5 = (undefined8 *)(lVar2 + 0x30 + lVar18);
          uVar10 = *puVar5;
          uVar11 = puVar5[1];
          puVar5 = (undefined8 *)(lVar3 + 0x20 + lVar18);
          *puVar5 = *puVar4;
          puVar5[1] = uVar9;
          puVar4 = (undefined8 *)(lVar3 + 0x30 + lVar18);
          *puVar4 = uVar10;
          puVar4[1] = uVar11;
          puVar4 = (undefined8 *)(lVar2 + 0x40 + lVar18);
          uVar9 = puVar4[1];
          puVar5 = (undefined8 *)(lVar2 + 0x50 + lVar18);
          uVar10 = *puVar5;
          uVar11 = puVar5[1];
          puVar5 = (undefined8 *)(lVar3 + 0x40 + lVar18);
          *puVar5 = *puVar4;
          puVar5[1] = uVar9;
          puVar4 = (undefined8 *)(lVar3 + 0x50 + lVar18);
          *puVar4 = uVar10;
          puVar4[1] = uVar11;
          puVar5 = (undefined8 *)(lVar2 + 0x60 + lVar18);
          uVar9 = puVar5[1];
          puVar4 = (undefined8 *)(lVar2 + 0x70 + lVar18);
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          puVar4 = (undefined8 *)(lVar3 + 0x60 + lVar18);
          *puVar4 = *puVar5;
          puVar4[1] = uVar9;
          puVar4 = (undefined8 *)(lVar3 + 0x70 + lVar18);
          *puVar4 = uVar10;
          puVar4[1] = uVar11;
          lVar18 = lVar18 + 0x80;
          uVar20 = uVar20 - 4;
        } while (uVar20 != 0);
      }
      if (uVar25 != 0) {
        lVar23 = lVar8 + lVar23 + lVar18;
        lVar8 = lVar8 + lVar22 + lVar18;
        lVar22 = 0;
        do {
          puVar5 = (undefined8 *)(lVar23 + lVar22);
          uVar9 = puVar5[1];
          puVar4 = (undefined8 *)(lVar23 + 0x10 + lVar22);
          uVar10 = *puVar4;
          uVar11 = puVar4[1];
          puVar4 = (undefined8 *)(lVar8 + lVar22);
          *puVar4 = *puVar5;
          puVar4[1] = uVar9;
          puVar4 = (undefined8 *)(lVar8 + 0x10 + lVar22);
          *puVar4 = uVar10;
          puVar4[1] = uVar11;
          lVar22 = lVar22 + 0x20;
        } while (uVar25 * 0x20 != lVar22);
      }
      if (uVar24 != uVar21) {
        if ((uVar24 & 0x18) == 0) {
          uVar25 = uVar13 + uVar21;
          uVar20 = uVar21 + uVar14;
          uVar24 = (ulong)((uint)uVar24 & 0x1f);
          goto LAB_00260ca0;
        }
        goto LAB_00261139;
      }
    }
    uVar20 = *(ulong *)(this + 0x20);
    uVar24 = uVar20 - uVar13;
LAB_00260cd0:
    if (uVar20 == uVar14 + uVar24) {
      return;
    }
    *(ulong *)(this + 0x20) = uVar14 + uVar24;
    return;
  }
  if ((char)param_1[5] != '\x01') {
    return;
  }
  puVar7 = *(undefined1 **)(this + 0x18);
  puVar16 = *(undefined1 **)(this + 0x20);
  puVar19 = (undefined1 *)*param_1;
  puVar17 = puVar7 + (long)puVar19;
  if (puVar16 != *(undefined1 **)(this + 0x28)) {
    if (puVar16 == puVar17) {
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + 1;
      return;
    }
    uVar6 = *puVar17;
    *puVar16 = puVar16[-1];
    puVar16 = *(undefined1 **)(this + 0x20);
    *(undefined1 **)(this + 0x20) = puVar16 + 1;
    puVar7 = puVar16 + -1;
    puVar19 = puVar7 + -(long)puVar17;
    if (0 < (long)puVar19) {
      puVar26 = puVar7 + ~(ulong)puVar17;
      if (((ulong)puVar19 & 7) != 0) {
        uVar14 = 1;
        puVar12 = puVar7;
        do {
          puVar16 = puVar12;
          *puVar16 = puVar16[-1];
          uVar13 = uVar14 + 1;
          bVar27 = uVar14 != ((ulong)puVar19 & 7);
          uVar14 = uVar13;
          puVar12 = puVar16 + -1;
        } while (bVar27);
        puVar19 = puVar7 + (-uVar13 - (long)puVar17) + 1;
        puVar7 = puVar16 + -1;
      }
      if ((undefined1 *)0x6 < puVar26) {
        lVar22 = -1;
        do {
          puVar16[lVar22] = puVar7[lVar22];
          puVar16[lVar22 + -1] = puVar7[lVar22 + -1];
          puVar16[lVar22 + -2] = puVar7[lVar22 + -2];
          puVar16[lVar22 + -3] = puVar7[lVar22 + -3];
          puVar16[lVar22 + -4] = puVar7[lVar22 + -4];
          puVar16[lVar22 + -5] = puVar7[lVar22 + -5];
          puVar16[lVar22 + -6] = puVar7[lVar22 + -6];
          puVar16[lVar22 + -7] = puVar7[lVar22 + -7];
          lVar23 = lVar22 + -8;
          lVar22 = lVar22 + -8;
        } while (puVar19 + lVar23 < (undefined1 *)0xfffffffffffffffe);
      }
    }
    *puVar17 = uVar6;
    return;
  }
  uVar14 = (long)puVar16 - (long)puVar7;
  if (uVar14 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar13 = 1;
  if (uVar14 != 0) {
    uVar13 = uVar14;
  }
  uVar20 = uVar13 + uVar14;
  if ((long)uVar20 < 0) {
    uVar20 = 0x7fffffffffffffff;
  }
  if (CARRY8(uVar13,uVar14)) {
    uVar20 = 0x7fffffffffffffff;
  }
  if (uVar20 == 0) {
    puVar26 = (undefined1 *)0x0;
    *puVar19 = *puVar17;
    if ((long)puVar19 < 1) goto LAB_00260d96;
LAB_00260d41:
    puVar12 = puVar26;
    puVar15 = puVar7;
    if ((undefined1 *)0x1f < puVar19) {
      puVar15 = (undefined1 *)((ulong)puVar19 & 0xffffffffffffffe0);
      uVar13 = ((ulong)(puVar15 + -0x20) >> 5) + 1;
      uVar14 = (ulong)((uint)uVar13 & 3);
      if (puVar15 + -0x20 < (undefined1 *)0x60) {
        lVar22 = 0;
      }
      else {
        uVar13 = uVar13 & 0xfffffffffffffffc;
        lVar22 = 0;
        do {
          uVar9 = *(undefined8 *)((long)(puVar7 + lVar22) + 8);
          uVar10 = *(undefined8 *)(puVar7 + lVar22 + 0x10);
          uVar11 = *(undefined8 *)((long)(puVar7 + lVar22 + 0x10) + 8);
          *(undefined8 *)(puVar26 + lVar22) = *(undefined8 *)(puVar7 + lVar22);
          *(undefined8 *)((long)(puVar26 + lVar22) + 8) = uVar9;
          *(undefined8 *)(puVar26 + lVar22 + 0x10) = uVar10;
          *(undefined8 *)((long)(puVar26 + lVar22 + 0x10) + 8) = uVar11;
          uVar9 = *(undefined8 *)((long)(puVar7 + lVar22 + 0x20) + 8);
          uVar10 = *(undefined8 *)(puVar7 + lVar22 + 0x30);
          uVar11 = *(undefined8 *)((long)(puVar7 + lVar22 + 0x30) + 8);
          *(undefined8 *)(puVar26 + lVar22 + 0x20) = *(undefined8 *)(puVar7 + lVar22 + 0x20);
          *(undefined8 *)((long)(puVar26 + lVar22 + 0x20) + 8) = uVar9;
          *(undefined8 *)(puVar26 + lVar22 + 0x30) = uVar10;
          *(undefined8 *)((long)(puVar26 + lVar22 + 0x30) + 8) = uVar11;
          uVar9 = *(undefined8 *)((long)(puVar7 + lVar22 + 0x40) + 8);
          uVar10 = *(undefined8 *)(puVar7 + lVar22 + 0x50);
          uVar11 = *(undefined8 *)((long)(puVar7 + lVar22 + 0x50) + 8);
          *(undefined8 *)(puVar26 + lVar22 + 0x40) = *(undefined8 *)(puVar7 + lVar22 + 0x40);
          *(undefined8 *)((long)(puVar26 + lVar22 + 0x40) + 8) = uVar9;
          *(undefined8 *)(puVar26 + lVar22 + 0x50) = uVar10;
          *(undefined8 *)((long)(puVar26 + lVar22 + 0x50) + 8) = uVar11;
          uVar9 = *(undefined8 *)((long)(puVar7 + lVar22 + 0x60) + 8);
          uVar10 = *(undefined8 *)(puVar7 + lVar22 + 0x70);
          uVar11 = *(undefined8 *)((long)(puVar7 + lVar22 + 0x70) + 8);
          *(undefined8 *)(puVar26 + lVar22 + 0x60) = *(undefined8 *)(puVar7 + lVar22 + 0x60);
          *(undefined8 *)((long)(puVar26 + lVar22 + 0x60) + 8) = uVar9;
          *(undefined8 *)(puVar26 + lVar22 + 0x70) = uVar10;
          *(undefined8 *)((long)(puVar26 + lVar22 + 0x70) + 8) = uVar11;
          lVar22 = lVar22 + 0x80;
          uVar13 = uVar13 - 4;
        } while (uVar13 != 0);
      }
      if (uVar14 != 0) {
        lVar23 = 0;
        do {
          uVar9 = *(undefined8 *)((long)(puVar7 + lVar23 + lVar22) + 8);
          uVar10 = *(undefined8 *)(puVar7 + lVar23 + lVar22 + 0x10);
          uVar11 = *(undefined8 *)((long)(puVar7 + lVar23 + lVar22 + 0x10) + 8);
          *(undefined8 *)(puVar26 + lVar23 + lVar22) = *(undefined8 *)(puVar7 + lVar23 + lVar22);
          *(undefined8 *)((long)(puVar26 + lVar23 + lVar22) + 8) = uVar9;
          *(undefined8 *)(puVar26 + lVar23 + lVar22 + 0x10) = uVar10;
          *(undefined8 *)((long)(puVar26 + lVar23 + lVar22 + 0x10) + 8) = uVar11;
          lVar23 = lVar23 + 0x20;
        } while (uVar14 * 0x20 != lVar23);
      }
      puVar12 = puVar15 + (long)puVar26;
      if (puVar19 == puVar15) goto LAB_00260f02;
      puVar15 = puVar15 + (long)puVar7;
    }
    do {
      *puVar12 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar12 = puVar12 + 1;
    } while (puVar15 != puVar17);
  }
  else {
    puVar26 = operator_new(uVar20);
    puVar26[(long)puVar19] = *puVar17;
    if (0 < (long)puVar19) goto LAB_00260d41;
LAB_00260d96:
    puVar12 = puVar19 + (long)puVar26;
  }
LAB_00260f02:
  puVar15 = puVar12 + 1;
  uVar14 = (long)puVar16 - (long)puVar17;
  if ((long)uVar14 < 1) {
    puVar15 = puVar15 + uVar14;
  }
  else if (puVar16 != puVar17) {
    if (0x1f < uVar14) {
      uVar25 = uVar14 & 0xffffffffffffffe0;
      uVar24 = (uVar25 - 0x20 >> 5) + 1;
      uVar13 = (ulong)((uint)uVar24 & 3);
      if (uVar25 - 0x20 < 0x60) {
        lVar22 = 0;
      }
      else {
        uVar24 = uVar24 & 0xfffffffffffffffc;
        puVar1 = puVar19 + (long)puVar7;
        lVar22 = 0;
        do {
          uVar9 = *(undefined8 *)((long)(puVar1 + lVar22) + 8);
          uVar10 = *(undefined8 *)(puVar1 + lVar22 + 0x10);
          uVar11 = *(undefined8 *)((long)(puVar1 + lVar22 + 0x10) + 8);
          *(undefined8 *)(puVar12 + lVar22 + 1) = *(undefined8 *)(puVar1 + lVar22);
          *(undefined8 *)((long)(puVar12 + lVar22 + 1) + 8) = uVar9;
          *(undefined8 *)(puVar12 + lVar22 + 0x11) = uVar10;
          *(undefined8 *)((long)(puVar12 + lVar22 + 0x11) + 8) = uVar11;
          uVar9 = *(undefined8 *)((long)(puVar1 + lVar22 + 0x20) + 8);
          uVar10 = *(undefined8 *)(puVar1 + lVar22 + 0x30);
          uVar11 = *(undefined8 *)((long)(puVar1 + lVar22 + 0x30) + 8);
          *(undefined8 *)(puVar12 + lVar22 + 0x21) = *(undefined8 *)(puVar1 + lVar22 + 0x20);
          *(undefined8 *)((long)(puVar12 + lVar22 + 0x21) + 8) = uVar9;
          *(undefined8 *)(puVar12 + lVar22 + 0x31) = uVar10;
          *(undefined8 *)((long)(puVar12 + lVar22 + 0x31) + 8) = uVar11;
          uVar9 = *(undefined8 *)((long)(puVar1 + lVar22 + 0x40) + 8);
          uVar10 = *(undefined8 *)(puVar1 + lVar22 + 0x50);
          uVar11 = *(undefined8 *)((long)(puVar1 + lVar22 + 0x50) + 8);
          *(undefined8 *)(puVar12 + lVar22 + 0x41) = *(undefined8 *)(puVar1 + lVar22 + 0x40);
          *(undefined8 *)((long)(puVar12 + lVar22 + 0x41) + 8) = uVar9;
          *(undefined8 *)(puVar12 + lVar22 + 0x51) = uVar10;
          *(undefined8 *)((long)(puVar12 + lVar22 + 0x51) + 8) = uVar11;
          uVar9 = *(undefined8 *)((long)(puVar1 + lVar22 + 0x60) + 8);
          uVar10 = *(undefined8 *)(puVar1 + lVar22 + 0x70);
          uVar11 = *(undefined8 *)((long)(puVar1 + lVar22 + 0x70) + 8);
          *(undefined8 *)(puVar12 + lVar22 + 0x61) = *(undefined8 *)(puVar1 + lVar22 + 0x60);
          *(undefined8 *)((long)(puVar12 + lVar22 + 0x61) + 8) = uVar9;
          *(undefined8 *)(puVar12 + lVar22 + 0x71) = uVar10;
          *(undefined8 *)((long)(puVar12 + lVar22 + 0x71) + 8) = uVar11;
          lVar22 = lVar22 + 0x80;
          uVar24 = uVar24 - 4;
        } while (uVar24 != 0);
      }
      if (uVar13 != 0) {
        puVar19 = puVar7 + (long)(puVar19 + lVar22);
        lVar23 = 0;
        do {
          uVar9 = *(undefined8 *)((long)(puVar19 + lVar23) + 8);
          uVar10 = *(undefined8 *)(puVar19 + lVar23 + 0x10);
          uVar11 = *(undefined8 *)((long)(puVar19 + lVar23 + 0x10) + 8);
          *(undefined8 *)(puVar12 + lVar23 + lVar22 + 1) = *(undefined8 *)(puVar19 + lVar23);
          *(undefined8 *)((long)(puVar12 + lVar23 + lVar22 + 1) + 8) = uVar9;
          *(undefined8 *)(puVar12 + lVar23 + lVar22 + 0x11) = uVar10;
          *(undefined8 *)((long)(puVar12 + lVar23 + lVar22 + 0x11) + 8) = uVar11;
          lVar23 = lVar23 + 0x20;
        } while (uVar13 * 0x20 != lVar23);
      }
      puVar15 = puVar15 + uVar25;
      if (uVar14 == uVar25) goto LAB_00261023;
      puVar17 = puVar17 + uVar25;
    }
    do {
      *puVar15 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar15 = puVar15 + 1;
    } while (puVar17 != puVar16);
  }
LAB_00261023:
  if (puVar7 != (undefined1 *)0x0) {
    operator_delete(puVar7);
  }
  *(undefined1 **)(this + 0x18) = puVar26;
  *(undefined1 **)(this + 0x20) = puVar15;
  *(undefined1 **)(this + 0x28) = puVar26 + uVar20;
  return;
}


