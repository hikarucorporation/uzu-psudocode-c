// Function : _M_realloc_insert<juce::Font_const&>
// Namespace: std:vector_juce__Font_std__allocator_juce__Font__
// Entry    : 00241590
// Prototype: void _M_realloc_insert<juce::Font_const&>(vector<juce::Font,std::allocator<juce::Font>> * this, undefined8 * param_1, long * param_2)
// Body     : 00241590 - 0024179b


/* void std::vector<juce::Font, std::allocator<juce::Font> >::_M_realloc_insert<juce::Font
   const&>(__gnu_cxx::__normal_iterator<juce::Font*, std::vector<juce::Font,
   std::allocator<juce::Font> > >, juce::Font const&) */

void __thiscall
std::vector<juce::Font,std::allocator<juce::Font>>::_M_realloc_insert<juce::Font_const&>
          (vector<juce::Font,std::allocator<juce::Font>> *this,undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar1 = *(undefined8 **)this;
  puVar2 = *(undefined8 **)(this + 8);
  lVar7 = (long)puVar2 - (long)puVar1;
  if (lVar7 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar10 = lVar7 >> 3;
  uVar14 = 1;
  if (lVar7 != 0) {
    uVar14 = uVar10;
  }
  uVar13 = uVar14 + uVar10;
  if (uVar13 >> 0x3c != 0) {
    uVar13 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar14,uVar10)) {
    uVar13 = 0xfffffffffffffff;
  }
  lVar7 = (long)param_1 - (long)puVar1 >> 3;
  if (uVar13 == 0) {
    puVar8 = (undefined8 *)0x0;
    lVar3 = *param_2;
    *(long *)(lVar7 * 8) = lVar3;
  }
  else {
    puVar8 = operator_new(uVar13 * 8);
    lVar3 = *param_2;
    puVar8[lVar7] = lVar3;
  }
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar9 = puVar8;
  if (puVar1 != param_1) {
    uVar14 = ((long)param_1 - (long)puVar1) - 8;
    puVar11 = puVar1;
    if (0x17 < uVar14) {
      uVar15 = (uVar14 >> 3) + 1;
      uVar14 = uVar15 & 0xfffffffffffffffc;
      puVar9 = puVar8 + uVar14;
      puVar11 = puVar1 + uVar14;
      uVar10 = 0;
      do {
        uVar4 = (puVar1 + uVar10)[1];
        uVar5 = puVar1[uVar10 + 2];
        uVar6 = (puVar1 + uVar10 + 2)[1];
        puVar8[uVar10] = puVar1[uVar10];
        (puVar8 + uVar10)[1] = uVar4;
        puVar8[uVar10 + 2] = uVar5;
        (puVar8 + uVar10 + 2)[1] = uVar6;
        puVar1[uVar10] = 0;
        (puVar1 + uVar10)[1] = 0;
        puVar1[uVar10 + 2] = 0;
        (puVar1 + uVar10 + 2)[1] = 0;
        uVar10 = uVar10 + 4;
      } while (uVar14 != uVar10);
      if (uVar15 == uVar14) goto LAB_002416ba;
    }
    do {
      *puVar9 = *puVar11;
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
      puVar9 = puVar9 + 1;
    } while (puVar11 != param_1);
  }
LAB_002416ba:
  puVar11 = puVar9 + 1;
  if ((long)puVar2 - (long)param_1 != 0) {
    uVar14 = ((long)puVar2 - (long)param_1) - 8;
    if (uVar14 < 0x18) {
      puVar12 = param_1;
    }
    else {
      uVar14 = (uVar14 >> 3) + 1;
      uVar10 = uVar14 & 0xfffffffffffffffc;
      puVar11 = puVar11 + uVar10;
      puVar12 = param_1 + uVar10;
      uVar15 = 0;
      do {
        uVar4 = (param_1 + uVar15)[1];
        uVar5 = param_1[uVar15 + 2];
        uVar6 = (param_1 + uVar15 + 2)[1];
        puVar9[uVar15 + 1] = param_1[uVar15];
        (puVar9 + uVar15 + 1)[1] = uVar4;
        puVar9[uVar15 + 3] = uVar5;
        (puVar9 + uVar15 + 3)[1] = uVar6;
        param_1[uVar15] = 0;
        (param_1 + uVar15)[1] = 0;
        param_1[uVar15 + 2] = 0;
        (param_1 + uVar15 + 2)[1] = 0;
        uVar15 = uVar15 + 4;
      } while (uVar10 != uVar15);
      if (uVar14 == uVar10) goto LAB_0024175b;
    }
    do {
      *puVar11 = *puVar12;
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
      puVar11 = puVar11 + 1;
    } while (puVar12 != puVar2);
  }
LAB_0024175b:
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1);
  }
  *(undefined8 **)this = puVar8;
  *(undefined8 **)(this + 8) = puVar11;
  *(undefined8 **)(this + 0x10) = puVar8 + uVar13;
  return;
}


