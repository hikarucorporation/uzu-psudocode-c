// Function : applyOperation
// Namespace: juce:detail:RangedValues_juce__Colour_
// Entry    : 00245110
// Prototype: undefined applyOperation(RangedValues<juce::Colour> * this, long * param_1, undefined4 param_2)
// Body     : 00245110 - 002456ff


/* juce::detail::RangedValues<juce::Colour>::applyOperation(std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> const&, juce::Colour) */

void __thiscall
juce::detail::RangedValues<juce::Colour>::applyOperation
          (RangedValues<juce::Colour> *this,long *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  
  cVar5 = (char)param_1[5];
  if (cVar5 != '\x02') {
    if (cVar5 == '\x01') {
      puVar17 = (undefined4 *)(*param_1 * 4 + *(long *)(this + 0x18));
      std::vector<juce::Colour,std::allocator<juce::Colour>>::insert
                ((vector<juce::Colour,std::allocator<juce::Colour>> *)(this + 0x18),puVar17,puVar17)
      ;
      return;
    }
    if (cVar5 != '\0') {
      return;
    }
    puVar10 = *(undefined4 **)(this + 0x18);
    puVar6 = *(undefined4 **)(this + 0x20);
    lVar21 = *param_1;
    puVar17 = puVar10 + lVar21;
    if (puVar6 != *(undefined4 **)(this + 0x28)) {
      if (puVar6 == puVar17) {
        *puVar17 = param_2;
        *(long *)(this + 0x20) = *(long *)(this + 0x20) + 4;
        return;
      }
      *puVar6 = puVar6[-1];
      lVar21 = *(long *)(this + 0x20);
      *(long *)(this + 0x20) = lVar21 + 4;
      puVar10 = (undefined4 *)(lVar21 + -4);
      if (0 < (long)puVar10 - (long)puVar17) {
        uVar15 = ((ulong)((long)puVar10 - (long)puVar17) >> 2) + 1;
        do {
          *puVar10 = puVar10[-1];
          puVar10 = puVar10 + -1;
          uVar15 = uVar15 - 1;
        } while (1 < uVar15);
      }
      *puVar17 = param_2;
      return;
    }
    lVar11 = (long)puVar6 - (long)puVar10;
    if (lVar11 == 0x7ffffffffffffffc) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar16 = lVar11 >> 2;
    uVar15 = 1;
    if (lVar11 != 0) {
      uVar15 = uVar16;
    }
    uVar22 = uVar15 + uVar16;
    if (uVar22 >> 0x3d != 0) {
      uVar22 = 0x1fffffffffffffff;
    }
    if (CARRY8(uVar15,uVar16)) {
      uVar22 = 0x1fffffffffffffff;
    }
    puVar12 = operator_new(uVar22 * 4);
    puVar12[lVar21] = param_2;
    puVar13 = puVar12;
    if (lVar21 != 0) {
      uVar15 = lVar21 * 4 - 4;
      puVar19 = puVar10;
      if (0x1b < uVar15) {
        uVar16 = (uVar15 >> 2) + 1;
        uVar18 = uVar16 & 0x7ffffffffffffff8;
        uVar23 = (uVar18 - 8 >> 3) + 1;
        uVar15 = (ulong)((uint)uVar23 & 3);
        if (uVar18 - 8 < 0x18) {
          lVar11 = 0;
        }
        else {
          uVar23 = uVar23 & 0xfffffffffffffffc;
          lVar11 = 0;
          do {
            uVar7 = *(undefined8 *)((long)(puVar10 + lVar11) + 8);
            uVar8 = *(undefined8 *)(puVar10 + lVar11 + 4);
            uVar9 = *(undefined8 *)((long)(puVar10 + lVar11 + 4) + 8);
            *(undefined8 *)(puVar12 + lVar11) = *(undefined8 *)(puVar10 + lVar11);
            *(undefined8 *)((long)(puVar12 + lVar11) + 8) = uVar7;
            *(undefined8 *)(puVar12 + lVar11 + 4) = uVar8;
            *(undefined8 *)((long)(puVar12 + lVar11 + 4) + 8) = uVar9;
            uVar7 = *(undefined8 *)((long)(puVar10 + lVar11 + 8) + 8);
            uVar8 = *(undefined8 *)(puVar10 + lVar11 + 0xc);
            uVar9 = *(undefined8 *)((long)(puVar10 + lVar11 + 0xc) + 8);
            *(undefined8 *)(puVar12 + lVar11 + 8) = *(undefined8 *)(puVar10 + lVar11 + 8);
            *(undefined8 *)((long)(puVar12 + lVar11 + 8) + 8) = uVar7;
            *(undefined8 *)(puVar12 + lVar11 + 0xc) = uVar8;
            *(undefined8 *)((long)(puVar12 + lVar11 + 0xc) + 8) = uVar9;
            uVar7 = *(undefined8 *)((long)(puVar10 + lVar11 + 0x10) + 8);
            uVar8 = *(undefined8 *)(puVar10 + lVar11 + 0x14);
            uVar9 = *(undefined8 *)((long)(puVar10 + lVar11 + 0x14) + 8);
            *(undefined8 *)(puVar12 + lVar11 + 0x10) = *(undefined8 *)(puVar10 + lVar11 + 0x10);
            *(undefined8 *)((long)(puVar12 + lVar11 + 0x10) + 8) = uVar7;
            *(undefined8 *)(puVar12 + lVar11 + 0x14) = uVar8;
            *(undefined8 *)((long)(puVar12 + lVar11 + 0x14) + 8) = uVar9;
            uVar7 = *(undefined8 *)((long)(puVar10 + lVar11 + 0x18) + 8);
            uVar8 = *(undefined8 *)(puVar10 + lVar11 + 0x1c);
            uVar9 = *(undefined8 *)((long)(puVar10 + lVar11 + 0x1c) + 8);
            *(undefined8 *)(puVar12 + lVar11 + 0x18) = *(undefined8 *)(puVar10 + lVar11 + 0x18);
            *(undefined8 *)((long)(puVar12 + lVar11 + 0x18) + 8) = uVar7;
            *(undefined8 *)(puVar12 + lVar11 + 0x1c) = uVar8;
            *(undefined8 *)((long)(puVar12 + lVar11 + 0x1c) + 8) = uVar9;
            lVar11 = lVar11 + 0x20;
            uVar23 = uVar23 - 4;
          } while (uVar23 != 0);
        }
        if (uVar15 != 0) {
          lVar20 = 0;
          do {
            puVar4 = (undefined8 *)((long)puVar10 + lVar20 + lVar11 * 4);
            uVar7 = puVar4[1];
            puVar1 = (undefined8 *)((long)puVar10 + lVar20 + lVar11 * 4 + 0x10);
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            puVar1 = (undefined8 *)((long)puVar12 + lVar20 + lVar11 * 4);
            *puVar1 = *puVar4;
            puVar1[1] = uVar7;
            puVar1 = (undefined8 *)((long)puVar12 + lVar20 + lVar11 * 4 + 0x10);
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            lVar20 = lVar20 + 0x20;
          } while (uVar15 * 0x20 != lVar20);
        }
        puVar13 = puVar12 + uVar18;
        if (uVar16 == uVar18) goto LAB_002454b1;
        puVar19 = puVar10 + uVar18;
      }
      do {
        *puVar13 = *puVar19;
        puVar19 = puVar19 + 1;
        puVar13 = puVar13 + 1;
      } while (puVar19 != puVar17);
    }
LAB_002454b1:
    puVar19 = puVar13 + 1;
    if (puVar6 != puVar17) {
      uVar15 = (long)puVar6 + (-4 - (long)(puVar10 + lVar21));
      if (0x1b < uVar15) {
        uVar18 = (uVar15 >> 2) + 1;
        uVar23 = uVar18 & 0x7ffffffffffffff8;
        uVar16 = (uVar23 - 8 >> 3) + 1;
        uVar15 = (ulong)((uint)uVar16 & 3);
        if (uVar23 - 8 < 0x18) {
          lVar11 = 0;
        }
        else {
          uVar16 = uVar16 & 0xfffffffffffffffc;
          lVar11 = 0;
          do {
            uVar7 = *(undefined8 *)((long)(puVar10 + lVar21 + lVar11) + 8);
            uVar8 = *(undefined8 *)(puVar10 + lVar21 + lVar11 + 4);
            uVar9 = *(undefined8 *)((long)(puVar10 + lVar21 + lVar11 + 4) + 8);
            *(undefined8 *)(puVar13 + lVar11 + 1) = *(undefined8 *)(puVar10 + lVar21 + lVar11);
            *(undefined8 *)((long)(puVar13 + lVar11 + 1) + 8) = uVar7;
            *(undefined8 *)(puVar13 + lVar11 + 5) = uVar8;
            *(undefined8 *)((long)(puVar13 + lVar11 + 5) + 8) = uVar9;
            uVar7 = *(undefined8 *)((long)(puVar10 + lVar21 + lVar11 + 8) + 8);
            uVar8 = *(undefined8 *)(puVar10 + lVar21 + lVar11 + 0xc);
            uVar9 = *(undefined8 *)((long)(puVar10 + lVar21 + lVar11 + 0xc) + 8);
            *(undefined8 *)(puVar13 + lVar11 + 9) = *(undefined8 *)(puVar10 + lVar21 + lVar11 + 8);
            *(undefined8 *)((long)(puVar13 + lVar11 + 9) + 8) = uVar7;
            *(undefined8 *)(puVar13 + lVar11 + 0xd) = uVar8;
            *(undefined8 *)((long)(puVar13 + lVar11 + 0xd) + 8) = uVar9;
            uVar7 = *(undefined8 *)((long)(puVar10 + lVar21 + lVar11 + 0x10) + 8);
            uVar8 = *(undefined8 *)(puVar10 + lVar21 + lVar11 + 0x14);
            uVar9 = *(undefined8 *)((long)(puVar10 + lVar21 + lVar11 + 0x14) + 8);
            *(undefined8 *)(puVar13 + lVar11 + 0x11) =
                 *(undefined8 *)(puVar10 + lVar21 + lVar11 + 0x10);
            *(undefined8 *)((long)(puVar13 + lVar11 + 0x11) + 8) = uVar7;
            *(undefined8 *)(puVar13 + lVar11 + 0x15) = uVar8;
            *(undefined8 *)((long)(puVar13 + lVar11 + 0x15) + 8) = uVar9;
            uVar7 = *(undefined8 *)((long)(puVar10 + lVar21 + lVar11 + 0x18) + 8);
            uVar8 = *(undefined8 *)(puVar10 + lVar21 + lVar11 + 0x1c);
            uVar9 = *(undefined8 *)((long)(puVar10 + lVar21 + lVar11 + 0x1c) + 8);
            *(undefined8 *)(puVar13 + lVar11 + 0x19) =
                 *(undefined8 *)(puVar10 + lVar21 + lVar11 + 0x18);
            *(undefined8 *)((long)(puVar13 + lVar11 + 0x19) + 8) = uVar7;
            *(undefined8 *)(puVar13 + lVar11 + 0x1d) = uVar8;
            *(undefined8 *)((long)(puVar13 + lVar11 + 0x1d) + 8) = uVar9;
            lVar11 = lVar11 + 0x20;
            uVar16 = uVar16 - 4;
          } while (uVar16 != 0);
        }
        if (uVar15 != 0) {
          lVar20 = 0;
          do {
            puVar4 = (undefined8 *)((long)puVar10 + lVar20 + (lVar21 + lVar11) * 4);
            uVar7 = puVar4[1];
            puVar1 = (undefined8 *)((long)puVar10 + lVar20 + (lVar21 + lVar11) * 4 + 0x10);
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            puVar1 = (undefined8 *)((long)puVar13 + lVar20 + lVar11 * 4 + 4);
            *puVar1 = *puVar4;
            puVar1[1] = uVar7;
            puVar1 = (undefined8 *)((long)puVar13 + lVar20 + lVar11 * 4 + 0x14);
            *puVar1 = uVar8;
            puVar1[1] = uVar9;
            lVar20 = lVar20 + 0x20;
          } while (uVar15 * 0x20 != lVar20);
        }
        puVar19 = puVar19 + uVar23;
        if (uVar18 == uVar23) goto LAB_002455d2;
        puVar17 = puVar17 + uVar23;
      }
      do {
        *puVar19 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar19 = puVar19 + 1;
      } while (puVar17 != puVar6);
    }
LAB_002455d2:
    if (puVar10 != (undefined4 *)0x0) {
      operator_delete(puVar10);
    }
    *(undefined4 **)(this + 0x18) = puVar12;
    *(undefined4 **)(this + 0x20) = puVar19;
    *(undefined4 **)(this + 0x28) = puVar12 + uVar22;
    return;
  }
  lVar21 = *param_1;
  lVar11 = param_1[1];
  if (lVar21 == lVar11) {
    return;
  }
  lVar20 = *(long *)(this + 0x18);
  uVar15 = lVar20 + lVar21 * 4;
  uVar16 = lVar20 + lVar11 * 4;
  uVar22 = *(ulong *)(this + 0x20);
  uVar18 = uVar22 - uVar16;
  if (uVar18 == 0) {
    if (uVar16 == uVar15) {
      return;
    }
    goto LAB_002453cd;
  }
  if ((long)uVar18 < 1) {
    uVar15 = uVar15 + (uVar22 - uVar16);
    if (uVar22 == uVar15) {
      return;
    }
    goto LAB_002453cd;
  }
  uVar22 = uVar18 >> 2;
  uVar23 = uVar22 + (uVar18 < 4);
  if ((uVar23 < 8) ||
     ((uVar15 < lVar20 + ((uVar22 + lVar11) - (ulong)(3 < uVar18)) * 4 + 4 &&
      (uVar16 < lVar20 + ((lVar21 + uVar22) - (ulong)(3 < uVar18)) * 4 + 4)))) {
    uVar18 = uVar15;
    uVar23 = uVar16;
LAB_0024523c:
    uVar22 = uVar22 + 1;
    lVar21 = 0;
    do {
      *(undefined4 *)(uVar18 + lVar21) = *(undefined4 *)(uVar23 + lVar21);
      uVar22 = uVar22 - 1;
      lVar21 = lVar21 + 4;
    } while (1 < uVar22);
  }
  else {
    uVar24 = uVar23 & 0xfffffffffffffff8;
    uVar18 = (uVar24 - 8 >> 3) + 1;
    uVar25 = (ulong)((uint)uVar18 & 3);
    if (uVar24 - 8 < 0x18) {
      lVar14 = 0;
    }
    else {
      uVar18 = uVar18 & 0xfffffffffffffffc;
      lVar2 = lVar20 + lVar11 * 4;
      lVar3 = lVar20 + lVar21 * 4;
      lVar14 = 0;
      do {
        puVar1 = (undefined8 *)(lVar2 + lVar14 * 4);
        uVar7 = puVar1[1];
        puVar4 = (undefined8 *)(lVar2 + 0x10 + lVar14 * 4);
        uVar8 = *puVar4;
        uVar9 = puVar4[1];
        puVar4 = (undefined8 *)(lVar3 + lVar14 * 4);
        *puVar4 = *puVar1;
        puVar4[1] = uVar7;
        puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar14 * 4);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar14 * 4);
        uVar7 = puVar1[1];
        puVar4 = (undefined8 *)(lVar2 + 0x30 + lVar14 * 4);
        uVar8 = *puVar4;
        uVar9 = puVar4[1];
        puVar4 = (undefined8 *)(lVar3 + 0x20 + lVar14 * 4);
        *puVar4 = *puVar1;
        puVar4[1] = uVar7;
        puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar14 * 4);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar14 * 4);
        uVar7 = puVar1[1];
        puVar4 = (undefined8 *)(lVar2 + 0x50 + lVar14 * 4);
        uVar8 = *puVar4;
        uVar9 = puVar4[1];
        puVar4 = (undefined8 *)(lVar3 + 0x40 + lVar14 * 4);
        *puVar4 = *puVar1;
        puVar4[1] = uVar7;
        puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar14 * 4);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar4 = (undefined8 *)(lVar2 + 0x60 + lVar14 * 4);
        uVar7 = puVar4[1];
        puVar1 = (undefined8 *)(lVar2 + 0x70 + lVar14 * 4);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar14 * 4);
        *puVar1 = *puVar4;
        puVar1[1] = uVar7;
        puVar1 = (undefined8 *)(lVar3 + 0x70 + lVar14 * 4);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        lVar14 = lVar14 + 0x20;
        uVar18 = uVar18 - 4;
      } while (uVar18 != 0);
    }
    if (uVar25 != 0) {
      lVar11 = lVar20 + (lVar11 + lVar14) * 4;
      lVar20 = lVar20 + (lVar21 + lVar14) * 4;
      lVar21 = 0;
      do {
        puVar4 = (undefined8 *)(lVar11 + lVar21);
        uVar7 = puVar4[1];
        puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar21);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        puVar1 = (undefined8 *)(lVar20 + lVar21);
        *puVar1 = *puVar4;
        puVar1[1] = uVar7;
        puVar1 = (undefined8 *)(lVar20 + 0x10 + lVar21);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        lVar21 = lVar21 + 0x20;
      } while (uVar25 * 0x20 != lVar21);
    }
    if (uVar23 != uVar24) {
      uVar22 = uVar22 - uVar24;
      uVar18 = uVar15 + uVar24 * 4;
      uVar23 = uVar16 + uVar24 * 4;
      goto LAB_0024523c;
    }
  }
  uVar15 = uVar15 + (*(ulong *)(this + 0x20) - uVar16);
  if (*(ulong *)(this + 0x20) == uVar15) {
    return;
  }
LAB_002453cd:
  *(ulong *)(this + 0x20) = uVar15;
  return;
}


