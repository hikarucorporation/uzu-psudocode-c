// Function : operator()
// Namespace: AudioPluginAudioProcessor:workerProcessAvailableTick__:__2
// Entry    : 0016e640
// Prototype: undefined operator()(int * param_1, long param_2, int * param_3, int param_4, uint param_5)
// Body     : 0016e640 - 0016ea11


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* AudioPluginAudioProcessor::workerProcessAvailableTick()::$_2::TEMPNAMEPLACEHOLDERVALUE(int, int)
   const */

void __cdecl
AudioPluginAudioProcessor::workerProcessAvailableTick()::$_2::operator()
          (int *param_1,long param_2,int *param_3,int param_4,uint param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  
  iVar7 = *param_1;
  if ((int)param_5 < 1) goto LAB_0016e991;
  lVar8 = *(long *)(param_2 + 0x508);
  lVar23 = **(long **)(param_2 + 0x3c8);
  if (*param_3 < 2) {
    if (param_5 == 1) {
      uVar20 = 0;
    }
    else {
      iVar21 = iVar7 * 2;
      lVar24 = (long)param_4 * 4 + 4 + lVar23;
      uVar20 = 0;
      do {
        *(undefined4 *)(lVar24 + -4 + uVar20 * 4) = *(undefined4 *)(lVar8 + (long)iVar21 * 4);
        *(undefined4 *)(lVar24 + uVar20 * 4) = *(undefined4 *)(lVar8 + (long)(iVar21 + 2) * 4);
        uVar20 = uVar20 + 2;
        iVar21 = iVar21 + 4;
      } while ((param_5 & 0xfffffffe) != uVar20);
    }
    if ((param_5 & 1) != 0) {
      *(undefined4 *)(lVar23 + ((long)param_4 + uVar20) * 4) =
           *(undefined4 *)(lVar8 + (long)((iVar7 + (int)uVar20) * 2) * 4);
    }
  }
  else {
    lVar24 = (*(long **)(param_2 + 0x3c8))[1];
    lVar17 = (long)param_4;
    uVar20 = (ulong)param_5;
    if (param_5 < 4) {
      uVar16 = 0;
    }
    else {
      iVar21 = iVar7 * 2;
      uVar22 = (uint)(uVar20 - 1);
      uVar16 = 0;
      if (iVar21 <= (int)(uVar22 * 2 + iVar7 * 2)) {
        if ((CARRY4(uVar22,uVar22)) || (uVar20 - 1 >> 0x20 != 0)) goto LAB_0016e687;
        if (iVar7 * 2 + 1 <= (int)(uVar22 * 2 + 1 + iVar7 * 2)) {
          uVar6 = lVar23 + lVar17 * 4;
          uVar18 = lVar23 + (lVar17 + uVar20) * 4;
          uVar26 = lVar24 + lVar17 * 4;
          uVar1 = lVar24 + (lVar17 + uVar20) * 4;
          uVar2 = lVar8 + (long)(iVar7 * 2) * 4;
          uVar3 = lVar8 + ((long)(iVar7 * 2) + uVar20 * 2) * 4;
          uVar16 = 0;
          if ((uVar1 <= uVar6 || uVar18 <= uVar26) && (uVar3 <= uVar6 || uVar18 <= uVar2)) {
            if (uVar3 <= uVar26 || uVar1 <= uVar2) {
              uVar16 = (ulong)(param_5 & 0xfffffffc);
              uVar18 = (uVar16 - 4 >> 2) + 1;
              if (uVar16 - 4 == 0) {
                lVar27 = 0;
              }
              else {
                uVar26 = uVar18 & 0xfffffffffffffffe;
                lVar19 = lVar24 + lVar17 * 4;
                lVar25 = lVar17 * 4 + 0x10 + lVar23;
                lVar27 = 0;
                do {
                  puVar4 = (undefined4 *)(lVar8 + (long)iVar21 * 4);
                  uVar9 = puVar4[1];
                  uVar10 = puVar4[2];
                  uVar11 = puVar4[3];
                  puVar5 = (undefined4 *)(lVar8 + 0x10 + (long)iVar21 * 4);
                  uVar12 = *puVar5;
                  uVar13 = puVar5[1];
                  uVar14 = puVar5[2];
                  uVar15 = puVar5[3];
                  puVar5 = (undefined4 *)(lVar25 + -0x10 + lVar27 * 4);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar10;
                  puVar5[2] = uVar12;
                  puVar5[3] = uVar14;
                  puVar4 = (undefined4 *)(lVar19 + lVar27 * 4);
                  *puVar4 = uVar9;
                  puVar4[1] = uVar11;
                  puVar4[2] = uVar13;
                  puVar4[3] = uVar15;
                  puVar4 = (undefined4 *)(lVar8 + (long)(iVar21 + 8) * 4);
                  uVar9 = puVar4[1];
                  uVar10 = puVar4[2];
                  uVar11 = puVar4[3];
                  puVar5 = (undefined4 *)(lVar8 + 0x10 + (long)(iVar21 + 8) * 4);
                  uVar12 = *puVar5;
                  uVar13 = puVar5[1];
                  uVar14 = puVar5[2];
                  uVar15 = puVar5[3];
                  puVar5 = (undefined4 *)(lVar25 + lVar27 * 4);
                  *puVar5 = *puVar4;
                  puVar5[1] = uVar10;
                  puVar5[2] = uVar12;
                  puVar5[3] = uVar14;
                  puVar4 = (undefined4 *)(lVar19 + 0x10 + lVar27 * 4);
                  *puVar4 = uVar9;
                  puVar4[1] = uVar11;
                  puVar4[2] = uVar13;
                  puVar4[3] = uVar15;
                  lVar27 = lVar27 + 8;
                  iVar21 = iVar21 + 0x10;
                  uVar26 = uVar26 - 2;
                } while (uVar26 != 0);
              }
              if ((uVar18 & 1) != 0) {
                lVar19 = (long)((iVar7 + (int)lVar27) * 2);
                puVar4 = (undefined4 *)(lVar8 + lVar19 * 4);
                uVar9 = puVar4[1];
                uVar10 = puVar4[2];
                uVar11 = puVar4[3];
                puVar5 = (undefined4 *)(lVar8 + 0x10 + lVar19 * 4);
                uVar12 = *puVar5;
                uVar13 = puVar5[1];
                uVar14 = puVar5[2];
                uVar15 = puVar5[3];
                puVar5 = (undefined4 *)(lVar23 + (lVar27 + lVar17) * 4);
                *puVar5 = *puVar4;
                puVar5[1] = uVar10;
                puVar5[2] = uVar12;
                puVar5[3] = uVar14;
                puVar4 = (undefined4 *)(lVar24 + (lVar27 + lVar17) * 4);
                *puVar4 = uVar9;
                puVar4[1] = uVar11;
                puVar4[2] = uVar13;
                puVar4[3] = uVar15;
              }
              if (uVar16 == uVar20) goto LAB_0016e98a;
            }
            goto LAB_0016e687;
          }
        }
      }
      uVar16 = 0;
    }
LAB_0016e687:
    uVar18 = ~uVar16;
    if ((param_5 & 1) != 0) {
      iVar21 = iVar7 + (int)uVar16;
      *(undefined4 *)(lVar23 + (uVar16 + lVar17) * 4) =
           *(undefined4 *)(lVar8 + (long)(iVar21 * 2) * 4);
      *(undefined4 *)(lVar24 + (uVar16 + lVar17) * 4) =
           *(undefined4 *)(lVar8 + (long)(iVar21 * 2 + 1) * 4);
      uVar16 = uVar16 | 1;
    }
    if (uVar18 + uVar20 != 0) {
      lVar27 = uVar20 - uVar16;
      lVar23 = (lVar17 + uVar16) * 4 + 4 + lVar23;
      lVar24 = lVar24 + (lVar17 + uVar16) * 4;
      lVar17 = 0;
      do {
        iVar21 = (int)uVar16 * 2 + iVar7 * 2 + (int)lVar17;
        *(undefined4 *)(lVar23 + -4 + lVar17 * 2) = *(undefined4 *)(lVar8 + (long)iVar21 * 4);
        *(undefined4 *)(lVar24 + lVar17 * 2) = *(undefined4 *)(lVar8 + (long)(iVar21 + 1) * 4);
        *(undefined4 *)(lVar23 + lVar17 * 2) = *(undefined4 *)(lVar8 + (long)(iVar21 + 2) * 4);
        *(undefined4 *)(lVar24 + 4 + lVar17 * 2) = *(undefined4 *)(lVar8 + (long)(iVar21 + 3) * 4);
        lVar17 = lVar17 + 4;
        lVar27 = lVar27 + -2;
      } while (lVar27 != 0);
    }
  }
LAB_0016e98a:
  *(undefined1 *)(param_2 + 0x4d8) = 0;
LAB_0016e991:
  *param_1 = iVar7 + param_5;
  return;
}


