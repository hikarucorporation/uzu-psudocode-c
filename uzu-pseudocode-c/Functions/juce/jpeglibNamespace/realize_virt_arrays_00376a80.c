// Function : realize_virt_arrays
// Namespace: juce:jpeglibNamespace
// Entry    : 00376a80
// Prototype: undefined realize_virt_arrays(long * param_1)
// Body     : 00376a80 - 00376ca8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::realize_virt_arrays(juce::jpeglibNamespace::jpeg_common_struct*) */

void __cdecl juce::jpeglibNamespace::realize_virt_arrays(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  
  lVar2 = param_1[1];
  plVar12 = *(long **)(lVar2 + 0x88);
  if (plVar12 == (long *)0x0) {
    uVar11 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar11 = 0;
    plVar4 = plVar12;
    do {
      if (*plVar4 == 0) {
        uVar11 = uVar11 + (ulong)*(uint *)(plVar4 + 2) * (ulong)*(uint *)((long)plVar4 + 0xc);
        uVar8 = uVar8 + (ulong)*(uint *)(plVar4 + 1) * (ulong)*(uint *)((long)plVar4 + 0xc);
      }
      plVar4 = (long *)plVar4[5];
    } while (plVar4 != (long *)0x0);
  }
  plVar4 = *(long **)(lVar2 + 0x90);
  if (plVar4 != (long *)0x0) {
    plVar5 = plVar4;
    do {
      if (*plVar5 == 0) {
        lVar10 = (ulong)*(uint *)((long)plVar5 + 0xc) * 0x80;
        uVar11 = uVar11 + (ulong)*(uint *)(plVar5 + 2) * lVar10;
        uVar8 = uVar8 + (ulong)*(uint *)(plVar5 + 1) * lVar10;
      }
      plVar5 = (long *)plVar5[5];
    } while (plVar5 != (long *)0x0);
  }
  if (0 < (long)uVar11) {
    uVar6 = *(long *)(lVar2 + 0x58) - *(long *)(lVar2 + 0x98);
    if (*(long *)(lVar2 + 0x58) == 0) {
      uVar6 = uVar8;
    }
    uVar13 = 1000000000;
    if ((long)uVar6 < (long)uVar8) {
      if ((uVar6 | uVar11) >> 0x20 == 0) {
        uVar6 = (uVar6 & 0xffffffff) / (uVar11 & 0xffffffff);
      }
      else {
        uVar6 = (long)uVar6 / (long)uVar11;
      }
      uVar13 = 1;
      if (0 < (long)uVar6) {
        uVar13 = uVar6;
      }
    }
    if (plVar12 != (long *)0x0) {
      do {
        if (*plVar12 == 0) {
          uVar7 = *(uint *)(plVar12 + 1);
          uVar1 = *(uint *)(plVar12 + 2);
          uVar8 = (ulong)uVar7 - 1;
          if (uVar8 >> 0x20 == 0) {
            uVar11 = (uVar8 & 0xffffffff) % (ulong)uVar1;
            if ((long)((uVar8 & 0xffffffff) / (ulong)uVar1) < (long)uVar13) goto LAB_00376c0d;
LAB_00376b74:
            iVar9 = uVar1 * (int)uVar13;
            *(int *)((long)plVar12 + 0x14) = iVar9;
            puVar3 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar3 + 5) = 0x33;
            (*(code *)*puVar3)(param_1,iVar9,uVar11);
            *(undefined1 *)((long)plVar12 + 0x26) = 1;
            uVar7 = *(uint *)((long)plVar12 + 0x14);
          }
          else {
            uVar11 = (long)uVar8 % (long)(ulong)uVar1;
            if ((long)uVar13 <= (long)uVar8 / (long)(ulong)uVar1) goto LAB_00376b74;
LAB_00376c0d:
            *(uint *)((long)plVar12 + 0x14) = uVar7;
          }
          lVar10 = alloc_sarray(param_1,1,*(uint *)((long)plVar12 + 0xc),uVar7);
          *plVar12 = lVar10;
          *(undefined4 *)(plVar12 + 3) = *(undefined4 *)(lVar2 + 0xa0);
          *(undefined8 *)((long)plVar12 + 0x1c) = 0;
          *(undefined1 *)((long)plVar12 + 0x25) = 0;
        }
        plVar12 = (long *)plVar12[5];
      } while (plVar12 != (long *)0x0);
      plVar4 = *(long **)(lVar2 + 0x90);
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)plVar4[5]) {
      if (*plVar4 == 0) {
        uVar7 = *(uint *)(plVar4 + 1);
        uVar1 = *(uint *)(plVar4 + 2);
        uVar8 = (ulong)uVar7 - 1;
        if (uVar8 >> 0x20 == 0) {
          uVar11 = (uVar8 & 0xffffffff) % (ulong)uVar1;
          if ((long)((uVar8 & 0xffffffff) / (ulong)uVar1) < (long)uVar13) goto LAB_00376c9a;
LAB_00376c1d:
          iVar9 = uVar1 * (int)uVar13;
          *(int *)((long)plVar4 + 0x14) = iVar9;
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x33;
          (*(code *)*puVar3)(param_1,iVar9,uVar11);
          *(undefined1 *)((long)plVar4 + 0x26) = 1;
          uVar7 = *(uint *)((long)plVar4 + 0x14);
        }
        else {
          uVar11 = (long)uVar8 % (long)(ulong)uVar1;
          if ((long)uVar13 <= (long)uVar8 / (long)(ulong)uVar1) goto LAB_00376c1d;
LAB_00376c9a:
          *(uint *)((long)plVar4 + 0x14) = uVar7;
        }
        lVar10 = alloc_barray(param_1,1,(ulong)*(uint *)((long)plVar4 + 0xc),uVar7);
        *plVar4 = lVar10;
        *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(lVar2 + 0xa0);
        *(undefined8 *)((long)plVar4 + 0x1c) = 0;
        *(undefined1 *)((long)plVar4 + 0x25) = 0;
      }
    }
  }
  return;
}


