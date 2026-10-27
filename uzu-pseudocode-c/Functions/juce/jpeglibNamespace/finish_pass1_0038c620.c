// Function : finish_pass1
// Namespace: juce:jpeglibNamespace
// Entry    : 0038c620
// Prototype: undefined finish_pass1(long * param_1)
// Body     : 0038c620 - 0038cc45


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::finish_pass1(juce::jpeglibNamespace::jpeg_decompress_struct*) */

void __cdecl juce::jpeglibNamespace::finish_pass1(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar15;
  char cVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  ulong uVar26;
  long lVar27;
  
  lVar2 = param_1[0x4e];
  param_1[0x12] = *(long *)(lVar2 + 0x20);
  uVar1 = *(uint *)(lVar2 + 0x28);
  uVar26 = 1;
  puVar7 = (uint *)(**(code **)param_1[1])(param_1,1,(long)(int)uVar1 * 0x28);
  uVar4 = _UNK_005ddb08;
  *(undefined8 *)puVar7 = _DAT_005ddb00;
  *(undefined8 *)(puVar7 + 2) = uVar4;
  puVar7[4] = 0;
  puVar7[5] = 0x1f;
  update_box((long)param_1,puVar7);
  if (1 < (long)(int)uVar1) {
    uVar26 = 1;
    uVar23 = 0;
    uVar9 = extraout_RDX;
    do {
      if ((int)uVar1 < (int)((uint)uVar26 * 2)) {
        if (uVar23 < 3) {
          puVar8 = (uint *)0x0;
          uVar9 = 0;
          puVar13 = puVar7;
        }
        else {
          uVar19 = uVar26 & 0xfffffffffffffffc;
          puVar8 = (uint *)0x0;
          puVar13 = puVar7 + 0x14;
          uVar9 = 0;
LAB_0038c820:
          do {
            puVar12 = puVar13;
            uVar3 = *(ulong *)(puVar12 + -0xe);
            uVar15 = uVar9;
            if ((long)uVar9 < (long)uVar3) {
              uVar15 = uVar3;
            }
            uVar17 = *(ulong *)(puVar12 + -4);
            puVar13 = puVar12 + -0x14;
            if ((long)uVar3 <= (long)uVar9) {
              puVar13 = puVar8;
            }
            puVar8 = puVar12;
            if ((long)uVar15 < (long)uVar17) {
              puVar13 = puVar12 + -10;
              uVar9 = *(ulong *)(puVar12 + 6);
              if ((long)uVar9 <= (long)uVar17) goto LAB_0038c860;
            }
            else {
              uVar9 = *(ulong *)(puVar12 + 6);
              uVar17 = uVar15;
              if ((long)uVar9 <= (long)uVar15) {
LAB_0038c860:
                puVar8 = puVar13;
                uVar9 = uVar17;
              }
            }
            uVar3 = *(ulong *)(puVar12 + 0x10);
            if ((long)uVar3 <= (long)uVar9) {
              uVar19 = uVar19 - 4;
              puVar13 = puVar12 + 0x28;
              if (uVar19 == 0) break;
              goto LAB_0038c820;
            }
            puVar8 = puVar12 + 10;
            uVar19 = uVar19 - 4;
            puVar13 = puVar12 + 0x28;
            uVar9 = uVar3;
          } while (uVar19 != 0);
          puVar13 = puVar12 + 0x14;
        }
        if ((uVar26 & 3) != 0) {
          uVar19 = (ulong)((uint)uVar26 & 3);
          do {
            if ((long)uVar9 < (long)*(ulong *)(puVar13 + 6)) {
              puVar8 = puVar13;
              uVar9 = *(ulong *)(puVar13 + 6);
            }
            puVar13 = puVar13 + 10;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
LAB_0038c8d0:
        puVar13 = puVar8;
        if (puVar8 == (uint *)0x0) goto LAB_0038c9c5;
      }
      else {
        if (uVar23 == 0) {
          puVar8 = (uint *)0x0;
          lVar21 = 0;
          puVar13 = puVar7;
          if ((uVar26 & 1) != 0) goto LAB_0038c8b9;
          goto LAB_0038c8d0;
        }
        uVar9 = uVar26 & 0xfffffffffffffffe;
        puVar8 = (uint *)0x0;
        lVar21 = 0;
        puVar13 = puVar7 + 10;
        do {
          puVar12 = puVar13;
          if (lVar21 < *(long *)(puVar12 + -2)) {
            if (0 < *(long *)(puVar12 + -4)) {
              puVar8 = puVar12 + -10;
              lVar21 = *(long *)(puVar12 + -2);
            }
            lVar10 = *(long *)(puVar12 + 8);
            if (lVar21 < lVar10) goto LAB_0038c7ba;
          }
          else {
            lVar10 = *(long *)(puVar12 + 8);
            if (lVar21 < lVar10) {
LAB_0038c7ba:
              if (0 < *(long *)(puVar12 + 6)) {
                puVar8 = puVar12;
                lVar21 = lVar10;
              }
            }
          }
          uVar9 = uVar9 - 2;
          puVar13 = puVar12 + 0x14;
        } while (uVar9 != 0);
        uVar9 = 0;
        puVar13 = puVar12 + 10;
        if ((uVar26 & 1) == 0) goto LAB_0038c8d0;
LAB_0038c8b9:
        if ((*(long *)(puVar13 + 8) <= lVar21) || (*(long *)(puVar13 + 6) < 1)) goto LAB_0038c8d0;
      }
      puVar7[uVar26 * 10 + 5] = puVar13[5];
      uVar4 = *(undefined8 *)(puVar13 + 2);
      *(undefined8 *)(puVar7 + uVar26 * 10) = *(undefined8 *)puVar13;
      *(undefined8 *)(puVar7 + uVar26 * 10 + 2) = uVar4;
      puVar7[uVar26 * 10 + 4] = puVar13[4];
      iVar6 = (puVar13[1] - *puVar13) * 0x10;
      iVar25 = (puVar13[3] - puVar13[2]) * 0xc;
      iVar20 = iVar6;
      if (iVar6 <= iVar25) {
        iVar20 = iVar25;
      }
      cVar16 = iVar6 <= iVar25;
      if (iVar20 < (int)((puVar13[5] - puVar13[4]) * 8)) {
        cVar16 = '\x02';
      }
      if (cVar16 == '\x02') {
        lVar21 = uVar26 * 10 + 4;
        uVar11 = (int)(puVar13[4] + puVar13[5]) / 2;
        puVar13[5] = uVar11;
LAB_0038c6ed:
        puVar8 = puVar7 + lVar21;
LAB_0038c6fa:
        *puVar8 = uVar11 + 1;
      }
      else {
        if (cVar16 == '\x01') {
          lVar21 = uVar26 * 10 + 2;
          uVar11 = (int)(puVar13[2] + puVar13[3]) / 2;
          puVar13[3] = uVar11;
          goto LAB_0038c6ed;
        }
        if (cVar16 == '\0') {
          uVar11 = (int)(*puVar13 + puVar13[1]) / 2;
          puVar13[1] = uVar11;
          puVar8 = puVar7 + uVar26 * 10;
          goto LAB_0038c6fa;
        }
      }
      update_box((long)param_1,puVar13);
      update_box((long)param_1,puVar7 + uVar26 * 10);
      uVar26 = uVar26 + 1;
      uVar23 = uVar23 + 1;
      uVar9 = extraout_RDX_00;
    } while (uVar26 != uVar1);
    uVar26 = (ulong)uVar1;
LAB_0038c9c5:
    iVar25 = (int)uVar26;
    if (iVar25 < 1) goto LAB_0038cc09;
  }
  iVar25 = (int)uVar26;
  uVar23 = 0;
  do {
    lVar21 = (long)(int)puVar7[uVar23 * 10];
    if ((int)puVar7[uVar23 * 10 + 1] < (int)puVar7[uVar23 * 10]) {
LAB_0038ca2e:
      uVar19 = 0;
      lVar10 = 0;
      lVar18 = 0;
      lVar14 = 0;
    }
    else {
      uVar1 = puVar7[uVar23 * 10 + 2];
      if ((int)puVar7[uVar23 * 10 + 3] < (int)uVar1) goto LAB_0038ca2e;
      uVar11 = puVar7[uVar23 * 10 + 4];
      uVar19 = 0;
      lVar10 = 0;
      lVar18 = 0;
      lVar14 = 0;
      if ((int)uVar11 <= (int)puVar7[uVar23 * 10 + 5]) {
        lVar14 = 0;
        lVar18 = 0;
        lVar10 = 0;
        uVar19 = 0;
        do {
          lVar24 = (long)(int)uVar1 * 0x40 + *(long *)(*(long *)(param_1[0x4e] + 0x30) + lVar21 * 8)
                   + (long)(int)uVar11 * 2;
          lVar27 = (long)(int)uVar1;
          do {
            lVar22 = 0;
            iVar20 = uVar11 * 8 + 4;
            do {
              uVar9 = (ulong)*(ushort *)(lVar24 + lVar22 * 2);
              if (uVar9 != 0) {
                uVar19 = uVar19 + uVar9;
                lVar10 = lVar10 + uVar9 * (long)((int)lVar21 * 8 + 4);
                lVar18 = lVar18 + uVar9 * (long)((int)lVar27 * 4 + 2);
                lVar14 = lVar14 + (long)iVar20 * uVar9;
              }
              lVar22 = lVar22 + 1;
              iVar20 = iVar20 + 8;
            } while ((puVar7[uVar23 * 10 + 5] - uVar11) + 1 != (int)lVar22);
            lVar27 = lVar27 + 1;
            lVar24 = lVar24 + 0x40;
          } while (puVar7[uVar23 * 10 + 3] + 1 != (int)lVar27);
          lVar21 = lVar21 + 1;
        } while (puVar7[uVar23 * 10 + 1] + 1 != (int)lVar21);
      }
    }
    lVar21 = (long)uVar19 >> 1;
    uVar9 = lVar10 + lVar21;
    if ((uVar9 | uVar19) >> 0x20 == 0) {
      uVar5 = (undefined1)((uVar9 & 0xffffffff) / (uVar19 & 0xffffffff));
    }
    else {
      uVar5 = (undefined1)((long)uVar9 / (long)uVar19);
    }
    *(undefined1 *)(*(long *)param_1[0x12] + uVar23) = uVar5;
    uVar9 = lVar18 + lVar21;
    if ((uVar9 | uVar19) >> 0x20 == 0) {
      uVar5 = (undefined1)((uVar9 & 0xffffffff) / (uVar19 & 0xffffffff));
    }
    else {
      uVar5 = (undefined1)((long)uVar9 / (long)uVar19);
    }
    *(undefined1 *)(*(long *)(param_1[0x12] + 8) + uVar23) = uVar5;
    uVar9 = lVar14 + lVar21;
    if ((uVar9 | uVar19) >> 0x20 == 0) {
      uVar5 = (undefined1)((uVar9 & 0xffffffff) / (uVar19 & 0xffffffff));
      uVar9 = (uVar9 & 0xffffffff) % (uVar19 & 0xffffffff);
    }
    else {
      uVar5 = (undefined1)((long)uVar9 / (long)uVar19);
      uVar9 = (long)uVar9 % (long)uVar19;
    }
    *(undefined1 *)(*(long *)(param_1[0x12] + 0x10) + uVar23) = uVar5;
    uVar23 = uVar23 + 1;
  } while (uVar23 != (uVar26 & 0xffffffff));
LAB_0038cc09:
  *(int *)(param_1 + 0x11) = iVar25;
  lVar21 = *param_1;
  *(undefined4 *)(lVar21 + 0x28) = 0x62;
  *(int *)(lVar21 + 0x2c) = iVar25;
  (**(code **)(*param_1 + 8))(param_1,1,uVar9);
  *(undefined1 *)(lVar2 + 0x38) = 1;
  return;
}


