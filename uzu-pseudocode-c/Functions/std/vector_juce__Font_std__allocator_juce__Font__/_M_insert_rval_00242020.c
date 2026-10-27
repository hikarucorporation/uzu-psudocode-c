// Function : _M_insert_rval
// Namespace: std:vector_juce__Font_std__allocator_juce__Font__
// Entry    : 00242020
// Prototype: undefined _M_insert_rval(vector<juce::Font,std::allocator<juce::Font>> * this, long * param_1, long * param_2)
// Body     : 00242020 - 0024230a


/* std::vector<juce::Font, std::allocator<juce::Font>
   >::_M_insert_rval(__gnu_cxx::__normal_iterator<juce::Font const*, std::vector<juce::Font,
   std::allocator<juce::Font> > >, juce::Font&&) */

void __thiscall
std::vector<juce::Font,std::allocator<juce::Font>>::_M_insert_rval
          (vector<juce::Font,std::allocator<juce::Font>> *this,long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  plVar1 = *(long **)this;
  plVar11 = *(long **)(this + 8);
  uVar10 = (long)param_1 - (long)plVar1;
  lVar15 = (long)uVar10 >> 3;
  if (plVar11 != *(long **)(this + 0x10)) {
    if (plVar11 == param_1) {
      *param_1 = *param_2;
      *param_2 = 0;
      *(long *)(this + 8) = *(long *)(this + 8) + 8;
      return;
    }
    plVar1 = plVar1 + lVar15;
    *plVar11 = plVar11[-1];
    plVar11[-1] = 0;
    lVar15 = *(long *)(this + 8);
    *(long *)(this + 8) = lVar15 + 8;
    plVar11 = (long *)(lVar15 + -8);
    if (0 < (long)plVar11 - (long)plVar1) {
      uVar10 = ((ulong)((long)plVar11 - (long)plVar1) >> 3) + 1;
      do {
        lVar15 = plVar11[-1];
        plVar5 = (long *)*plVar11;
        plVar11[-1] = 0;
        *plVar11 = lVar15;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar6 = plVar5 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        plVar11 = plVar11 + -1;
        uVar10 = uVar10 - 1;
      } while (1 < uVar10);
    }
    lVar15 = *param_2;
    *param_2 = 0;
    plVar11 = (long *)*plVar1;
    *plVar1 = lVar15;
    if (plVar11 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0024210b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar11 + 8))();
      return;
    }
    return;
  }
  lVar4 = (long)plVar11 - (long)plVar1;
  if (lVar4 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar7 = lVar4 >> 3;
  uVar13 = 1;
  if (lVar4 != 0) {
    uVar13 = uVar7;
  }
  uVar12 = uVar13 + uVar7;
  if (uVar12 >> 0x3c != 0) {
    uVar12 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar13,uVar7)) {
    uVar12 = 0xfffffffffffffff;
  }
  if (uVar12 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = operator_new(uVar12 * 8);
  }
  plVar6 = plVar1 + lVar15;
  plVar5[lVar15] = *param_2;
  *param_2 = 0;
  plVar8 = plVar5;
  if (7 < uVar10) {
    plVar9 = plVar1;
    if (0x17 < uVar10 - 8) {
      uVar14 = (uVar10 - 8 >> 3) + 1;
      uVar7 = uVar14 & 0xfffffffffffffffc;
      plVar8 = plVar5 + uVar7;
      plVar9 = plVar1 + uVar7;
      uVar13 = 0;
      do {
        lVar4 = (plVar1 + uVar13)[1];
        lVar2 = plVar1[uVar13 + 2];
        lVar3 = (plVar1 + uVar13 + 2)[1];
        plVar5[uVar13] = plVar1[uVar13];
        (plVar5 + uVar13)[1] = lVar4;
        plVar5[uVar13 + 2] = lVar2;
        (plVar5 + uVar13 + 2)[1] = lVar3;
        plVar1[uVar13] = 0;
        (plVar1 + uVar13)[1] = 0;
        plVar1[uVar13 + 2] = 0;
        (plVar1 + uVar13 + 2)[1] = 0;
        uVar13 = uVar13 + 4;
      } while (uVar7 != uVar13);
      if (uVar14 == uVar7) goto LAB_0024222a;
    }
    do {
      *plVar8 = *plVar9;
      *plVar9 = 0;
      plVar9 = plVar9 + 1;
      plVar8 = plVar8 + 1;
    } while (plVar9 != plVar6);
  }
LAB_0024222a:
  plVar9 = plVar8 + 1;
  if (plVar11 == plVar6) {
LAB_002422ca:
    if (plVar1 == (long *)0x0) goto LAB_002422d7;
  }
  else {
    uVar10 = (long)plVar11 + (-8 - ((uVar10 & 0xfffffffffffffff8) + (long)plVar1));
    if (uVar10 < 0x18) {
LAB_002422b0:
      do {
        *plVar9 = *plVar6;
        *plVar6 = 0;
        plVar6 = plVar6 + 1;
        plVar9 = plVar9 + 1;
      } while (plVar6 != plVar11);
      goto LAB_002422ca;
    }
    uVar10 = (uVar10 >> 3) + 1;
    uVar7 = uVar10 & 0xfffffffffffffffc;
    plVar9 = plVar9 + uVar7;
    plVar6 = plVar6 + uVar7;
    uVar13 = 0;
    do {
      lVar4 = (plVar1 + lVar15 + uVar13)[1];
      lVar2 = plVar1[lVar15 + uVar13 + 2];
      lVar3 = (plVar1 + lVar15 + uVar13 + 2)[1];
      plVar8[uVar13 + 1] = plVar1[lVar15 + uVar13];
      (plVar8 + uVar13 + 1)[1] = lVar4;
      plVar8[uVar13 + 3] = lVar2;
      (plVar8 + uVar13 + 3)[1] = lVar3;
      plVar1[lVar15 + uVar13] = 0;
      (plVar1 + lVar15 + uVar13)[1] = 0;
      plVar1[lVar15 + uVar13 + 2] = 0;
      (plVar1 + lVar15 + uVar13 + 2)[1] = 0;
      uVar13 = uVar13 + 4;
    } while (uVar7 != uVar13);
    if (uVar10 != uVar7) goto LAB_002422b0;
  }
  operator_delete(plVar1);
LAB_002422d7:
  *(long **)this = plVar5;
  *(long **)(this + 8) = plVar9;
  *(long **)(this + 0x10) = plVar5 + uVar12;
  return;
}


