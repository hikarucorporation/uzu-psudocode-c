// Function : start_output_pass
// Namespace: juce:jpeglibNamespace
// Entry    : 0037b850
// Prototype: undefined start_output_pass(long param_1)
// Body     : 0037b850 - 0037b9f9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_output_pass(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::start_output_pass(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  short *psVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined1 auVar15 [16];
  
  lVar4 = *(long *)(param_1 + 0x230);
  if (*(long *)(lVar4 + 0x20) == 0) goto LAB_0037b9e9;
  if (((*(char *)(param_1 + 0x61) == '\0') || (*(char *)(param_1 + 0x129) == '\0')) ||
     (*(long *)(param_1 + 0xb0) == 0)) {
LAB_0037b9de:
    pcVar10 = decompress_data;
  }
  else {
    lVar9 = *(long *)(lVar4 + 0xd8);
    if (lVar9 == 0) {
      lVar9 = (*(code *)**(undefined8 **)(param_1 + 8))
                        (param_1,1,(long)*(int *)(param_1 + 0x38) * 0x18);
      *(long *)(lVar4 + 0xd8) = lVar9;
      if (0 < *(int *)(param_1 + 0x38)) goto LAB_0037b8d5;
      goto LAB_0037b9de;
    }
    if (*(int *)(param_1 + 0x38) < 1) goto LAB_0037b9de;
LAB_0037b8d5:
    lVar5 = *(long *)(param_1 + 0x120);
    lVar11 = 5;
    lVar12 = 0x14;
    lVar14 = 0;
    bVar8 = false;
    do {
      psVar6 = *(short **)(lVar5 + lVar12 * 4);
      if (((((psVar6 == (short *)0x0) || (*psVar6 == 0)) ||
           ((psVar6[1] == 0 || ((psVar6[8] == 0 || (psVar6[0x10] == 0)))))) || (psVar6[9] == 0)) ||
         ((psVar6[2] == 0 ||
          (lVar7 = *(long *)(param_1 + 0xb0), *(int *)(lVar7 + -0x14 + lVar11 * 4) < 0))))
      goto LAB_0037b9de;
      *(undefined4 *)(lVar9 + -0x10 + lVar12) = *(undefined4 *)(lVar7 + -0x10 + lVar11 * 4);
      iVar1 = *(int *)(lVar7 + -0x10 + lVar11 * 4);
      *(undefined4 *)(lVar9 + -0xc + lVar12) = *(undefined4 *)(lVar7 + -0xc + lVar11 * 4);
      iVar13 = *(int *)(lVar7 + -0xc + lVar11 * 4);
      *(undefined4 *)(lVar9 + -8 + lVar12) = *(undefined4 *)(lVar7 + -8 + lVar11 * 4);
      iVar2 = *(int *)(lVar7 + -8 + lVar11 * 4);
      *(undefined4 *)(lVar9 + -4 + lVar12) = *(undefined4 *)(lVar7 + -4 + lVar11 * 4);
      iVar3 = *(int *)(lVar7 + -4 + lVar11 * 4);
      *(undefined4 *)(lVar9 + lVar12) = *(undefined4 *)(lVar7 + lVar11 * 4);
      auVar15._0_4_ = -(uint)(*(int *)(lVar7 + lVar11 * 4) == 0);
      auVar15._4_4_ = -(uint)(iVar3 == 0);
      auVar15._8_4_ = -(uint)(iVar2 == 0);
      auVar15._12_4_ = -(uint)(iVar13 == 0);
      iVar13 = movmskps((int)lVar7,auVar15);
      if (iVar1 != 0) {
        bVar8 = true;
      }
      if (iVar13 != 0xf) {
        bVar8 = true;
      }
      lVar14 = lVar14 + 1;
      lVar11 = lVar11 + 0x40;
      lVar12 = lVar12 + 0x18;
    } while (lVar14 < *(int *)(param_1 + 0x38));
    if (!bVar8) goto LAB_0037b9de;
    pcVar10 = decompress_smooth_data;
  }
  *(code **)(lVar4 + 0x18) = pcVar10;
LAB_0037b9e9:
  *(undefined4 *)(param_1 + 0xa8) = 0;
  return;
}


