// Function : audioIOChanged
// Namespace: juce:AudioProcessor
// Entry    : 004c8660
// Prototype: undefined audioIOChanged(AudioProcessor * this, char param_1, char param_2)
// Body     : 004c8660 - 004c8b64


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioProcessor::audioIOChanged(bool, bool) */

void __thiscall juce::AudioProcessor::audioIOChanged(AudioProcessor *this,char param_1,char param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  
  uVar38 = _UNK_005de34c;
  uVar21 = _UNK_005de348;
  uVar20 = _UNK_005de344;
  uVar19 = _DAT_005de340;
  uVar18 = _UNK_005de01c;
  uVar17 = _UNK_005de018;
  uVar16 = _UNK_005de014;
  uVar15 = _DAT_005de010;
  uVar14 = _UNK_005ddbdc;
  uVar13 = _UNK_005ddbd8;
  uVar12 = _UNK_005ddbd4;
  uVar11 = _DAT_005ddbd0;
  uVar10 = _UNK_005d998c;
  uVar9 = _UNK_005d9988;
  uVar8 = _UNK_005d9984;
  uVar7 = _DAT_005d9980;
  uVar3 = *(uint *)(this + 0xcc);
  uVar4 = *(uint *)(this + 0xdc);
  if (0 < (int)uVar3) {
    lVar26 = *(long *)(this + 0xc0);
    uVar25 = 0;
    do {
      if ((uVar25 < uVar3) && (lVar5 = *(long *)(lVar26 + uVar25 * 8), lVar5 != 0)) {
        lVar23 = lVar5 + 0x18;
        if (*(long *)(lVar5 + 0x10) != 0) {
          lVar23 = *(long *)(lVar5 + 0x10);
        }
        uVar37 = *(uint *)(lVar5 + 0x30);
        if ((int)uVar37 < 0) {
          iVar29 = 0;
        }
        else {
          uVar24 = (ulong)(uVar37 >> 5);
          iVar29 = 0;
          if (0xdf < uVar37) {
            uVar27 = (ulong)((uint)(uVar24 + 1) & 0xfffffff8);
            lVar22 = lVar23 + uVar24 * 4;
            iVar29 = 0;
            iVar30 = 0;
            iVar31 = 0;
            iVar32 = 0;
            lVar28 = 0;
            iVar33 = 0;
            iVar34 = 0;
            iVar35 = 0;
            iVar36 = 0;
            do {
              puVar2 = (uint *)(lVar22 + -0x1c + lVar28 * 4);
              puVar1 = (uint *)(lVar22 + -0xc + lVar28 * 4);
              uVar42 = puVar1[3] - (puVar1[3] >> 1 & uVar11);
              uVar44 = puVar1[2] - (puVar1[2] >> 1 & uVar12);
              uVar46 = puVar1[1] - (puVar1[1] >> 1 & uVar13);
              uVar48 = *puVar1 - (*puVar1 >> 1 & uVar14);
              uVar37 = puVar2[3] - (puVar2[3] >> 1 & uVar11);
              uVar39 = puVar2[2] - (puVar2[2] >> 1 & uVar12);
              uVar40 = puVar2[1] - (puVar2[1] >> 1 & uVar13);
              uVar41 = *puVar2 - (*puVar2 >> 1 & uVar14);
              uVar43 = (uVar42 & uVar15) + (uVar42 >> 2 & uVar15);
              uVar45 = (uVar44 & uVar16) + (uVar44 >> 2 & uVar16);
              uVar47 = (uVar46 & uVar17) + (uVar46 >> 2 & uVar17);
              uVar49 = (uVar48 & uVar18) + (uVar48 >> 2 & uVar18);
              uVar42 = (uVar37 & uVar15) + (uVar37 >> 2 & uVar15);
              uVar44 = (uVar39 & uVar16) + (uVar39 >> 2 & uVar16);
              uVar46 = (uVar40 & uVar17) + (uVar40 >> 2 & uVar17);
              uVar48 = (uVar41 & uVar18) + (uVar41 >> 2 & uVar18);
              uVar37 = (uVar43 >> 4) + uVar43 & uVar7;
              uVar39 = (uVar45 >> 4) + uVar45 & uVar8;
              uVar40 = (uVar47 >> 4) + uVar47 & uVar9;
              uVar41 = (uVar49 >> 4) + uVar49 & uVar10;
              uVar42 = (uVar42 >> 4) + uVar42 & uVar7;
              uVar44 = (uVar44 >> 4) + uVar44 & uVar8;
              uVar46 = (uVar46 >> 4) + uVar46 & uVar9;
              uVar48 = (uVar48 >> 4) + uVar48 & uVar10;
              uVar37 = (uVar37 >> 8) + uVar37;
              uVar39 = (uVar39 >> 8) + uVar39;
              uVar40 = (uVar40 >> 8) + uVar40;
              uVar41 = (uVar41 >> 8) + uVar41;
              uVar42 = (uVar42 >> 8) + uVar42;
              uVar44 = (uVar44 >> 8) + uVar44;
              uVar46 = (uVar46 >> 8) + uVar46;
              uVar48 = (uVar48 >> 8) + uVar48;
              iVar29 = iVar29 + ((uVar37 >> 0x10) + uVar37 & uVar19);
              iVar30 = iVar30 + ((uVar39 >> 0x10) + uVar39 & uVar20);
              iVar31 = iVar31 + ((uVar40 >> 0x10) + uVar40 & uVar21);
              iVar32 = iVar32 + ((uVar41 >> 0x10) + uVar41 & uVar38);
              iVar33 = iVar33 + ((uVar42 >> 0x10) + uVar42 & uVar19);
              iVar34 = iVar34 + ((uVar44 >> 0x10) + uVar44 & uVar20);
              iVar35 = iVar35 + ((uVar46 >> 0x10) + uVar46 & uVar21);
              iVar36 = iVar36 + ((uVar48 >> 0x10) + uVar48 & uVar38);
              lVar28 = lVar28 + -8;
            } while (-lVar28 != uVar27);
            iVar29 = iVar36 + iVar32 + iVar34 + iVar30 + iVar35 + iVar31 + iVar33 + iVar29;
            if (uVar24 + 1 == uVar27) goto LAB_004c86bf;
            uVar24 = uVar24 - uVar27;
          }
          lVar22 = uVar24 + 1;
          do {
            uVar37 = *(uint *)(lVar23 + -4 + lVar22 * 4);
            uVar37 = uVar37 - (uVar37 >> 1 & 0x55555555);
            uVar37 = (uVar37 & 0x33333333) + (uVar37 >> 2 & 0x33333333);
            uVar37 = (uVar37 >> 4) + uVar37 & 0xf0f0f0f;
            uVar37 = (uVar37 >> 8) + uVar37;
            iVar29 = iVar29 + ((uVar37 >> 0x10) + uVar37 & 0xff);
            lVar28 = lVar22 + -1;
            bVar6 = 0 < lVar22;
            lVar22 = lVar28;
          } while (lVar28 != 0 && bVar6);
        }
LAB_004c86bf:
        *(int *)(lVar5 + 0x8c) = iVar29;
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar3);
  }
  uVar21 = _UNK_005de34c;
  uVar20 = _UNK_005de348;
  uVar19 = _UNK_005de344;
  uVar18 = _DAT_005de340;
  uVar17 = _UNK_005de01c;
  uVar16 = _UNK_005de018;
  uVar15 = _UNK_005de014;
  uVar14 = _DAT_005de010;
  uVar13 = _UNK_005ddbdc;
  uVar12 = _UNK_005ddbd8;
  uVar11 = _UNK_005ddbd4;
  uVar10 = _DAT_005ddbd0;
  uVar9 = _UNK_005d998c;
  uVar8 = _UNK_005d9988;
  uVar7 = _UNK_005d9984;
  uVar3 = _DAT_005d9980;
  if (0 < (int)uVar4) {
    lVar26 = *(long *)(this + 0xd0);
    uVar25 = 0;
    do {
      if ((uVar25 < uVar4) && (lVar5 = *(long *)(lVar26 + uVar25 * 8), lVar5 != 0)) {
        lVar23 = lVar5 + 0x18;
        if (*(long *)(lVar5 + 0x10) != 0) {
          lVar23 = *(long *)(lVar5 + 0x10);
        }
        uVar38 = *(uint *)(lVar5 + 0x30);
        if ((int)uVar38 < 0) {
          iVar29 = 0;
        }
        else {
          uVar24 = (ulong)(uVar38 >> 5);
          iVar29 = 0;
          if (0xdf < uVar38) {
            uVar27 = (ulong)((uint)(uVar24 + 1) & 0xfffffff8);
            lVar22 = uVar24 * 4 + -0xc + lVar23;
            iVar29 = 0;
            iVar30 = 0;
            iVar31 = 0;
            iVar32 = 0;
            lVar28 = 0;
            iVar33 = 0;
            iVar34 = 0;
            iVar35 = 0;
            iVar36 = 0;
            do {
              puVar2 = (uint *)(lVar22 + -0x10 + lVar28 * 4);
              puVar1 = (uint *)(lVar22 + lVar28 * 4);
              uVar41 = puVar1[3] - (puVar1[3] >> 1 & uVar10);
              uVar42 = puVar1[2] - (puVar1[2] >> 1 & uVar11);
              uVar44 = puVar1[1] - (puVar1[1] >> 1 & uVar12);
              uVar46 = *puVar1 - (*puVar1 >> 1 & uVar13);
              uVar38 = puVar2[3] - (puVar2[3] >> 1 & uVar10);
              uVar37 = puVar2[2] - (puVar2[2] >> 1 & uVar11);
              uVar39 = puVar2[1] - (puVar2[1] >> 1 & uVar12);
              uVar40 = *puVar2 - (*puVar2 >> 1 & uVar13);
              uVar48 = (uVar41 & uVar14) + (uVar41 >> 2 & uVar14);
              uVar43 = (uVar42 & uVar15) + (uVar42 >> 2 & uVar15);
              uVar45 = (uVar44 & uVar16) + (uVar44 >> 2 & uVar16);
              uVar47 = (uVar46 & uVar17) + (uVar46 >> 2 & uVar17);
              uVar41 = (uVar38 & uVar14) + (uVar38 >> 2 & uVar14);
              uVar42 = (uVar37 & uVar15) + (uVar37 >> 2 & uVar15);
              uVar44 = (uVar39 & uVar16) + (uVar39 >> 2 & uVar16);
              uVar46 = (uVar40 & uVar17) + (uVar40 >> 2 & uVar17);
              uVar38 = (uVar48 >> 4) + uVar48 & uVar3;
              uVar37 = (uVar43 >> 4) + uVar43 & uVar7;
              uVar39 = (uVar45 >> 4) + uVar45 & uVar8;
              uVar40 = (uVar47 >> 4) + uVar47 & uVar9;
              uVar41 = (uVar41 >> 4) + uVar41 & uVar3;
              uVar42 = (uVar42 >> 4) + uVar42 & uVar7;
              uVar44 = (uVar44 >> 4) + uVar44 & uVar8;
              uVar46 = (uVar46 >> 4) + uVar46 & uVar9;
              uVar38 = (uVar38 >> 8) + uVar38;
              uVar37 = (uVar37 >> 8) + uVar37;
              uVar39 = (uVar39 >> 8) + uVar39;
              uVar40 = (uVar40 >> 8) + uVar40;
              uVar41 = (uVar41 >> 8) + uVar41;
              uVar42 = (uVar42 >> 8) + uVar42;
              uVar44 = (uVar44 >> 8) + uVar44;
              uVar46 = (uVar46 >> 8) + uVar46;
              iVar29 = iVar29 + ((uVar38 >> 0x10) + uVar38 & uVar18);
              iVar30 = iVar30 + ((uVar37 >> 0x10) + uVar37 & uVar19);
              iVar31 = iVar31 + ((uVar39 >> 0x10) + uVar39 & uVar20);
              iVar32 = iVar32 + ((uVar40 >> 0x10) + uVar40 & uVar21);
              iVar33 = iVar33 + ((uVar41 >> 0x10) + uVar41 & uVar18);
              iVar34 = iVar34 + ((uVar42 >> 0x10) + uVar42 & uVar19);
              iVar35 = iVar35 + ((uVar44 >> 0x10) + uVar44 & uVar20);
              iVar36 = iVar36 + ((uVar46 >> 0x10) + uVar46 & uVar21);
              lVar28 = lVar28 + -8;
            } while (-lVar28 != uVar27);
            iVar29 = iVar36 + iVar32 + iVar34 + iVar30 + iVar35 + iVar31 + iVar33 + iVar29;
            if (uVar24 + 1 == uVar27) goto LAB_004c88c7;
            uVar24 = uVar24 - uVar27;
          }
          lVar22 = uVar24 + 1;
          do {
            uVar38 = *(uint *)(lVar23 + -4 + lVar22 * 4);
            uVar38 = uVar38 - (uVar38 >> 1 & 0x55555555);
            uVar38 = (uVar38 & 0x33333333) + (uVar38 >> 2 & 0x33333333);
            uVar38 = (uVar38 >> 4) + uVar38 & 0xf0f0f0f;
            uVar38 = (uVar38 >> 8) + uVar38;
            iVar29 = iVar29 + ((uVar38 >> 0x10) + uVar38 & 0xff);
            lVar28 = lVar22 + -1;
            bVar6 = 0 < lVar22;
            lVar22 = lVar28;
          } while (lVar28 != 0 && bVar6);
        }
LAB_004c88c7:
        *(int *)(lVar5 + 0x8c) = iVar29;
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar4);
  }
  iVar29 = 0;
  iVar30 = 0;
  if ((long)*(int *)(this + 0xcc) != 0) {
    lVar26 = 0;
    iVar30 = 0;
    do {
      iVar30 = iVar30 + *(int *)(*(long *)(*(long *)(this + 0xc0) + lVar26) + 0x8c);
      lVar26 = lVar26 + 8;
    } while ((long)*(int *)(this + 0xcc) * 8 != lVar26);
  }
  *(int *)(this + 0xf0) = iVar30;
  if (uVar4 != 0) {
    lVar26 = 0;
    iVar29 = 0;
    do {
      iVar29 = iVar29 + *(int *)(*(long *)(*(long *)(this + 0xd0) + lVar26) + 0x8c);
      lVar26 = lVar26 + 8;
    } while ((long)(int)uVar4 * 8 != lVar26);
  }
  *(int *)(this + 0xf4) = iVar29;
  updateSpeakerFormatStrings(this);
  if (param_1 != '\0') {
    (**(code **)(*(long *)this + 0x130))(this);
  }
  if (param_2 != '\0') {
    (**(code **)(*(long *)this + 0x128))(this);
  }
                    /* WARNING: Could not recover jumptable at 0x004c8b5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x138))(this);
  return;
}


