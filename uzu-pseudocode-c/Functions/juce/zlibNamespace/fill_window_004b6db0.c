// Function : fill_window
// Namespace: juce:zlibNamespace
// Entry    : 004b6db0
// Prototype: undefined fill_window(long * param_1)
// Body     : 004b6db0 - 004b722a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::fill_window(juce::zlibNamespace::internal_state*) */

void __cdecl juce::zlibNamespace::fill_window(long *param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  int iVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  short sVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  size_t __n;
  ulong *__dest;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar3 = *(uint *)(param_1 + 10);
  uVar17 = (ulong)uVar3;
  uVar13 = *(uint *)((long)param_1 + 0xb4);
  uVar21 = uVar17;
  do {
    uVar22 = *(uint *)((long)param_1 + 0xac);
    uVar15 = (int)param_1[0xd] - (uVar13 + uVar22);
    if ((int)uVar21 + (uVar3 - 0x106) <= uVar22) {
      memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar17),(ulong)(uVar3 - uVar15));
      *(uint *)(param_1 + 0x16) = (int)param_1[0x16] - uVar3;
      uVar22 = *(int *)((long)param_1 + 0xac) - uVar3;
      *(uint *)((long)param_1 + 0xac) = uVar22;
      param_1[0x13] = param_1[0x13] - uVar17;
      if (uVar22 < *(uint *)((long)param_1 + 0x172c)) {
        *(uint *)((long)param_1 + 0x172c) = uVar22;
      }
      auVar10 = _DAT_006524b0;
      iVar9 = _UNK_005de33c;
      iVar8 = _UNK_005de338;
      iVar7 = _UNK_005de334;
      iVar11 = _DAT_005de330;
      uVar13 = *(uint *)((long)param_1 + 0x84);
      lVar18 = (ulong)uVar13 * 2 + param_1[0xf];
      uVar20 = *(uint *)(param_1 + 10);
      if (uVar13 - 1 < 7) {
LAB_004b6f1d:
        lVar12 = 0;
        do {
          uVar2 = *(ushort *)(lVar18 + -2 + lVar12 * 2);
          sVar19 = uVar2 - (short)uVar20;
          if (uVar2 < uVar20) {
            sVar19 = 0;
          }
          *(short *)(lVar18 + -2 + lVar12 * 2) = sVar19;
          lVar12 = lVar12 + -1;
        } while (-uVar13 != (int)lVar12);
      }
      else {
        uVar23 = (ulong)(uVar13 - 1) + 1;
        uVar21 = uVar23 & 0x1fffffff8;
        auVar25._4_4_ = uVar20;
        auVar25._0_4_ = uVar20;
        auVar25._8_4_ = uVar20;
        auVar25._12_4_ = uVar20;
        lVar12 = 0;
        do {
          auVar26 = auVar25 ^ auVar10;
          auVar29._0_4_ = -(uint)(auVar26._0_4_ < iVar11);
          auVar29._4_4_ = -(uint)(auVar26._4_4_ < iVar7);
          auVar29._8_4_ = -(uint)(auVar26._8_4_ < iVar8);
          auVar29._12_4_ = -(uint)(auVar26._12_4_ < iVar9);
          auVar26._8_4_ = 0xffffffff;
          auVar26._0_8_ = 0xffffffffffffffff;
          auVar26._12_4_ = 0xffffffff;
          auVar26 = auVar29 ^ auVar26 | auVar25 & auVar29;
          auVar30._0_4_ = (int)auVar26._0_2_;
          auVar30._4_4_ = (int)auVar26._4_2_;
          auVar30._8_4_ = (int)auVar26._8_2_;
          auVar30._12_4_ = (int)auVar26._12_2_;
          auVar26 = packssdw(auVar30,auVar30);
          auVar26 = pshuflw(auVar25 & auVar29,auVar26,0x1b);
          auVar26 = pshufhw(auVar26,auVar26,0x1b);
          auVar26 = psubusw(*(undefined1 (*) [16])(lVar18 + -0x10 + lVar12 * 2),auVar26);
          *(undefined1 (*) [16])(lVar18 + -0x10 + lVar12 * 2) = auVar26;
          lVar12 = lVar12 + -8;
        } while (-lVar12 != (uVar23 & 0xfffffffffffffff8));
        if (uVar23 != uVar21) {
          lVar18 = lVar18 + uVar21 * -2;
          uVar13 = uVar13 - (int)uVar21;
          goto LAB_004b6f1d;
        }
      }
      lVar18 = (ulong)uVar20 * 2 + param_1[0xe];
      if (uVar20 - 1 < 7) {
        uVar13 = uVar20;
LAB_004b6fef:
        lVar12 = 0;
        do {
          uVar2 = *(ushort *)(lVar18 + -2 + lVar12 * 2);
          sVar19 = uVar2 - (short)uVar20;
          if (uVar2 < uVar20) {
            sVar19 = 0;
          }
          *(short *)(lVar18 + -2 + lVar12 * 2) = sVar19;
          lVar12 = lVar12 + -1;
        } while (-uVar13 != (int)lVar12);
      }
      else {
        uVar21 = (ulong)(uVar20 - 1) + 1;
        uVar23 = uVar21 & 0x1fffffff8;
        auVar24._4_4_ = uVar20;
        auVar24._0_4_ = uVar20;
        auVar24._8_4_ = uVar20;
        auVar24._12_4_ = uVar20;
        lVar12 = 0;
        do {
          auVar25 = auVar24 ^ auVar10;
          auVar27._0_4_ = -(uint)(auVar25._0_4_ < iVar11);
          auVar27._4_4_ = -(uint)(auVar25._4_4_ < iVar7);
          auVar27._8_4_ = -(uint)(auVar25._8_4_ < iVar8);
          auVar27._12_4_ = -(uint)(auVar25._12_4_ < iVar9);
          auVar6._8_4_ = 0xffffffff;
          auVar6._0_8_ = 0xffffffffffffffff;
          auVar6._12_4_ = 0xffffffff;
          auVar25 = auVar27 ^ auVar6 | auVar24 & auVar27;
          auVar28._0_4_ = (int)auVar25._0_2_;
          auVar28._4_4_ = (int)auVar25._4_2_;
          auVar28._8_4_ = (int)auVar25._8_2_;
          auVar28._12_4_ = (int)auVar25._12_2_;
          auVar25 = packssdw(auVar28,auVar28);
          auVar25 = pshuflw(auVar24 & auVar27,auVar25,0x1b);
          auVar25 = pshufhw(auVar25,auVar25,0x1b);
          auVar25 = psubusw(*(undefined1 (*) [16])(lVar18 + -0x10 + lVar12 * 2),auVar25);
          *(undefined1 (*) [16])(lVar18 + -0x10 + lVar12 * 2) = auVar25;
          lVar12 = lVar12 + -8;
        } while (-lVar12 != (uVar21 & 0xfffffffffffffff8));
        if (uVar21 != uVar23) {
          lVar18 = lVar18 + uVar23 * -2;
          uVar13 = uVar20 - (int)uVar23;
          goto LAB_004b6fef;
        }
      }
      uVar15 = uVar15 + uVar3;
    }
    plVar4 = (long *)*param_1;
    uVar20 = *(uint *)(plVar4 + 1);
    if (uVar20 == 0) {
LAB_004b7190:
      uVar21 = param_1[0x2e7];
      uVar17 = param_1[0xd];
      uVar23 = uVar17 - uVar21;
      if (uVar21 <= uVar17 && uVar23 != 0) {
        uVar16 = (ulong)*(uint *)((long)param_1 + 0xb4) + (ulong)*(uint *)((long)param_1 + 0xac);
        if (uVar21 < uVar16) {
          __n = 0x102;
          if (uVar17 - uVar16 < 0x102) {
            __n = uVar17 - uVar16;
          }
          memset((void *)(param_1[0xc] + uVar16),0,__n);
          lVar18 = __n + uVar16;
        }
        else {
          uVar17 = (uVar16 + 0x102) - uVar21;
          if (uVar16 + 0x102 < uVar21 || uVar17 == 0) {
            return;
          }
          if (uVar23 < uVar17) {
            uVar17 = uVar23;
          }
          memset((void *)(uVar21 + param_1[0xc]),0,uVar17 & 0xffffffff);
          lVar18 = uVar17 + param_1[0x2e7];
        }
        param_1[0x2e7] = lVar18;
      }
      return;
    }
    uVar13 = *(uint *)((long)param_1 + 0xb4);
    if (uVar20 <= uVar15) {
      uVar15 = uVar20;
    }
    if (uVar15 != 0) {
      __dest = (ulong *)((ulong)uVar22 + param_1[0xc] + (ulong)uVar13);
      *(uint *)(plVar4 + 1) = uVar20 - uVar15;
      uVar21 = (ulong)uVar15;
      memcpy(__dest,(void *)*plVar4,uVar21);
      if (*(int *)(plVar4[7] + 0x30) == 2) {
        uVar23 = crc32_z((uint)plVar4[0xc],__dest,uVar21);
LAB_004b709f:
        plVar4[0xc] = uVar23;
      }
      else if (*(int *)(plVar4[7] + 0x30) == 1) {
        uVar23 = adler32_z(plVar4[0xc],(byte *)__dest,uVar21);
        goto LAB_004b709f;
      }
      *plVar4 = *plVar4 + uVar21;
      plVar4[2] = plVar4[2] + uVar21;
      uVar13 = *(uint *)((long)param_1 + 0xb4);
    }
    uVar13 = uVar13 + uVar15;
    *(uint *)((long)param_1 + 0xb4) = uVar13;
    iVar11 = *(int *)((long)param_1 + 0x172c);
    uVar22 = iVar11 + uVar13;
    if (2 < uVar22) {
      uVar20 = *(int *)((long)param_1 + 0xac) - iVar11;
      uVar23 = (ulong)uVar20;
      lVar18 = param_1[0xc];
      bVar1 = *(byte *)(lVar18 + uVar23);
      *(uint *)(param_1 + 0x10) = (uint)bVar1;
      lVar12 = param_1[0x12];
      uVar15 = *(uint *)((long)param_1 + 0x8c);
      uVar20 = uVar15 & ((uint)*(byte *)(lVar18 + (ulong)(uVar20 + 1)) ^
                        (uint)bVar1 << ((byte)lVar12 & 0x1f));
      uVar21 = (ulong)uVar20;
      *(uint *)(param_1 + 0x10) = uVar20;
      do {
        iVar11 = iVar11 + -1;
        if (iVar11 == -1) break;
        uVar20 = (uint)uVar23;
        uVar14 = uVar15 & ((uint)*(byte *)(lVar18 + (ulong)(uVar20 + 2)) ^
                          (int)uVar21 << ((byte)lVar12 & 0x1f));
        uVar21 = (ulong)uVar14;
        *(uint *)(param_1 + 0x10) = uVar14;
        lVar5 = param_1[0xf];
        *(undefined2 *)(param_1[0xe] + (ulong)(*(uint *)(param_1 + 0xb) & uVar20) * 2) =
             *(undefined2 *)(lVar5 + uVar21 * 2);
        *(short *)(lVar5 + uVar21 * 2) = (short)uVar23;
        uVar23 = (ulong)(uVar20 + 1);
        *(int *)((long)param_1 + 0x172c) = iVar11;
        uVar22 = uVar22 - 1;
      } while (2 < uVar22);
    }
    if ((0x105 < uVar13) || (*(int *)(*param_1 + 8) == 0)) goto LAB_004b7190;
    uVar21 = (ulong)*(uint *)(param_1 + 10);
  } while( true );
}


