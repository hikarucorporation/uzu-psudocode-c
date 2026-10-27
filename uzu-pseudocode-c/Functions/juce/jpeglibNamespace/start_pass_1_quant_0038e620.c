// Function : start_pass_1_quant
// Namespace: juce:jpeglibNamespace
// Entry    : 0038e620
// Prototype: undefined start_pass_1_quant(long * param_1)
// Body     : 0038e620 - 0038e8e4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_1_quant(juce::jpeglibNamespace::jpeg_decompress_struct*,
   unsigned char) */

void __cdecl juce::jpeglibNamespace::start_pass_1_quant(long *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar3 = param_1[0x4e];
  param_1[0x12] = *(long *)(lVar3 + 0x20);
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(lVar3 + 0x28);
  iVar5 = *(int *)((long)param_1 + 100);
  if (iVar5 == 2) {
    *(code **)(lVar3 + 8) = quantize_fs_dither;
    *(undefined1 *)(lVar3 + 0x90) = 0;
    if (*(long *)(lVar3 + 0x70) == 0) {
      if (*(int *)((long)param_1 + 0x7c) < 1) {
        return;
      }
      uVar1 = *(uint *)((long)param_1 + 0x74);
      lVar16 = 0;
      do {
        uVar7 = (**(code **)(param_1[1] + 8))(param_1,1,(ulong)uVar1 * 2 + 4);
        *(undefined8 *)(lVar3 + 0x70 + lVar16 * 8) = uVar7;
        lVar16 = lVar16 + 1;
        iVar5 = *(int *)((long)param_1 + 0x7c);
      } while (lVar16 < iVar5);
    }
    else {
      iVar5 = *(int *)((long)param_1 + 0x7c);
    }
    if (0 < iVar5) {
      uVar1 = *(uint *)((long)param_1 + 0x74);
      lVar16 = 0;
      do {
        memset(*(void **)(lVar3 + 0x70 + lVar16 * 8),0,(ulong)uVar1 * 2 + 4);
        lVar16 = lVar16 + 1;
      } while (lVar16 < *(int *)((long)param_1 + 0x7c));
    }
  }
  else if (iVar5 == 1) {
    pcVar6 = quantize_ord_dither;
    if (*(int *)((long)param_1 + 0x7c) == 3) {
      pcVar6 = quantize3_ord_dither;
    }
    *(code **)(lVar3 + 8) = pcVar6;
    *(undefined4 *)(lVar3 + 0x4c) = 0;
    if (*(char *)(lVar3 + 0x38) == '\0') {
      create_colorindex((long)param_1);
      lVar3 = *(long *)(lVar3 + 0x50);
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x50);
    }
    if ((lVar3 == 0) && (iVar5 = *(int *)((long)param_1 + 0x7c), 0 < iVar5)) {
      lVar3 = param_1[0x4e];
      lVar16 = 0;
      do {
        iVar2 = *(int *)(lVar3 + 0x3c + lVar16 * 4);
        if (lVar16 != 0) {
          lVar9 = 0;
          do {
            if (iVar2 == *(int *)(lVar3 + 0x3c + lVar9 * 4)) {
              lVar9 = *(long *)(lVar3 + 0x50 + lVar9 * 8);
              if (lVar9 != 0) goto LAB_0038e7c4;
              break;
            }
            lVar9 = lVar9 + 1;
          } while (lVar16 != lVar9);
        }
        lVar9 = (**(code **)param_1[1])(param_1,1,0x400);
        uVar12 = (long)iVar2 * 0x200 - 0x200;
        puVar13 = &base_dither_matrix;
        lVar15 = 0;
        lVar14 = lVar9;
        do {
          lVar10 = 0;
          do {
            lVar8 = (ulong)(byte)puVar13[lVar10] * -0x1fe;
            if (lVar8 < -0xfe01) {
              uVar11 = (ulong)(byte)puVar13[lVar10] * 0x1fe - 0xfe01;
              if ((uVar11 | uVar12) >> 0x20 == 0) {
                iVar5 = -(int)((uVar11 & 0xffffffff) / (uVar12 & 0xffffffff));
              }
              else {
                iVar5 = -(int)((long)uVar11 / (long)uVar12);
              }
            }
            else {
              uVar11 = lVar8 + 0xfe01;
              if ((uVar11 | uVar12) >> 0x20 == 0) {
                iVar5 = (int)((uVar11 & 0xffffffff) / (uVar12 & 0xffffffff));
              }
              else {
                iVar5 = (int)((long)uVar11 / (long)uVar12);
              }
            }
            *(int *)(lVar14 + lVar10 * 4) = iVar5;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x10);
          lVar15 = lVar15 + 1;
          lVar14 = lVar14 + 0x40;
          puVar13 = puVar13 + 0x10;
        } while (lVar15 != 0x10);
        iVar5 = *(int *)((long)param_1 + 0x7c);
LAB_0038e7c4:
        *(long *)(lVar3 + 0x50 + lVar16 * 8) = lVar9;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar5);
    }
  }
  else {
    if (iVar5 != 0) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x31;
                    /* WARNING: Could not recover jumptable at 0x0038e6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)(param_1);
      return;
    }
    if (*(int *)((long)param_1 + 0x7c) == 3) {
      pcVar6 = color_quantize3;
    }
    else {
      pcVar6 = color_quantize;
    }
    *(code **)(lVar3 + 8) = pcVar6;
  }
  return;
}


