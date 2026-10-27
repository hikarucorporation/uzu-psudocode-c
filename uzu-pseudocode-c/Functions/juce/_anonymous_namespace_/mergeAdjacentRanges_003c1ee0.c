// Function : mergeAdjacentRanges
// Namespace: juce:_anonymous_namespace_
// Entry    : 003c1ee0
// Prototype: undefined mergeAdjacentRanges(ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> * param_1)
// Body     : 003c1ee0 - 003c2044


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::(anonymous namespace)::mergeAdjacentRanges(juce::Array<juce::AttributedString::Attribute,
   juce::DummyCriticalSection, 0>&) */

void __cdecl
juce::(anonymous_namespace)::mergeAdjacentRanges
          (ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  iVar11 = *(int *)(param_1 + 0xc);
  if (1 < iVar11) {
    uVar13 = iVar11 - 2;
    uVar6 = iVar11 - 1;
    do {
      uVar7 = (ulong)uVar6;
      lVar2 = *(long *)param_1;
      uVar9 = (ulong)uVar13;
      uVar14 = uVar13;
      if (*(int *)(lVar2 + 0x10 + uVar9 * 0x18) == *(int *)(lVar2 + 0x10 + uVar7 * 0x18)) {
        lVar3 = *(long *)(lVar2 + 8 + uVar9 * 0x18);
        lVar4 = *(long *)(lVar2 + 8 + uVar7 * 0x18);
        if (lVar3 != lVar4) {
                    /* try { // try from 003c1f59 to 003c1f5d has its CatchHandler @ 003c2045 */
          uVar8 = FontOptions::operator==
                            ((FontOptions *)(lVar3 + 0x18),(undefined8 *)(lVar4 + 0x18));
          if ((char)uVar8 == '\0') goto LAB_003c1f17;
        }
        iVar11 = *(int *)(lVar2 + 4 + uVar7 * 0x18);
        *(int *)(lVar2 + 4 + uVar9 * 0x18) = iVar11;
        if (iVar11 < *(int *)(lVar2 + uVar9 * 0x18)) {
          *(int *)(uVar9 * 0x18 + lVar2) = iVar11;
        }
        uVar13 = *(uint *)(param_1 + 0xc);
        if (uVar6 < uVar13) {
          iVar11 = uVar13 + ~uVar6;
          puVar10 = (undefined4 *)((long)(int)uVar6 * 0x18 + *(long *)param_1);
          if (0 < iVar11) {
            do {
              plVar5 = *(long **)(puVar10 + 2);
              *puVar10 = puVar10[6];
              puVar10[1] = puVar10[7];
              puVar10[2] = puVar10[8];
              puVar10[3] = puVar10[9];
              *(undefined8 *)(puVar10 + 8) = 0;
              if (plVar5 != (long *)0x0) {
                LOCK();
                plVar1 = plVar5 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)(*plVar5 + 8))();
                }
              }
              puVar10[4] = puVar10[10];
              puVar10 = puVar10 + 6;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
          plVar5 = *(long **)(puVar10 + 2);
          if (plVar5 != (long *)0x0) {
            LOCK();
            plVar1 = plVar5 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar5 + 8))();
            }
          }
          iVar11 = *(int *)(param_1 + 0xc);
          uVar13 = iVar11 - 1;
          *(uint *)(param_1 + 0xc) = uVar13;
          iVar11 = iVar11 * 2 + -2;
          if (iVar11 < 0) {
            iVar11 = 0;
          }
          if (iVar11 < *(int *)(param_1 + 8)) {
            uVar12 = 2;
            if (2 < (int)uVar13) {
              uVar12 = uVar13;
            }
            if ((int)uVar12 < *(int *)(param_1 + 8)) {
              ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection>::
              setAllocatedSize(param_1,uVar12);
              uVar13 = *(uint *)(param_1 + 0xc);
            }
          }
        }
        if ((int)uVar6 < (int)uVar13) {
          uVar14 = uVar6;
        }
      }
LAB_003c1f17:
      uVar13 = uVar14 - 1;
      uVar6 = uVar14;
    } while (0 < (int)uVar14);
  }
  return;
}


