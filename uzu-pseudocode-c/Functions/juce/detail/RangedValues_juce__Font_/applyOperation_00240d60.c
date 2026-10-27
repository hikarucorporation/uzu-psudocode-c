// Function : applyOperation
// Namespace: juce:detail:RangedValues_juce__Font_
// Entry    : 00240d60
// Prototype: undefined applyOperation(RangedValues<juce::Font> * this, long * param_1)
// Body     : 00240d60 - 00240fb2


/* juce::detail::RangedValues<juce::Font>::applyOperation(std::variant<juce::detail::Ranges::Ops::New,
   juce::detail::Ranges::Ops::Split, juce::detail::Ranges::Ops::Erase,
   juce::detail::Ranges::Ops::Change> const&) */

void __thiscall
juce::detail::RangedValues<juce::Font>::applyOperation(RangedValues<juce::Font> *this,long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  if ((char)param_1[5] != '\x02') {
    if ((char)param_1[5] != '\x01') {
      return;
    }
    plVar10 = (long *)(*param_1 * 8 + *(long *)(this + 0x18));
    plVar9 = *(long **)(this + 0x20);
    if (plVar9 == *(long **)(this + 0x28)) {
      std::vector<juce::Font,std::allocator<juce::Font>>::_M_realloc_insert<juce::Font_const&>
                ((vector<juce::Font,std::allocator<juce::Font>> *)(this + 0x18),plVar10,plVar10);
      return;
    }
    lVar3 = *plVar10;
    if (plVar9 == plVar10) {
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
        plVar10 = *(long **)(this + 0x20);
      }
      *(long **)(this + 0x20) = plVar10 + 1;
      return;
    }
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      plVar9 = *(long **)(this + 0x20);
    }
    *plVar9 = plVar9[-1];
    plVar9[-1] = 0;
    lVar4 = *(long *)(this + 0x20);
    *(long *)(this + 0x20) = lVar4 + 8;
    plVar9 = (long *)(lVar4 + -8);
    if (0 < (long)plVar9 - (long)plVar10) {
      uVar7 = ((ulong)((long)plVar9 - (long)plVar10) >> 3) + 1;
      do {
        lVar4 = plVar9[-1];
        plVar8 = (long *)*plVar9;
        plVar9[-1] = 0;
        *plVar9 = lVar4;
        if (plVar8 != (long *)0x0) {
          LOCK();
          plVar6 = plVar8 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        plVar9 = plVar9 + -1;
        uVar7 = uVar7 - 1;
      } while (1 < uVar7);
    }
    plVar9 = (long *)*plVar10;
    *plVar10 = lVar3;
    if (plVar9 == (long *)0x0) {
      return;
    }
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00240ef7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 8))();
      return;
    }
    return;
  }
  lVar3 = *param_1;
  lVar4 = param_1[1];
  if (lVar3 == lVar4) {
    return;
  }
  lVar11 = *(long *)(this + 0x18);
  lVar2 = lVar11 + lVar3 * 8;
  plVar9 = (long *)(lVar11 + lVar4 * 8);
  uVar7 = (long)*(long **)(this + 0x20) - (long)plVar9;
  if (uVar7 == 0) {
    plVar10 = plVar9;
  }
  else {
    if (0 < (long)uVar7) {
      uVar7 = (uVar7 >> 3) + 1;
      do {
        uVar5 = *(undefined8 *)(lVar11 + lVar4 * 8);
        *(undefined8 *)(lVar11 + lVar4 * 8) = 0;
        plVar10 = *(long **)(lVar11 + lVar3 * 8);
        *(undefined8 *)(lVar11 + lVar3 * 8) = uVar5;
        if (plVar10 != (long *)0x0) {
          LOCK();
          plVar8 = plVar10 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
        uVar7 = uVar7 - 1;
        lVar11 = lVar11 + 8;
      } while (1 < uVar7);
      plVar10 = *(long **)(this + 0x20);
      plVar9 = (long *)((long)plVar10 + (lVar2 - (long)plVar9));
      if (plVar10 == plVar9) {
        return;
      }
      goto LAB_00240f6c;
    }
    plVar10 = *(long **)(this + 0x20);
  }
  plVar9 = (long *)((long)plVar10 + (lVar2 - (long)plVar9));
  if (plVar10 == plVar9) {
    return;
  }
LAB_00240f6c:
  plVar8 = plVar9;
  do {
    plVar6 = (long *)*plVar8;
    if (plVar6 != (long *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar8 = plVar8 + 1;
  } while (plVar8 != plVar10);
  *(long **)(this + 0x20) = plVar9;
  return;
}


