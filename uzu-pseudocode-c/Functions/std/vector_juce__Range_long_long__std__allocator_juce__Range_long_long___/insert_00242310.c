// Function : insert
// Namespace: std:vector_juce__Range_long_long__std__allocator_juce__Range_long_long___
// Entry    : 00242310
// Prototype: undefined insert(vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> * this, undefined8 * param_1, undefined8 * param_2)
// Body     : 00242310 - 002424d6


/* std::vector<juce::Range<long long>, std::allocator<juce::Range<long long> >
   >::insert(__gnu_cxx::__normal_iterator<juce::Range<long long> const*,
   std::vector<juce::Range<long long>, std::allocator<juce::Range<long long> > > >, juce::Range<long
   long> const&) */

void __thiscall
std::vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>>::insert
          (vector<juce::Range<long_long>,std::allocator<juce::Range<long_long>>> *this,
          undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 local_49;
  undefined7 uStack_48;
  
  pvVar2 = *(void **)this;
  puVar8 = *(undefined8 **)(this + 8);
  lVar13 = (long)param_1 - (long)pvVar2 >> 4;
  if (puVar8 == *(undefined8 **)(this + 0x10)) {
    lVar5 = (long)puVar8 - (long)pvVar2;
    if (lVar5 == 0x7ffffffffffffff0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_length_error("vector::_M_realloc_insert");
    }
    uVar9 = lVar5 >> 4;
    uVar10 = 1;
    if (lVar5 != 0) {
      uVar10 = uVar9;
    }
    uVar12 = uVar10 + uVar9;
    if (uVar12 >> 0x3b != 0) {
      uVar12 = 0x7ffffffffffffff;
    }
    if (CARRY8(uVar10,uVar9)) {
      uVar12 = 0x7ffffffffffffff;
    }
    if (uVar12 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = operator_new(uVar12 << 4);
    }
    puVar7 = (undefined8 *)((long)pvVar2 + lVar13 * 0x10);
    uVar3 = param_2[1];
    puVar6[lVar13 * 2] = *param_2;
    (puVar6 + lVar13 * 2)[1] = uVar3;
    puVar11 = puVar6;
    if ((long)param_1 - (long)pvVar2 != 0) {
      lVar5 = 0;
      do {
        uVar3 = ((undefined8 *)((long)pvVar2 + lVar5))[1];
        *(undefined8 *)((long)puVar6 + lVar5) = *(undefined8 *)((long)pvVar2 + lVar5);
        ((undefined8 *)((long)puVar6 + lVar5))[1] = uVar3;
        lVar5 = lVar5 + 0x10;
      } while (lVar13 * 0x10 != lVar5);
      puVar11 = (undefined8 *)(lVar5 + (long)puVar6);
    }
    for (; puVar4 = puVar11 + 2, puVar8 != puVar7; puVar7 = puVar7 + 2) {
      uVar3 = puVar7[1];
      *puVar4 = *puVar7;
      puVar11[3] = uVar3;
      puVar11 = puVar4;
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    *(undefined8 **)this = puVar6;
    *(undefined8 **)(this + 8) = puVar4;
    *(undefined8 **)(this + 0x10) = puVar6 + uVar12 * 2;
  }
  else if (puVar8 == param_1) {
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    *(long *)(this + 8) = *(long *)(this + 8) + 0x10;
  }
  else {
    puVar14 = (undefined1 *)((long)pvVar2 + lVar13 * 0x10);
    uVar1 = *(undefined1 *)param_2;
    uStack_48 = (undefined7)((ulong)param_2[1] >> 8);
    uVar3 = *(undefined8 *)((long)param_2 + 1);
    local_49 = (undefined1)((ulong)uVar3 >> 0x38);
    *puVar8 = puVar8[-2];
    puVar8[1] = puVar8[-1];
    lVar13 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar13 + 0x10;
    puVar8 = (undefined8 *)(lVar13 + -0x10);
    if (0 < (long)puVar8 - (long)puVar14) {
      uVar10 = ((ulong)((long)puVar8 - (long)puVar14) >> 4) + 1;
      do {
        *puVar8 = puVar8[-2];
        puVar8[1] = puVar8[-1];
        puVar8 = puVar8 + -2;
        uVar10 = uVar10 - 1;
      } while (1 < uVar10);
    }
    *puVar14 = uVar1;
    *(undefined8 *)(puVar14 + 1) = uVar3;
    *(ulong *)(puVar14 + 8) = CONCAT71(uStack_48,local_49);
  }
  return;
}


