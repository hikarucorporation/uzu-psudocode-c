// Function : access_virt_sarray
// Namespace: juce:jpeglibNamespace
// Entry    : 00376cb0
// Prototype: long access_virt_sarray(long * param_1, long * param_2, uint param_3, uint param_4, char param_5)
// Body     : 00376cb0 - 00377040


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::access_virt_sarray(juce::jpeglibNamespace::jpeg_common_struct*,
   juce::jpeglibNamespace::jvirt_sarray_control*, unsigned int, unsigned int, unsigned char) */

long __cdecl
juce::jpeglibNamespace::access_virt_sarray
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
  uint uVar9;
  ulong uVar10;
  
  uVar9 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar9) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    puVar1 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar1 + 5) = 0x17;
    (*(code *)*puVar1)();
    uVar3 = *(uint *)((long)param_2 + 0x1c);
    if (uVar3 <= param_3) goto LAB_00376d11;
LAB_00376d1e:
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
        uVar10 = *(uint *)(param_2 + 4) - uVar4;
        if ((long)uVar7 < (long)(*(uint *)(param_2 + 4) - uVar4)) {
          uVar10 = uVar7;
        }
        uVar7 = *(uint *)(param_2 + 1) - uVar4;
        if ((long)uVar10 < (long)(*(uint *)(param_2 + 1) - uVar4)) {
          uVar7 = uVar10;
        }
        if (0 < (long)uVar7) {
          uVar3 = *(uint *)((long)param_2 + 0xc);
          lVar8 = uVar4 * uVar3;
          uVar10 = 0;
          do {
            lVar6 = uVar7 * uVar3;
            (*(code *)param_2[7])
                      (param_1,param_2 + 6,*(undefined8 *)(*param_2 + uVar10 * 8),lVar8,lVar6);
            uVar7 = (ulong)*(uint *)(param_2 + 3);
            uVar10 = uVar10 + uVar7;
            if (*(uint *)((long)param_2 + 0x14) <= uVar10) break;
            lVar8 = lVar8 + lVar6;
            uVar4 = *(uint *)((long)param_2 + 0x14) - uVar10;
            if ((long)uVar7 < (long)uVar4) {
              uVar4 = uVar7;
            }
            lVar6 = *(uint *)((long)param_2 + 0x1c) + uVar10;
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
      uVar2 = (uint)((ulong)uVar9 - (ulong)uVar3);
      if ((long)((ulong)uVar9 - (ulong)uVar3) < 1) {
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
      uVar10 = *(uint *)(param_2 + 4) - uVar4;
      if ((long)uVar7 < (long)(*(uint *)(param_2 + 4) - uVar4)) {
        uVar10 = uVar7;
      }
      uVar7 = *(uint *)(param_2 + 1) - uVar4;
      if ((long)uVar10 < (long)(*(uint *)(param_2 + 1) - uVar4)) {
        uVar7 = uVar10;
      }
      if (0 < (long)uVar7) {
        uVar3 = *(uint *)((long)param_2 + 0xc);
        lVar8 = uVar4 * uVar3;
        uVar10 = 0;
        do {
          lVar6 = uVar7 * uVar3;
          (*(code *)param_2[6])
                    (param_1,param_2 + 6,*(undefined8 *)(*param_2 + uVar10 * 8),lVar8,lVar6);
          uVar7 = (ulong)*(uint *)(param_2 + 3);
          uVar10 = uVar10 + uVar7;
          if (*(uint *)((long)param_2 + 0x14) <= uVar10) break;
          lVar8 = lVar8 + lVar6;
          uVar4 = *(uint *)((long)param_2 + 0x14) - uVar10;
          if ((long)uVar7 < (long)uVar4) {
            uVar4 = uVar7;
          }
          lVar6 = *(uint *)((long)param_2 + 0x1c) + uVar10;
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
    if (param_3 < uVar3) goto LAB_00376d1e;
LAB_00376d11:
    if (uVar3 + *(int *)((long)param_2 + 0x14) < uVar9) goto LAB_00376d1e;
  }
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 < uVar9) {
    if (uVar3 < param_3) {
      uVar3 = param_3;
      if (param_5 != '\0') {
        puVar1 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar1 + 5) = 0x17;
        (*(code *)*puVar1)();
        goto LAB_00376f33;
      }
LAB_00376f43:
      if (*(char *)((long)param_2 + 0x24) == '\0') {
        puVar1 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar1 + 5) = 0x17;
        (*(code *)*puVar1)();
        goto LAB_00377010;
      }
LAB_00376f4e:
      uVar3 = uVar3 - *(int *)((long)param_2 + 0x1c);
      uVar9 = uVar9 - *(int *)((long)param_2 + 0x1c);
      if (uVar3 < uVar9) {
        uVar10 = (ulong)*(uint *)((long)param_2 + 0xc);
        uVar7 = (ulong)uVar3;
        uVar4 = ~uVar7;
        uVar5 = (ulong)(uVar9 - uVar3) & 3;
        if ((uVar9 - uVar3 & 3) != 0) {
          do {
            memset(*(void **)(*param_2 + uVar7 * 8),0,uVar10);
            uVar7 = uVar7 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        if (2 < uVar4 + uVar9) {
          do {
            memset(*(void **)(*param_2 + uVar7 * 8),0,uVar10);
            memset(*(void **)(*param_2 + 8 + uVar7 * 8),0,uVar10);
            memset(*(void **)(*param_2 + 0x10 + uVar7 * 8),0,uVar10);
            memset(*(void **)(*param_2 + 0x18 + uVar7 * 8),0,uVar10);
            uVar7 = uVar7 + 4;
          } while (uVar9 != uVar7);
        }
      }
      goto LAB_00377004;
    }
    if (param_5 == '\0') goto LAB_00376f43;
LAB_00376f33:
    *(uint *)(param_2 + 4) = uVar9;
    if (*(char *)((long)param_2 + 0x24) != '\0') goto LAB_00376f4e;
  }
  else {
LAB_00377004:
    if (param_5 == '\0') goto LAB_00377010;
  }
  *(undefined1 *)((long)param_2 + 0x25) = 1;
LAB_00377010:
  return (ulong)(param_3 - *(int *)((long)param_2 + 0x1c)) * 8 + *param_2;
}


