// Function : remove
// Namespace: juce:NamedValueSet
// Entry    : 004875e0
// Prototype: ulong remove(NamedValueSet * this, long param_1)
// Body     : 004875e0 - 00487743


/* juce::NamedValueSet::remove(juce::Identifier const&) */

ulong __thiscall juce::NamedValueSet::remove(NamedValueSet *this,long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  int iVar11;
  int *piVar12;
  undefined8 unaff_R14;
  undefined7 uVar14;
  ulong uVar13;
  
  uVar6 = *(uint *)(this + 0xc);
  uVar7 = 0;
  if ((int)uVar6 < 1) {
LAB_00487636:
    uVar13 = 0;
  }
  else {
    plVar4 = *(long **)this;
    uVar14 = (undefined7)((ulong)unaff_R14 >> 8);
    if (*plVar4 == param_1) {
      uVar13 = CONCAT71(uVar14,1);
    }
    else {
      uVar7 = 0;
      plVar10 = plVar4;
      do {
        plVar10 = plVar10 + 3;
        if ((ulong)uVar6 - 1 == uVar7) goto LAB_00487636;
        uVar7 = uVar7 + 1;
      } while (*plVar10 != param_1);
      uVar13 = CONCAT71(uVar14,uVar7 < uVar6);
      if (uVar6 <= (uint)uVar7) goto LAB_00487736;
    }
    uVar5 = (uint)uVar7;
    uVar8 = ~uVar5 + uVar6;
    plVar4 = plVar4 + (long)(int)uVar5 * 3;
    plVar10 = plVar4;
    if (0 < (int)uVar8) {
      lVar1 = *plVar4;
      if (uVar6 - 2 != uVar5) {
        uVar6 = uVar8 & 0xfffffffe;
        do {
          lVar2 = plVar10[1];
          lVar3 = plVar10[2];
          *plVar10 = plVar10[3];
          plVar10[1] = plVar10[4];
          plVar4 = plVar10 + 6;
          plVar10[2] = plVar10[5];
          plVar10[3] = plVar10[6];
          plVar10[6] = lVar1;
          plVar10[4] = plVar10[7];
          plVar10[5] = plVar10[8];
          plVar10[7] = lVar2;
          plVar10[8] = lVar3;
          uVar6 = uVar6 - 2;
          plVar10 = plVar4;
        } while (uVar6 != 0);
      }
      plVar10 = plVar4;
      if ((uVar8 & 1) != 0) {
        plVar10 = plVar4 + 3;
        lVar2 = plVar4[1];
        *plVar4 = plVar4[3];
        plVar4[1] = plVar4[4];
        plVar4[3] = lVar1;
        lVar1 = plVar4[5];
        plVar4[4] = lVar2;
        plVar4[5] = plVar4[2];
        plVar4[2] = lVar1;
      }
    }
                    /* try { // try from 004876d7 to 004876d9 has its CatchHandler @ 00487744 */
    (**(code **)(plVar10[1] + 0x58))(plVar10 + 2);
    piVar12 = (int *)(*plVar10 + -0x10);
    if (piVar12 != &emptyString) {
      LOCK();
      iVar11 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        operator_delete__(piVar12);
      }
    }
    iVar11 = *(int *)(this + 0xc);
    uVar6 = iVar11 - 1;
    *(uint *)(this + 0xc) = uVar6;
    iVar9 = iVar11 * 2 + -2;
    iVar11 = 0;
    if (-1 < iVar9) {
      iVar11 = iVar9;
    }
    if (iVar11 < *(int *)(this + 8)) {
      uVar5 = 2;
      if (2 < (int)uVar6) {
        uVar5 = uVar6;
      }
      if ((int)uVar5 < *(int *)(this + 8)) {
        ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection>::setAllocatedSize
                  ((ArrayBase<juce::NamedValueSet::NamedValue,juce::DummyCriticalSection> *)this,
                   uVar5);
      }
    }
  }
LAB_00487736:
  return uVar13 & 0xffffffff;
}


