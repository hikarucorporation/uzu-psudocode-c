// Function : setBusesLayoutWithoutEnabling
// Namespace: juce:AudioProcessor
// Entry    : 004cb780
// Prototype: ulong setBusesLayoutWithoutEnabling(AudioProcessor * this, undefined8 * param_1)
// Body     : 004cb780 - 004cc616


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioProcessor::setBusesLayoutWithoutEnabling(juce::AudioProcessor::BusesLayout const&) */

ulong __thiscall
juce::AudioProcessor::setBusesLayoutWithoutEnabling(AudioProcessor *this,undefined8 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  void *pvVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  BigInteger *pBVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
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
  uint uVar50;
  uint uVar51;
  uint uVar52;
  void *local_80;
  uint local_74;
  void *local_70;
  uint local_64;
  void *local_60;
  int local_54;
  void *local_50;
  int local_44;
  ulong local_40;
  AudioProcessor *local_38;
  
  uVar12 = *(uint *)(this + 0xcc);
  uVar9 = (ulong)uVar12;
  uVar43 = *(uint *)(this + 0xdc);
  BusesLayout::BusesLayout((BusesLayout *)&local_80,param_1);
                    /* try { // try from 004cb7a9 to 004cb7b5 has its CatchHandler @ 004cc626 */
  getBusesLayout((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)&local_60,(long)this
                );
  if (0 < (int)uVar12) {
    uVar10 = 0;
    uVar12 = _DAT_005de010;
    uVar42 = _UNK_005de014;
    uVar44 = _UNK_005de018;
    uVar45 = _UNK_005de01c;
    uVar38 = _DAT_005ddbd0;
    uVar39 = _UNK_005ddbd4;
    uVar40 = _UNK_005ddbd8;
    uVar41 = _UNK_005ddbdc;
    uVar46 = _DAT_005d9980;
    uVar47 = _UNK_005d9984;
    uVar48 = _UNK_005d9988;
    uVar49 = _UNK_005d998c;
    uVar50 = _DAT_005de340;
    uVar51 = _UNK_005de344;
    uVar52 = _UNK_005de348;
    uVar27 = _UNK_005de34c;
    do {
      if (uVar10 < local_74) {
        lVar11 = *(long *)((long)local_80 + uVar10 * 0x28);
        lVar6 = (long)local_80 + uVar10 * 0x28 + 8;
        if (lVar11 != 0) {
          lVar6 = lVar11;
        }
        uVar26 = *(uint *)((long)local_80 + uVar10 * 0x28 + 0x20);
        if ((int)uVar26 < 0) goto LAB_004cb7f0;
        uVar7 = (ulong)(uVar26 >> 5);
        iVar18 = 0;
        if (uVar26 < 0xe0) {
LAB_004cb99b:
          lVar11 = uVar7 + 1;
          do {
            uVar26 = *(uint *)(lVar6 + -4 + lVar11 * 4);
            uVar26 = uVar26 - (uVar26 >> 1 & 0x55555555);
            uVar26 = (uVar26 & 0x33333333) + (uVar26 >> 2 & 0x33333333);
            uVar26 = (uVar26 >> 4) + uVar26 & 0xf0f0f0f;
            uVar26 = (uVar26 >> 8) + uVar26;
            iVar18 = iVar18 + ((uVar26 >> 0x10) + uVar26 & 0xff);
            lVar13 = lVar11 + -1;
            bVar3 = 0 < lVar11;
            lVar11 = lVar13;
          } while (lVar13 != 0 && bVar3);
        }
        else {
          uVar15 = (ulong)((uint)(uVar7 + 1) & 0xfffffff8);
          lVar11 = lVar6 + uVar7 * 4;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          lVar13 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar24 = 0;
          iVar25 = 0;
          do {
            puVar1 = (uint *)(lVar11 + -0x1c + lVar13 * 4);
            puVar2 = (uint *)(lVar11 + -0xc + lVar13 * 4);
            uVar31 = puVar2[3] - (puVar2[3] >> 1 & uVar38);
            uVar33 = puVar2[2] - (puVar2[2] >> 1 & uVar39);
            uVar35 = puVar2[1] - (puVar2[1] >> 1 & uVar40);
            uVar37 = *puVar2 - (*puVar2 >> 1 & uVar41);
            uVar26 = puVar1[3] - (puVar1[3] >> 1 & uVar38);
            uVar28 = puVar1[2] - (puVar1[2] >> 1 & uVar39);
            uVar29 = puVar1[1] - (puVar1[1] >> 1 & uVar40);
            uVar30 = *puVar1 - (*puVar1 >> 1 & uVar41);
            uVar32 = (uVar31 & uVar12) + (uVar31 >> 2 & uVar12);
            uVar34 = (uVar33 & uVar42) + (uVar33 >> 2 & uVar42);
            uVar36 = (uVar35 & uVar44) + (uVar35 >> 2 & uVar44);
            uVar37 = (uVar37 & uVar45) + (uVar37 >> 2 & uVar45);
            uVar26 = (uVar26 & uVar12) + (uVar26 >> 2 & uVar12);
            uVar31 = (uVar28 & uVar42) + (uVar28 >> 2 & uVar42);
            uVar33 = (uVar29 & uVar44) + (uVar29 >> 2 & uVar44);
            uVar35 = (uVar30 & uVar45) + (uVar30 >> 2 & uVar45);
            uVar28 = (uVar32 >> 4) + uVar32 & uVar46;
            uVar29 = (uVar34 >> 4) + uVar34 & uVar47;
            uVar30 = (uVar36 >> 4) + uVar36 & uVar48;
            uVar32 = (uVar37 >> 4) + uVar37 & uVar49;
            uVar26 = (uVar26 >> 4) + uVar26 & uVar46;
            uVar31 = (uVar31 >> 4) + uVar31 & uVar47;
            uVar33 = (uVar33 >> 4) + uVar33 & uVar48;
            uVar35 = (uVar35 >> 4) + uVar35 & uVar49;
            uVar28 = (uVar28 >> 8) + uVar28;
            uVar29 = (uVar29 >> 8) + uVar29;
            uVar30 = (uVar30 >> 8) + uVar30;
            uVar32 = (uVar32 >> 8) + uVar32;
            uVar26 = (uVar26 >> 8) + uVar26;
            uVar31 = (uVar31 >> 8) + uVar31;
            uVar33 = (uVar33 >> 8) + uVar33;
            uVar35 = (uVar35 >> 8) + uVar35;
            iVar18 = iVar18 + ((uVar28 >> 0x10) + uVar28 & uVar50);
            iVar19 = iVar19 + ((uVar29 >> 0x10) + uVar29 & uVar51);
            iVar20 = iVar20 + ((uVar30 >> 0x10) + uVar30 & uVar52);
            iVar21 = iVar21 + ((uVar32 >> 0x10) + uVar32 & uVar27);
            iVar22 = iVar22 + ((uVar26 >> 0x10) + uVar26 & uVar50);
            iVar23 = iVar23 + ((uVar31 >> 0x10) + uVar31 & uVar51);
            iVar24 = iVar24 + ((uVar33 >> 0x10) + uVar33 & uVar52);
            iVar25 = iVar25 + ((uVar35 >> 0x10) + uVar35 & uVar27);
            lVar13 = lVar13 + -8;
          } while (-lVar13 != uVar15);
          iVar18 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar18;
          if (uVar7 + 1 != uVar15) {
            uVar7 = uVar7 - uVar15;
            goto LAB_004cb99b;
          }
        }
        if (iVar18 == 0) goto LAB_004cb7f0;
      }
      else {
LAB_004cb7f0:
        BigInteger::operator=
                  ((BigInteger *)((long)local_80 + uVar10 * 0x28),
                   (BigInteger *)(uVar10 * 0x28 + (long)local_60));
        uVar12 = _DAT_005de010;
        uVar42 = _UNK_005de014;
        uVar44 = _UNK_005de018;
        uVar45 = _UNK_005de01c;
        uVar38 = _DAT_005ddbd0;
        uVar39 = _UNK_005ddbd4;
        uVar40 = _UNK_005ddbd8;
        uVar41 = _UNK_005ddbdc;
        uVar46 = _DAT_005d9980;
        uVar47 = _UNK_005d9984;
        uVar48 = _UNK_005d9988;
        uVar49 = _UNK_005d998c;
        uVar50 = _DAT_005de340;
        uVar51 = _UNK_005de344;
        uVar52 = _UNK_005de348;
        uVar27 = _UNK_005de34c;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar9);
  }
  if (0 < (int)uVar43) {
    uVar10 = 0;
    uVar12 = _DAT_005de010;
    uVar42 = _UNK_005de014;
    uVar44 = _UNK_005de018;
    uVar45 = _UNK_005de01c;
    uVar38 = _DAT_005ddbd0;
    uVar39 = _UNK_005ddbd4;
    uVar40 = _UNK_005ddbd8;
    uVar41 = _UNK_005ddbdc;
    uVar46 = _DAT_005d9980;
    uVar47 = _UNK_005d9984;
    uVar48 = _UNK_005d9988;
    uVar49 = _UNK_005d998c;
    uVar50 = _DAT_005de340;
    uVar51 = _UNK_005de344;
    uVar52 = _UNK_005de348;
    uVar27 = _UNK_005de34c;
    do {
      if (uVar10 < local_64) {
        lVar11 = *(long *)((long)local_70 + uVar10 * 0x28);
        lVar6 = (long)local_70 + uVar10 * 0x28 + 8;
        if (lVar11 != 0) {
          lVar6 = lVar11;
        }
        uVar26 = *(uint *)((long)local_70 + uVar10 * 0x28 + 0x20);
        if ((int)uVar26 < 0) goto LAB_004cba30;
        uVar7 = (ulong)(uVar26 >> 5);
        iVar18 = 0;
        if (uVar26 < 0xe0) {
LAB_004cbbdb:
          lVar11 = uVar7 + 1;
          do {
            uVar26 = *(uint *)(lVar6 + -4 + lVar11 * 4);
            uVar26 = uVar26 - (uVar26 >> 1 & 0x55555555);
            uVar26 = (uVar26 & 0x33333333) + (uVar26 >> 2 & 0x33333333);
            uVar26 = (uVar26 >> 4) + uVar26 & 0xf0f0f0f;
            uVar26 = (uVar26 >> 8) + uVar26;
            iVar18 = iVar18 + ((uVar26 >> 0x10) + uVar26 & 0xff);
            lVar13 = lVar11 + -1;
            bVar3 = 0 < lVar11;
            lVar11 = lVar13;
          } while (lVar13 != 0 && bVar3);
        }
        else {
          uVar15 = (ulong)((uint)(uVar7 + 1) & 0xfffffff8);
          lVar11 = lVar6 + uVar7 * 4;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          iVar21 = 0;
          lVar13 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar24 = 0;
          iVar25 = 0;
          do {
            puVar1 = (uint *)(lVar11 + -0x1c + lVar13 * 4);
            puVar2 = (uint *)(lVar11 + -0xc + lVar13 * 4);
            uVar31 = puVar2[3] - (puVar2[3] >> 1 & uVar38);
            uVar33 = puVar2[2] - (puVar2[2] >> 1 & uVar39);
            uVar35 = puVar2[1] - (puVar2[1] >> 1 & uVar40);
            uVar37 = *puVar2 - (*puVar2 >> 1 & uVar41);
            uVar26 = puVar1[3] - (puVar1[3] >> 1 & uVar38);
            uVar28 = puVar1[2] - (puVar1[2] >> 1 & uVar39);
            uVar29 = puVar1[1] - (puVar1[1] >> 1 & uVar40);
            uVar30 = *puVar1 - (*puVar1 >> 1 & uVar41);
            uVar32 = (uVar31 & uVar12) + (uVar31 >> 2 & uVar12);
            uVar34 = (uVar33 & uVar42) + (uVar33 >> 2 & uVar42);
            uVar36 = (uVar35 & uVar44) + (uVar35 >> 2 & uVar44);
            uVar37 = (uVar37 & uVar45) + (uVar37 >> 2 & uVar45);
            uVar26 = (uVar26 & uVar12) + (uVar26 >> 2 & uVar12);
            uVar31 = (uVar28 & uVar42) + (uVar28 >> 2 & uVar42);
            uVar33 = (uVar29 & uVar44) + (uVar29 >> 2 & uVar44);
            uVar35 = (uVar30 & uVar45) + (uVar30 >> 2 & uVar45);
            uVar28 = (uVar32 >> 4) + uVar32 & uVar46;
            uVar29 = (uVar34 >> 4) + uVar34 & uVar47;
            uVar30 = (uVar36 >> 4) + uVar36 & uVar48;
            uVar32 = (uVar37 >> 4) + uVar37 & uVar49;
            uVar26 = (uVar26 >> 4) + uVar26 & uVar46;
            uVar31 = (uVar31 >> 4) + uVar31 & uVar47;
            uVar33 = (uVar33 >> 4) + uVar33 & uVar48;
            uVar35 = (uVar35 >> 4) + uVar35 & uVar49;
            uVar28 = (uVar28 >> 8) + uVar28;
            uVar29 = (uVar29 >> 8) + uVar29;
            uVar30 = (uVar30 >> 8) + uVar30;
            uVar32 = (uVar32 >> 8) + uVar32;
            uVar26 = (uVar26 >> 8) + uVar26;
            uVar31 = (uVar31 >> 8) + uVar31;
            uVar33 = (uVar33 >> 8) + uVar33;
            uVar35 = (uVar35 >> 8) + uVar35;
            iVar18 = iVar18 + ((uVar28 >> 0x10) + uVar28 & uVar50);
            iVar19 = iVar19 + ((uVar29 >> 0x10) + uVar29 & uVar51);
            iVar20 = iVar20 + ((uVar30 >> 0x10) + uVar30 & uVar52);
            iVar21 = iVar21 + ((uVar32 >> 0x10) + uVar32 & uVar27);
            iVar22 = iVar22 + ((uVar26 >> 0x10) + uVar26 & uVar50);
            iVar23 = iVar23 + ((uVar31 >> 0x10) + uVar31 & uVar51);
            iVar24 = iVar24 + ((uVar33 >> 0x10) + uVar33 & uVar52);
            iVar25 = iVar25 + ((uVar35 >> 0x10) + uVar35 & uVar27);
            lVar13 = lVar13 + -8;
          } while (-lVar13 != uVar15);
          iVar18 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar18;
          if (uVar7 + 1 != uVar15) {
            uVar7 = uVar7 - uVar15;
            goto LAB_004cbbdb;
          }
        }
        if (iVar18 == 0) goto LAB_004cba30;
      }
      else {
LAB_004cba30:
        BigInteger::operator=
                  ((BigInteger *)((long)local_70 + uVar10 * 0x28),
                   (BigInteger *)(uVar10 * 0x28 + (long)local_50));
        uVar12 = _DAT_005de010;
        uVar42 = _UNK_005de014;
        uVar44 = _UNK_005de018;
        uVar45 = _UNK_005de01c;
        uVar38 = _DAT_005ddbd0;
        uVar39 = _UNK_005ddbd4;
        uVar40 = _UNK_005ddbd8;
        uVar41 = _UNK_005ddbdc;
        uVar46 = _DAT_005d9980;
        uVar47 = _UNK_005d9984;
        uVar48 = _UNK_005d9988;
        uVar49 = _UNK_005d998c;
        uVar50 = _DAT_005de340;
        uVar51 = _UNK_005de344;
        uVar52 = _UNK_005de348;
        uVar27 = _UNK_005de34c;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar43);
  }
                    /* try { // try from 004cbc5c to 004cc603 has its CatchHandler @ 004cc617 */
  if (((local_74 == *(uint *)(this + 0xcc)) && (local_64 == *(uint *)(this + 0xdc))) &&
     (cVar5 = (**(code **)(*(long *)this + 400))(this,&local_80), cVar5 != '\0')) {
    local_40 = uVar9;
    if (0 < (int)uVar43) {
      uVar10 = 0;
      uVar12 = _DAT_005de010;
      uVar42 = _UNK_005de014;
      uVar44 = _UNK_005de018;
      uVar45 = _UNK_005de01c;
      uVar38 = _DAT_005ddbd0;
      uVar39 = _UNK_005ddbd4;
      uVar40 = _UNK_005ddbd8;
      uVar41 = _UNK_005ddbdc;
      uVar46 = _DAT_005d9980;
      uVar47 = _UNK_005d9984;
      uVar48 = _UNK_005d9988;
      uVar49 = _UNK_005d998c;
      uVar50 = _DAT_005de340;
      uVar51 = _UNK_005de344;
      uVar52 = _UNK_005de348;
      uVar27 = _UNK_005de34c;
      local_38 = this;
      do {
        pvVar4 = local_70;
        lVar11 = *(long *)(*(long *)(local_38 + 0xd0) + uVar10 * 8);
        lVar6 = lVar11 + 0x18;
        if (*(long *)(lVar11 + 0x10) != 0) {
          lVar6 = *(long *)(lVar11 + 0x10);
        }
        uVar26 = *(uint *)(lVar11 + 0x30);
        if ((int)uVar26 < 0) {
LAB_004cbee2:
          pBVar17 = (BigInteger *)((long)local_70 + uVar10 * 0x28);
          pvVar16 = *(void **)pBVar17;
          pvVar8 = (void *)((long)local_70 + uVar10 * 0x28 + 8);
          if (pvVar16 != (void *)0x0) {
            pvVar8 = pvVar16;
          }
          uVar26 = *(uint *)((long)local_70 + uVar10 * 0x28 + 0x20);
          if (-1 < (int)uVar26) {
            uVar9 = (ulong)(uVar26 >> 5);
            iVar18 = 0;
            if (uVar26 < 0xe0) {
LAB_004cc03b:
              lVar6 = uVar9 + 1;
              do {
                uVar12 = *(uint *)((long)pvVar8 + lVar6 * 4 + -4);
                uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
                uVar12 = (uVar12 & 0x33333333) + (uVar12 >> 2 & 0x33333333);
                uVar12 = (uVar12 >> 4) + uVar12 & 0xf0f0f0f;
                uVar12 = (uVar12 >> 8) + uVar12;
                iVar18 = iVar18 + ((uVar12 >> 0x10) + uVar12 & 0xff);
                lVar13 = lVar6 + -1;
                bVar3 = 0 < lVar6;
                lVar6 = lVar13;
              } while (lVar13 != 0 && bVar3);
            }
            else {
              uVar7 = (ulong)((uint)(uVar9 + 1) & 0xfffffff8);
              iVar18 = 0;
              iVar19 = 0;
              iVar20 = 0;
              iVar21 = 0;
              lVar6 = 0;
              iVar22 = 0;
              iVar23 = 0;
              iVar24 = 0;
              iVar25 = 0;
              do {
                puVar1 = (uint *)((long)pvVar8 + lVar6 * 4 + uVar9 * 4 + -0x1c);
                puVar2 = (uint *)((long)pvVar8 + lVar6 * 4 + uVar9 * 4 + -0xc);
                uVar31 = puVar2[3] - (puVar2[3] >> 1 & uVar38);
                uVar33 = puVar2[2] - (puVar2[2] >> 1 & uVar39);
                uVar35 = puVar2[1] - (puVar2[1] >> 1 & uVar40);
                uVar37 = *puVar2 - (*puVar2 >> 1 & uVar41);
                uVar26 = puVar1[3] - (puVar1[3] >> 1 & uVar38);
                uVar28 = puVar1[2] - (puVar1[2] >> 1 & uVar39);
                uVar29 = puVar1[1] - (puVar1[1] >> 1 & uVar40);
                uVar30 = *puVar1 - (*puVar1 >> 1 & uVar41);
                uVar32 = (uVar31 & uVar12) + (uVar31 >> 2 & uVar12);
                uVar34 = (uVar33 & uVar42) + (uVar33 >> 2 & uVar42);
                uVar36 = (uVar35 & uVar44) + (uVar35 >> 2 & uVar44);
                uVar37 = (uVar37 & uVar45) + (uVar37 >> 2 & uVar45);
                uVar26 = (uVar26 & uVar12) + (uVar26 >> 2 & uVar12);
                uVar31 = (uVar28 & uVar42) + (uVar28 >> 2 & uVar42);
                uVar33 = (uVar29 & uVar44) + (uVar29 >> 2 & uVar44);
                uVar35 = (uVar30 & uVar45) + (uVar30 >> 2 & uVar45);
                uVar28 = (uVar32 >> 4) + uVar32 & uVar46;
                uVar29 = (uVar34 >> 4) + uVar34 & uVar47;
                uVar30 = (uVar36 >> 4) + uVar36 & uVar48;
                uVar32 = (uVar37 >> 4) + uVar37 & uVar49;
                uVar26 = (uVar26 >> 4) + uVar26 & uVar46;
                uVar31 = (uVar31 >> 4) + uVar31 & uVar47;
                uVar33 = (uVar33 >> 4) + uVar33 & uVar48;
                uVar35 = (uVar35 >> 4) + uVar35 & uVar49;
                uVar28 = (uVar28 >> 8) + uVar28;
                uVar29 = (uVar29 >> 8) + uVar29;
                uVar30 = (uVar30 >> 8) + uVar30;
                uVar32 = (uVar32 >> 8) + uVar32;
                uVar26 = (uVar26 >> 8) + uVar26;
                uVar31 = (uVar31 >> 8) + uVar31;
                uVar33 = (uVar33 >> 8) + uVar33;
                uVar35 = (uVar35 >> 8) + uVar35;
                iVar18 = iVar18 + ((uVar28 >> 0x10) + uVar28 & uVar50);
                iVar19 = iVar19 + ((uVar29 >> 0x10) + uVar29 & uVar51);
                iVar20 = iVar20 + ((uVar30 >> 0x10) + uVar30 & uVar52);
                iVar21 = iVar21 + ((uVar32 >> 0x10) + uVar32 & uVar27);
                iVar22 = iVar22 + ((uVar26 >> 0x10) + uVar26 & uVar50);
                iVar23 = iVar23 + ((uVar31 >> 0x10) + uVar31 & uVar51);
                iVar24 = iVar24 + ((uVar33 >> 0x10) + uVar33 & uVar52);
                iVar25 = iVar25 + ((uVar35 >> 0x10) + uVar35 & uVar27);
                lVar6 = lVar6 + -8;
              } while (-lVar6 != uVar7);
              iVar18 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar18;
              if (uVar9 + 1 != uVar7) {
                uVar9 = uVar9 - uVar7;
                goto LAB_004cc03b;
              }
            }
            if (iVar18 != 0) {
              BigInteger::operator=((BigInteger *)(lVar11 + 0x60),pBVar17);
              pvVar16 = *(void **)pBVar17;
            }
          }
          *(undefined1 (*) [16])pBVar17 = (undefined1  [16])0x0;
          *(undefined8 *)(pBVar17 + 0x10) = 0;
          *(undefined8 *)((long)pvVar4 + uVar10 * 0x28 + 0x18) = 4;
          *(undefined4 *)((long)pvVar4 + uVar10 * 0x28 + 0x20) = 0xffffffff;
          *(undefined1 *)((long)pvVar4 + uVar10 * 0x28 + 0x24) = 0;
          free(pvVar16);
          uVar9 = local_40;
          uVar12 = _DAT_005de010;
          uVar42 = _UNK_005de014;
          uVar44 = _UNK_005de018;
          uVar45 = _UNK_005de01c;
          uVar38 = _DAT_005ddbd0;
          uVar39 = _UNK_005ddbd4;
          uVar40 = _UNK_005ddbd8;
          uVar41 = _UNK_005ddbdc;
          uVar46 = _DAT_005d9980;
          uVar47 = _UNK_005d9984;
          uVar48 = _UNK_005d9988;
          uVar49 = _UNK_005d998c;
          uVar50 = _DAT_005de340;
          uVar51 = _UNK_005de344;
          uVar52 = _UNK_005de348;
          uVar27 = _UNK_005de34c;
        }
        else {
          uVar7 = (ulong)(uVar26 >> 5);
          iVar18 = 0;
          if (uVar26 < 0xe0) {
LAB_004cbe8b:
            lVar13 = uVar7 + 1;
            do {
              uVar26 = *(uint *)(lVar6 + -4 + lVar13 * 4);
              uVar26 = uVar26 - (uVar26 >> 1 & 0x55555555);
              uVar26 = (uVar26 & 0x33333333) + (uVar26 >> 2 & 0x33333333);
              uVar26 = (uVar26 >> 4) + uVar26 & 0xf0f0f0f;
              uVar26 = (uVar26 >> 8) + uVar26;
              iVar18 = iVar18 + ((uVar26 >> 0x10) + uVar26 & 0xff);
              lVar14 = lVar13 + -1;
              bVar3 = 0 < lVar13;
              lVar13 = lVar14;
            } while (lVar14 != 0 && bVar3);
          }
          else {
            uVar15 = (ulong)((uint)(uVar7 + 1) & 0xfffffff8);
            lVar13 = lVar6 + uVar7 * 4;
            iVar18 = 0;
            iVar19 = 0;
            iVar20 = 0;
            iVar21 = 0;
            lVar14 = 0;
            iVar22 = 0;
            iVar23 = 0;
            iVar24 = 0;
            iVar25 = 0;
            do {
              puVar1 = (uint *)(lVar13 + -0x1c + lVar14 * 4);
              puVar2 = (uint *)(lVar13 + -0xc + lVar14 * 4);
              uVar31 = puVar2[3] - (puVar2[3] >> 1 & uVar38);
              uVar33 = puVar2[2] - (puVar2[2] >> 1 & uVar39);
              uVar35 = puVar2[1] - (puVar2[1] >> 1 & uVar40);
              uVar37 = *puVar2 - (*puVar2 >> 1 & uVar41);
              uVar26 = puVar1[3] - (puVar1[3] >> 1 & uVar38);
              uVar28 = puVar1[2] - (puVar1[2] >> 1 & uVar39);
              uVar29 = puVar1[1] - (puVar1[1] >> 1 & uVar40);
              uVar30 = *puVar1 - (*puVar1 >> 1 & uVar41);
              uVar32 = (uVar31 & uVar12) + (uVar31 >> 2 & uVar12);
              uVar34 = (uVar33 & uVar42) + (uVar33 >> 2 & uVar42);
              uVar36 = (uVar35 & uVar44) + (uVar35 >> 2 & uVar44);
              uVar37 = (uVar37 & uVar45) + (uVar37 >> 2 & uVar45);
              uVar26 = (uVar26 & uVar12) + (uVar26 >> 2 & uVar12);
              uVar31 = (uVar28 & uVar42) + (uVar28 >> 2 & uVar42);
              uVar33 = (uVar29 & uVar44) + (uVar29 >> 2 & uVar44);
              uVar35 = (uVar30 & uVar45) + (uVar30 >> 2 & uVar45);
              uVar28 = (uVar32 >> 4) + uVar32 & uVar46;
              uVar29 = (uVar34 >> 4) + uVar34 & uVar47;
              uVar30 = (uVar36 >> 4) + uVar36 & uVar48;
              uVar32 = (uVar37 >> 4) + uVar37 & uVar49;
              uVar26 = (uVar26 >> 4) + uVar26 & uVar46;
              uVar31 = (uVar31 >> 4) + uVar31 & uVar47;
              uVar33 = (uVar33 >> 4) + uVar33 & uVar48;
              uVar35 = (uVar35 >> 4) + uVar35 & uVar49;
              uVar28 = (uVar28 >> 8) + uVar28;
              uVar29 = (uVar29 >> 8) + uVar29;
              uVar30 = (uVar30 >> 8) + uVar30;
              uVar32 = (uVar32 >> 8) + uVar32;
              uVar26 = (uVar26 >> 8) + uVar26;
              uVar31 = (uVar31 >> 8) + uVar31;
              uVar33 = (uVar33 >> 8) + uVar33;
              uVar35 = (uVar35 >> 8) + uVar35;
              iVar18 = iVar18 + ((uVar28 >> 0x10) + uVar28 & uVar50);
              iVar19 = iVar19 + ((uVar29 >> 0x10) + uVar29 & uVar51);
              iVar20 = iVar20 + ((uVar30 >> 0x10) + uVar30 & uVar52);
              iVar21 = iVar21 + ((uVar32 >> 0x10) + uVar32 & uVar27);
              iVar22 = iVar22 + ((uVar26 >> 0x10) + uVar26 & uVar50);
              iVar23 = iVar23 + ((uVar31 >> 0x10) + uVar31 & uVar51);
              iVar24 = iVar24 + ((uVar33 >> 0x10) + uVar33 & uVar52);
              iVar25 = iVar25 + ((uVar35 >> 0x10) + uVar35 & uVar27);
              lVar14 = lVar14 + -8;
            } while (-lVar14 != uVar15);
            iVar18 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar18;
            if (uVar7 + 1 != uVar15) {
              uVar7 = uVar7 - uVar15;
              goto LAB_004cbe8b;
            }
          }
          if (iVar18 == 0) goto LAB_004cbee2;
        }
        uVar10 = uVar10 + 1;
        this = local_38;
      } while (uVar10 != uVar43);
    }
    if (0 < (int)uVar9) {
      uVar10 = 0;
      uVar12 = _DAT_005de010;
      uVar43 = _UNK_005de014;
      uVar42 = _UNK_005de018;
      uVar44 = _UNK_005de01c;
      uVar45 = _DAT_005ddbd0;
      uVar38 = _UNK_005ddbd4;
      uVar39 = _UNK_005ddbd8;
      uVar40 = _UNK_005ddbdc;
      uVar41 = _DAT_005d9980;
      uVar46 = _UNK_005d9984;
      uVar47 = _UNK_005d9988;
      uVar48 = _UNK_005d998c;
      uVar49 = _DAT_005de340;
      uVar50 = _UNK_005de344;
      uVar51 = _UNK_005de348;
      uVar52 = _UNK_005de34c;
      do {
        pvVar4 = local_80;
        lVar11 = *(long *)(*(long *)(this + 0xc0) + uVar10 * 8);
        lVar6 = lVar11 + 0x18;
        if (*(long *)(lVar11 + 0x10) != 0) {
          lVar6 = *(long *)(lVar11 + 0x10);
        }
        uVar27 = *(uint *)(lVar11 + 0x30);
        if ((int)uVar27 < 0) {
LAB_004cc422:
          pBVar17 = (BigInteger *)(uVar10 * 0x28 + (long)local_80);
          pvVar16 = *(void **)pBVar17;
          pvVar8 = (void *)((long)local_80 + uVar10 * 0x28 + 8);
          if (pvVar16 != (void *)0x0) {
            pvVar8 = pvVar16;
          }
          uVar27 = *(uint *)((long)local_80 + uVar10 * 0x28 + 0x20);
          if (-1 < (int)uVar27) {
            uVar9 = (ulong)(uVar27 >> 5);
            iVar18 = 0;
            if (uVar27 < 0xe0) {
LAB_004cc58a:
              lVar6 = uVar9 + 1;
              do {
                uVar12 = *(uint *)((long)pvVar8 + lVar6 * 4 + -4);
                uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
                uVar12 = (uVar12 & 0x33333333) + (uVar12 >> 2 & 0x33333333);
                uVar12 = (uVar12 >> 4) + uVar12 & 0xf0f0f0f;
                uVar12 = (uVar12 >> 8) + uVar12;
                iVar18 = iVar18 + ((uVar12 >> 0x10) + uVar12 & 0xff);
                lVar13 = lVar6 + -1;
                bVar3 = 0 < lVar6;
                lVar6 = lVar13;
              } while (lVar13 != 0 && bVar3);
            }
            else {
              uVar7 = (ulong)((uint)(uVar9 + 1) & 0xfffffff8);
              iVar18 = 0;
              iVar19 = 0;
              iVar20 = 0;
              iVar21 = 0;
              lVar6 = 0;
              iVar22 = 0;
              iVar23 = 0;
              iVar24 = 0;
              iVar25 = 0;
              do {
                puVar2 = (uint *)((long)pvVar8 + lVar6 * 4 + uVar9 * 4 + -0x1c);
                puVar1 = (uint *)((long)pvVar8 + lVar6 * 4 + uVar9 * 4 + -0xc);
                uVar28 = puVar1[3] - (puVar1[3] >> 1 & uVar45);
                uVar29 = puVar1[2] - (puVar1[2] >> 1 & uVar38);
                uVar30 = puVar1[1] - (puVar1[1] >> 1 & uVar39);
                uVar36 = *puVar1 - (*puVar1 >> 1 & uVar40);
                uVar27 = puVar2[3] - (puVar2[3] >> 1 & uVar45);
                uVar26 = puVar2[2] - (puVar2[2] >> 1 & uVar38);
                uVar31 = puVar2[1] - (puVar2[1] >> 1 & uVar39);
                uVar33 = *puVar2 - (*puVar2 >> 1 & uVar40);
                uVar35 = (uVar28 & uVar12) + (uVar28 >> 2 & uVar12);
                uVar32 = (uVar29 & uVar43) + (uVar29 >> 2 & uVar43);
                uVar34 = (uVar30 & uVar42) + (uVar30 >> 2 & uVar42);
                uVar36 = (uVar36 & uVar44) + (uVar36 >> 2 & uVar44);
                uVar27 = (uVar27 & uVar12) + (uVar27 >> 2 & uVar12);
                uVar28 = (uVar26 & uVar43) + (uVar26 >> 2 & uVar43);
                uVar29 = (uVar31 & uVar42) + (uVar31 >> 2 & uVar42);
                uVar30 = (uVar33 & uVar44) + (uVar33 >> 2 & uVar44);
                uVar26 = (uVar35 >> 4) + uVar35 & uVar41;
                uVar31 = (uVar32 >> 4) + uVar32 & uVar46;
                uVar33 = (uVar34 >> 4) + uVar34 & uVar47;
                uVar35 = (uVar36 >> 4) + uVar36 & uVar48;
                uVar27 = (uVar27 >> 4) + uVar27 & uVar41;
                uVar28 = (uVar28 >> 4) + uVar28 & uVar46;
                uVar29 = (uVar29 >> 4) + uVar29 & uVar47;
                uVar30 = (uVar30 >> 4) + uVar30 & uVar48;
                uVar26 = (uVar26 >> 8) + uVar26;
                uVar31 = (uVar31 >> 8) + uVar31;
                uVar33 = (uVar33 >> 8) + uVar33;
                uVar35 = (uVar35 >> 8) + uVar35;
                uVar27 = (uVar27 >> 8) + uVar27;
                uVar28 = (uVar28 >> 8) + uVar28;
                uVar29 = (uVar29 >> 8) + uVar29;
                uVar30 = (uVar30 >> 8) + uVar30;
                iVar18 = iVar18 + ((uVar26 >> 0x10) + uVar26 & uVar49);
                iVar19 = iVar19 + ((uVar31 >> 0x10) + uVar31 & uVar50);
                iVar20 = iVar20 + ((uVar33 >> 0x10) + uVar33 & uVar51);
                iVar21 = iVar21 + ((uVar35 >> 0x10) + uVar35 & uVar52);
                iVar22 = iVar22 + ((uVar27 >> 0x10) + uVar27 & uVar49);
                iVar23 = iVar23 + ((uVar28 >> 0x10) + uVar28 & uVar50);
                iVar24 = iVar24 + ((uVar29 >> 0x10) + uVar29 & uVar51);
                iVar25 = iVar25 + ((uVar30 >> 0x10) + uVar30 & uVar52);
                lVar6 = lVar6 + -8;
              } while (-lVar6 != uVar7);
              iVar18 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar18;
              if (uVar9 + 1 != uVar7) {
                uVar9 = uVar9 - uVar7;
                goto LAB_004cc58a;
              }
            }
            if (iVar18 != 0) {
              BigInteger::operator=((BigInteger *)(lVar11 + 0x60),pBVar17);
              pvVar16 = *(void **)pBVar17;
            }
          }
          *(undefined1 (*) [16])pBVar17 = (undefined1  [16])0x0;
          *(undefined8 *)(pBVar17 + 0x10) = 0;
          *(undefined8 *)((long)pvVar4 + uVar10 * 0x28 + 0x18) = 4;
          *(undefined4 *)(uVar10 * 0x28 + 0x20 + (long)pvVar4) = 0xffffffff;
          *(undefined1 *)((long)pvVar4 + uVar10 * 0x28 + 0x24) = 0;
          free(pvVar16);
          uVar9 = local_40;
          uVar12 = _DAT_005de010;
          uVar43 = _UNK_005de014;
          uVar42 = _UNK_005de018;
          uVar44 = _UNK_005de01c;
          uVar45 = _DAT_005ddbd0;
          uVar38 = _UNK_005ddbd4;
          uVar39 = _UNK_005ddbd8;
          uVar40 = _UNK_005ddbdc;
          uVar41 = _DAT_005d9980;
          uVar46 = _UNK_005d9984;
          uVar47 = _UNK_005d9988;
          uVar48 = _UNK_005d998c;
          uVar49 = _DAT_005de340;
          uVar50 = _UNK_005de344;
          uVar51 = _UNK_005de348;
          uVar52 = _UNK_005de34c;
        }
        else {
          uVar7 = (ulong)(uVar27 >> 5);
          iVar18 = 0;
          if (uVar27 < 0xe0) {
LAB_004cc3cb:
            lVar13 = uVar7 + 1;
            do {
              uVar27 = *(uint *)(lVar6 + -4 + lVar13 * 4);
              uVar27 = uVar27 - (uVar27 >> 1 & 0x55555555);
              uVar27 = (uVar27 & 0x33333333) + (uVar27 >> 2 & 0x33333333);
              uVar27 = (uVar27 >> 4) + uVar27 & 0xf0f0f0f;
              uVar27 = (uVar27 >> 8) + uVar27;
              iVar18 = iVar18 + ((uVar27 >> 0x10) + uVar27 & 0xff);
              lVar14 = lVar13 + -1;
              bVar3 = 0 < lVar13;
              lVar13 = lVar14;
            } while (lVar14 != 0 && bVar3);
          }
          else {
            uVar15 = (ulong)((uint)(uVar7 + 1) & 0xfffffff8);
            lVar13 = lVar6 + uVar7 * 4;
            iVar18 = 0;
            iVar19 = 0;
            iVar20 = 0;
            iVar21 = 0;
            lVar14 = 0;
            iVar22 = 0;
            iVar23 = 0;
            iVar24 = 0;
            iVar25 = 0;
            do {
              puVar1 = (uint *)(lVar13 + -0x1c + lVar14 * 4);
              puVar2 = (uint *)(lVar13 + -0xc + lVar14 * 4);
              uVar28 = puVar2[3] - (puVar2[3] >> 1 & uVar45);
              uVar29 = puVar2[2] - (puVar2[2] >> 1 & uVar38);
              uVar30 = puVar2[1] - (puVar2[1] >> 1 & uVar39);
              uVar36 = *puVar2 - (*puVar2 >> 1 & uVar40);
              uVar27 = puVar1[3] - (puVar1[3] >> 1 & uVar45);
              uVar26 = puVar1[2] - (puVar1[2] >> 1 & uVar38);
              uVar31 = puVar1[1] - (puVar1[1] >> 1 & uVar39);
              uVar33 = *puVar1 - (*puVar1 >> 1 & uVar40);
              uVar35 = (uVar28 & uVar12) + (uVar28 >> 2 & uVar12);
              uVar32 = (uVar29 & uVar43) + (uVar29 >> 2 & uVar43);
              uVar34 = (uVar30 & uVar42) + (uVar30 >> 2 & uVar42);
              uVar36 = (uVar36 & uVar44) + (uVar36 >> 2 & uVar44);
              uVar27 = (uVar27 & uVar12) + (uVar27 >> 2 & uVar12);
              uVar28 = (uVar26 & uVar43) + (uVar26 >> 2 & uVar43);
              uVar29 = (uVar31 & uVar42) + (uVar31 >> 2 & uVar42);
              uVar30 = (uVar33 & uVar44) + (uVar33 >> 2 & uVar44);
              uVar26 = (uVar35 >> 4) + uVar35 & uVar41;
              uVar31 = (uVar32 >> 4) + uVar32 & uVar46;
              uVar33 = (uVar34 >> 4) + uVar34 & uVar47;
              uVar35 = (uVar36 >> 4) + uVar36 & uVar48;
              uVar27 = (uVar27 >> 4) + uVar27 & uVar41;
              uVar28 = (uVar28 >> 4) + uVar28 & uVar46;
              uVar29 = (uVar29 >> 4) + uVar29 & uVar47;
              uVar30 = (uVar30 >> 4) + uVar30 & uVar48;
              uVar26 = (uVar26 >> 8) + uVar26;
              uVar31 = (uVar31 >> 8) + uVar31;
              uVar33 = (uVar33 >> 8) + uVar33;
              uVar35 = (uVar35 >> 8) + uVar35;
              uVar27 = (uVar27 >> 8) + uVar27;
              uVar28 = (uVar28 >> 8) + uVar28;
              uVar29 = (uVar29 >> 8) + uVar29;
              uVar30 = (uVar30 >> 8) + uVar30;
              iVar18 = iVar18 + ((uVar26 >> 0x10) + uVar26 & uVar49);
              iVar19 = iVar19 + ((uVar31 >> 0x10) + uVar31 & uVar50);
              iVar20 = iVar20 + ((uVar33 >> 0x10) + uVar33 & uVar51);
              iVar21 = iVar21 + ((uVar35 >> 0x10) + uVar35 & uVar52);
              iVar22 = iVar22 + ((uVar27 >> 0x10) + uVar27 & uVar49);
              iVar23 = iVar23 + ((uVar28 >> 0x10) + uVar28 & uVar50);
              iVar24 = iVar24 + ((uVar29 >> 0x10) + uVar29 & uVar51);
              iVar25 = iVar25 + ((uVar30 >> 0x10) + uVar30 & uVar52);
              lVar14 = lVar14 + -8;
            } while (-lVar14 != uVar15);
            iVar18 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar18;
            if (uVar7 + 1 != uVar15) {
              uVar7 = uVar7 - uVar15;
              goto LAB_004cc3cb;
            }
          }
          if (iVar18 == 0) goto LAB_004cc422;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar9);
    }
    uVar9 = setBusesLayout(this,&local_80);
    uVar9 = uVar9 & 0xffffffff;
  }
  else {
    uVar9 = 0;
  }
  if (0 < local_44) {
    lVar6 = 0;
    lVar11 = 0;
    do {
      free(*(void **)((long)local_50 + lVar6));
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar11 < local_44);
  }
  local_44 = 0;
  free(local_50);
  if (0 < local_54) {
    lVar6 = 0;
    lVar11 = 0;
    do {
      free(*(void **)((long)local_60 + lVar6));
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar11 < local_54);
  }
  local_54 = 0;
  free(local_60);
  if (0 < (int)local_64) {
    lVar6 = 0;
    lVar11 = 0;
    do {
      free(*(void **)((long)local_70 + lVar6));
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar11 < (int)local_64);
  }
  local_64 = 0;
  free(local_70);
  if (0 < (int)local_74) {
    lVar6 = 0;
    lVar11 = 0;
    do {
      free(*(void **)((long)local_80 + lVar6));
      lVar11 = lVar11 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar11 < (int)local_74);
  }
  local_74 = 0;
  free(local_80);
  return uVar9;
}


