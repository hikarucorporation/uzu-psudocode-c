// Function : access_virt_barray
// Namespace: juce:jpeglibNamespace
// Entry    : 00377050
// Prototype: long access_virt_barray(long * param_1, long * param_2, uint param_3, uint param_4, char param_5)
// Body     : 00377050 - 003773e0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::access_virt_barray(juce::jpeglibNamespace::jpeg_common_struct*,
   juce::jpeglibNamespace::jvirt_barray_control*, unsigned int, unsigned int, unsigned char) */

long __cdecl
juce::jpeglibNamespace::access_virt_barray
          (long *param_1,long *param_2,uint param_3,uint param_4,char param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  size_t __n;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar10 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar10) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0))
  {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 0x17;
    (*(code *)*puVar1)();
    uVar3 = *(uint *)((long)param_2 + 0x1c);
    if (uVar3 <= param_3) goto LAB_003770b1;
LAB_003770be:
    if (*(char *)((long)param_2 + 0x26) == '\0') {
      puVar1 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar1 + 5) = 0x47;
      (*(code *)*puVar1)();
    }
    if (*(char *)((long)param_2 + 0x25) != '\0') {
      uVar7 = (ulong)*(uint *)((long)param_2 + 0x14);
      if (uVar7 != 0) {
        if (*(uint *)(param_2 + 3) < uVar7) {
          uVar7 = (ulong)*(uint *)(param_2 + 3);
        }
        uVar4 = (ulong)*(uint *)((long)param_2 + 0x1c);
        uVar11 = *(uint *)(param_2 + 4) - uVar4;
        if ((long)uVar7 < (long)(*(uint *)(param_2 + 4) - uVar4)) {
          uVar11 = uVar7;
        }
        uVar7 = *(uint *)(param_2 + 1) - uVar4;
        if ((long)uVar11 < (long)(*(uint *)(param_2 + 1) - uVar4)) {
          uVar7 = uVar11;
        }
        if (0 < (long)uVar7) {
          lVar9 = (ulong)*(uint *)((long)param_2 + 0xc) * 0x80;
          lVar8 = uVar4 * lVar9;
          uVar11 = 0;
          do {
            lVar6 = uVar7 * lVar9;
            (*(code *)param_2[7])
                      (param_1,param_2 + 6,*(undefined8 *)(*param_2 + uVar11 * 8),lVar8,lVar6);
            uVar7 = (ulong)*(uint *)(param_2 + 3);
            uVar11 = uVar11 + uVar7;
            if (*(uint *)((long)param_2 + 0x14) <= uVar11) break;
            lVar8 = lVar8 + lVar6;
            uVar4 = *(uint *)((long)param_2 + 0x14) - uVar11;
            if ((long)uVar7 < (long)uVar4) {
              uVar4 = uVar7;
            }
            lVar6 = *(uint *)((long)param_2 + 0x1c) + uVar11;
            uVar5 = (ulong)*(uint *)(param_2 + 4) - lVar6;
            if ((long)uVar4 < (long)uVar5) {
              uVar5 = uVar4;
            }
            uVar7 = (ulong)*(uint *)(param_2 + 1) - lVar6;
            if ((long)uVar5 < (long)uVar7) {
              uVar7 = uVar5;
            }
          } while (0 < (long)uVar7);
        }
      }
      *(undefined1 *)((long)param_2 + 0x25) = 0;
    }
    if (*(uint *)((long)param_2 + 0x1c) < param_3) {
      uVar3 = *(uint *)((long)param_2 + 0x14);
      *(uint *)((long)param_2 + 0x1c) = param_3;
      uVar2 = param_3;
    }
    else {
      uVar3 = *(uint *)((long)param_2 + 0x14);
      uVar2 = (uint)((ulong)uVar10 - (ulong)uVar3);
      if ((long)((ulong)uVar10 - (ulong)uVar3) < 1) {
        uVar2 = 0;
      }
      *(uint *)((long)param_2 + 0x1c) = uVar2;
    }
    if (uVar3 != 0) {
      uVar7 = (ulong)uVar3;
      if ((ulong)*(uint *)(param_2 + 3) < (ulong)uVar3) {
        uVar7 = (ulong)*(uint *)(param_2 + 3);
      }
      uVar4 = (ulong)uVar2;
      uVar11 = *(uint *)(param_2 + 4) - uVar4;
      if ((long)uVar7 < (long)(*(uint *)(param_2 + 4) - uVar4)) {
        uVar11 = uVar7;
      }
      uVar7 = *(uint *)(param_2 + 1) - uVar4;
      if ((long)uVar11 < (long)(*(uint *)(param_2 + 1) - uVar4)) {
        uVar7 = uVar11;
      }
      if (0 < (long)uVar7) {
        lVar9 = (ulong)*(uint *)((long)param_2 + 0xc) * 0x80;
        lVar8 = uVar4 * lVar9;
        uVar11 = 0;
        do {
          lVar6 = uVar7 * lVar9;
          (*(code *)param_2[6])
                    (param_1,param_2 + 6,*(undefined8 *)(*param_2 + uVar11 * 8),lVar8,lVar6);
          uVar7 = (ulong)*(uint *)(param_2 + 3);
          uVar11 = uVar11 + uVar7;
          if (*(uint *)((long)param_2 + 0x14) <= uVar11) break;
          lVar8 = lVar8 + lVar6;
          uVar4 = *(uint *)((long)param_2 + 0x14) - uVar11;
          if ((long)uVar7 < (long)uVar4) {
            uVar4 = uVar7;
          }
          lVar6 = *(uint *)((long)param_2 + 0x1c) + uVar11;
          uVar5 = (ulong)*(uint *)(param_2 + 4) - lVar6;
          if ((long)uVar4 < (long)uVar5) {
            uVar5 = uVar4;
          }
          uVar7 = (ulong)*(uint *)(param_2 + 1) - lVar6;
          if ((long)uVar5 < (long)uVar7) {
            uVar7 = uVar5;
          }
        } while (0 < (long)uVar7);
      }
    }
  }
  else {
    uVar3 = *(uint *)((long)param_2 + 0x1c);
    if (param_3 < uVar3) goto LAB_003770be;
LAB_003770b1:
    if (uVar3 + *(int *)((long)param_2 + 0x14) < uVar10) goto LAB_003770be;
  }
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 < uVar10) {
    if (uVar3 < param_3) {
      uVar3 = param_3;
      if (param_5 != '\0') {
        puVar1 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar1 + 5) = 0x17;
        (*(code *)*puVar1)();
        goto LAB_003772d3;
      }
LAB_003772e3:
      if (*(char *)((long)param_2 + 0x24) == '\0') {
        puVar1 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar1 + 5) = 0x17;
        (*(code *)*puVar1)();
        goto LAB_003773b0;
      }
