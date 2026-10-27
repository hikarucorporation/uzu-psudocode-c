// Function : start_pass_main
// Namespace: juce:jpeglibNamespace
// Entry    : 0037a350
// Prototype: undefined start_pass_main(long * param_1, int param_2)
// Body     : 0037a350 - 0037a9ff


/* WARNING: Removing unreachable block (ram,0x0037a553) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::start_pass_main(juce::jpeglibNamespace::jpeg_decompress_struct*,
   juce::jpeglibNamespace::J_BUF_MODE) */

void __cdecl juce::jpeglibNamespace::start_pass_main(long *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  
  lVar6 = param_1[0x45];
  if (param_2 == 2) {
    *(code **)(lVar6 + 8) = process_data_crank_post;
  }
  else {
    if (param_2 != 0) {
      puVar7 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar7 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x0037a9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar7)();
      return;
    }
    if (*(char *)(param_1[0x4c] + 0x10) == '\0') {
      *(code **)(lVar6 + 8) = process_data_simple_main;
      *(undefined4 *)(lVar6 + 0x60) = *(undefined4 *)(lVar6 + 100);
    }
    else {
      *(code **)(lVar6 + 8) = process_data_context_main;
      uVar4 = *(uint *)(param_1 + 7);
      if (0 < (int)uVar4) {
        iVar5 = *(int *)((long)param_1 + 0x18c);
        lVar27 = param_1[0x24];
        uVar23 = 0;
        do {
          if (*(char *)(lVar27 + 0x34) != '\0') {
            uVar24 = (long)(*(int *)(lVar27 + 0x28) * *(int *)(lVar27 + 0xc)) / (long)iVar5;
            uVar14 = (uint)uVar24;
            uVar24 = uVar24 & 0xffffffff;
            puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x70) + uVar23 * 8);
            puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x78) + uVar23 * 8);
            puVar9 = *(undefined8 **)(lVar6 + 0x10 + uVar23 * 8);
            uVar16 = uVar14 * (iVar5 + 2);
            if (0 < (int)uVar16) {
              uVar18 = (ulong)uVar16;
              if (uVar16 < 4) {
                uVar17 = 0;
              }
              else if ((puVar8 < puVar7 + uVar18 && puVar7 < puVar8 + uVar18) ||
                      (puVar8 < puVar9 + uVar18 && puVar9 < puVar8 + uVar18)) {
                uVar17 = 0;
              }
              else {
                uVar17 = 0;
                if (puVar9 + uVar18 <= puVar7 || puVar7 + uVar18 <= puVar9) {
                  uVar17 = (ulong)(uVar16 & 0xfffffffc);
                  uVar19 = (uVar17 - 4 >> 2) + 1;
                  if (uVar17 - 4 == 0) {
                    lVar22 = 0;
LAB_0037a51e:
                    uVar10 = puVar9[lVar22];
                    uVar11 = (puVar9 + lVar22)[1];
                    uVar12 = puVar9[lVar22 + 2];
                    uVar13 = (puVar9 + lVar22 + 2)[1];
                    puVar8[lVar22] = uVar10;
                    (puVar8 + lVar22)[1] = uVar11;
                    puVar8[lVar22 + 2] = uVar12;
                    (puVar8 + lVar22 + 2)[1] = uVar13;
                    puVar7[lVar22] = uVar10;
                    (puVar7 + lVar22)[1] = uVar11;
                    puVar7[lVar22 + 2] = uVar12;
                    (puVar7 + lVar22 + 2)[1] = uVar13;
                  }
                  else {
                    uVar21 = uVar19 & 0x7ffffffffffffffe;
                    lVar22 = 0;
                    do {
                      uVar10 = puVar9[lVar22];
                      uVar11 = (puVar9 + lVar22)[1];
                      uVar12 = puVar9[lVar22 + 2];
                      uVar13 = (puVar9 + lVar22 + 2)[1];
                      puVar8[lVar22] = uVar10;
                      (puVar8 + lVar22)[1] = uVar11;
                      puVar8[lVar22 + 2] = uVar12;
                      (puVar8 + lVar22 + 2)[1] = uVar13;
                      puVar7[lVar22] = uVar10;
                      (puVar7 + lVar22)[1] = uVar11;
                      puVar7[lVar22 + 2] = uVar12;
                      (puVar7 + lVar22 + 2)[1] = uVar13;
                      uVar10 = puVar9[lVar22 + 4];
                      uVar11 = (puVar9 + lVar22 + 4)[1];
                      uVar12 = puVar9[lVar22 + 6];
                      uVar13 = (puVar9 + lVar22 + 6)[1];
                      puVar8[lVar22 + 4] = uVar10;
                      (puVar8 + lVar22 + 4)[1] = uVar11;
                      puVar8[lVar22 + 6] = uVar12;
                      (puVar8 + lVar22 + 6)[1] = uVar13;
                      puVar7[lVar22 + 4] = uVar10;
                      (puVar7 + lVar22 + 4)[1] = uVar11;
                      puVar7[lVar22 + 6] = uVar12;
                      (puVar7 + lVar22 + 6)[1] = uVar13;
                      lVar22 = lVar22 + 8;
                      uVar21 = uVar21 - 2;
                    } while (uVar21 != 0);
                    if ((uVar19 & 1) != 0) goto LAB_0037a51e;
                  }
                  if (uVar17 == uVar18) goto LAB_0037a5f3;
                }
              }
              uVar21 = ~uVar17;
              uVar19 = uVar18 & 3;
              if ((uVar16 & 3) != 0) {
                do {
                  uVar10 = puVar9[uVar17];
                  puVar8[uVar17] = uVar10;
                  puVar7[uVar17] = uVar10;
                  uVar17 = uVar17 + 1;
                  uVar19 = uVar19 - 1;
                } while (uVar19 != 0);
              }
              if (2 < uVar21 + uVar18) {
                do {
                  uVar10 = puVar9[uVar17];
                  puVar8[uVar17] = uVar10;
                  puVar7[uVar17] = uVar10;
                  uVar10 = puVar9[uVar17 + 1];
                  puVar8[uVar17 + 1] = uVar10;
                  puVar7[uVar17 + 1] = uVar10;
                  uVar10 = puVar9[uVar17 + 2];
                  puVar8[uVar17 + 2] = uVar10;
                  puVar7[uVar17 + 2] = uVar10;
                  uVar10 = puVar9[uVar17 + 3];
                  puVar8[uVar17 + 3] = uVar10;
                  puVar7[uVar17 + 3] = uVar10;
                  uVar17 = uVar17 + 4;
                } while (uVar18 != uVar17);
              }
            }
LAB_0037a5f3:
            if (0 < (int)uVar14) {
              lVar25 = (long)(int)(uVar14 * iVar5);
              lVar22 = (long)(int)(uVar14 * (iVar5 + -2));
              uVar18 = (ulong)(uVar14 * 2);
              if ((int)(uVar14 * 2) < 2) {
                uVar18 = 1;
              }
              if ((uint)uVar18 < 4) {
                uVar17 = 0;
LAB_0037a62d:
                uVar19 = uVar17;
                if ((uVar18 & 1) != 0) {
                  puVar8[uVar17 + lVar22] = puVar9[uVar17 + lVar25];
                  puVar8[uVar17 + lVar25] = puVar9[uVar17 + lVar22];
                  uVar19 = uVar17 | 1;
                }
                if (~uVar17 + uVar18 != 0) {
                  do {
                    puVar8[lVar22 + uVar19] = puVar9[lVar25 + uVar19];
                    puVar8[lVar25 + uVar19] = puVar9[lVar22 + uVar19];
                    puVar8[lVar22 + uVar19 + 1] = puVar9[lVar25 + uVar19 + 1];
                    puVar8[lVar25 + uVar19 + 1] = puVar9[lVar22 + uVar19 + 1];
                    uVar19 = uVar19 + 2;
                  } while (uVar18 != uVar19);
                }
              }
              else {
                puVar20 = puVar8 + lVar22;
                puVar1 = puVar8 + lVar22 + uVar18;
                puVar2 = puVar8 + lVar25;
                puVar3 = puVar8 + lVar25 + uVar18;
                if (((puVar20 < puVar3 && puVar2 < puVar1) ||
                    (puVar20 < puVar9 + lVar25 + uVar18 && puVar9 + lVar25 < puVar1)) ||
                   (puVar20 < puVar9 + lVar22 + uVar18 && puVar9 + lVar22 < puVar1)) {
                  uVar17 = 0;
                  goto LAB_0037a62d;
                }
                if (puVar2 < puVar9 + lVar25 + uVar18 && puVar9 + lVar25 < puVar3) {
                  uVar17 = 0;
                  goto LAB_0037a62d;
                }
                uVar17 = 0;
                if (puVar2 < puVar9 + lVar22 + uVar18 && puVar9 + lVar22 < puVar3)
                goto LAB_0037a62d;
                uVar17 = (ulong)((uint)uVar18 & 0x7ffffffc);
                uVar19 = (uVar17 - 4 >> 2) + 1;
                if (uVar17 - 4 == 0) {
                  lVar26 = 0;
                }
                else {
                  uVar21 = uVar19 & 0x7ffffffffffffffe;
                  lVar26 = 0;
                  do {
                    uVar10 = (puVar9 + lVar25 + lVar26)[1];
                    uVar11 = puVar9[lVar25 + lVar26 + 2];
                    uVar12 = (puVar9 + lVar25 + lVar26 + 2)[1];
                    puVar8[lVar22 + lVar26] = puVar9[lVar25 + lVar26];
                    (puVar8 + lVar22 + lVar26)[1] = uVar10;
                    puVar8[lVar22 + lVar26 + 2] = uVar11;
                    (puVar8 + lVar22 + lVar26 + 2)[1] = uVar12;
                    uVar10 = (puVar9 + lVar22 + lVar26)[1];
                    uVar11 = puVar9[lVar22 + lVar26 + 2];
                    uVar12 = (puVar9 + lVar22 + lVar26 + 2)[1];
                    puVar8[lVar25 + lVar26] = puVar9[lVar22 + lVar26];
                    (puVar8 + lVar25 + lVar26)[1] = uVar10;
                    puVar8[lVar25 + lVar26 + 2] = uVar11;
                    (puVar8 + lVar25 + lVar26 + 2)[1] = uVar12;
                    uVar10 = (puVar9 + lVar25 + lVar26 + 4)[1];
                    uVar11 = puVar9[lVar25 + lVar26 + 6];
                    uVar12 = (puVar9 + lVar25 + lVar26 + 6)[1];
                    puVar8[lVar22 + lVar26 + 4] = puVar9[lVar25 + lVar26 + 4];
                    (puVar8 + lVar22 + lVar26 + 4)[1] = uVar10;
                    puVar8[lVar22 + lVar26 + 6] = uVar11;
                    (puVar8 + lVar22 + lVar26 + 6)[1] = uVar12;
                    uVar10 = (puVar9 + lVar22 + lVar26 + 4)[1];
                    uVar11 = puVar9[lVar22 + lVar26 + 6];
                    uVar12 = (puVar9 + lVar22 + lVar26 + 6)[1];
                    puVar8[lVar25 + lVar26 + 4] = puVar9[lVar22 + lVar26 + 4];
                    (puVar8 + lVar25 + lVar26 + 4)[1] = uVar10;
                    puVar8[lVar25 + lVar26 + 6] = uVar11;
                    (puVar8 + lVar25 + lVar26 + 6)[1] = uVar12;
                    lVar26 = lVar26 + 8;
                    uVar21 = uVar21 - 2;
                  } while (uVar21 != 0);
                }
                if ((uVar19 & 1) != 0) {
                  lVar15 = lVar25 + lVar26;
                  uVar10 = (puVar9 + lVar15)[1];
                  uVar11 = puVar9[lVar15 + 2];
                  uVar12 = (puVar9 + lVar15 + 2)[1];
                  lVar26 = lVar26 + lVar22;
                  puVar8[lVar26] = puVar9[lVar15];
                  (puVar8 + lVar26)[1] = uVar10;
                  puVar8[lVar26 + 2] = uVar11;
                  (puVar8 + lVar26 + 2)[1] = uVar12;
                  uVar10 = (puVar9 + lVar26)[1];
                  uVar11 = puVar9[lVar26 + 2];
                  uVar12 = (puVar9 + lVar26 + 2)[1];
                  puVar8[lVar15] = puVar9[lVar26];
                  (puVar8 + lVar15)[1] = uVar10;
                  puVar8[lVar15 + 2] = uVar11;
                  (puVar8 + lVar15 + 2)[1] = uVar12;
                }
                if (uVar17 != uVar18) goto LAB_0037a62d;
              }
              if (uVar24 - 1 < 3) {
                uVar18 = 0;
              }
              else {
                uVar18 = 0;
                do {
                  puVar7[uVar18 - uVar24] = *puVar7;
                  puVar7[(uVar18 + 1) - uVar24] = *puVar7;
                  puVar7[(uVar18 + 2) - uVar24] = *puVar7;
                  puVar7[(uVar18 + 3) - uVar24] = *puVar7;
                  uVar18 = uVar18 + 4;
                } while ((uVar14 & 0xfffffffc) != uVar18);
              }
              if ((ulong)(uVar14 & 3) != 0) {
                uVar17 = 0;
                do {
                  puVar7[(uVar18 - uVar24) + uVar17] = *puVar7;
                  uVar17 = uVar17 + 1;
                } while ((uVar14 & 3) != uVar17);
              }
            }
          }
          uVar23 = uVar23 + 1;
          lVar27 = lVar27 + 0x60;
        } while (uVar23 != uVar4);
      }
      *(undefined8 *)(lVar6 + 0x80) = 0;
      *(undefined4 *)(lVar6 + 0x88) = 0;
      *(undefined1 *)(lVar6 + 0x68) = 0;
    }
  }
  return;
}


