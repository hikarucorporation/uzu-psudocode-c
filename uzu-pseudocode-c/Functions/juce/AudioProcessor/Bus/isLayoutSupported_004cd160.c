// Function : isLayoutSupported
// Namespace: juce:AudioProcessor:Bus
// Entry    : 004cd160
// Prototype: ulong isLayoutSupported(Bus * this, BigInteger * param_1, Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> * param_2)
// Body     : 004cd160 - 004cf390


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioProcessor::Bus::isLayoutSupported(juce::AudioChannelSet const&,
   juce::AudioProcessor::BusesLayout*) const */

ulong __thiscall
juce::AudioProcessor::Bus::isLayoutSupported
          (Bus *this,BigInteger *param_1,
          Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *param_2)

{
  uint *puVar1;
  size_t sVar2;
  uint *puVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  void *pvVar14;
  int iVar15;
  long lVar16;
  void *pvVar17;
  BusesLayout *pBVar18;
  undefined1 *puVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  long *plVar26;
  void **ppvVar27;
  void *pvVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  long *plVar33;
  ulong uVar34;
  void *pvVar35;
  ulong *puVar36;
  undefined8 *puVar37;
  long *plVar38;
  bool bVar39;
  bool bVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  undefined8 *local_190;
  undefined4 local_188;
  uint local_184;
  undefined8 *local_180;
  undefined4 local_178;
  uint local_174;
  undefined1 *local_170;
  long *local_168;
  undefined8 *local_160;
  void *local_158;
  ulong local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 *local_120;
  undefined4 local_118;
  uint local_114;
  undefined8 *local_110;
  uint local_104;
  long *local_100;
  undefined8 *local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  ulong local_d0;
  void *local_c8;
  int local_bc;
  void *local_b8;
  int local_ac;
  void *local_a8;
  int local_9c;
  void *local_98;
  int local_8c;
  long *local_88;
  long *local_80;
  BigInteger *local_78;
  Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *local_70;
  uint local_64;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  long *local_40;
  undefined8 *local_38;
  
  plVar26 = *(long **)this;
  iVar8 = *(int *)((long)plVar26 + 0xcc);
  puVar37 = (undefined8 *)0xffffffff;
  if ((long)iVar8 != 0) {
    lVar16 = (long)iVar8 * 8;
    uVar34 = 0;
    do {
      if (*(Bus **)(plVar26[0x18] + uVar34 * 8) == this) {
        if ((int)uVar34 < 0) {
          puVar37 = (undefined8 *)(uVar34 & 0xffffffff);
          iVar15 = *(int *)((long)plVar26 + 0xdc);
          goto joined_r0x004cf386;
        }
        puVar37 = (undefined8 *)(uVar34 & 0xffffffff);
        goto LAB_004cd203;
      }
      uVar34 = uVar34 + 1;
      lVar16 = lVar16 + -8;
    } while (lVar16 != 0);
  }
  iVar15 = *(int *)((long)plVar26 + 0xdc);
joined_r0x004cf386:
  uVar34 = 0xffffffff;
  if ((long)iVar15 != 0) {
    uVar34 = 0xffffffff;
    lVar16 = (long)iVar15 << 3;
    uVar31 = 0;
    do {
      if (*(Bus **)(plVar26[0x1a] + uVar31 * 8) == this) {
        uVar34 = uVar31;
        break;
      }
      uVar31 = uVar31 + 1;
      lVar16 = lVar16 + -8;
    } while (lVar16 != 0);
  }
LAB_004cd203:
  local_78 = param_1;
  local_70 = param_2;
  if (param_2 == (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)0x0) {
    getBusesLayout((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)&local_c8,
                   (long)plVar26);
    goto LAB_004cd3dd;
  }
  if ((*(int *)(param_2 + 0xc) == iVar8) &&
     (*(int *)(param_2 + 0x1c) == *(int *)((long)plVar26 + 0xdc))) {
    cVar7 = (**(code **)(*plVar26 + 400))(plVar26,param_2);
    if (cVar7 == '\0') {
      plVar26 = *(long **)this;
      goto LAB_004cd240;
    }
  }
  else {
LAB_004cd240:
    getBusesLayout((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)local_f0,
                   (long)plVar26);
    if ((ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)local_f0 !=
        (ArrayBase<juce::AudioChannelSet,juce::DummyCriticalSection> *)param_2) {
      uVar9 = local_f0._0_8_;
      uVar6 = local_f0._8_8_;
      local_f0 = (undefined1  [16])0x0;
      pvVar14 = *(void **)param_2;
      uVar25 = *(uint *)(param_2 + 0xc);
      *(undefined8 *)param_2 = uVar9;
      *(undefined8 *)(param_2 + 8) = uVar6;
      if (0 < (int)uVar25) {
        lVar16 = 0;
        do {
          free(*(void **)((long)pvVar14 + lVar16));
          lVar16 = lVar16 + 0x28;
        } while ((ulong)uVar25 * 0x28 != lVar16);
      }
      free(pvVar14);
      uVar9 = local_e0._0_8_;
      uVar6 = local_e0._8_8_;
      local_e0 = (undefined1  [16])0x0;
      pvVar14 = *(void **)(local_70 + 0x10);
      uVar25 = *(uint *)(local_70 + 0x1c);
      *(undefined8 *)(local_70 + 0x10) = uVar9;
      *(undefined8 *)(local_70 + 0x18) = uVar6;
      if (0 < (int)uVar25) {
        lVar16 = 0;
        do {
          free(*(void **)((long)pvVar14 + lVar16));
          lVar16 = lVar16 + 0x28;
        } while ((ulong)uVar25 * 0x28 != lVar16);
      }
      free(pvVar14);
      param_2 = local_70;
    }
    if (0 < (int)local_e0._12_4_) {
      lVar22 = 0;
      lVar16 = 0;
      do {
        free(*(void **)(local_e0._0_8_ + lVar22));
        lVar16 = lVar16 + 1;
        lVar22 = lVar22 + 0x28;
      } while (lVar16 < (int)local_e0._12_4_);
    }
    local_e0._12_4_ = 0;
    auVar4 = local_e0;
    uVar9 = local_e0._0_8_;
    local_e0 = auVar4;
    free((void *)uVar9);
    if (0 < (int)local_f0._12_4_) {
      lVar22 = 0;
      lVar16 = 0;
      do {
        free(*(void **)(local_f0._0_8_ + lVar22));
        lVar16 = lVar16 + 1;
        lVar22 = lVar22 + 0x28;
      } while (lVar16 < (int)local_f0._12_4_);
    }
    local_f0._12_4_ = 0;
    auVar4 = local_f0;
    uVar9 = local_f0._0_8_;
    local_f0 = auVar4;
    free((void *)uVar9);
  }
  BusesLayout::BusesLayout((BusesLayout *)&local_c8,(undefined8 *)param_2);
LAB_004cd3dd:
  uVar31 = (ulong)((uint)puVar37 >> 0x1f);
  local_60 = (long)(int)uVar34 * 0x28;
  local_50 = uVar31 * 0x10;
  iVar8 = BigInteger::compare((BigInteger *)((long)(&local_c8)[uVar31 * 2] + local_60),
                              (long *)local_78);
  if (iVar8 == 0) {
    uVar34 = CONCAT71((int7)((ulong)puVar37 >> 8),1);
  }
  else {
                    /* try { // try from 004cd422 to 004cd439 has its CatchHandler @ 004cf39b */
    BusesLayout::BusesLayout((BusesLayout *)&local_a8,&local_c8);
    pBVar18 = (BusesLayout *)&local_a8;
    if ((int)(uint)puVar37 < 0) {
      pBVar18 = (BusesLayout *)&local_98;
    }
    BigInteger::operator=((BigInteger *)(*(long *)pBVar18 + local_60),local_78);
    plVar26 = *(long **)this;
                    /* try { // try from 004cd494 to 004cd4f2 has its CatchHandler @ 004cf3a2 */
    if (((local_9c == *(int *)((long)plVar26 + 0xcc)) &&
        (local_8c == *(int *)((long)plVar26 + 0xdc))) &&
       (cVar7 = (**(code **)(*plVar26 + 400))(plVar26,&local_a8), cVar7 != '\0')) {
      Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_c8,
                 (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_a8);
      Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_b8,
                 (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_98);
    }
    else {
      BusesLayout::BusesLayout((BusesLayout *)local_f0,&local_c8);
                    /* try { // try from 004cd4f3 to 004cd504 has its CatchHandler @ 004cf396 */
      BusesLayout::BusesLayout((BusesLayout *)&local_190,(undefined8 *)local_f0);
                    /* try { // try from 004cd505 to 004cd516 has its CatchHandler @ 004cf391 */
      BusesLayout::BusesLayout((BusesLayout *)&local_120,&local_190);
      local_40 = plVar26 + 0x18;
      local_48 = plVar26 + 0x1a;
      uVar9 = CONCAT71((int7)((ulong)(plVar26 + 0x1a) >> 8),1);
      uVar34 = 0;
      do {
        local_64 = (uint)uVar9;
        uVar31 = (ulong)((byte)~(byte)uVar34 & 1);
        local_58 = uVar31 * 0x10;
        if (0 < (&local_9c)[uVar31 * 4]) {
          local_58 = local_58 + 0xc;
          bVar39 = (uVar34 & 1) != 0;
          local_80 = local_40;
          if (bVar39) {
            local_80 = local_48;
          }
          local_88 = local_48;
          if (bVar39) {
            local_88 = local_40;
          }
          uVar31 = 0;
          local_d0 = uVar34;
LAB_004cd60c:
          uVar25 = local_114;
          puVar11 = local_120;
          bVar39 = (uVar34 & 1) != 0;
          local_38 = local_110;
          if (bVar39) {
            local_38 = local_120;
          }
          ppvVar27 = &local_98;
          if (bVar39) {
            ppvVar27 = &local_a8;
          }
          lVar16 = uVar31 * 0x28;
          plVar33 = (long *)local_e0;
          if (bVar39) {
            plVar33 = (long *)local_f0;
          }
          lVar22 = *plVar33;
          if (*(char *)(lVar22 + 0x24 + lVar16) != '\0') {
            lVar24 = *(long *)(lVar22 + lVar16);
            lVar29 = lVar22 + 8 + uVar31 * 0x28;
            if (lVar24 != 0) {
              lVar29 = lVar24;
            }
            uVar30 = *(uint *)(lVar22 + 0x20 + uVar31 * 0x28);
            if (-1 < (int)uVar30) {
              uVar30 = uVar30 >> 5;
              do {
                if (*(int *)(lVar29 + (ulong)uVar30 * 4) != 0) {
                  bVar39 = (uVar30 & 0x4000000) == 0;
                  goto LAB_004cd6b8;
                }
                bVar39 = 0 < (int)uVar30;
                uVar30 = uVar30 - 1;
              } while (bVar39);
            }
          }
          bVar39 = false;
LAB_004cd6b8:
          local_158 = *ppvVar27;
          plVar33 = (long *)(lVar16 + (long)local_158);
          local_150 = uVar31;
          if (*(char *)((long)local_158 + uVar31 * 0x28 + 0x24) != '\0') {
            lVar24 = (long)local_158 + uVar31 * 0x28 + 8;
            if (*plVar33 != 0) {
              lVar24 = *plVar33;
            }
            uVar30 = *(uint *)((long)local_158 + uVar31 * 0x28 + 0x20);
            if (-1 < (int)uVar30) {
              uVar30 = uVar30 >> 5;
              do {
                if (*(int *)(lVar24 + (ulong)uVar30 * 4) != 0) {
                  if (((uVar30 & 0x4000000) == 0) != bVar39) goto LAB_004cd855;
                  goto LAB_004cd71a;
                }
                bVar40 = 0 < (int)uVar30;
                uVar30 = uVar30 - 1;
              } while (bVar40);
            }
          }
          if (bVar39 == false) {
LAB_004cd71a:
            lVar16 = *(long *)(lVar22 + lVar16);
            lVar24 = lVar22 + 8 + uVar31 * 0x28;
            if (lVar16 != 0) {
              lVar24 = lVar16;
            }
            uVar30 = *(uint *)(lVar22 + 0x20 + uVar31 * 0x28);
            uVar20 = 0xffffffff;
            if (-1 < (int)uVar30) {
              uVar30 = uVar30 >> 5;
              uVar20 = uVar30 << 5;
LAB_004cd750:
              uVar21 = *(uint *)(lVar24 + (ulong)uVar30 * 4);
              if (uVar21 == 0) goto code_r0x004cd759;
              uVar30 = 0x1f;
              if (uVar21 != 0) {
                for (; uVar21 >> uVar30 == 0; uVar30 = uVar30 - 1) {
                }
              }
              uVar20 = (uVar30 ^ 0x1f | uVar20) ^ 0x1f;
            }
            goto LAB_004cd799;
          }
          goto LAB_004cd855;
        }
LAB_004cd540:
        uVar34 = CONCAT71((int7)(uVar34 >> 8),1);
        uVar9 = 0;
      } while ((local_64 & 1) != 0);
                    /* try { // try from 004cefd1 to 004ceffa has its CatchHandler @ 004cf3a0 */
      Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_c8,
                 (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_120);
      Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_b8,
                 (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_110);
      if (0 < (int)local_104) {
        lVar16 = 0;
        lVar22 = 0;
        do {
          free(*(void **)((long)local_110 + lVar16));
          lVar22 = lVar22 + 1;
          lVar16 = lVar16 + 0x28;
        } while (lVar22 < (int)local_104);
      }
      local_104 = 0;
      free(local_110);
      if (0 < (int)local_114) {
        lVar16 = 0;
        lVar22 = 0;
        do {
          free(*(void **)((long)local_120 + lVar16));
          lVar22 = lVar22 + 1;
          lVar16 = lVar16 + 0x28;
        } while (lVar22 < (int)local_114);
      }
      local_114 = 0;
      free(local_120);
      if (0 < (int)local_174) {
        lVar16 = 0;
        lVar22 = 0;
        do {
          free(*(void **)((long)local_180 + lVar16));
          lVar22 = lVar22 + 1;
          lVar16 = lVar16 + 0x28;
        } while (lVar22 < (int)local_174);
      }
      local_174 = 0;
      free(local_180);
      if (0 < (int)local_184) {
        lVar16 = 0;
        lVar22 = 0;
        do {
          free(*(void **)((long)local_190 + lVar16));
          lVar22 = lVar22 + 1;
          lVar16 = lVar16 + 0x28;
        } while (lVar22 < (int)local_184);
      }
      local_184 = 0;
      free(local_190);
      if (0 < (int)local_e0._12_4_) {
        lVar16 = 0;
        lVar22 = 0;
        do {
          free(*(void **)(local_e0._0_8_ + lVar16));
          lVar22 = lVar22 + 1;
          lVar16 = lVar16 + 0x28;
        } while (lVar22 < (int)local_e0._12_4_);
      }
      local_e0._12_4_ = 0;
      auVar4 = local_e0;
      uVar9 = local_e0._0_8_;
      local_e0 = auVar4;
      free((void *)uVar9);
      if (0 < (int)local_f0._12_4_) {
        lVar16 = 0;
        lVar22 = 0;
        do {
          free(*(void **)(local_f0._0_8_ + lVar16));
          lVar22 = lVar22 + 1;
          lVar16 = lVar16 + 0x28;
        } while (lVar22 < (int)local_f0._12_4_);
      }
      local_f0._12_4_ = 0;
      auVar4 = local_f0;
      uVar9 = local_f0._0_8_;
      local_f0 = auVar4;
      free((void *)uVar9);
    }
    if (param_2 != (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)0x0) {
                    /* try { // try from 004cf1c3 to 004cf1e6 has its CatchHandler @ 004cf3a2 */
      Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                (param_2,(Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_c8);
      Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                (param_2 + 0x10,
                 (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_b8);
    }
    iVar8 = BigInteger::compare((BigInteger *)(local_60 + *(long *)((long)&local_c8 + local_50)),
                                (long *)local_78);
    uVar34 = CONCAT71((int7)((ulong)puVar37 >> 8),iVar8 == 0);
    if (0 < local_8c) {
      lVar22 = 0;
      lVar16 = 0;
      do {
        free(*(void **)((long)local_98 + lVar22));
        lVar16 = lVar16 + 1;
        lVar22 = lVar22 + 0x28;
      } while (lVar16 < local_8c);
    }
    local_8c = 0;
    free(local_98);
    if (0 < local_9c) {
      lVar22 = 0;
      lVar16 = 0;
      do {
        free(*(void **)((long)local_a8 + lVar22));
        lVar16 = lVar16 + 1;
        lVar22 = lVar22 + 0x28;
      } while (lVar16 < local_9c);
    }
    local_9c = 0;
    free(local_a8);
  }
  if (0 < local_ac) {
    lVar22 = 0;
    lVar16 = 0;
    do {
      free(*(void **)((long)local_b8 + lVar22));
      lVar16 = lVar16 + 1;
      lVar22 = lVar22 + 0x28;
    } while (lVar16 < local_ac);
  }
  local_ac = 0;
  free(local_b8);
  if (0 < local_bc) {
    lVar22 = 0;
    lVar16 = 0;
    do {
      free(*(void **)((long)local_c8 + lVar22));
      lVar16 = lVar16 + 1;
      lVar22 = lVar22 + 0x28;
    } while (lVar16 < local_bc);
  }
  local_bc = 0;
  free(local_c8);
  return uVar34 & 0xffffffff;
code_r0x004cd759:
  uVar20 = uVar20 - 0x20;
  bVar40 = (int)uVar30 < 1;
  uVar30 = uVar30 - 1;
  if (bVar40) goto code_r0x004cd765;
  goto LAB_004cd750;
code_r0x004cd765:
  uVar20 = 0xffffffff;
LAB_004cd799:
  lVar16 = (long)local_158 + uVar31 * 0x28 + 8;
  if (*plVar33 != 0) {
    lVar16 = *plVar33;
  }
  uVar30 = *(uint *)((long)local_158 + uVar31 * 0x28 + 0x20);
  if (-1 < (int)uVar30) {
    uVar30 = uVar30 >> 5;
    uVar21 = uVar30 << 5;
LAB_004cd7c0:
    uVar50 = *(uint *)(lVar16 + (ulong)uVar30 * 4);
    if (uVar50 == 0) goto code_r0x004cd7c9;
    uVar30 = 0x1f;
    if (uVar50 != 0) {
      for (; uVar50 >> uVar30 == 0; uVar30 = uVar30 - 1) {
      }
    }
    uVar30 = (uVar30 ^ 0x1f | uVar21) ^ 0x1f;
    iVar15 = 1;
    bVar40 = SBORROW4(uVar20,uVar30);
    iVar8 = uVar20 - uVar30;
    if ((int)uVar20 <= (int)uVar30) goto LAB_004cd7f4;
    goto LAB_004cd840;
  }
LAB_004cd7d5:
  iVar15 = 1;
  bVar40 = SBORROW4(uVar20,-1);
  iVar8 = uVar20 + 1;
  if ((int)uVar20 < 0) {
LAB_004cd7f4:
    iVar15 = -1;
    if ((bVar40 == iVar8 < 0) && (iVar15 = 0, -1 < (int)uVar20)) {
      uVar30 = uVar20 >> 5;
      do {
        uVar20 = *(uint *)(lVar16 + (ulong)uVar30 * 4);
        uVar21 = *(uint *)(lVar24 + (ulong)uVar30 * 4);
        if (uVar21 != uVar20) {
          iVar15 = (uint)(uVar20 < uVar21) * 2 + -1;
          break;
        }
        bVar40 = 0 < (int)uVar30;
        uVar30 = uVar30 - 1;
      } while (bVar40);
    }
  }
LAB_004cd840:
  iVar8 = -iVar15;
  if (bVar39 == false) {
    iVar8 = iVar15;
  }
  if (iVar8 == 0) goto LAB_004cd5e2;
LAB_004cd855:
  puVar19 = (undefined1 *)(ulong)local_114;
  local_168 = plVar33;
  if ((int)local_114 < 1) {
    puVar37 = (undefined8 *)0x0;
    local_188 = 0;
  }
  else {
    uVar30 = (local_114 >> 1) + local_114 + 8 & 0xfffffff8;
    local_160 = (undefined8 *)(ulong)uVar30;
    if ((int)uVar30 < 1) {
      puVar37 = (undefined8 *)0x0;
    }
    else {
      puVar37 = malloc((long)local_160 * 0x28);
    }
    local_170 = puVar19;
    local_f8 = puVar37;
    do {
      *puVar37 = 0;
      uVar34 = puVar11[3];
      puVar37[3] = uVar34;
      puVar13 = (undefined8 *)*puVar11;
      puVar10 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        puVar10 = puVar11 + 1;
      }
      uVar30 = 0xffffffff;
      if (-1 < (int)*(uint *)(puVar11 + 4)) {
        uVar20 = *(uint *)(puVar11 + 4) >> 5;
        uVar21 = uVar20 << 5;
LAB_004cd930:
        uVar50 = *(uint *)((long)puVar10 + (ulong)uVar20 * 4);
        if (uVar50 == 0) goto code_r0x004cd939;
        uVar30 = 0x1f;
        if (uVar50 != 0) {
          for (; uVar50 >> uVar30 == 0; uVar30 = uVar30 - 1) {
          }
        }
        uVar30 = (uVar30 ^ 0x1f | uVar21) ^ 0x1f;
      }
LAB_004cd95e:
      *(uint *)(puVar37 + 4) = uVar30;
      *(undefined1 *)((long)puVar37 + 0x24) = *(undefined1 *)((long)puVar11 + 0x24);
      sVar2 = uVar34 * 4;
      if (uVar34 < 5) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        if (sVar2 == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar10 = malloc(sVar2);
        }
        *puVar37 = puVar10;
        puVar13 = (undefined8 *)*puVar11;
      }
      puVar32 = puVar37 + 1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar32 = puVar10;
      }
      puVar10 = puVar11 + 1;
      if (puVar13 != (undefined8 *)0x0) {
        puVar10 = puVar13;
      }
      memcpy(puVar32,puVar10,sVar2);
      puVar11 = puVar11 + 5;
      puVar37 = puVar37 + 5;
      bVar39 = 1 < uVar25;
      uVar25 = uVar25 - 1;
    } while (bVar39);
    local_188 = SUB84(local_160,0);
    puVar37 = local_f8;
    uVar34 = local_d0;
    uVar25 = (uint)local_170;
  }
  plVar33 = local_80;
  puVar11 = local_190;
  uVar23 = (ulong)local_184;
  bVar39 = 0 < (int)local_184;
  local_190 = puVar37;
  local_184 = uVar25;
  if (bVar39) {
    lVar16 = 0;
    do {
      free(*(void **)((long)puVar11 + lVar16));
      lVar16 = lVar16 + 0x28;
    } while (uVar23 * 0x28 != lVar16);
  }
  free(puVar11);
  uVar25 = local_104;
  puVar37 = local_110;
  puVar19 = (undefined1 *)(ulong)local_104;
  if ((int)local_104 < 1) {
    puVar11 = (undefined8 *)0x0;
    local_178 = 0;
  }
  else {
    uVar30 = (local_104 >> 1) + local_104 + 8 & 0xfffffff8;
    local_160 = (undefined8 *)(ulong)uVar30;
    if ((int)uVar30 < 1) {
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = malloc((long)local_160 * 0x28);
    }
    local_170 = puVar19;
    local_f8 = puVar11;
    do {
      *puVar11 = 0;
      uVar34 = puVar37[3];
      puVar11[3] = uVar34;
      puVar13 = (undefined8 *)*puVar37;
      puVar10 = puVar13;
      if (puVar13 == (undefined8 *)0x0) {
        puVar10 = puVar37 + 1;
      }
      uVar30 = 0xffffffff;
      if (-1 < (int)*(uint *)(puVar37 + 4)) {
        uVar20 = *(uint *)(puVar37 + 4) >> 5;
        uVar21 = uVar20 << 5;
LAB_004cdae0:
        uVar50 = *(uint *)((long)puVar10 + (ulong)uVar20 * 4);
        if (uVar50 == 0) goto code_r0x004cdae9;
        uVar30 = 0x1f;
        if (uVar50 != 0) {
          for (; uVar50 >> uVar30 == 0; uVar30 = uVar30 - 1) {
          }
        }
        uVar30 = (uVar30 ^ 0x1f | uVar21) ^ 0x1f;
      }
LAB_004cdb0b:
      *(uint *)(puVar11 + 4) = uVar30;
      *(undefined1 *)((long)puVar11 + 0x24) = *(undefined1 *)((long)puVar37 + 0x24);
      sVar2 = uVar34 * 4;
      if (uVar34 < 5) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        if (sVar2 == 0) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          puVar10 = malloc(sVar2);
        }
        *puVar11 = puVar10;
        puVar13 = (undefined8 *)*puVar37;
      }
      puVar32 = puVar11 + 1;
      if (puVar10 != (undefined8 *)0x0) {
        puVar32 = puVar10;
      }
      puVar10 = puVar37 + 1;
      if (puVar13 != (undefined8 *)0x0) {
        puVar10 = puVar13;
      }
      memcpy(puVar32,puVar10,sVar2);
      puVar37 = puVar37 + 5;
      puVar11 = puVar11 + 5;
      bVar39 = 1 < uVar25;
      uVar25 = uVar25 - 1;
    } while (bVar39);
    local_178 = SUB84(local_160,0);
    puVar11 = local_f8;
    puVar19 = local_170;
    uVar34 = local_d0;
    plVar33 = local_80;
  }
  puVar37 = local_180;
  uVar23 = (ulong)local_174;
  bVar39 = 0 < (int)local_174;
  local_180 = puVar11;
  local_174 = (uint)puVar19;
  if (bVar39) {
    lVar16 = 0;
    do {
      free(*(void **)((long)puVar37 + lVar16));
      lVar16 = lVar16 + 0x28;
    } while (uVar23 * 0x28 != lVar16);
  }
  local_170 = (undefined1 *)((long)local_158 + uVar31 * 0x28 + 0x24);
  free(puVar37);
  ppuVar12 = &local_180;
  if ((uVar34 & 1) != 0) {
    ppuVar12 = &local_190;
  }
  local_f8 = *ppuVar12;
  plVar38 = local_f8 + uVar31 * 5;
  local_100 = plVar38;
  if (plVar38 != local_168) {
    puVar37 = (undefined8 *)((long)local_158 + uVar31 * 0x28 + 8);
    puVar11 = (undefined8 *)*local_168;
    if ((undefined8 *)*local_168 == (undefined8 *)0x0) {
      puVar11 = puVar37;
    }
    uVar25 = *(uint *)((long)local_158 + uVar31 * 0x28 + 0x20);
    uVar30 = 0xffffffff;
    if (-1 < (int)uVar25) {
      uVar25 = uVar25 >> 5;
      uVar20 = uVar25 << 5;
LAB_004cdc30:
      uVar21 = *(uint *)((long)puVar11 + (ulong)uVar25 * 4);
      if (uVar21 == 0) goto code_r0x004cdc39;
      uVar25 = 0x1f;
      if (uVar21 != 0) {
        for (; uVar21 >> uVar25 == 0; uVar25 = uVar25 - 1) {
        }
      }
      uVar30 = (uVar25 ^ 0x1f | uVar20) ^ 0x1f;
    }
LAB_004cdc52:
    *(uint *)(local_f8 + uVar31 * 5 + 4) = uVar30;
    uVar23 = (ulong)(((int)uVar30 >> 5) + 1);
    if (uVar23 < 5) {
      uVar23 = 4;
    }
    if (uVar23 < 5) {
      free((void *)*plVar38);
      *plVar38 = 0;
      puVar11 = (undefined8 *)0x0;
    }
    else if (uVar23 == local_f8[uVar31 * 5 + 3]) {
      puVar11 = (undefined8 *)*plVar38;
    }
    else {
      free((void *)*plVar38);
      puVar11 = malloc(uVar23 * 4);
      *plVar38 = (long)puVar11;
    }
    puVar13 = local_f8;
    local_f8[uVar31 * 5 + 3] = uVar23;
    puVar10 = local_f8 + uVar31 * 5 + 1;
    if (puVar11 != (undefined8 *)0x0) {
      puVar10 = puVar11;
    }
    if ((undefined8 *)*local_168 != (undefined8 *)0x0) {
      puVar37 = (undefined8 *)*local_168;
    }
    memcpy(puVar10,puVar37,uVar23 << 2);
    *(undefined1 *)((long)puVar13 + uVar31 * 0x28 + 0x24) = *local_170;
  }
                    /* try { // try from 004cdd41 to 004cdd4b has its CatchHandler @ 004cf3a9 */
  if (((local_184 == *(uint *)((long)plVar26 + 0xcc)) &&
      (local_174 == *(uint *)((long)plVar26 + 0xdc))) &&
     (cVar7 = (**(code **)(*plVar26 + 400))(), puVar11 = local_190, plVar33 = local_80,
     cVar7 != '\0')) {
    plVar33 = (long *)(ulong)local_184;
    if ((int)local_184 < 1) {
      puVar11 = (undefined8 *)0x0;
      local_118 = 0;
    }
    else {
      uVar25 = (local_184 >> 1) + local_184 + 8 & 0xfffffff8;
      local_170 = (undefined1 *)(ulong)uVar25;
      if ((int)uVar25 < 1) {
        puVar37 = (undefined8 *)0x0;
      }
      else {
        puVar37 = malloc((long)local_170 * 0x28);
      }
      local_168 = plVar33;
      local_160 = puVar37;
      do {
        *puVar37 = 0;
        uVar34 = puVar11[3];
        puVar37[3] = uVar34;
        puVar13 = (undefined8 *)*puVar11;
        puVar10 = puVar13;
        if (puVar13 == (undefined8 *)0x0) {
          puVar10 = puVar11 + 1;
        }
        uVar25 = 0xffffffff;
        if (-1 < (int)*(uint *)(puVar11 + 4)) {
          uVar30 = *(uint *)(puVar11 + 4) >> 5;
          uVar20 = uVar30 << 5;
LAB_004ceef0:
          uVar21 = *(uint *)((long)puVar10 + (ulong)uVar30 * 4);
          if (uVar21 == 0) goto code_r0x004ceef9;
          uVar25 = 0x1f;
          if (uVar21 != 0) {
            for (; uVar21 >> uVar25 == 0; uVar25 = uVar25 - 1) {
            }
          }
          uVar25 = (uVar25 ^ 0x1f | uVar20) ^ 0x1f;
        }
LAB_004cef1b:
        *(uint *)(puVar37 + 4) = uVar25;
        *(undefined1 *)((long)puVar37 + 0x24) = *(undefined1 *)((long)puVar11 + 0x24);
        sVar2 = uVar34 * 4;
        if (uVar34 < 5) {
          puVar10 = (undefined8 *)0x0;
        }
        else {
          if (sVar2 == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          else {
            puVar10 = malloc(sVar2);
          }
          *puVar37 = puVar10;
          puVar13 = (undefined8 *)*puVar11;
        }
        puVar32 = puVar37 + 1;
        if (puVar10 != (undefined8 *)0x0) {
          puVar32 = puVar10;
        }
        puVar10 = puVar11 + 1;
        if (puVar13 != (undefined8 *)0x0) {
          puVar10 = puVar13;
        }
        memcpy(puVar32,puVar10,sVar2);
        puVar11 = puVar11 + 5;
        puVar37 = puVar37 + 5;
        uVar25 = (uint)plVar33;
        plVar33 = (long *)(ulong)(uVar25 - 1);
      } while (1 < uVar25);
      local_118 = SUB84(local_170,0);
      puVar11 = local_160;
      uVar34 = local_d0;
      plVar33 = local_168;
    }
    puVar37 = local_120;
    uVar31 = (ulong)local_114;
    bVar39 = 0 < (int)local_114;
    local_120 = puVar11;
    local_114 = (uint)plVar33;
    if (bVar39) {
      lVar16 = 0;
      do {
        free(*(void **)((long)puVar37 + lVar16));
        lVar16 = lVar16 + 0x28;
      } while (uVar31 * 0x28 != lVar16);
    }
    free(puVar37);
                    /* try { // try from 004cefba to 004cefcb has its CatchHandler @ 004cf3a9 */
    Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
              ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_110,
               (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_180);
    goto LAB_004cd5e2;
  }
  plVar38 = local_168;
  if ((long)local_150 < (long)*(int *)((long)plVar33 + 0xc)) {
    ppuVar12 = &local_190;
    if ((uVar34 & 1) != 0) {
      ppuVar12 = &local_180;
    }
    puVar11 = *ppuVar12;
    plVar33 = puVar11 + uVar31 * 5;
    if (plVar33 != local_168) {
      puVar37 = (undefined8 *)((long)local_158 + uVar31 * 0x28 + 8);
      puVar13 = (undefined8 *)*local_168;
      if ((undefined8 *)*local_168 == (undefined8 *)0x0) {
        puVar13 = puVar37;
      }
      uVar25 = *(uint *)((long)local_158 + uVar31 * 0x28 + 0x20);
      uVar30 = 0xffffffff;
      if (-1 < (int)uVar25) {
        uVar25 = uVar25 >> 5;
        uVar20 = uVar25 << 5;
LAB_004cde10:
        uVar21 = *(uint *)((long)puVar13 + (ulong)uVar25 * 4);
        if (uVar21 == 0) goto code_r0x004cde19;
        uVar25 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> uVar25 == 0; uVar25 = uVar25 - 1) {
          }
        }
        uVar30 = (uVar25 ^ 0x1f | uVar20) ^ 0x1f;
      }
LAB_004cde32:
      *(uint *)(puVar11 + uVar31 * 5 + 4) = uVar30;
      uVar34 = (ulong)(((int)uVar30 >> 5) + 1);
      if (uVar34 < 5) {
        uVar34 = 4;
      }
      if (uVar34 < 5) {
        free((void *)*plVar33);
        *plVar33 = 0;
        puVar13 = (undefined8 *)0x0;
      }
      else if (uVar34 == puVar11[uVar31 * 5 + 3]) {
        puVar13 = (undefined8 *)*plVar33;
      }
      else {
        free((void *)*plVar33);
        puVar13 = malloc(uVar34 * 4);
        *plVar33 = (long)puVar13;
      }
      puVar11[uVar31 * 5 + 3] = uVar34;
      puVar10 = puVar11 + uVar31 * 5 + 1;
      if (puVar13 != (undefined8 *)0x0) {
        puVar10 = puVar13;
      }
      if ((undefined8 *)*plVar38 != (undefined8 *)0x0) {
        puVar37 = (undefined8 *)*plVar38;
      }
      memcpy(puVar10,puVar37,uVar34 << 2);
      *(undefined1 *)((long)puVar11 + uVar31 * 0x28 + 0x24) = *local_170;
      uVar34 = local_d0;
    }
                    /* try { // try from 004cdf08 to 004cdf3a has its CatchHandler @ 004cf3ba */
    if (((local_184 == *(uint *)((long)plVar26 + 0xcc)) &&
        (local_174 == *(uint *)((long)plVar26 + 0xdc))) &&
       (cVar7 = (**(code **)(*plVar26 + 400))(), cVar7 != '\0')) {
      Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_120,
                 (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_190);
      Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_110,
                 (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_180);
      goto LAB_004cd5e2;
    }
    if (local_150 < *(uint *)((long)local_80 + 0xc)) {
      puVar37 = *(undefined8 **)(*local_80 + local_150 * 8);
      if (plVar33 != puVar37 + 7) {
LAB_004cdf7a:
        puVar13 = (undefined8 *)puVar37[7];
        if ((undefined8 *)puVar37[7] == (undefined8 *)0x0) {
          puVar13 = puVar37 + 8;
        }
        uVar25 = 0xffffffff;
        if (-1 < (int)*(uint *)(puVar37 + 0xb)) {
          uVar30 = *(uint *)(puVar37 + 0xb) >> 5;
          uVar20 = uVar30 << 5;
LAB_004cdfa0:
          uVar21 = *(uint *)((long)puVar13 + (ulong)uVar30 * 4);
          if (uVar21 == 0) goto code_r0x004cdfa9;
          uVar25 = 0x1f;
          if (uVar21 != 0) {
            for (; uVar21 >> uVar25 == 0; uVar25 = uVar25 - 1) {
            }
          }
          uVar25 = (uVar25 ^ 0x1f | uVar20) ^ 0x1f;
        }
LAB_004cdfc2:
        *(uint *)(puVar11 + uVar31 * 5 + 4) = uVar25;
        uVar23 = (ulong)(((int)uVar25 >> 5) + 1);
        if (uVar23 < 5) {
          uVar23 = 4;
        }
        if (uVar23 < 5) {
          free((void *)*plVar33);
          *plVar33 = 0;
          puVar13 = (undefined8 *)0x0;
        }
        else if (uVar23 == puVar11[uVar31 * 5 + 3]) {
          puVar13 = (undefined8 *)*plVar33;
        }
        else {
          free((void *)*plVar33);
          puVar13 = malloc(uVar23 * 4);
          *plVar33 = (long)puVar13;
        }
        puVar11[uVar31 * 5 + 3] = uVar23;
        puVar10 = puVar11 + uVar31 * 5 + 1;
        if (puVar13 != (undefined8 *)0x0) {
          puVar10 = puVar13;
        }
        puVar13 = puVar37 + 8;
        if ((undefined8 *)puVar37[7] != (undefined8 *)0x0) {
          puVar13 = (undefined8 *)puVar37[7];
        }
        memcpy(puVar10,puVar13,uVar23 << 2);
        *(undefined1 *)((long)puVar11 + uVar31 * 0x28 + 0x24) =
             *(undefined1 *)((long)puVar37 + 0x5c);
      }
    }
    else {
      puVar37 = (undefined8 *)0x0;
      if (plVar33 != (long *)0x38) goto LAB_004cdf7a;
    }
    plVar38 = local_168;
    uVar25 = *(uint *)((long)plVar26 + 0xcc);
    if (local_184 == uVar25) {
                    /* try { // try from 004ce087 to 004ce0b9 has its CatchHandler @ 004cf3ba */
      if ((local_174 == *(uint *)((long)plVar26 + 0xdc)) &&
         (cVar7 = (**(code **)(*plVar26 + 400))(), cVar7 != '\0')) {
        Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                  ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_120,
                   (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_190);
        Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                  ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_110,
                   (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_180);
        goto LAB_004cd5e2;
      }
      goto LAB_004ce0c0;
    }
  }
  else {
LAB_004ce0c0:
    uVar25 = *(uint *)((long)plVar26 + 0xcc);
  }
  puVar11 = (undefined8 *)(ulong)uVar25;
  local_138 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  if ((int)uVar25 < 1) {
    iVar8 = 0;
  }
  else {
    uVar25 = uVar25 + (int)uVar25 / 2 + 8 & 0xfffffff8;
    local_160 = puVar11;
    if (uVar25 == 0) {
      puVar11 = (undefined8 *)0x0;
    }
    else if ((int)uVar25 < 1) {
      local_148 = ZEXT816(0);
      puVar11 = (undefined8 *)0x0;
    }
    else {
      puVar11 = malloc((ulong)uVar25 * 0x28);
      local_148._0_8_ = puVar11;
    }
    pvVar14 = local_158;
    local_148._8_4_ = uVar25;
    puVar36 = (ulong *)((long)local_158 + uVar31 * 0x28 + 0x18);
    pvVar35 = (void *)((long)local_158 + uVar31 * 0x28 + 8);
    puVar37 = (undefined8 *)0x0;
    do {
      *puVar11 = 0;
      uVar34 = *puVar36;
      puVar11[3] = uVar34;
      pvVar28 = (void *)*plVar38;
      pvVar17 = pvVar28;
      if (pvVar28 == (void *)0x0) {
        pvVar17 = pvVar35;
      }
      uVar25 = *(uint *)((long)pvVar14 + uVar31 * 0x28 + 0x20);
      uVar30 = 0xffffffff;
      if (-1 < (int)uVar25) {
        uVar25 = uVar25 >> 5;
        uVar20 = uVar25 << 5;
LAB_004ce1d0:
        uVar21 = *(uint *)((long)pvVar17 + (ulong)uVar25 * 4);
        if (uVar21 == 0) goto code_r0x004ce1d9;
        uVar25 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> uVar25 == 0; uVar25 = uVar25 - 1) {
          }
        }
        uVar30 = (uVar25 ^ 0x1f | uVar20) ^ 0x1f;
      }
