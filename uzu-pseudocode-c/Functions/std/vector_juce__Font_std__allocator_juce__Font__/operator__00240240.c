// Function : operator=
// Namespace: std:vector_juce__Font_std__allocator_juce__Font__
// Entry    : 00240240
// Prototype: vector<juce::Font,std::allocator<juce::Font>> * operator=(vector<juce::Font,std::allocator<juce::Font>> * this, vector<juce::Font,std::allocator<juce::Font>> * param_1)
// Body     : 00240240 - 002404d9


/* std::vector<juce::Font, std::allocator<juce::Font>
   >::TEMPNAMEPLACEHOLDERVALUE(std::vector<juce::Font, std::allocator<juce::Font> > const&) */

vector<juce::Font,std::allocator<juce::Font>> * __thiscall
std::vector<juce::Font,std::allocator<juce::Font>>::operator=
          (vector<juce::Font,std::allocator<juce::Font>> *this,
          vector<juce::Font,std::allocator<juce::Font>> *param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_1 == this) {
    return this;
  }
  plVar7 = *(long **)param_1;
  plVar8 = *(long **)(param_1 + 8);
  uVar12 = (long)plVar8 - (long)plVar7;
  uVar10 = (long)uVar12 >> 3;
  plVar4 = *(long **)this;
  if ((ulong)(*(long *)(this + 0x10) - (long)plVar4 >> 3) < uVar10) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar10;
    if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_array_new_length();
    }
    plVar4 = operator_new(SUB168(auVar3 * ZEXT816(8),0));
    if (plVar7 != plVar8) {
      plVar5 = plVar4;
      do {
        lVar9 = *plVar7;
        *plVar5 = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        plVar7 = plVar7 + 1;
        plVar5 = plVar5 + 1;
      } while (plVar7 != plVar8);
    }
    plVar8 = *(long **)this;
    plVar7 = *(long **)(this + 8);
    if (plVar8 != plVar7) {
      do {
        plVar5 = (long *)*plVar8;
        if (plVar5 != (long *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar7);
      plVar8 = *(long **)this;
    }
    if (plVar8 != (long *)0x0) {
      operator_delete(plVar8);
    }
    *(long **)this = plVar4;
    *(long **)(this + 0x10) = plVar4 + uVar10;
  }
  else {
    plVar5 = *(long **)(this + 8);
    uVar11 = (long)plVar5 - (long)plVar4;
    uVar6 = (long)uVar11 >> 3;
    if (uVar6 < uVar10) {
      if (0 < (long)uVar11) {
        uVar12 = (uVar11 >> 3) + 1;
        lVar9 = 0;
        do {
          lVar2 = *(long *)((long)plVar7 + lVar9);
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          plVar8 = *(long **)((long)plVar4 + lVar9);
          *(long *)((long)plVar4 + lVar9) = lVar2;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar5 = plVar8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          uVar12 = uVar12 - 1;
          lVar9 = lVar9 + 8;
        } while (1 < uVar12);
        plVar7 = *(long **)param_1;
        plVar8 = *(long **)(param_1 + 8);
        plVar5 = *(long **)(this + 8);
        uVar6 = (long)plVar5 - *(long *)this >> 3;
      }
      for (plVar7 = plVar7 + uVar6; plVar7 != plVar8; plVar7 = plVar7 + 1) {
        lVar9 = *plVar7;
        *plVar5 = lVar9;
        if (lVar9 != 0) {
          LOCK();
          *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
          UNLOCK();
        }
        plVar5 = plVar5 + 1;
      }
    }
    else {
      if ((long)uVar12 < 1) {
        if (plVar4 == plVar5) goto LAB_00240382;
      }
      else {
        uVar12 = (uVar12 >> 3) + 1;
        lVar9 = 0;
        do {
          lVar2 = *(long *)((long)plVar7 + lVar9);
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          plVar8 = *(long **)((long)plVar4 + lVar9);
          *(long *)((long)plVar4 + lVar9) = lVar2;
          if (plVar8 != (long *)0x0) {
            LOCK();
            plVar5 = plVar8 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          uVar12 = uVar12 - 1;
          lVar9 = lVar9 + 8;
        } while (1 < uVar12);
        plVar5 = *(long **)(this + 8);
        plVar4 = (long *)((long)plVar4 + lVar9);
        if (plVar4 == plVar5) goto LAB_00240382;
      }
      do {
        plVar7 = (long *)*plVar4;
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar8 = plVar7 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar7 + 8))();
          }
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar5);
    }
  }
LAB_00240382:
  *(ulong *)(this + 8) = uVar10 * 8 + *(long *)this;
  return this;
}


