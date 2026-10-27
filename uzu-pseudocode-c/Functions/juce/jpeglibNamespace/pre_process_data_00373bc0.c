// Function : pre_process_data
// Namespace: juce:jpeglibNamespace
// Entry    : 00373bc0
// Prototype: undefined pre_process_data(long param_1, long param_2, uint * param_3, uint param_4, long param_5, uint * param_6, uint param_7)
// Body     : 00373bc0 - 00373ed3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::pre_process_data(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char**, unsigned int*, unsigned int, unsigned char***, unsigned int*, unsigned int) */

void __cdecl
juce::jpeglibNamespace::pre_process_data
          (long param_1,long param_2,uint *param_3,uint param_4,long param_5,uint *param_6,
          uint param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar2 = *param_3;
  if (uVar2 < param_4) {
    lVar8 = *(long *)(param_1 + 0x1f0);
    do {
      if (param_7 <= *param_6) {
        return;
      }
      uVar7 = *(int *)(param_1 + 0x154) - *(int *)(lVar8 + 100);
      if (param_4 - uVar2 <= uVar7) {
        uVar7 = param_4 - uVar2;
      }
      (**(code **)(*(long *)(param_1 + 0x208) + 8))
                (param_1,param_2 + (ulong)uVar2 * 8,lVar8 + 0x10,*(int *)(lVar8 + 100),uVar7);
      *param_3 = *param_3 + uVar7;
      iVar3 = *(int *)(lVar8 + 100) + uVar7;
      *(int *)(lVar8 + 100) = iVar3;
      iVar5 = *(int *)(lVar8 + 0x60) - uVar7;
      *(int *)(lVar8 + 0x60) = iVar5;
      iVar4 = *(int *)(param_1 + 0x154);
      if ((iVar5 == 0) && (iVar3 < iVar4)) {
        iVar5 = *(int *)(param_1 + 0x5c);
        if (0 < iVar5) {
          lVar9 = 0;
          if (iVar4 <= iVar3) goto LAB_00373d3a;
          do {
            lVar1 = *(long *)(lVar8 + 0x10 + lVar9 * 8);
            uVar10 = (ulong)*(uint *)(param_1 + 0x30);
            uVar11 = (ulong)iVar3;
            uVar6 = uVar11;
            if ((iVar4 - iVar3 & 1U) != 0) {
              memcpy(*(void **)(lVar1 + uVar11 * 8),*(void **)(lVar1 + -8 + uVar11 * 8),uVar10);
              uVar6 = uVar11 + 1;
            }
            if (~uVar11 + (long)iVar4 != 0) {
              do {
                memcpy(*(void **)(lVar1 + uVar6 * 8),*(void **)(lVar1 + -8 + uVar11 * 8),uVar10);
                memcpy(*(void **)(lVar1 + 8 + uVar6 * 8),*(void **)(lVar1 + -8 + uVar11 * 8),uVar10)
                ;
                uVar6 = uVar6 + 2;
              } while ((long)iVar4 != uVar6);
            }
            iVar5 = *(int *)(param_1 + 0x5c);
LAB_00373d3a:
            do {
              lVar9 = lVar9 + 1;
              if (iVar5 <= lVar9) {
                iVar4 = *(int *)(param_1 + 0x154);
                goto LAB_00373d89;
              }
              iVar3 = *(int *)(lVar8 + 100);
              iVar4 = *(int *)(param_1 + 0x154);
            } while (iVar4 <= iVar3);
          } while( true );
        }
LAB_00373d89:
        *(int *)(lVar8 + 100) = iVar4;
LAB_00373d8c:
        (**(code **)(*(long *)(param_1 + 0x210) + 8))(param_1,lVar8 + 0x10,0,param_5,*param_6);
        *(undefined4 *)(lVar8 + 100) = 0;
        *param_6 = *param_6 + 1;
        iVar5 = *(int *)(lVar8 + 0x60);
      }
      else if (iVar3 == iVar4) goto LAB_00373d8c;
      if ((iVar5 == 0) && (uVar2 = *param_6, uVar2 < param_7)) {
        iVar3 = *(int *)(param_1 + 0x5c);
        if (0 < iVar3) {
          lVar8 = *(long *)(param_1 + 0x68);
          lVar9 = 0;
          while( true ) {
            iVar4 = (*(int *)(lVar8 + 0x28) * *(int *)(lVar8 + 0xc)) / *(int *)(param_1 + 0x15c);
            iVar5 = uVar2 * iVar4;
            iVar4 = iVar4 * param_7;
            if (iVar5 < iVar4) {
              uVar10 = (ulong)(uint)(*(int *)(lVar8 + 0x24) * *(int *)(lVar8 + 0x1c));
              lVar1 = *(long *)(param_5 + lVar9 * 8);
              uVar11 = (ulong)iVar5;
              uVar6 = uVar11;
              if ((iVar4 - iVar5 & 1U) != 0) {
                memcpy(*(void **)(lVar1 + uVar11 * 8),*(void **)(lVar1 + -8 + uVar11 * 8),uVar10);
                uVar6 = uVar11 + 1;
              }
              if (~uVar11 + (long)iVar4 != 0) {
                do {
                  memcpy(*(void **)(lVar1 + uVar6 * 8),*(void **)(lVar1 + -8 + uVar11 * 8),uVar10);
                  memcpy(*(void **)(lVar1 + 8 + uVar6 * 8),*(void **)(lVar1 + -8 + uVar11 * 8),
                         uVar10);
                  uVar6 = uVar6 + 2;
                } while ((long)iVar4 != uVar6);
              }
              iVar3 = *(int *)(param_1 + 0x5c);
            }
            lVar9 = lVar9 + 1;
            if (iVar3 <= lVar9) break;
            lVar8 = lVar8 + 0x60;
            uVar2 = *param_6;
          }
        }
        *param_6 = param_7;
        return;
      }
      uVar2 = *param_3;
    } while (uVar2 < param_4);
  }
  return;
}