LAB_003772ee:
      uVar3 = uVar3 - *(int *)((long)param_2 + 0x1c);
      uVar10 = uVar10 - *(int *)((long)param_2 + 0x1c);
      if (uVar3 < uVar10) {
        __n = (ulong)*(uint *)((long)param_2 + 0xc) << 7;
        uVar7 = (ulong)uVar3;
        uVar11 = ~uVar7;
        uVar4 = (ulong)(uVar10 - uVar3) & 3;
        if ((uVar10 - uVar3 & 3) != 0) {
          do {
            memset(*(void **)(*param_2 + uVar7 * 8),0,__n);
            uVar7 = uVar7 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        if (2 < uVar11 + uVar10) {
          do {
            memset(*(void **)(*param_2 + uVar7 * 8),0,__n);
            memset(*(void **)(*param_2 + 8 + uVar7 * 8),0,__n);
            memset(*(void **)(*param_2 + 0x10 + uVar7 * 8),0,__n);
            memset(*(void **)(*param_2 + 0x18 + uVar7 * 8),0,__n);
            uVar7 = uVar7 + 4;
          } while (uVar10 != uVar7);
        }
      }
      goto LAB_003773a4;
    }
    if (param_5 == '\0') goto LAB_003772e3;
LAB_003772d3:
    *(uint *)(param_2 + 4) = uVar10;
    if (*(char *)((long)param_2 + 0x24) != '\0') goto LAB_003772ee;
  }
  else {
LAB_003773a4:
    if (param_5 == '\0') goto LAB_003773b0;
  }
  *(undefined1 *)((long)param_2 + 0x25) = 1;
LAB_003773b0:
  return (ulong)(param_3 - *(int *)((long)param_2 + 0x1c)) * 8 + *param_2;
}


