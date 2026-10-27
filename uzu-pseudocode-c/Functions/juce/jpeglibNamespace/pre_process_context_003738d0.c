// Function : pre_process_context
// Namespace: juce:jpeglibNamespace
// Entry    : 003738d0
// Prototype: undefined pre_process_context(long param_1, long param_2, uint * param_3, uint param_4, undefined8 param_5, uint * param_6, uint param_7)
// Body     : 003738d0 - 00373bb0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::pre_process_context(juce::jpeglibNamespace::jpeg_compress_struct*,
   unsigned char**, unsigned int*, unsigned int, unsigned char***, unsigned int*, unsigned int) */

void __cdecl
juce::jpeglibNamespace::pre_process_context
          (long param_1,long param_2,uint *param_3,uint param_4,undefined8 param_5,uint *param_6,
          uint param_7)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong __n;
  long lVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  
  if (*param_6 < param_7) {
    lVar2 = *(long *)(param_1 + 0x1f0);
    iVar4 = *(int *)(param_1 + 0x154) * 3;
    do {
      uVar1 = *param_3;
      if (uVar1 < param_4) {
        uVar11 = *(int *)(lVar2 + 0x6c) - *(int *)(lVar2 + 100);
        if (param_4 - uVar1 <= uVar11) {
          uVar11 = param_4 - uVar1;
        }
        (**(code **)(*(long *)(param_1 + 0x208) + 8))
                  (param_1,param_2 + (ulong)uVar1 * 8,lVar2 + 0x10,*(int *)(lVar2 + 100),uVar11);
        if (((*(int *)(lVar2 + 0x60) == *(int *)(param_1 + 0x34)) &&
            (iVar5 = *(int *)(param_1 + 0x5c), 0 < iVar5)) &&
           (uVar6 = (ulong)*(uint *)(param_1 + 0x154), 0 < (int)*(uint *)(param_1 + 0x154))) {
          lVar12 = 0;
          do {
            if (0 < (int)uVar6) {
              lVar10 = -8;
              lVar9 = 0;
              do {
                puVar3 = *(undefined8 **)(lVar2 + 0x10 + lVar12 * 8);
                memcpy(*(void **)((long)puVar3 + lVar10),(void *)*puVar3,
                       (ulong)*(uint *)(param_1 + 0x30));
                uVar6 = (ulong)*(int *)(param_1 + 0x154);
                lVar9 = lVar9 + 1;
                lVar10 = lVar10 + -8;
              } while (lVar9 < (long)uVar6);
              iVar5 = *(int *)(param_1 + 0x5c);
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 < iVar5);
        }
        *param_3 = *param_3 + uVar11;
        iVar5 = *(int *)(lVar2 + 100) + uVar11;
        *(int *)(lVar2 + 100) = iVar5;
        *(int *)(lVar2 + 0x60) = *(int *)(lVar2 + 0x60) - uVar11;
        iVar8 = *(int *)(lVar2 + 0x6c);
LAB_00373b32:
        if (iVar5 == iVar8) goto LAB_00373b45;
      }
      else {
        if (*(int *)(lVar2 + 0x60) != 0) {
          return;
        }
        iVar5 = *(int *)(lVar2 + 100);
        iVar8 = *(int *)(lVar2 + 0x6c);
        if (iVar8 <= iVar5) goto LAB_00373b32;
        iVar7 = *(int *)(param_1 + 0x5c);
        if (0 < iVar7) {
          lVar12 = 0;
          if (iVar8 <= iVar5) goto LAB_00373aec;
          do {
            lVar9 = *(long *)(lVar2 + 0x10 + lVar12 * 8);
            __n = (ulong)*(uint *)(param_1 + 0x30);
            uVar13 = (ulong)iVar5;
            uVar6 = uVar13;
            if ((iVar8 - iVar5 & 1U) != 0) {
              memcpy(*(void **)(lVar9 + uVar13 * 8),*(void **)(lVar9 + -8 + uVar13 * 8),__n);
              uVar6 = uVar13 + 1;
            }
            if (~uVar13 + (long)iVar8 != 0) {
              do {
                memcpy(*(void **)(lVar9 + uVar6 * 8),*(void **)(lVar9 + -8 + uVar13 * 8),__n);
                memcpy(*(void **)(lVar9 + 8 + uVar6 * 8),*(void **)(lVar9 + -8 + uVar13 * 8),__n);
                uVar6 = uVar6 + 2;
              } while ((long)iVar8 != uVar6);
            }
            iVar7 = *(int *)(param_1 + 0x5c);
LAB_00373aec:
            do {
              lVar12 = lVar12 + 1;
              if (iVar7 <= lVar12) {
                iVar8 = *(int *)(lVar2 + 0x6c);
                goto LAB_00373b41;
              }
              iVar5 = *(int *)(lVar2 + 100);
              iVar8 = *(int *)(lVar2 + 0x6c);
            } while (iVar8 <= iVar5);
          } while( true );
        }
LAB_00373b41:
        *(int *)(lVar2 + 100) = iVar8;
LAB_00373b45:
        (**(code **)(*(long *)(param_1 + 0x210) + 8))
                  (param_1,lVar2 + 0x10,*(undefined4 *)(lVar2 + 0x68),param_5,*param_6);
        *param_6 = *param_6 + 1;
        iVar5 = *(int *)(param_1 + 0x154);
        iVar8 = *(int *)(lVar2 + 0x68) + iVar5;
        if (iVar4 <= iVar8) {
          iVar8 = 0;
        }
        *(int *)(lVar2 + 0x68) = iVar8;
        iVar8 = *(int *)(lVar2 + 100);
        if (iVar4 <= iVar8) {
          *(undefined4 *)(lVar2 + 100) = 0;
          iVar8 = 0;
        }
        *(int *)(lVar2 + 0x6c) = iVar8 + iVar5;
      }
    } while (*param_6 < param_7);
  }
  return;
}