LAB_004ce1fb:
      *(uint *)(puVar11 + 4) = uVar30;
      *(undefined1 *)((long)puVar11 + 0x24) = *local_170;
      sVar2 = uVar34 * 4;
      if (uVar34 < 5) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        if (sVar2 == 0) {
          puVar13 = (undefined8 *)0x0;
        }
        else {
          puVar13 = malloc(sVar2);
        }
        *puVar11 = puVar13;
        pvVar28 = (void *)*plVar38;
      }
      puVar10 = puVar11 + 1;
      if (puVar13 != (undefined8 *)0x0) {
        puVar10 = puVar13;
      }
      if (pvVar28 == (void *)0x0) {
        pvVar28 = pvVar35;
      }
      memcpy(puVar10,pvVar28,sVar2);
      uVar25 = (int)puVar37 + 1;
      puVar37 = (undefined8 *)(ulong)uVar25;
      puVar11 = puVar11 + 5;
      plVar38 = local_168;
    } while (uVar25 != (uint)local_160);
    iVar8 = (uint)local_160 + local_148._12_4_;
    local_148._12_4_ = iVar8;
  }
  uVar25 = *(uint *)((long)plVar26 + 0xdc);
  puVar11 = (undefined8 *)(ulong)uVar25;
  if (0 < (int)uVar25) {
    uVar5 = local_138._12_4_;
    iVar15 = local_138._12_4_ + uVar25;
    iVar8 = local_138._12_4_;
    local_160 = puVar11;
    if ((int)local_138._8_4_ < iVar15) {
      uVar25 = iVar15 + iVar15 / 2 + 8U & 0xfffffff8;
      if (local_138._8_4_ != uVar25) {
        if ((int)uVar25 < 1) {
          free((void *)local_138._0_8_);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = local_138._8_8_;
          local_138 = auVar4 << 0x40;
        }
        else {
          pvVar14 = malloc((ulong)uVar25 * 0x28);
          if (0 < (int)uVar5) {
            lVar22 = 0;
            lVar16 = 0;
            do {
              *(undefined8 *)((long)pvVar14 + lVar22) = *(undefined8 *)(local_138._0_8_ + lVar22);
              *(undefined8 *)(local_138._0_8_ + lVar22) = 0;
              *(undefined8 *)((long)pvVar14 + lVar22 + 0x18) =
                   *(undefined8 *)(local_138._0_8_ + 0x18 + lVar22);
              *(undefined4 *)((long)pvVar14 + lVar22 + 0x20) =
                   *(undefined4 *)(local_138._0_8_ + 0x20 + lVar22);
              *(undefined1 *)((long)pvVar14 + lVar22 + 0x24) =
                   *(undefined1 *)(local_138._0_8_ + 0x24 + lVar22);
              puVar37 = (undefined8 *)(local_138._0_8_ + 8 + lVar22);
              uVar9 = puVar37[1];
              puVar11 = (undefined8 *)((long)pvVar14 + lVar22 + 8);
              *puVar11 = *puVar37;
              puVar11[1] = uVar9;
              free(*(void **)(local_138._0_8_ + lVar22));
              lVar16 = lVar16 + 1;
              lVar22 = lVar22 + 0x28;
            } while (lVar16 < (int)local_138._12_4_);
          }
          uVar9 = local_138._0_8_;
          local_138._0_8_ = pvVar14;
          free((void *)uVar9);
        }
      }
      local_138._8_4_ = uVar25;
      iVar8 = local_138._12_4_;
    }
    pvVar14 = local_158;
    puVar36 = (ulong *)((long)local_158 + uVar31 * 0x28 + 0x18);
    pvVar35 = (void *)((long)local_158 + uVar31 * 0x28 + 8);
    iVar15 = 0;
    puVar11 = (undefined8 *)((long)iVar8 * 0x28 + local_138._0_8_);
    do {
      *puVar11 = 0;
      uVar34 = *puVar36;
      puVar11[3] = uVar34;
      pvVar28 = (void *)*local_168;
      pvVar17 = pvVar28;
      if (pvVar28 == (void *)0x0) {
        pvVar17 = pvVar35;
      }
      uVar25 = *(uint *)((long)pvVar14 + uVar31 * 0x28 + 0x20);
      uVar30 = 0xffffffff;
      if (-1 < (int)uVar25) {
        uVar25 = uVar25 >> 5;
        uVar20 = uVar25 << 5;
LAB_004ce400:
        uVar21 = *(uint *)((long)pvVar17 + (ulong)uVar25 * 4);
        if (uVar21 == 0) goto code_r0x004ce409;
        uVar25 = 0x1f;
        if (uVar21 != 0) {
          for (; uVar21 >> uVar25 == 0; uVar25 = uVar25 - 1) {
          }
        }
        uVar30 = (uVar25 ^ 0x1f | uVar20) ^ 0x1f;
      }
LAB_004ce42b:
      *(uint *)(puVar11 + 4) = uVar30;
      *(undefined1 *)((long)puVar11 + 0x24) = *local_170;
      puVar37 = (undefined8 *)(uVar34 * 4);
      if (uVar34 < 5) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        if (puVar37 == (undefined8 *)0x0) {
          puVar13 = (undefined8 *)0x0;
        }
        else {
          puVar13 = malloc((size_t)puVar37);
        }
        *puVar11 = puVar13;
        pvVar28 = (void *)*local_168;
      }
      puVar10 = puVar11 + 1;
      if (puVar13 != (undefined8 *)0x0) {
        puVar10 = puVar13;
      }
      if (pvVar28 == (void *)0x0) {
        pvVar28 = pvVar35;
      }
      memcpy(puVar10,pvVar28,(size_t)puVar37);
      iVar15 = iVar15 + 1;
      puVar11 = puVar11 + 5;
    } while (iVar15 != (int)local_160);
    local_138._12_4_ = local_138._12_4_ + (int)local_160;
    plVar38 = local_168;
    iVar8 = local_148._12_4_;
  }
                    /* try { // try from 004ce4b5 to 004ce4f4 has its CatchHandler @ 004cf3ab */
  if (((iVar8 == *(int *)((long)plVar26 + 0xcc)) &&
      (local_138._12_4_ == *(int *)((long)plVar26 + 0xdc))) &&
     (cVar7 = (**(code **)(*plVar26 + 400))(), cVar7 != '\0')) {
    Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
              ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_120,
               (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)local_148);
    Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
              ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_110,
               (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)local_138);
  }
  else {
    puVar11 = local_f8;
    plVar33 = local_100;
    puVar37 = local_38 + uVar31 * 5 + 1;
    if ((undefined8 *)local_38[uVar31 * 5] != (undefined8 *)0x0) {
      puVar37 = (undefined8 *)local_38[uVar31 * 5];
    }
    uVar25 = *(uint *)(local_38 + uVar31 * 5 + 4);
    iVar15 = 0;
    iVar8 = 0;
    if (-1 < (int)uVar25) {
      uVar34 = (ulong)(uVar25 >> 5);
      iVar8 = 0;
      if (0xdf < uVar25) {
        uVar23 = (ulong)((uint)(uVar34 + 1) & 0xfffffff8);
        iVar8 = 0;
        iVar41 = 0;
        iVar42 = 0;
        iVar43 = 0;
        lVar16 = 0;
        iVar44 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        do {
          puVar3 = (uint *)((long)puVar37 + lVar16 * 4 + uVar34 * 4 + -0x1c);
          puVar1 = (uint *)((long)puVar37 + lVar16 * 4 + uVar34 * 4 + -0xc);
          uVar20 = puVar1[3] - (puVar1[3] >> 1 & _DAT_005ddbd0);
          uVar50 = puVar1[2] - (puVar1[2] >> 1 & _UNK_005ddbd4);
          uVar52 = puVar1[1] - (puVar1[1] >> 1 & _UNK_005ddbd8);
          uVar55 = *puVar1 - (*puVar1 >> 1 & _UNK_005ddbdc);
          uVar25 = puVar3[3] - (puVar3[3] >> 1 & _DAT_005ddbd0);
          uVar30 = puVar3[2] - (puVar3[2] >> 1 & _UNK_005ddbd4);
          uVar21 = puVar3[1] - (puVar3[1] >> 1 & _UNK_005ddbd8);
          uVar48 = *puVar3 - (*puVar3 >> 1 & _UNK_005ddbdc);
          uVar49 = (uVar20 & _DAT_005de010) + (uVar20 >> 2 & _DAT_005de010);
          uVar51 = (uVar50 & _UNK_005de014) + (uVar50 >> 2 & _UNK_005de014);
          uVar53 = (uVar52 & _UNK_005de018) + (uVar52 >> 2 & _UNK_005de018);
          uVar55 = (uVar55 & _UNK_005de01c) + (uVar55 >> 2 & _UNK_005de01c);
          uVar25 = (uVar25 & _DAT_005de010) + (uVar25 >> 2 & _DAT_005de010);
          uVar20 = (uVar30 & _UNK_005de014) + (uVar30 >> 2 & _UNK_005de014);
          uVar50 = (uVar21 & _UNK_005de018) + (uVar21 >> 2 & _UNK_005de018);
          uVar52 = (uVar48 & _UNK_005de01c) + (uVar48 >> 2 & _UNK_005de01c);
          uVar30 = (uVar49 >> 4) + uVar49 & _DAT_005d9980;
          uVar21 = (uVar51 >> 4) + uVar51 & _UNK_005d9984;
          uVar48 = (uVar53 >> 4) + uVar53 & _UNK_005d9988;
          uVar49 = (uVar55 >> 4) + uVar55 & _UNK_005d998c;
          uVar25 = (uVar25 >> 4) + uVar25 & _DAT_005d9980;
          uVar20 = (uVar20 >> 4) + uVar20 & _UNK_005d9984;
          uVar50 = (uVar50 >> 4) + uVar50 & _UNK_005d9988;
          uVar52 = (uVar52 >> 4) + uVar52 & _UNK_005d998c;
          uVar30 = (uVar30 >> 8) + uVar30;
          uVar21 = (uVar21 >> 8) + uVar21;
          uVar48 = (uVar48 >> 8) + uVar48;
          uVar49 = (uVar49 >> 8) + uVar49;
          uVar25 = (uVar25 >> 8) + uVar25;
          uVar20 = (uVar20 >> 8) + uVar20;
          uVar50 = (uVar50 >> 8) + uVar50;
          uVar52 = (uVar52 >> 8) + uVar52;
          iVar8 = iVar8 + ((uVar30 >> 0x10) + uVar30 & _DAT_005de340);
          iVar41 = iVar41 + ((uVar21 >> 0x10) + uVar21 & _UNK_005de344);
          iVar42 = iVar42 + ((uVar48 >> 0x10) + uVar48 & _UNK_005de348);
          iVar43 = iVar43 + ((uVar49 >> 0x10) + uVar49 & _UNK_005de34c);
          iVar44 = iVar44 + ((uVar25 >> 0x10) + uVar25 & _DAT_005de340);
          iVar45 = iVar45 + ((uVar20 >> 0x10) + uVar20 & _UNK_005de344);
          iVar46 = iVar46 + ((uVar50 >> 0x10) + uVar50 & _UNK_005de348);
          iVar47 = iVar47 + ((uVar52 >> 0x10) + uVar52 & _UNK_005de34c);
          lVar16 = lVar16 + -8;
        } while (-lVar16 != uVar23);
        iVar8 = iVar47 + iVar43 + iVar45 + iVar41 + iVar46 + iVar42 + iVar44 + iVar8;
        if (uVar34 + 1 == uVar23) goto LAB_004ce6da;
        uVar34 = uVar34 - uVar23;
      }
      lVar16 = uVar34 + 1;
      do {
        uVar25 = *(uint *)((long)puVar37 + lVar16 * 4 + -4);
        uVar25 = uVar25 - (uVar25 >> 1 & 0x55555555);
        uVar25 = (uVar25 & 0x33333333) + (uVar25 >> 2 & 0x33333333);
        uVar25 = (uVar25 >> 4) + uVar25 & 0xf0f0f0f;
        uVar25 = (uVar25 >> 8) + uVar25;
        iVar8 = iVar8 + ((uVar25 >> 0x10) + uVar25 & 0xff);
        lVar22 = lVar16 + -1;
        bVar39 = 0 < lVar16;
        lVar16 = lVar22;
      } while (lVar22 != 0 && bVar39);
    }
LAB_004ce6da:
    lVar16 = (long)local_158 + uVar31 * 0x28 + 8;
    if (*plVar38 != 0) {
      lVar16 = *plVar38;
    }
    uVar25 = *(uint *)((long)local_158 + uVar31 * 0x28 + 0x20);
    if (-1 < (int)uVar25) {
      uVar34 = (ulong)(uVar25 >> 5);
      iVar15 = 0;
      if (0xdf < uVar25) {
        uVar23 = (ulong)((uint)(uVar34 + 1) & 0xfffffff8);
        lVar22 = uVar34 * 4 + -0xc + lVar16;
        iVar15 = 0;
        iVar41 = 0;
        iVar42 = 0;
        iVar43 = 0;
        lVar24 = 0;
        iVar44 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        do {
          puVar3 = (uint *)(lVar22 + -0x10 + lVar24 * 4);
          puVar1 = (uint *)(lVar22 + lVar24 * 4);
          uVar21 = puVar1[3] - (puVar1[3] >> 1 & _DAT_005ddbd0);
          uVar48 = puVar1[2] - (puVar1[2] >> 1 & _UNK_005ddbd4);
          uVar49 = puVar1[1] - (puVar1[1] >> 1 & _UNK_005ddbd8);
          uVar56 = *puVar1 - (*puVar1 >> 1 & _UNK_005ddbdc);
          uVar30 = puVar3[3] - (puVar3[3] >> 1 & _DAT_005ddbd0);
          uVar20 = puVar3[2] - (puVar3[2] >> 1 & _UNK_005ddbd4);
          uVar50 = puVar3[1] - (puVar3[1] >> 1 & _UNK_005ddbd8);
          uVar52 = *puVar3 - (*puVar3 >> 1 & _UNK_005ddbdc);
          uVar51 = (uVar21 & _DAT_005de010) + (uVar21 >> 2 & _DAT_005de010);
          uVar53 = (uVar48 & _UNK_005de014) + (uVar48 >> 2 & _UNK_005de014);
          uVar55 = (uVar49 & _UNK_005de018) + (uVar49 >> 2 & _UNK_005de018);
          uVar56 = (uVar56 & _UNK_005de01c) + (uVar56 >> 2 & _UNK_005de01c);
          uVar30 = (uVar30 & _DAT_005de010) + (uVar30 >> 2 & _DAT_005de010);
          uVar21 = (uVar20 & _UNK_005de014) + (uVar20 >> 2 & _UNK_005de014);
          uVar48 = (uVar50 & _UNK_005de018) + (uVar50 >> 2 & _UNK_005de018);
          uVar49 = (uVar52 & _UNK_005de01c) + (uVar52 >> 2 & _UNK_005de01c);
          uVar20 = (uVar51 >> 4) + uVar51 & _DAT_005d9980;
          uVar50 = (uVar53 >> 4) + uVar53 & _UNK_005d9984;
          uVar52 = (uVar55 >> 4) + uVar55 & _UNK_005d9988;
          uVar51 = (uVar56 >> 4) + uVar56 & _UNK_005d998c;
          uVar30 = (uVar30 >> 4) + uVar30 & _DAT_005d9980;
          uVar21 = (uVar21 >> 4) + uVar21 & _UNK_005d9984;
          uVar48 = (uVar48 >> 4) + uVar48 & _UNK_005d9988;
          uVar49 = (uVar49 >> 4) + uVar49 & _UNK_005d998c;
          uVar20 = (uVar20 >> 8) + uVar20;
          uVar50 = (uVar50 >> 8) + uVar50;
          uVar52 = (uVar52 >> 8) + uVar52;
          uVar51 = (uVar51 >> 8) + uVar51;
          uVar30 = (uVar30 >> 8) + uVar30;
          uVar21 = (uVar21 >> 8) + uVar21;
          uVar48 = (uVar48 >> 8) + uVar48;
          uVar49 = (uVar49 >> 8) + uVar49;
          iVar15 = iVar15 + ((uVar20 >> 0x10) + uVar20 & _DAT_005de340);
          iVar41 = iVar41 + ((uVar50 >> 0x10) + uVar50 & _UNK_005de344);
          iVar42 = iVar42 + ((uVar52 >> 0x10) + uVar52 & _UNK_005de348);
          iVar43 = iVar43 + ((uVar51 >> 0x10) + uVar51 & _UNK_005de34c);
          iVar44 = iVar44 + ((uVar30 >> 0x10) + uVar30 & _DAT_005de340);
          iVar45 = iVar45 + ((uVar21 >> 0x10) + uVar21 & _UNK_005de344);
          iVar46 = iVar46 + ((uVar48 >> 0x10) + uVar48 & _UNK_005de348);
          iVar47 = iVar47 + ((uVar49 >> 0x10) + uVar49 & _UNK_005de34c);
          lVar24 = lVar24 + -8;
        } while (-lVar24 != uVar23);
        iVar15 = iVar47 + iVar43 + iVar45 + iVar41 + iVar46 + iVar42 + iVar44 + iVar15;
        if (uVar34 + 1 == uVar23) goto LAB_004ce8a9;
        uVar34 = uVar34 - uVar23;
      }
      lVar22 = uVar34 + 1;
      do {
        uVar30 = *(uint *)(lVar16 + -4 + lVar22 * 4);
        uVar30 = uVar30 - (uVar30 >> 1 & 0x55555555);
        uVar30 = (uVar30 & 0x33333333) + (uVar30 >> 2 & 0x33333333);
        uVar30 = (uVar30 >> 4) + uVar30 & 0xf0f0f0f;
        uVar30 = (uVar30 >> 8) + uVar30;
        iVar15 = iVar15 + ((uVar30 >> 0x10) + uVar30 & 0xff);
        lVar24 = lVar22 + -1;
        bVar39 = 0 < lVar22;
        lVar22 = lVar24;
      } while (lVar24 != 0 && bVar39);
    }
LAB_004ce8a9:
    uVar30 = -(iVar8 - iVar15);
    if ((int)uVar30 < 0) {
      uVar30 = iVar8 - iVar15;
    }
    if (local_150 < *(uint *)((long)local_88 + 0xc)) {
      lVar22 = *(long *)(*local_88 + local_150 * 8);
    }
    else {
      lVar22 = 0;
    }
    puVar37 = (undefined8 *)(lVar22 + 0x40);
    puVar13 = *(undefined8 **)(lVar22 + 0x38);
    if (*(undefined8 **)(lVar22 + 0x38) == (undefined8 *)0x0) {
      puVar13 = puVar37;
    }
    uVar20 = *(uint *)(lVar22 + 0x58);
    iVar8 = 0;
    iVar15 = 0;
    if (-1 < (int)uVar20) {
      uVar34 = (ulong)(uVar20 >> 5);
      iVar15 = 0;
      if (0xdf < uVar20) {
        uVar23 = (ulong)((uint)(uVar34 + 1) & 0xfffffff8);
        iVar15 = 0;
        iVar41 = 0;
        iVar42 = 0;
        iVar43 = 0;
        lVar24 = 0;
        iVar44 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        do {
          puVar3 = (uint *)((long)puVar13 + lVar24 * 4 + uVar34 * 4 + -0x1c);
          puVar1 = (uint *)((long)puVar13 + lVar24 * 4 + uVar34 * 4 + -0xc);
          uVar48 = puVar1[3] - (puVar1[3] >> 1 & _DAT_005ddbd0);
          uVar49 = puVar1[2] - (puVar1[2] >> 1 & _UNK_005ddbd4);
          uVar53 = puVar1[1] - (puVar1[1] >> 1 & _UNK_005ddbd8);
          uVar57 = *puVar1 - (*puVar1 >> 1 & _UNK_005ddbdc);
          uVar21 = puVar3[3] - (puVar3[3] >> 1 & _DAT_005ddbd0);
          uVar50 = puVar3[2] - (puVar3[2] >> 1 & _UNK_005ddbd4);
          uVar52 = puVar3[1] - (puVar3[1] >> 1 & _UNK_005ddbd8);
          uVar51 = *puVar3 - (*puVar3 >> 1 & _UNK_005ddbdc);
          uVar55 = (uVar48 & _DAT_005de010) + (uVar48 >> 2 & _DAT_005de010);
          uVar56 = (uVar49 & _UNK_005de014) + (uVar49 >> 2 & _UNK_005de014);
          uVar54 = (uVar53 & _UNK_005de018) + (uVar53 >> 2 & _UNK_005de018);
          uVar57 = (uVar57 & _UNK_005de01c) + (uVar57 >> 2 & _UNK_005de01c);
          uVar21 = (uVar21 & _DAT_005de010) + (uVar21 >> 2 & _DAT_005de010);
          uVar48 = (uVar50 & _UNK_005de014) + (uVar50 >> 2 & _UNK_005de014);
          uVar49 = (uVar52 & _UNK_005de018) + (uVar52 >> 2 & _UNK_005de018);
          uVar53 = (uVar51 & _UNK_005de01c) + (uVar51 >> 2 & _UNK_005de01c);
          uVar50 = (uVar55 >> 4) + uVar55 & _DAT_005d9980;
          uVar52 = (uVar56 >> 4) + uVar56 & _UNK_005d9984;
          uVar51 = (uVar54 >> 4) + uVar54 & _UNK_005d9988;
          uVar55 = (uVar57 >> 4) + uVar57 & _UNK_005d998c;
          uVar21 = (uVar21 >> 4) + uVar21 & _DAT_005d9980;
          uVar48 = (uVar48 >> 4) + uVar48 & _UNK_005d9984;
          uVar49 = (uVar49 >> 4) + uVar49 & _UNK_005d9988;
          uVar53 = (uVar53 >> 4) + uVar53 & _UNK_005d998c;
          uVar50 = (uVar50 >> 8) + uVar50;
          uVar52 = (uVar52 >> 8) + uVar52;
          uVar51 = (uVar51 >> 8) + uVar51;
          uVar55 = (uVar55 >> 8) + uVar55;
          uVar21 = (uVar21 >> 8) + uVar21;
          uVar48 = (uVar48 >> 8) + uVar48;
          uVar49 = (uVar49 >> 8) + uVar49;
          uVar53 = (uVar53 >> 8) + uVar53;
          iVar15 = iVar15 + ((uVar50 >> 0x10) + uVar50 & _DAT_005de340);
          iVar41 = iVar41 + ((uVar52 >> 0x10) + uVar52 & _UNK_005de344);
          iVar42 = iVar42 + ((uVar51 >> 0x10) + uVar51 & _UNK_005de348);
          iVar43 = iVar43 + ((uVar55 >> 0x10) + uVar55 & _UNK_005de34c);
          iVar44 = iVar44 + ((uVar21 >> 0x10) + uVar21 & _DAT_005de340);
          iVar45 = iVar45 + ((uVar48 >> 0x10) + uVar48 & _UNK_005de344);
          iVar46 = iVar46 + ((uVar49 >> 0x10) + uVar49 & _UNK_005de348);
          iVar47 = iVar47 + ((uVar53 >> 0x10) + uVar53 & _UNK_005de34c);
          lVar24 = lVar24 + -8;
        } while (-lVar24 != uVar23);
        iVar15 = iVar47 + iVar43 + iVar45 + iVar41 + iVar46 + iVar42 + iVar44 + iVar15;
        if (uVar34 + 1 == uVar23) goto LAB_004ceaa9;
        uVar34 = uVar34 - uVar23;
      }
      lVar24 = uVar34 + 1;
      do {
        uVar21 = *(uint *)((long)puVar13 + lVar24 * 4 + -4);
        uVar21 = uVar21 - (uVar21 >> 1 & 0x55555555);
        uVar21 = (uVar21 & 0x33333333) + (uVar21 >> 2 & 0x33333333);
        uVar21 = (uVar21 >> 4) + uVar21 & 0xf0f0f0f;
        uVar21 = (uVar21 >> 8) + uVar21;
        iVar15 = iVar15 + ((uVar21 >> 0x10) + uVar21 & 0xff);
        lVar29 = lVar24 + -1;
        bVar39 = 0 < lVar24;
        lVar24 = lVar29;
      } while (lVar29 != 0 && bVar39);
    }
LAB_004ceaa9:
    if (-1 < (int)uVar25) {
      uVar34 = (ulong)(uVar25 >> 5);
      iVar8 = 0;
      if (0xdf < uVar25) {
        uVar23 = (ulong)((uint)(uVar34 + 1) & 0xfffffff8);
        lVar24 = uVar34 * 4 + -0xc + lVar16;
        iVar8 = 0;
        iVar41 = 0;
        iVar42 = 0;
        iVar43 = 0;
        lVar29 = 0;
        iVar44 = 0;
        iVar45 = 0;
        iVar46 = 0;
        iVar47 = 0;
        do {
          puVar3 = (uint *)(lVar24 + -0x10 + lVar29 * 4);
          puVar1 = (uint *)(lVar24 + lVar29 * 4);
          uVar50 = puVar1[3] - (puVar1[3] >> 1 & _DAT_005ddbd0);
          uVar52 = puVar1[2] - (puVar1[2] >> 1 & _UNK_005ddbd4);
          uVar51 = puVar1[1] - (puVar1[1] >> 1 & _UNK_005ddbd8);
          uVar54 = *puVar1 - (*puVar1 >> 1 & _UNK_005ddbdc);
          uVar25 = puVar3[3] - (puVar3[3] >> 1 & _DAT_005ddbd0);
          uVar21 = puVar3[2] - (puVar3[2] >> 1 & _UNK_005ddbd4);
          uVar48 = puVar3[1] - (puVar3[1] >> 1 & _UNK_005ddbd8);
          uVar49 = *puVar3 - (*puVar3 >> 1 & _UNK_005ddbdc);
          uVar53 = (uVar50 & _DAT_005de010) + (uVar50 >> 2 & _DAT_005de010);
          uVar55 = (uVar52 & _UNK_005de014) + (uVar52 >> 2 & _UNK_005de014);
          uVar56 = (uVar51 & _UNK_005de018) + (uVar51 >> 2 & _UNK_005de018);
          uVar54 = (uVar54 & _UNK_005de01c) + (uVar54 >> 2 & _UNK_005de01c);
          uVar25 = (uVar25 & _DAT_005de010) + (uVar25 >> 2 & _DAT_005de010);
          uVar50 = (uVar21 & _UNK_005de014) + (uVar21 >> 2 & _UNK_005de014);
          uVar52 = (uVar48 & _UNK_005de018) + (uVar48 >> 2 & _UNK_005de018);
          uVar51 = (uVar49 & _UNK_005de01c) + (uVar49 >> 2 & _UNK_005de01c);
          uVar21 = (uVar53 >> 4) + uVar53 & _DAT_005d9980;
          uVar48 = (uVar55 >> 4) + uVar55 & _UNK_005d9984;
          uVar49 = (uVar56 >> 4) + uVar56 & _UNK_005d9988;
          uVar53 = (uVar54 >> 4) + uVar54 & _UNK_005d998c;
          uVar25 = (uVar25 >> 4) + uVar25 & _DAT_005d9980;
          uVar50 = (uVar50 >> 4) + uVar50 & _UNK_005d9984;
          uVar52 = (uVar52 >> 4) + uVar52 & _UNK_005d9988;
          uVar51 = (uVar51 >> 4) + uVar51 & _UNK_005d998c;
          uVar21 = (uVar21 >> 8) + uVar21;
          uVar48 = (uVar48 >> 8) + uVar48;
          uVar49 = (uVar49 >> 8) + uVar49;
          uVar53 = (uVar53 >> 8) + uVar53;
          uVar25 = (uVar25 >> 8) + uVar25;
          uVar50 = (uVar50 >> 8) + uVar50;
          uVar52 = (uVar52 >> 8) + uVar52;
          uVar51 = (uVar51 >> 8) + uVar51;
          iVar8 = iVar8 + ((uVar21 >> 0x10) + uVar21 & _DAT_005de340);
          iVar41 = iVar41 + ((uVar48 >> 0x10) + uVar48 & _UNK_005de344);
          iVar42 = iVar42 + ((uVar49 >> 0x10) + uVar49 & _UNK_005de348);
          iVar43 = iVar43 + ((uVar53 >> 0x10) + uVar53 & _UNK_005de34c);
          iVar44 = iVar44 + ((uVar25 >> 0x10) + uVar25 & _DAT_005de340);
          iVar45 = iVar45 + ((uVar50 >> 0x10) + uVar50 & _UNK_005de344);
          iVar46 = iVar46 + ((uVar52 >> 0x10) + uVar52 & _UNK_005de348);
          iVar47 = iVar47 + ((uVar51 >> 0x10) + uVar51 & _UNK_005de34c);
          lVar29 = lVar29 + -8;
        } while (-lVar29 != uVar23);
        iVar8 = iVar47 + iVar43 + iVar45 + iVar41 + iVar46 + iVar42 + iVar44 + iVar8;
        if (uVar34 + 1 == uVar23) goto LAB_004cec59;
        uVar34 = uVar34 - uVar23;
      }
      lVar24 = uVar34 + 1;
      do {
        uVar25 = *(uint *)(lVar16 + -4 + lVar24 * 4);
        uVar25 = uVar25 - (uVar25 >> 1 & 0x55555555);
        uVar25 = (uVar25 & 0x33333333) + (uVar25 >> 2 & 0x33333333);
        uVar25 = (uVar25 >> 4) + uVar25 & 0xf0f0f0f;
        uVar25 = (uVar25 >> 8) + uVar25;
        iVar8 = iVar8 + ((uVar25 >> 0x10) + uVar25 & 0xff);
        lVar29 = lVar24 + -1;
        bVar39 = 0 < lVar24;
        lVar24 = lVar29;
      } while (lVar29 != 0 && bVar39);
    }
LAB_004cec59:
    uVar25 = -(iVar15 - iVar8);
    if ((int)uVar25 < 0) {
      uVar25 = iVar15 - iVar8;
    }
    if (uVar25 < uVar30) {
      if (local_100 != (long *)(lVar22 + 0x38)) {
        uVar25 = 0xffffffff;
        if (-1 < (int)uVar20) {
          uVar21 = (uVar20 >> 5) << 5;
          uVar30 = uVar20 >> 5;
LAB_004ceca0:
          uVar20 = *(uint *)((long)puVar13 + (ulong)uVar30 * 4);
          if (uVar20 == 0) goto code_r0x004cecab;
          uVar25 = 0x1f;
          if (uVar20 != 0) {
            for (; uVar20 >> uVar25 == 0; uVar25 = uVar25 - 1) {
            }
          }
          uVar25 = (uVar25 ^ 0x1f | uVar21) ^ 0x1f;
        }
LAB_004cecc7:
        *(uint *)(local_f8 + uVar31 * 5 + 4) = uVar25;
        uVar34 = (ulong)(((int)uVar25 >> 5) + 1);
        if (uVar34 < 5) {
          uVar34 = 4;
        }
        if (uVar34 < 5) {
          free((void *)*local_100);
          *plVar33 = 0;
          puVar13 = (undefined8 *)0x0;
        }
        else if (uVar34 == local_f8[uVar31 * 5 + 3]) {
          puVar13 = (undefined8 *)*local_100;
        }
        else {
          free((void *)*local_100);
          puVar13 = malloc(uVar34 * 4);
          *plVar33 = (long)puVar13;
        }
        puVar11[uVar31 * 5 + 3] = uVar34;
        puVar10 = puVar11 + uVar31 * 5 + 1;
        if (puVar13 != (undefined8 *)0x0) {
          puVar10 = puVar13;
        }
        if (*(undefined8 **)(lVar22 + 0x38) != (undefined8 *)0x0) {
          puVar37 = *(undefined8 **)(lVar22 + 0x38);
        }
        memcpy(puVar10,puVar37,uVar34 << 2);
        *(undefined1 *)((long)puVar11 + uVar31 * 0x28 + 0x24) = *(undefined1 *)(lVar22 + 0x5c);
      }
                    /* try { // try from 004ced9f to 004cedd1 has its CatchHandler @ 004cf3a7 */
      if (((local_184 == *(uint *)((long)plVar26 + 0xcc)) &&
          (local_174 == *(uint *)((long)plVar26 + 0xdc))) &&
         (cVar7 = (**(code **)(*plVar26 + 400))(plVar26,&local_190), cVar7 != '\0')) {
        Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                  ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_120,
                   (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_190);
        Array<juce::AudioChannelSet,juce::DummyCriticalSection,0>::operator=
                  ((Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_110,
                   (Array<juce::AudioChannelSet,juce::DummyCriticalSection,0> *)&local_180);
      }
    }
  }
  if (0 < (int)local_138._12_4_) {
    lVar16 = 0;
    lVar22 = 0;
    do {
      free(*(void **)(local_138._0_8_ + lVar16));
      lVar22 = lVar22 + 1;
      lVar16 = lVar16 + 0x28;
    } while (lVar22 < (int)local_138._12_4_);
  }
  local_138._12_4_ = 0;
  auVar4 = local_138;
  uVar9 = local_138._0_8_;
  local_138 = auVar4;
  free((void *)uVar9);
  uVar34 = local_d0;
  if (0 < (int)local_148._12_4_) {
    lVar16 = 0;
    lVar22 = 0;
    do {
      free(*(void **)(local_148._0_8_ + lVar16));
      lVar22 = lVar22 + 1;
      lVar16 = lVar16 + 0x28;
    } while (lVar22 < (int)local_148._12_4_);
  }
  local_148._12_4_ = 0;
  auVar4 = local_148;
  uVar9 = local_148._0_8_;
  local_148 = auVar4;
  free((void *)uVar9);
LAB_004cd5e2:
  uVar31 = local_150 + 1;
  param_2 = local_70;
  if ((long)*(int *)((long)&local_a8 + local_58) <= (long)uVar31) goto LAB_004cd540;
  goto LAB_004cd60c;
code_r0x004cd7c9:
  uVar21 = uVar21 - 0x20;
  bVar40 = (int)uVar30 < 1;
  uVar30 = uVar30 - 1;
  if (bVar40) goto LAB_004cd7d5;
  goto LAB_004cd7c0;
code_r0x004cd939:
  uVar21 = uVar21 - 0x20;
  bVar39 = (int)uVar20 < 1;
  uVar20 = uVar20 - 1;
  if (bVar39) goto LAB_004cd95e;
  goto LAB_004cd930;
code_r0x004cdae9:
  uVar21 = uVar21 - 0x20;
  bVar39 = (int)uVar20 < 1;
  uVar20 = uVar20 - 1;
  if (bVar39) goto LAB_004cdb0b;
  goto LAB_004cdae0;
code_r0x004cdc39:
  uVar20 = uVar20 - 0x20;
  bVar39 = (int)uVar25 < 1;
  uVar25 = uVar25 - 1;
  if (bVar39) goto LAB_004cdc52;
  goto LAB_004cdc30;
code_r0x004ceef9:
  uVar20 = uVar20 - 0x20;
  bVar39 = (int)uVar30 < 1;
  uVar30 = uVar30 - 1;
  if (bVar39) goto LAB_004cef1b;
  goto LAB_004ceef0;
code_r0x004cde19:
  uVar20 = uVar20 - 0x20;
  bVar39 = (int)uVar25 < 1;
  uVar25 = uVar25 - 1;
  if (bVar39) goto LAB_004cde32;
  goto LAB_004cde10;
code_r0x004cdfa9:
  uVar20 = uVar20 - 0x20;
  bVar39 = (int)uVar30 < 1;
  uVar30 = uVar30 - 1;
  if (bVar39) goto LAB_004cdfc2;
  goto LAB_004cdfa0;
code_r0x004ce1d9:
  uVar20 = uVar20 - 0x20;
  bVar39 = (int)uVar25 < 1;
  uVar25 = uVar25 - 1;
  if (bVar39) goto LAB_004ce1fb;
  goto LAB_004ce1d0;
code_r0x004ce409:
  uVar20 = uVar20 - 0x20;
  bVar39 = (int)uVar25 < 1;
  uVar25 = uVar25 - 1;
  if (bVar39) goto LAB_004ce42b;
  goto LAB_004ce400;
code_r0x004cecab:
  uVar21 = uVar21 - 0x20;
  bVar39 = (int)uVar30 < 1;
  uVar30 = uVar30 - 1;
  if (bVar39) goto LAB_004cecc7;
  goto LAB_004ceca0;
}


