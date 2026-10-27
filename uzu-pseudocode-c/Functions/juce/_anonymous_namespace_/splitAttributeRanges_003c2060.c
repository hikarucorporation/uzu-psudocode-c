// Function : splitAttributeRanges
// Namespace: juce:_anonymous_namespace_
// Entry    : 003c2060
// Prototype: undefined splitAttributeRanges(ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> * param_1, int param_2)
// Body     : 003c2060 - 003c22e8


/* WARNING: Removing unreachable block (ram,0x003c21f7) */
/* WARNING: Removing unreachable block (ram,0x003c2202) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::(anonymous namespace)::splitAttributeRanges(juce::Array<juce::AttributedString::Attribute,
   juce::DummyCriticalSection, 0>&, int) */

void __cdecl
juce::(anonymous_namespace)::splitAttributeRanges
          (ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection> *param_1,
          int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  bool bVar12;
  long *local_50;
  undefined4 local_48;
  
  uVar7 = *(uint *)(param_1 + 0xc);
  if ((int)uVar7 < 1) {
    return;
  }
  lVar11 = (ulong)uVar7 << 0x20;
  uVar6 = (ulong)uVar7;
  do {
    lVar4 = *(long *)param_1;
    uVar5 = uVar6 - 1 & 0xffffffff;
    uVar2 = *(undefined8 *)(lVar4 + uVar5 * 0x18);
    plVar3 = *(long **)(lVar4 + 8 + uVar5 * 0x18);
    iVar10 = (int)uVar2;
    iVar8 = (int)((ulong)uVar2 >> 0x20);
    if (plVar3 == (long *)0x0) {
      if (-1 < param_2 - iVar10) {
        local_50 = (long *)0x0;
        if ((param_2 != iVar10) && (param_2 < iVar8)) {
          local_48 = *(undefined4 *)(lVar4 + 0x10 + uVar5 * 0x18);
          local_50 = (long *)0x0;
          uVar7 = *(uint *)(param_1 + 0xc);
          if (*(int *)(param_1 + 8) <= (int)uVar7) goto LAB_003c2176;
          goto LAB_003c21aa;
        }
        goto LAB_003c22b1;
      }
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      if (-1 < param_2 - iVar10) {
        local_50 = plVar3;
        if ((param_2 != iVar10) && (param_2 < iVar8)) {
          local_48 = *(undefined4 *)(lVar4 + 0x10 + uVar5 * 0x18);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          uVar7 = *(uint *)(param_1 + 0xc);
          if (*(int *)(param_1 + 8) <= (int)uVar7) {
LAB_003c2176:
                    /* try { // try from 003c2192 to 003c2199 has its CatchHandler @ 003c22e9 */
            ArrayBase<juce::AttributedString::Attribute,juce::DummyCriticalSection>::
            setAllocatedSize(param_1,uVar7 + ((int)((uVar7 - ((int)(uVar7 + 1) >> 0x1f)) + 1) >> 1)
                                     + 9 & 0xfffffff8);
            uVar7 = *(uint *)(param_1 + 0xc);
          }
LAB_003c21aa:
          lVar4 = *(long *)param_1;
          puVar9 = (undefined8 *)(lVar4 + (long)(int)uVar7 * 0x18);
          iVar8 = uVar7 - (uint)uVar6;
          if ((uint)uVar6 <= uVar7 && iVar8 != 0) {
            if (0 < iVar8) {
              do {
                *(undefined4 *)puVar9 = *(undefined4 *)(puVar9 + -3);
                *(undefined4 *)((long)puVar9 + 4) = *(undefined4 *)((long)puVar9 + -0x14);
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar9 + -2);
                *(undefined4 *)((long)puVar9 + 0xc) = *(undefined4 *)((long)puVar9 + -0xc);
                puVar9[-2] = 0;
                *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(puVar9 + -1);
                puVar9 = puVar9 + -3;
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
              lVar4 = *(long *)param_1;
            }
            puVar9 = (undefined8 *)(lVar4 + (lVar11 >> 0x20) * 0x18);
          }
          *puVar9 = uVar2;
          puVar9[1] = local_50;
          if (local_50 == (long *)0x0) {
            *(undefined4 *)(puVar9 + 2) = local_48;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            local_50 = (long *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
            *(undefined4 *)(puVar9 + 2) = local_48;
            *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
            LOCK();
            plVar1 = local_50 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*local_50 + 8))(local_50);
            }
          }
          lVar11 = *(long *)param_1;
          *(int *)(lVar11 + 4 + uVar5 * 0x18) = param_2;
          if (param_2 < *(int *)(lVar11 + uVar5 * 0x18)) {
            *(int *)(lVar11 + uVar5 * 0x18) = param_2;
          }
          uVar6 = uVar6 & 0xffffffff;
          *(int *)(lVar11 + uVar6 * 0x18) = param_2;
          if (*(int *)(lVar11 + 4 + uVar6 * 0x18) < param_2) {
            *(int *)(lVar11 + uVar6 * 0x18 + 4) = param_2;
          }
LAB_003c22b1:
          if (plVar3 == (long *)0x0) {
            return;
          }
        }
        LOCK();
        plVar3 = local_50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003c22d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*local_50 + 8))(local_50);
          return;
        }
        return;
      }
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
    }
    lVar11 = lVar11 + -0x100000000;
    bVar12 = uVar6 < 2;
    uVar6 = uVar6 - 1;
    if (bVar12) {
      return;
    }
  } while( true );
}


