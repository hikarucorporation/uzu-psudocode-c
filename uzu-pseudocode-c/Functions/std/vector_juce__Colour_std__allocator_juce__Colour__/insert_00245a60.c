// Function : insert
// Namespace: std:vector_juce__Colour_std__allocator_juce__Colour__
// Entry    : 00245a60
// Prototype: undefined insert(vector<juce::Colour,std::allocator<juce::Colour>> * this, undefined4 * param_1, undefined4 * param_2)
// Body     : 00245a60 - 00245e3d


/* std::vector<juce::Colour, std::allocator<juce::Colour>
   >::insert(__gnu_cxx::__normal_iterator<juce::Colour const*, std::vector<juce::Colour,
   std::allocator<juce::Colour> > >, juce::Colour const&) */

void __thiscall
std::vector<juce::Colour,std::allocator<juce::Colour>>::insert
          (vector<juce::Colour,std::allocator<juce::Colour>> *this,undefined4 *param_1,
          undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  
  puVar4 = *(undefined4 **)this;
  puVar12 = *(undefined4 **)(this + 8);
  uVar21 = (long)param_1 - (long)puVar4;
  lVar15 = (long)uVar21 >> 2;
  if (puVar12 != *(undefined4 **)(this + 0x10)) {
    if (puVar12 == param_1) {
      *param_1 = *param_2;
      *(long *)(this + 8) = *(long *)(this + 8) + 4;
      return;
    }
    uVar3 = *param_2;
    *puVar12 = puVar12[-1];
    lVar8 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar8 + 4;
    puVar12 = (undefined4 *)(lVar8 + -4);
    uVar21 = (long)puVar12 - (long)(puVar4 + lVar15);
    if (0 < (long)uVar21) {
      uVar21 = (uVar21 >> 2) + 1;
      do {
        *puVar12 = puVar12[-1];
        puVar12 = puVar12 + -1;
        uVar21 = uVar21 - 1;
      } while (1 < uVar21);
    }
    puVar4[lVar15] = uVar3;
    return;
  }
  lVar8 = (long)puVar12 - (long)puVar4;
  if (lVar8 == 0x7ffffffffffffffc) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  puVar17 = puVar4 + lVar15;
  uVar11 = lVar8 >> 2;
  uVar20 = 1;
  if (lVar8 != 0) {
    uVar20 = uVar11;
  }
  uVar18 = uVar20 + uVar11;
  if (uVar18 >> 0x3d != 0) {
    uVar18 = 0x1fffffffffffffff;
  }
  if (CARRY8(uVar20,uVar11)) {
    uVar18 = 0x1fffffffffffffff;
  }
  puVar9 = operator_new(uVar18 * 4);
  puVar9[lVar15] = *param_2;
  puVar10 = puVar9;
  if (uVar21 != 0) {
    puVar14 = puVar4;
    if (0x1b < uVar21 - 4) {
      uVar11 = (uVar21 - 4 >> 2) + 1;
      uVar13 = uVar11 & 0x7ffffffffffffff8;
      uVar19 = (uVar13 - 8 >> 3) + 1;
      uVar20 = (ulong)((uint)uVar19 & 3);
      if (uVar13 - 8 < 0x18) {
        lVar8 = 0;
      }
      else {
        uVar19 = uVar19 & 0xfffffffffffffffc;
        lVar8 = 0;
        do {
          uVar5 = *(undefined8 *)((long)(puVar4 + lVar8) + 8);
          uVar6 = *(undefined8 *)(puVar4 + lVar8 + 4);
          uVar7 = *(undefined8 *)((long)(puVar4 + lVar8 + 4) + 8);
          *(undefined8 *)(puVar9 + lVar8) = *(undefined8 *)(puVar4 + lVar8);
          *(undefined8 *)((long)(puVar9 + lVar8) + 8) = uVar5;
          *(undefined8 *)(puVar9 + lVar8 + 4) = uVar6;
          *(undefined8 *)((long)(puVar9 + lVar8 + 4) + 8) = uVar7;
          uVar5 = *(undefined8 *)((long)(puVar4 + lVar8 + 8) + 8);
          uVar6 = *(undefined8 *)(puVar4 + lVar8 + 0xc);
          uVar7 = *(undefined8 *)((long)(puVar4 + lVar8 + 0xc) + 8);
          *(undefined8 *)(puVar9 + lVar8 + 8) = *(undefined8 *)(puVar4 + lVar8 + 8);
          *(undefined8 *)((long)(puVar9 + lVar8 + 8) + 8) = uVar5;
          *(undefined8 *)(puVar9 + lVar8 + 0xc) = uVar6;
          *(undefined8 *)((long)(puVar9 + lVar8 + 0xc) + 8) = uVar7;
          uVar5 = *(undefined8 *)((long)(puVar4 + lVar8 + 0x10) + 8);
          uVar6 = *(undefined8 *)(puVar4 + lVar8 + 0x14);
          uVar7 = *(undefined8 *)((long)(puVar4 + lVar8 + 0x14) + 8);
          *(undefined8 *)(puVar9 + lVar8 + 0x10) = *(undefined8 *)(puVar4 + lVar8 + 0x10);
          *(undefined8 *)((long)(puVar9 + lVar8 + 0x10) + 8) = uVar5;
          *(undefined8 *)(puVar9 + lVar8 + 0x14) = uVar6;
          *(undefined8 *)((long)(puVar9 + lVar8 + 0x14) + 8) = uVar7;
          uVar5 = *(undefined8 *)((long)(puVar4 + lVar8 + 0x18) + 8);
          uVar6 = *(undefined8 *)(puVar4 + lVar8 + 0x1c);
          uVar7 = *(undefined8 *)((long)(puVar4 + lVar8 + 0x1c) + 8);
          *(undefined8 *)(puVar9 + lVar8 + 0x18) = *(undefined8 *)(puVar4 + lVar8 + 0x18);
          *(undefined8 *)((long)(puVar9 + lVar8 + 0x18) + 8) = uVar5;
          *(undefined8 *)(puVar9 + lVar8 + 0x1c) = uVar6;
          *(undefined8 *)((long)(puVar9 + lVar8 + 0x1c) + 8) = uVar7;
          lVar8 = lVar8 + 0x20;
          uVar19 = uVar19 - 4;
        } while (uVar19 != 0);
      }
      if (uVar20 != 0) {
        lVar16 = 0;
        do {
          puVar2 = (undefined8 *)((long)puVar4 + lVar16 + lVar8 * 4);
          uVar5 = puVar2[1];
          puVar1 = (undefined8 *)((long)puVar4 + lVar16 + lVar8 * 4 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)((long)puVar9 + lVar16 + lVar8 * 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((long)puVar9 + lVar16 + lVar8 * 4 + 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar16 = lVar16 + 0x20;
        } while (uVar20 * 0x20 != lVar16);
      }
      puVar10 = puVar9 + uVar13;
      if (uVar11 == uVar13) goto LAB_00245cc1;
      puVar14 = puVar4 + uVar13;
    }
    do {
      *puVar10 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar10 = puVar10 + 1;
    } while (puVar14 != puVar17);
  }
LAB_00245cc1:
  puVar14 = puVar10 + 1;
  if (puVar12 != puVar17) {
    uVar21 = (long)puVar12 + (-4 - ((uVar21 & 0xfffffffffffffffc) + (long)puVar4));
    if (0x1b < uVar21) {
      uVar11 = (uVar21 >> 2) + 1;
      uVar13 = uVar11 & 0x7ffffffffffffff8;
      uVar20 = (uVar13 - 8 >> 3) + 1;
      uVar21 = (ulong)((uint)uVar20 & 3);
      if (uVar13 - 8 < 0x18) {
        lVar8 = 0;
      }
      else {
        uVar20 = uVar20 & 0xfffffffffffffffc;
        lVar8 = 0;
        do {
          uVar5 = *(undefined8 *)((long)(puVar4 + lVar15 + lVar8) + 8);
          uVar6 = *(undefined8 *)(puVar4 + lVar15 + lVar8 + 4);
          uVar7 = *(undefined8 *)((long)(puVar4 + lVar15 + lVar8 + 4) + 8);
          *(undefined8 *)(puVar10 + lVar8 + 1) = *(undefined8 *)(puVar4 + lVar15 + lVar8);
          *(undefined8 *)((long)(puVar10 + lVar8 + 1) + 8) = uVar5;
          *(undefined8 *)(puVar10 + lVar8 + 5) = uVar6;
          *(undefined8 *)((long)(puVar10 + lVar8 + 5) + 8) = uVar7;
          uVar5 = *(undefined8 *)((long)(puVar4 + lVar15 + lVar8 + 8) + 8);
          uVar6 = *(undefined8 *)(puVar4 + lVar15 + lVar8 + 0xc);
          uVar7 = *(undefined8 *)((long)(puVar4 + lVar15 + lVar8 + 0xc) + 8);
          *(undefined8 *)(puVar10 + lVar8 + 9) = *(undefined8 *)(puVar4 + lVar15 + lVar8 + 8);
          *(undefined8 *)((long)(puVar10 + lVar8 + 9) + 8) = uVar5;
          *(undefined8 *)(puVar10 + lVar8 + 0xd) = uVar6;
          *(undefined8 *)((long)(puVar10 + lVar8 + 0xd) + 8) = uVar7;
          uVar5 = *(undefined8 *)((long)(puVar4 + lVar15 + lVar8 + 0x10) + 8);
          uVar6 = *(undefined8 *)(puVar4 + lVar15 + lVar8 + 0x14);
          uVar7 = *(undefined8 *)((long)(puVar4 + lVar15 + lVar8 + 0x14) + 8);
          *(undefined8 *)(puVar10 + lVar8 + 0x11) = *(undefined8 *)(puVar4 + lVar15 + lVar8 + 0x10);
          *(undefined8 *)((long)(puVar10 + lVar8 + 0x11) + 8) = uVar5;
          *(undefined8 *)(puVar10 + lVar8 + 0x15) = uVar6;
          *(undefined8 *)((long)(puVar10 + lVar8 + 0x15) + 8) = uVar7;
          uVar5 = *(undefined8 *)((long)(puVar4 + lVar15 + lVar8 + 0x18) + 8);
          uVar6 = *(undefined8 *)(puVar4 + lVar15 + lVar8 + 0x1c);
          uVar7 = *(undefined8 *)((long)(puVar4 + lVar15 + lVar8 + 0x1c) + 8);
          *(undefined8 *)(puVar10 + lVar8 + 0x19) = *(undefined8 *)(puVar4 + lVar15 + lVar8 + 0x18);
          *(undefined8 *)((long)(puVar10 + lVar8 + 0x19) + 8) = uVar5;
          *(undefined8 *)(puVar10 + lVar8 + 0x1d) = uVar6;
          *(undefined8 *)((long)(puVar10 + lVar8 + 0x1d) + 8) = uVar7;
          lVar8 = lVar8 + 0x20;
          uVar20 = uVar20 - 4;
        } while (uVar20 != 0);
      }
      if (uVar21 != 0) {
        lVar16 = 0;
        do {
          puVar2 = (undefined8 *)((long)puVar4 + lVar16 + (lVar15 + lVar8) * 4);
          uVar5 = puVar2[1];
          puVar1 = (undefined8 *)((long)puVar4 + lVar16 + (lVar15 + lVar8) * 4 + 0x10);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)((long)puVar10 + lVar16 + lVar8 * 4 + 4);
          *puVar1 = *puVar2;
          puVar1[1] = uVar5;
          puVar1 = (undefined8 *)((long)puVar10 + lVar16 + lVar8 * 4 + 0x14);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          lVar16 = lVar16 + 0x20;
        } while (uVar21 * 0x20 != lVar16);
      }
      puVar14 = puVar14 + uVar13;
      if (uVar11 == uVar13) goto LAB_00245e02;
      puVar17 = puVar17 + uVar13;
    }
    do {
      *puVar14 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar14 = puVar14 + 1;
    } while (puVar17 != puVar12);
  }
LAB_00245e02:
  if (puVar4 != (undefined4 *)0x0) {
    operator_delete(puVar4);
  }
  *(undefined4 **)this = puVar9;
  *(undefined4 **)(this + 8) = puVar14;
  *(undefined4 **)(this + 0x10) = puVar9 + uVar18;
  return;
}


