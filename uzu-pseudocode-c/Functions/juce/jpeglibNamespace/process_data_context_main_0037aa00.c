// Function : process_data_context_main
// Namespace: juce:jpeglibNamespace
// Entry    : 0037aa00
// Prototype: undefined process_data_context_main(long param_1, undefined8 param_2, uint * param_3, uint param_4)
// Body     : 0037aa00 - 0037adc0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::process_data_context_main(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char**, unsigned int*, unsigned int) */

void __cdecl
juce::jpeglibNamespace::process_data_context_main
          (long param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  
  lVar2 = *(long *)(param_1 + 0x228);
  if (*(char *)(lVar2 + 0x68) == '\0') {
    iVar5 = (**(code **)(*(long *)(param_1 + 0x230) + 0x18))
                      (param_1,*(undefined8 *)(lVar2 + 0x70 + (long)*(int *)(lVar2 + 0x80) * 8));
    if (iVar5 == 0) {
      return;
    }
    *(undefined1 *)(lVar2 + 0x68) = 1;
    *(int *)(lVar2 + 0x88) = *(int *)(lVar2 + 0x88) + 1;
    iVar5 = *(int *)(lVar2 + 0x84);
  }
  else {
    iVar5 = *(int *)(lVar2 + 0x84);
  }
  if (iVar5 != 0) {
    if (iVar5 == 1) goto LAB_0037ac3f;
    if (iVar5 != 2) {
      return;
    }
    (**(code **)(*(long *)(param_1 + 0x238) + 8))
              (param_1,*(undefined8 *)(lVar2 + 0x70 + (long)*(int *)(lVar2 + 0x80) * 8),lVar2 + 0x60
               ,*(undefined4 *)(lVar2 + 100),param_2,param_3,param_4);
    if (*(uint *)(lVar2 + 0x60) < *(uint *)(lVar2 + 100)) {
      return;
    }
    *(undefined4 *)(lVar2 + 0x84) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(lVar2 + 0x60) = 0;
  iVar5 = *(int *)(param_1 + 0x18c);
  *(int *)(lVar2 + 100) = iVar5 + -1;
  if ((*(int *)(lVar2 + 0x88) == *(int *)(param_1 + 400)) &&
     (uVar1 = *(uint *)(param_1 + 0x38), 0 < (int)uVar1)) {
    lVar3 = *(long *)(param_1 + 0x228);
    lVar11 = *(long *)(param_1 + 0x120);
    uVar14 = 0;
    do {
      if (*(char *)(lVar11 + 0x34) != '\0') {
        uVar12 = *(int *)(lVar11 + 0x28) * *(int *)(lVar11 + 0xc);
        iVar6 = (int)uVar12 / iVar5;
        uVar8 = *(uint *)(lVar11 + 0x30) % uVar12;
        if (uVar8 != 0) {
          uVar12 = uVar8;
        }
        if (uVar14 == 0) {
          *(int *)(lVar3 + 100) = (int)(uVar12 - 1) / iVar6 + 1;
        }
        if (0 < iVar6) {
          lVar4 = *(long *)(*(long *)(lVar3 + 0x70 + (long)*(int *)(lVar3 + 0x80) * 8) + uVar14 * 8)
          ;
          lVar9 = (long)(int)(uVar12 - 1);
          uVar7 = (ulong)(uint)(iVar6 * 2);
          if (iVar6 * 2 < 2) {
            uVar7 = 1;
          }
          uVar13 = (ulong)((uint)uVar7 & 3);
          if (uVar7 - 1 < 3) {
            uVar17 = 0;
          }
          else {
            lVar10 = lVar4 + (long)(int)uVar12 * 8;
            uVar17 = 0;
            do {
              *(undefined8 *)(lVar10 + uVar17 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
              *(undefined8 *)(lVar10 + 8 + uVar17 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
              *(undefined8 *)(lVar10 + 0x10 + uVar17 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
              *(undefined8 *)(lVar10 + 0x18 + uVar17 * 8) = *(undefined8 *)(lVar4 + lVar9 * 8);
              uVar17 = uVar17 + 4;
            } while (((uint)uVar7 & 0x7ffffffc) != uVar17);
          }
          if (uVar13 != 0) {
            uVar7 = 0;
            do {
              *(undefined8 *)(lVar4 + (uVar17 + (long)(int)uVar12) * 8 + uVar7 * 8) =
                   *(undefined8 *)(lVar4 + lVar9 * 8);
              uVar7 = uVar7 + 1;
            } while (uVar13 != uVar7);
          }
        }
      }
      uVar14 = uVar14 + 1;
      lVar11 = lVar11 + 0x60;
    } while (uVar14 != uVar1);
  }
  *(undefined4 *)(lVar2 + 0x84) = 1;
LAB_0037ac3f:
  (**(code **)(*(long *)(param_1 + 0x238) + 8))
            (param_1,*(undefined8 *)(lVar2 + 0x70 + (long)*(int *)(lVar2 + 0x80) * 8),lVar2 + 0x60,
             *(undefined4 *)(lVar2 + 100),param_2,param_3,param_4);
  if (*(uint *)(lVar2 + 100) <= *(uint *)(lVar2 + 0x60)) {
    if (*(int *)(lVar2 + 0x88) == 1) {
      uVar1 = *(uint *)(param_1 + 0x38);
      iVar5 = *(int *)(param_1 + 0x18c);
      if (0 < (int)uVar1) {
        lVar3 = *(long *)(param_1 + 0x228);
        lVar11 = *(long *)(param_1 + 0x120);
        uVar14 = 0;
        do {
          if (*(char *)(lVar11 + 0x34) != '\0') {
            uVar7 = (long)(*(int *)(lVar11 + 0x28) * *(int *)(lVar11 + 0xc)) / (long)iVar5;
            iVar6 = (int)uVar7;
            if (0 < iVar6) {
              lVar4 = *(long *)(*(long *)(lVar3 + 0x70) + uVar14 * 8);
              lVar9 = *(long *)(*(long *)(lVar3 + 0x78) + uVar14 * 8);
              lVar15 = (long)(iVar6 * (iVar5 + 1));
              uVar7 = uVar7 & 0xffffffff;
              lVar10 = (long)(iVar6 * (iVar5 + 2));
              lVar16 = 0;
              do {
                *(undefined8 *)(lVar4 + uVar7 * -8 + lVar16) =
                     *(undefined8 *)(lVar4 + lVar15 * 8 + lVar16);
                *(undefined8 *)(lVar9 + uVar7 * -8 + lVar16) =
                     *(undefined8 *)(lVar9 + lVar15 * 8 + lVar16);
                *(undefined8 *)(lVar4 + lVar10 * 8 + lVar16) = *(undefined8 *)(lVar4 + lVar16);
                *(undefined8 *)(lVar9 + lVar10 * 8 + lVar16) = *(undefined8 *)(lVar9 + lVar16);
                lVar16 = lVar16 + 8;
              } while (uVar7 * 8 != lVar16);
            }
          }
          uVar14 = uVar14 + 1;
          lVar11 = lVar11 + 0x60;
        } while (uVar14 != uVar1);
      }
    }
    else {
      iVar5 = *(int *)(param_1 + 0x18c);
    }
    *(byte *)(lVar2 + 0x80) = *(byte *)(lVar2 + 0x80) ^ 1;
    *(undefined1 *)(lVar2 + 0x68) = 0;
    *(int *)(lVar2 + 0x60) = iVar5 + 1;
    *(int *)(lVar2 + 100) = iVar5 + 2;
    *(undefined4 *)(lVar2 + 0x84) = 2;
  }
  return;
}


