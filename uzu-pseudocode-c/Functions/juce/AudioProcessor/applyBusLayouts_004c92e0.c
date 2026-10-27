// Function : applyBusLayouts
// Namespace: juce:AudioProcessor
// Entry    : 004c92e0
// Prototype: undefined8 applyBusLayouts(AudioProcessor * this, long * param_1)
// Body     : 004c92e0 - 004c9f97


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioProcessor::applyBusLayouts(juce::AudioProcessor::BusesLayout const&) */

undefined8 __thiscall juce::AudioProcessor::applyBusLayouts(AudioProcessor *this,long *param_1)

{
  uint *puVar1;
  size_t sVar2;
  uint *puVar3;
  bool bVar4;
  uint uVar5;
  undefined8 extraout_RAX;
  void *pvVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  void *pvVar15;
  ulong uVar16;
  void *pvVar17;
  ulong uVar18;
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
  int local_8c;
  long *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  long *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  ulong local_50;
  int local_48;
  int local_44;
  AudioProcessor *local_40;
  long *local_38;
  
  getBusesLayout((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)&local_88,(long)this
                );
  bVar4 = ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::operator==
                    ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)*param_1,
                     *(int *)((long)param_1 + 0xc),local_88,iStack_7c);
  if (bVar4) {
    bVar4 = ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection>::operator==
                      ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)param_1[2],
                       *(int *)((long)param_1 + 0x1c),local_78,iStack_6c);
  }
  else {
    bVar4 = false;
  }
  if (0 < iStack_6c) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      free(*(void **)((long)local_78 + lVar13));
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x28;
    } while (lVar12 < iStack_6c);
  }
  iStack_6c = 0;
  free(local_78);
  if (0 < iStack_7c) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      free(*(void **)((long)local_88 + lVar13));
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x28;
    } while (lVar12 < iStack_7c);
  }
  iStack_7c = 0;
  free(local_88);
  uVar7 = CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
  if (bVar4 == false) {
    uVar5 = *(uint *)(this + 0xcc);
    if (*(uint *)((long)param_1 + 0xc) == uVar5) {
      local_50 = (ulong)*(uint *)(this + 0xdc);
      uVar7 = 0;
      local_8c = 0;
      if (*(uint *)((long)param_1 + 0x1c) == *(uint *)(this + 0xdc)) {
        local_44 = *(int *)(this + 0xf0);
        local_48 = *(int *)(this + 0xf4);
        local_40 = this;
        local_38 = param_1;
        if (0 < (int)uVar5) {
          uVar18 = 0;
          local_8c = 0;
          local_58 = (ulong)uVar5;
          if (uVar5 == 0) goto LAB_004c9490;
LAB_004c9440:
          lVar12 = *(long *)(*(long *)(this + 0xc0) + uVar18 * 8);
          if (uVar18 < *(uint *)((long)param_1 + 0xc)) goto LAB_004c949c;
LAB_004c9454:
          local_88 = (long *)0x0;
          uStack_70 = 4;
          iStack_6c = 0;
          local_68 = 0xffffffff;
          uStack_80 = 0;
          iStack_7c = 0;
          local_78 = (long *)0x0;
          do {
            BigInteger::operator=((BigInteger *)(lVar12 + 0x10),(BigInteger *)&local_88);
            plVar8 = local_88;
            if (local_88 == (long *)0x0) {
              plVar8 = (long *)&uStack_80;
            }
            if ((int)(uint)local_68 < 0) {
LAB_004c9920:
              iVar14 = 0;
            }
            else {
              uVar9 = (ulong)((uint)local_68 >> 5);
              iVar14 = 0;
              if ((uint)local_68 < 0xe0) {
LAB_004c972a:
                lVar13 = uVar9 + 1;
                do {
                  uVar5 = *(uint *)((long)plVar8 + lVar13 * 4 + -4);
                  uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
                  uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
                  uVar5 = (uVar5 >> 4) + uVar5 & 0xf0f0f0f;
                  uVar5 = (uVar5 >> 8) + uVar5;
                  iVar14 = iVar14 + ((uVar5 >> 0x10) + uVar5 & 0xff);
                  lVar10 = lVar13 + -1;
                  bVar4 = 0 < lVar13;
                  lVar13 = lVar10;
                } while (lVar10 != 0 && bVar4);
              }
              else {
                uVar11 = (ulong)((uint)(uVar9 + 1) & 0xfffffff8);
                iVar14 = 0;
                iVar19 = 0;
                iVar20 = 0;
                iVar21 = 0;
                lVar13 = 0;
                iVar22 = 0;
                iVar23 = 0;
                iVar24 = 0;
                iVar25 = 0;
                do {
                  puVar3 = (uint *)((long)plVar8 + lVar13 * 4 + uVar9 * 4 + -0x1c);
                  puVar1 = (uint *)((long)plVar8 + lVar13 * 4 + uVar9 * 4 + -0xc);
                  uVar29 = puVar1[3] - (puVar1[3] >> 1 & _DAT_005ddbd0);
                  uVar31 = puVar1[2] - (puVar1[2] >> 1 & _UNK_005ddbd4);
                  uVar33 = puVar1[1] - (puVar1[1] >> 1 & _UNK_005ddbd8);
                  uVar35 = *puVar1 - (*puVar1 >> 1 & _UNK_005ddbdc);
                  uVar5 = puVar3[3] - (puVar3[3] >> 1 & _DAT_005ddbd0);
                  uVar26 = puVar3[2] - (puVar3[2] >> 1 & _UNK_005ddbd4);
                  uVar27 = puVar3[1] - (puVar3[1] >> 1 & _UNK_005ddbd8);
                  uVar28 = *puVar3 - (*puVar3 >> 1 & _UNK_005ddbdc);
                  uVar30 = (uVar29 & _DAT_005de010) + (uVar29 >> 2 & _DAT_005de010);
                  uVar32 = (uVar31 & _UNK_005de014) + (uVar31 >> 2 & _UNK_005de014);
                  uVar34 = (uVar33 & _UNK_005de018) + (uVar33 >> 2 & _UNK_005de018);
                  uVar35 = (uVar35 & _UNK_005de01c) + (uVar35 >> 2 & _UNK_005de01c);
                  uVar5 = (uVar5 & _DAT_005de010) + (uVar5 >> 2 & _DAT_005de010);
                  uVar29 = (uVar26 & _UNK_005de014) + (uVar26 >> 2 & _UNK_005de014);
                  uVar31 = (uVar27 & _UNK_005de018) + (uVar27 >> 2 & _UNK_005de018);
                  uVar33 = (uVar28 & _UNK_005de01c) + (uVar28 >> 2 & _UNK_005de01c);
                  uVar26 = (uVar30 >> 4) + uVar30 & _DAT_005d9980;
                  uVar27 = (uVar32 >> 4) + uVar32 & _UNK_005d9984;
                  uVar28 = (uVar34 >> 4) + uVar34 & _UNK_005d9988;
                  uVar30 = (uVar35 >> 4) + uVar35 & _UNK_005d998c;
                  uVar5 = (uVar5 >> 4) + uVar5 & _DAT_005d9980;
                  uVar29 = (uVar29 >> 4) + uVar29 & _UNK_005d9984;
                  uVar31 = (uVar31 >> 4) + uVar31 & _UNK_005d9988;
                  uVar33 = (uVar33 >> 4) + uVar33 & _UNK_005d998c;
                  uVar26 = (uVar26 >> 8) + uVar26;
                  uVar27 = (uVar27 >> 8) + uVar27;
                  uVar28 = (uVar28 >> 8) + uVar28;
                  uVar30 = (uVar30 >> 8) + uVar30;
                  uVar5 = (uVar5 >> 8) + uVar5;
                  uVar29 = (uVar29 >> 8) + uVar29;
                  uVar31 = (uVar31 >> 8) + uVar31;
                  uVar33 = (uVar33 >> 8) + uVar33;
                  iVar14 = iVar14 + ((uVar26 >> 0x10) + uVar26 & _DAT_005de340);
                  iVar19 = iVar19 + ((uVar27 >> 0x10) + uVar27 & _UNK_005de344);
                  iVar20 = iVar20 + ((uVar28 >> 0x10) + uVar28 & _UNK_005de348);
                  iVar21 = iVar21 + ((uVar30 >> 0x10) + uVar30 & _UNK_005de34c);
                  iVar22 = iVar22 + ((uVar5 >> 0x10) + uVar5 & _DAT_005de340);
                  iVar23 = iVar23 + ((uVar29 >> 0x10) + uVar29 & _UNK_005de344);
                  iVar24 = iVar24 + ((uVar31 >> 0x10) + uVar31 & _UNK_005de348);
                  iVar25 = iVar25 + ((uVar33 >> 0x10) + uVar33 & _UNK_005de34c);
                  lVar13 = lVar13 + -8;
                } while (-lVar13 != uVar11);
                iVar14 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar14;
                if (uVar9 + 1 != uVar11) {
                  uVar9 = uVar9 - uVar11;
                  goto LAB_004c972a;
                }
              }
              if (iVar14 != 0) {
                BigInteger::operator=((BigInteger *)(lVar12 + 0x60),(BigInteger *)&local_88);
              }
              plVar8 = local_88;
              if (local_88 == (long *)0x0) {
                plVar8 = (long *)&uStack_80;
              }
              if ((int)(uint)local_68 < 0) goto LAB_004c9920;
              uVar9 = (ulong)((uint)local_68 >> 5);
              iVar14 = 0;
              if ((uint)local_68 < 0xe0) {
LAB_004c992c:
                lVar12 = uVar9 + 1;
                do {
                  uVar5 = *(uint *)((long)plVar8 + lVar12 * 4 + -4);
                  uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
                  uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
                  uVar5 = (uVar5 >> 4) + uVar5 & 0xf0f0f0f;
                  uVar5 = (uVar5 >> 8) + uVar5;
                  iVar14 = iVar14 + ((uVar5 >> 0x10) + uVar5 & 0xff);
                  lVar13 = lVar12 + -1;
                  bVar4 = 0 < lVar12;
                  lVar12 = lVar13;
                } while (lVar13 != 0 && bVar4);
              }
              else {
                uVar11 = (ulong)((uint)(uVar9 + 1) & 0xfffffff8);
                iVar14 = 0;
                iVar19 = 0;
                iVar20 = 0;
                iVar21 = 0;
                lVar12 = 0;
                iVar22 = 0;
                iVar23 = 0;
                iVar24 = 0;
                iVar25 = 0;
                do {
                  puVar3 = (uint *)((long)plVar8 + lVar12 * 4 + uVar9 * 4 + -0x1c);
                  puVar1 = (uint *)((long)plVar8 + lVar12 * 4 + uVar9 * 4 + -0xc);
                  uVar29 = puVar1[3] - (puVar1[3] >> 1 & _DAT_005ddbd0);
                  uVar31 = puVar1[2] - (puVar1[2] >> 1 & _UNK_005ddbd4);
                  uVar33 = puVar1[1] - (puVar1[1] >> 1 & _UNK_005ddbd8);
                  uVar35 = *puVar1 - (*puVar1 >> 1 & _UNK_005ddbdc);
                  uVar5 = puVar3[3] - (puVar3[3] >> 1 & _DAT_005ddbd0);
                  uVar26 = puVar3[2] - (puVar3[2] >> 1 & _UNK_005ddbd4);
                  uVar27 = puVar3[1] - (puVar3[1] >> 1 & _UNK_005ddbd8);
                  uVar28 = *puVar3 - (*puVar3 >> 1 & _UNK_005ddbdc);
                  uVar30 = (uVar29 & _DAT_005de010) + (uVar29 >> 2 & _DAT_005de010);
                  uVar32 = (uVar31 & _UNK_005de014) + (uVar31 >> 2 & _UNK_005de014);
                  uVar34 = (uVar33 & _UNK_005de018) + (uVar33 >> 2 & _UNK_005de018);
                  uVar35 = (uVar35 & _UNK_005de01c) + (uVar35 >> 2 & _UNK_005de01c);
                  uVar5 = (uVar5 & _DAT_005de010) + (uVar5 >> 2 & _DAT_005de010);
                  uVar29 = (uVar26 & _UNK_005de014) + (uVar26 >> 2 & _UNK_005de014);
                  uVar31 = (uVar27 & _UNK_005de018) + (uVar27 >> 2 & _UNK_005de018);
                  uVar33 = (uVar28 & _UNK_005de01c) + (uVar28 >> 2 & _UNK_005de01c);
                  uVar26 = (uVar30 >> 4) + uVar30 & _DAT_005d9980;
                  uVar27 = (uVar32 >> 4) + uVar32 & _UNK_005d9984;
                  uVar28 = (uVar34 >> 4) + uVar34 & _UNK_005d9988;
                  uVar30 = (uVar35 >> 4) + uVar35 & _UNK_005d998c;
                  uVar5 = (uVar5 >> 4) + uVar5 & _DAT_005d9980;
                  uVar29 = (uVar29 >> 4) + uVar29 & _UNK_005d9984;
                  uVar31 = (uVar31 >> 4) + uVar31 & _UNK_005d9988;
                  uVar33 = (uVar33 >> 4) + uVar33 & _UNK_005d998c;
                  uVar26 = (uVar26 >> 8) + uVar26;
                  uVar27 = (uVar27 >> 8) + uVar27;
                  uVar28 = (uVar28 >> 8) + uVar28;
                  uVar30 = (uVar30 >> 8) + uVar30;
                  uVar5 = (uVar5 >> 8) + uVar5;
                  uVar29 = (uVar29 >> 8) + uVar29;
                  uVar31 = (uVar31 >> 8) + uVar31;
                  uVar33 = (uVar33 >> 8) + uVar33;
                  iVar14 = iVar14 + ((uVar26 >> 0x10) + uVar26 & _DAT_005de340);
                  iVar19 = iVar19 + ((uVar27 >> 0x10) + uVar27 & _UNK_005de344);
                  iVar20 = iVar20 + ((uVar28 >> 0x10) + uVar28 & _UNK_005de348);
                  iVar21 = iVar21 + ((uVar30 >> 0x10) + uVar30 & _UNK_005de34c);
                  iVar22 = iVar22 + ((uVar5 >> 0x10) + uVar5 & _DAT_005de340);
                  iVar23 = iVar23 + ((uVar29 >> 0x10) + uVar29 & _UNK_005de344);
                  iVar24 = iVar24 + ((uVar31 >> 0x10) + uVar31 & _UNK_005de348);
                  iVar25 = iVar25 + ((uVar33 >> 0x10) + uVar33 & _UNK_005de34c);
                  lVar12 = lVar12 + -8;
                } while (-lVar12 != uVar11);
                iVar14 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar14;
                if (uVar9 + 1 != uVar11) {
                  uVar9 = uVar9 - uVar11;
                  goto LAB_004c992c;
                }
              }
            }
            local_8c = local_8c + iVar14;
            free(local_88);
            uVar18 = uVar18 + 1;
            if (uVar18 == local_58) break;
            if (uVar18 < *(uint *)(this + 0xcc)) goto LAB_004c9440;
LAB_004c9490:
            lVar12 = 0;
            if (*(uint *)((long)param_1 + 0xc) <= uVar18) goto LAB_004c9454;
LAB_004c949c:
            lVar13 = *param_1;
            local_88 = (long *)0x0;
            uVar9 = *(ulong *)(lVar13 + 0x18 + uVar18 * 0x28);
            uStack_70 = (undefined4)uVar9;
            iStack_6c = (int)(uVar9 >> 0x20);
            pvVar6 = *(void **)(lVar13 + uVar18 * 0x28);
            pvVar17 = (void *)(lVar13 + 8 + uVar18 * 0x28);
            pvVar15 = pvVar6;
            if (pvVar6 == (void *)0x0) {
              pvVar15 = pvVar17;
            }
            uVar5 = *(uint *)(lVar13 + 0x20 + uVar18 * 0x28);
            uVar26 = 0xffffffff;
            if (-1 < (int)uVar5) {
              uVar5 = uVar5 >> 5;
              uVar29 = uVar5 << 5;
LAB_004c94e0:
              uVar27 = *(uint *)((long)pvVar15 + (ulong)uVar5 * 4);
              if (uVar27 == 0) goto code_r0x004c94e9;
              uVar5 = 0x1f;
              if (uVar27 != 0) {
                for (; uVar27 >> uVar5 == 0; uVar5 = uVar5 - 1) {
                }
              }
              uVar26 = (uVar5 ^ 0x1f | uVar29) ^ 0x1f;
            }
LAB_004c950b:
            local_68._0_5_ = CONCAT14(*(undefined1 *)(lVar13 + 0x24 + uVar18 * 0x28),uVar26);
            sVar2 = uVar9 * 4;
            if (4 < uVar9) {
              if (sVar2 == 0) {
                local_88 = (long *)0x0;
              }
              else {
                local_88 = malloc(sVar2);
              }
              pvVar6 = *(void **)(lVar13 + uVar18 * 0x28);
            }
            plVar8 = local_88;
            if (local_88 == (long *)0x0) {
              plVar8 = (long *)&uStack_80;
            }
            if (pvVar6 != (void *)0x0) {
              pvVar17 = pvVar6;
            }
            memcpy(plVar8,pvVar17,sVar2);
            param_1 = local_38;
            this = local_40;
          } while( true );
        }
        if ((int)local_50 < 1) {
          local_58 = (ulong)local_58._4_4_ << 0x20;
        }
        else {
          uVar9 = 0;
          local_58 = (ulong)local_58._4_4_ << 0x20;
          uVar18 = local_50;
          do {
            if (uVar9 < *(uint *)(this + 0xdc)) {
              lVar12 = *(long *)(*(long *)(this + 0xd0) + uVar9 * 8);
              if (uVar9 < *(uint *)((long)local_38 + 0x1c)) goto LAB_004c9a6f;
LAB_004c9a22:
              local_88 = (long *)0x0;
              uStack_70 = 4;
              iStack_6c = 0;
              local_68 = 0xffffffff;
              uStack_80 = 0;
              iStack_7c = 0;
              local_78 = (long *)0x0;
            }
            else {
              lVar12 = 0;
              if (*(uint *)((long)local_38 + 0x1c) <= uVar9) goto LAB_004c9a22;
LAB_004c9a6f:
              lVar13 = local_38[2];
              local_88 = (long *)0x0;
              uVar18 = *(ulong *)(lVar13 + 0x18 + uVar9 * 0x28);
              uStack_70 = (undefined4)uVar18;
              iStack_6c = (int)(uVar18 >> 0x20);
              pvVar6 = *(void **)(lVar13 + uVar9 * 0x28);
              pvVar17 = (void *)(lVar13 + 8 + uVar9 * 0x28);
              pvVar15 = pvVar6;
              if (pvVar6 == (void *)0x0) {
                pvVar15 = pvVar17;
              }
              uVar5 = *(uint *)(lVar13 + 0x20 + uVar9 * 0x28);
              uVar26 = 0xffffffff;
              if (-1 < (int)uVar5) {
                uVar5 = uVar5 >> 5;
                uVar29 = uVar5 << 5;
LAB_004c9ac0:
                uVar27 = *(uint *)((long)pvVar15 + (ulong)uVar5 * 4);
                if (uVar27 == 0) goto code_r0x004c9ac9;
                uVar5 = 0x1f;
                if (uVar27 != 0) {
                  for (; uVar27 >> uVar5 == 0; uVar5 = uVar5 - 1) {
                  }
                }
                uVar26 = (uVar5 ^ 0x1f | uVar29) ^ 0x1f;
              }
LAB_004c9ae2:
              local_68._0_5_ = CONCAT14(*(undefined1 *)(lVar13 + 0x24 + uVar9 * 0x28),uVar26);
              sVar2 = uVar18 * 4;
              if (4 < uVar18) {
                if (sVar2 == 0) {
                  local_88 = (long *)0x0;
                }
                else {
                  local_88 = malloc(sVar2);
                }
                pvVar6 = *(void **)(lVar13 + uVar9 * 0x28);
              }
              uVar18 = local_50;
              plVar8 = local_88;
              if (local_88 == (long *)0x0) {
                plVar8 = (long *)&uStack_80;
              }
              if (pvVar6 != (void *)0x0) {
                pvVar17 = pvVar6;
              }
              memcpy(plVar8,pvVar17,sVar2);
              this = local_40;
            }
            BigInteger::operator=((BigInteger *)(lVar12 + 0x10),(BigInteger *)&local_88);
            plVar8 = local_88;
            if (local_88 == (long *)0x0) {
              plVar8 = (long *)&uStack_80;
            }
            if ((int)(uint)local_68 < 0) {
LAB_004c99e0:
              iVar14 = 0;
            }
            else {
              uVar11 = (ulong)((uint)local_68 >> 5);
              iVar14 = 0;
              if ((uint)local_68 < 0xe0) {
LAB_004c9d1b:
                lVar13 = uVar11 + 1;
                do {
                  uVar5 = *(uint *)((long)plVar8 + lVar13 * 4 + -4);
                  uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
                  uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
                  uVar5 = (uVar5 >> 4) + uVar5 & 0xf0f0f0f;
                  uVar5 = (uVar5 >> 8) + uVar5;
                  iVar14 = iVar14 + ((uVar5 >> 0x10) + uVar5 & 0xff);
                  lVar10 = lVar13 + -1;
                  bVar4 = 0 < lVar13;
                  lVar13 = lVar10;
                } while (lVar10 != 0 && bVar4);
              }
              else {
                uVar16 = (ulong)((uint)(uVar11 + 1) & 0xfffffff8);
                iVar14 = 0;
                iVar19 = 0;
                iVar20 = 0;
                iVar21 = 0;
                lVar13 = 0;
                iVar22 = 0;
                iVar23 = 0;
                iVar24 = 0;
                iVar25 = 0;
                do {
                  puVar1 = (uint *)((long)plVar8 + lVar13 * 4 + uVar11 * 4 + -0x1c);
                  puVar3 = (uint *)((long)plVar8 + lVar13 * 4 + uVar11 * 4 + -0xc);
                  uVar29 = puVar3[3] - (puVar3[3] >> 1 & _DAT_005ddbd0);
                  uVar31 = puVar3[2] - (puVar3[2] >> 1 & _UNK_005ddbd4);
                  uVar33 = puVar3[1] - (puVar3[1] >> 1 & _UNK_005ddbd8);
                  uVar35 = *puVar3 - (*puVar3 >> 1 & _UNK_005ddbdc);
                  uVar5 = puVar1[3] - (puVar1[3] >> 1 & _DAT_005ddbd0);
                  uVar26 = puVar1[2] - (puVar1[2] >> 1 & _UNK_005ddbd4);
                  uVar27 = puVar1[1] - (puVar1[1] >> 1 & _UNK_005ddbd8);
                  uVar28 = *puVar1 - (*puVar1 >> 1 & _UNK_005ddbdc);
                  uVar30 = (uVar29 & _DAT_005de010) + (uVar29 >> 2 & _DAT_005de010);
                  uVar32 = (uVar31 & _UNK_005de014) + (uVar31 >> 2 & _UNK_005de014);
                  uVar34 = (uVar33 & _UNK_005de018) + (uVar33 >> 2 & _UNK_005de018);
                  uVar35 = (uVar35 & _UNK_005de01c) + (uVar35 >> 2 & _UNK_005de01c);
                  uVar5 = (uVar5 & _DAT_005de010) + (uVar5 >> 2 & _DAT_005de010);
                  uVar29 = (uVar26 & _UNK_005de014) + (uVar26 >> 2 & _UNK_005de014);
                  uVar31 = (uVar27 & _UNK_005de018) + (uVar27 >> 2 & _UNK_005de018);
                  uVar33 = (uVar28 & _UNK_005de01c) + (uVar28 >> 2 & _UNK_005de01c);
                  uVar26 = (uVar30 >> 4) + uVar30 & _DAT_005d9980;
                  uVar27 = (uVar32 >> 4) + uVar32 & _UNK_005d9984;
                  uVar28 = (uVar34 >> 4) + uVar34 & _UNK_005d9988;
                  uVar30 = (uVar35 >> 4) + uVar35 & _UNK_005d998c;
                  uVar5 = (uVar5 >> 4) + uVar5 & _DAT_005d9980;
                  uVar29 = (uVar29 >> 4) + uVar29 & _UNK_005d9984;
                  uVar31 = (uVar31 >> 4) + uVar31 & _UNK_005d9988;
                  uVar33 = (uVar33 >> 4) + uVar33 & _UNK_005d998c;
                  uVar26 = (uVar26 >> 8) + uVar26;
                  uVar27 = (uVar27 >> 8) + uVar27;
                  uVar28 = (uVar28 >> 8) + uVar28;
                  uVar30 = (uVar30 >> 8) + uVar30;
                  uVar5 = (uVar5 >> 8) + uVar5;
                  uVar29 = (uVar29 >> 8) + uVar29;
                  uVar31 = (uVar31 >> 8) + uVar31;
                  uVar33 = (uVar33 >> 8) + uVar33;
                  iVar14 = iVar14 + ((uVar26 >> 0x10) + uVar26 & _DAT_005de340);
                  iVar19 = iVar19 + ((uVar27 >> 0x10) + uVar27 & _UNK_005de344);
                  iVar20 = iVar20 + ((uVar28 >> 0x10) + uVar28 & _UNK_005de348);
                  iVar21 = iVar21 + ((uVar30 >> 0x10) + uVar30 & _UNK_005de34c);
                  iVar22 = iVar22 + ((uVar5 >> 0x10) + uVar5 & _DAT_005de340);
                  iVar23 = iVar23 + ((uVar29 >> 0x10) + uVar29 & _UNK_005de344);
                  iVar24 = iVar24 + ((uVar31 >> 0x10) + uVar31 & _UNK_005de348);
                  iVar25 = iVar25 + ((uVar33 >> 0x10) + uVar33 & _UNK_005de34c);
                  lVar13 = lVar13 + -8;
                } while (-lVar13 != uVar16);
                iVar14 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar14;
                if (uVar11 + 1 != uVar16) {
                  uVar11 = uVar11 - uVar16;
                  goto LAB_004c9d1b;
                }
              }
              if (iVar14 != 0) {
                BigInteger::operator=((BigInteger *)(lVar12 + 0x60),(BigInteger *)&local_88);
              }
              plVar8 = local_88;
              if (local_88 == (long *)0x0) {
                plVar8 = (long *)&uStack_80;
              }
              if ((int)(uint)local_68 < 0) goto LAB_004c99e0;
              uVar11 = (ulong)((uint)local_68 >> 5);
              iVar14 = 0;
              if ((uint)local_68 < 0xe0) {
LAB_004c9eff:
                lVar12 = uVar11 + 1;
                do {
                  uVar5 = *(uint *)((long)plVar8 + lVar12 * 4 + -4);
                  uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
                  uVar5 = (uVar5 & 0x33333333) + (uVar5 >> 2 & 0x33333333);
                  uVar5 = (uVar5 >> 4) + uVar5 & 0xf0f0f0f;
                  uVar5 = (uVar5 >> 8) + uVar5;
                  iVar14 = iVar14 + ((uVar5 >> 0x10) + uVar5 & 0xff);
                  lVar13 = lVar12 + -1;
                  bVar4 = 0 < lVar12;
                  lVar12 = lVar13;
                } while (lVar13 != 0 && bVar4);
              }
              else {
                uVar16 = (ulong)((uint)(uVar11 + 1) & 0xfffffff8);
                iVar14 = 0;
                iVar19 = 0;
                iVar20 = 0;
                iVar21 = 0;
                lVar12 = 0;
                iVar22 = 0;
                iVar23 = 0;
                iVar24 = 0;
                iVar25 = 0;
                do {
                  puVar1 = (uint *)((long)plVar8 + lVar12 * 4 + uVar11 * 4 + -0x1c);
                  puVar3 = (uint *)((long)plVar8 + lVar12 * 4 + uVar11 * 4 + -0xc);
                  uVar29 = puVar3[3] - (puVar3[3] >> 1 & _DAT_005ddbd0);
                  uVar31 = puVar3[2] - (puVar3[2] >> 1 & _UNK_005ddbd4);
                  uVar33 = puVar3[1] - (puVar3[1] >> 1 & _UNK_005ddbd8);
                  uVar35 = *puVar3 - (*puVar3 >> 1 & _UNK_005ddbdc);
                  uVar5 = puVar1[3] - (puVar1[3] >> 1 & _DAT_005ddbd0);
                  uVar26 = puVar1[2] - (puVar1[2] >> 1 & _UNK_005ddbd4);
                  uVar27 = puVar1[1] - (puVar1[1] >> 1 & _UNK_005ddbd8);
                  uVar28 = *puVar1 - (*puVar1 >> 1 & _UNK_005ddbdc);
                  uVar30 = (uVar29 & _DAT_005de010) + (uVar29 >> 2 & _DAT_005de010);
                  uVar32 = (uVar31 & _UNK_005de014) + (uVar31 >> 2 & _UNK_005de014);
                  uVar34 = (uVar33 & _UNK_005de018) + (uVar33 >> 2 & _UNK_005de018);
                  uVar35 = (uVar35 & _UNK_005de01c) + (uVar35 >> 2 & _UNK_005de01c);
                  uVar5 = (uVar5 & _DAT_005de010) + (uVar5 >> 2 & _DAT_005de010);
                  uVar29 = (uVar26 & _UNK_005de014) + (uVar26 >> 2 & _UNK_005de014);
                  uVar31 = (uVar27 & _UNK_005de018) + (uVar27 >> 2 & _UNK_005de018);
                  uVar33 = (uVar28 & _UNK_005de01c) + (uVar28 >> 2 & _UNK_005de01c);
                  uVar26 = (uVar30 >> 4) + uVar30 & _DAT_005d9980;
                  uVar27 = (uVar32 >> 4) + uVar32 & _UNK_005d9984;
                  uVar28 = (uVar34 >> 4) + uVar34 & _UNK_005d9988;
                  uVar30 = (uVar35 >> 4) + uVar35 & _UNK_005d998c;
                  uVar5 = (uVar5 >> 4) + uVar5 & _DAT_005d9980;
                  uVar29 = (uVar29 >> 4) + uVar29 & _UNK_005d9984;
                  uVar31 = (uVar31 >> 4) + uVar31 & _UNK_005d9988;
                  uVar33 = (uVar33 >> 4) + uVar33 & _UNK_005d998c;
                  uVar26 = (uVar26 >> 8) + uVar26;
                  uVar27 = (uVar27 >> 8) + uVar27;
                  uVar28 = (uVar28 >> 8) + uVar28;
                  uVar30 = (uVar30 >> 8) + uVar30;
                  uVar5 = (uVar5 >> 8) + uVar5;
                  uVar29 = (uVar29 >> 8) + uVar29;
                  uVar31 = (uVar31 >> 8) + uVar31;
                  uVar33 = (uVar33 >> 8) + uVar33;
                  iVar14 = iVar14 + ((uVar26 >> 0x10) + uVar26 & _DAT_005de340);
                  iVar19 = iVar19 + ((uVar27 >> 0x10) + uVar27 & _UNK_005de344);
                  iVar20 = iVar20 + ((uVar28 >> 0x10) + uVar28 & _UNK_005de348);
                  iVar21 = iVar21 + ((uVar30 >> 0x10) + uVar30 & _UNK_005de34c);
                  iVar22 = iVar22 + ((uVar5 >> 0x10) + uVar5 & _DAT_005de340);
                  iVar23 = iVar23 + ((uVar29 >> 0x10) + uVar29 & _UNK_005de344);
                  iVar24 = iVar24 + ((uVar31 >> 0x10) + uVar31 & _UNK_005de348);
                  iVar25 = iVar25 + ((uVar33 >> 0x10) + uVar33 & _UNK_005de34c);
                  lVar12 = lVar12 + -8;
                } while (-lVar12 != uVar16);
                iVar14 = iVar25 + iVar21 + iVar23 + iVar19 + iVar24 + iVar20 + iVar22 + iVar14;
                if (uVar11 + 1 != uVar16) {
                  uVar11 = uVar11 - uVar16;
                  goto LAB_004c9eff;
                }
              }
            }
            local_58 = CONCAT44(local_58._4_4_,(int)local_58 + iVar14);
            free(local_88);
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar18);
        }
        uVar7 = audioIOChanged(this,'\0',local_44 != local_8c || local_48 != (int)local_58);
        uVar7 = CONCAT71((int7)((ulong)uVar7 >> 8),1);
      }
    }
    else {
      uVar7 = 0;
    }
  }
  return uVar7;
code_r0x004c94e9:
  uVar29 = uVar29 - 0x20;
  bVar4 = (int)uVar5 < 1;
  uVar5 = uVar5 - 1;
  if (bVar4) goto LAB_004c950b;
  goto LAB_004c94e0;
code_r0x004c9ac9:
  uVar29 = uVar29 - 0x20;
  bVar4 = (int)uVar5 < 1;
  uVar5 = uVar5 - 1;
  if (bVar4) goto LAB_004c9ae2;
  goto LAB_004c9ac0;
}


