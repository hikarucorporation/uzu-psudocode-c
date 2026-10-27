// Function : appendRange
// Namespace: juce:_anonymous_namespace_
// Entry    : 003c1ab0
// Prototype: undefined appendRange(ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> * param_1, uint param_2, long * param_3, uint * param_4)
// Body     : 003c1ab0 - 003c1d95


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::(anonymous namespace)::appendRange(juce::Array<juce::AttributedString::Attribute,
   juce::DummyCriticalSection, 0>&, int, juce::Font const*, juce::Colour const*) */

void __cdecl
juce::(anonymous_namespace)::appendRange
          (ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *param_1,
          uint param_2,long *param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  long *local_a8;
  uint local_9c;
  long local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  iVar1 = *(int *)(param_1 + 0xc);
  lVar2 = (long)iVar1;
  if (lVar2 != 0) {
    lVar4 = *(long *)param_1;
    uVar6 = *(uint *)(lVar4 + -0x14 + lVar2 * 0x18);
    uVar7 = (ulong)(param_2 + uVar6);
    if ((int)(param_2 + uVar6) <= (int)uVar6) {
      uVar7 = (ulong)uVar6;
    }
    plVar8 = (long *)(lVar4 + -0x10 + lVar2 * 0x18);
    if (param_3 != (long *)0x0) {
      plVar8 = param_3;
    }
    puVar5 = (uint *)(lVar4 + -8 + lVar2 * 0x18);
    if (param_4 != (uint *)0x0) {
      puVar5 = param_4;
    }
    uVar12 = *puVar5;
    lVar2 = *plVar8;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      iVar1 = *(int *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 8) <= iVar1) {
                    /* try { // try from 003c1b36 to 003c1b3d has its CatchHandler @ 003c1deb */
      ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection>::setAllocatedSize
                (param_1,iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8);
      iVar1 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    lVar4 = *(long *)param_1;
    lVar3 = (long)iVar1;
    *(ulong *)(lVar4 + lVar3 * 0x18) = uVar7 << 0x20 | (ulong)uVar6;
    *(long *)(lVar4 + 8 + lVar3 * 0x18) = lVar2;
    *(uint *)(lVar4 + 0x10 + lVar3 * 0x18) = uVar12;
    mergeAdjacentRanges(param_1);
    return;
  }
  uVar7 = 0;
  if (-1 < (int)param_2) {
    uVar7 = (ulong)param_2;
  }
  if (param_3 == (long *)0x0) {
    FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_98,0);
                    /* try { // try from 003c1bb9 to 003c1bc5 has its CatchHandler @ 003c1d96 */
    Font::Font((Font *)&local_a8,&local_98);
  }
  else {
    local_a8 = (long *)*param_3;
    if (local_a8 != (long *)0x0) {
      LOCK();
      *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
      UNLOCK();
    }
  }
  plVar8 = local_a8;
  if (param_4 == (uint *)0x0) {
    uVar10 = 0xff000000;
    uVar6 = 0;
    uVar12 = 0;
    uVar9 = 0;
  }
  else {
    uVar6 = *param_4;
    uVar12 = uVar6 & 0xffffff00;
    uVar9 = uVar6 & 0xffff0000;
    uVar10 = uVar6 & 0xff000000;
  }
  if (local_a8 != (long *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 8) <= iVar1) {
    local_9c = uVar10;
                    /* try { // try from 003c1c27 to 003c1c2e has its CatchHandler @ 003c1d9b */
    ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection>::setAllocatedSize
              (param_1,iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8);
    iVar1 = *(int *)(param_1 + 0xc);
    uVar10 = local_9c;
  }
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  lVar2 = *(long *)param_1;
  lVar4 = (long)iVar1;
  *(ulong *)(lVar2 + lVar4 * 0x18) = uVar7 << 0x20;
  *(long **)(lVar2 + 8 + lVar4 * 0x18) = plVar8;
  *(uint *)(lVar2 + 0x10 + lVar4 * 0x18) =
       uVar9 & 0xff0000 | uVar6 & 0xff | uVar12 & 0xff00 | uVar10;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar8 = local_a8 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)(*local_a8 + 8))();
    }
  }
  if (param_3 == (long *)0x0) {
    if (local_68 != (void *)0x0) {
      operator_delete(local_68);
    }
    plVar8 = local_80;
    if (local_80 != local_78) {
      do {
        piVar11 = (int *)(*plVar8 + -0x10);
        if (piVar11 != &emptyString) {
          LOCK();
          iVar1 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            operator_delete__(piVar11);
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != local_78);
    }
    if (local_80 != (long *)0x0) {
      operator_delete(local_80);
    }
    if (local_88 != (long *)0x0) {
      LOCK();
      plVar8 = local_88 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)(*local_88 + 8))();
      }
    }
    piVar11 = (int *)(local_90 + -0x10);
    if (piVar11 != &emptyString) {
      LOCK();
      iVar1 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar11);
      }
    }
    piVar11 = (int *)(local_98 + -0x10);
    if (piVar11 != &emptyString) {
      LOCK();
      iVar1 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar11);
      }
    }
  }
  return;
}


