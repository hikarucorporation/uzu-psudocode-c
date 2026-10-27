// Function : _get_bounds
// Namespace: 
// Entry    : 00452bc0
// Prototype: ulong _get_bounds(long param_1, uint param_2, double * param_3, undefined1 param_4)
// Body     : 00452bc0 - 004586a8


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _get_bounds(OT::cff1::accelerator_t const*, unsigned int, bounds_t&, bool) */

ulong __cdecl _get_bounds(long param_1,uint param_2,double *param_3,undefined1 param_4)

{
  char *pcVar1;
  ushort *puVar2;
  undefined1 uVar3;
  double dVar4;
  undefined8 uVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  double *pdVar14;
  byte *pbVar15;
  char *pcVar16;
  int iVar17;
  uint uVar18;
  char *pcVar19;
  uint uVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulong uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double local_1260;
  double dStack_1258;
  double local_1250;
  double dStack_1248;
  undefined1 local_11b8 [16];
  char local_11a8;
  uint local_11a4;
  double local_11a0 [4];
  double local_1180;
  double dStack_1178;
  double local_1170;
  double dStack_1168;
  double local_1160;
  double dStack_1158;
  double local_1150;
  double dStack_1148;
  undefined8 local_198;
  ulong local_190;
  undefined8 local_188;
  char local_180;
  undefined2 local_17f;
  undefined8 local_17c;
  undefined4 local_174;
  char local_170;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined4 local_15c;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_78;
  ushort *local_70;
  undefined4 local_68;
  ushort *local_60;
  double local_58;
  double dStack_50;
  undefined2 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined1 local_38;
  
  dVar36 = _UNK_005de0f8;
  *param_3 = _DAT_005de0f0;
  param_3[1] = dVar36;
  dVar36 = _UNK_005de108;
  param_3[2] = _DAT_005de100;
  param_3[3] = dVar36;
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0;
  }
  uVar11 = 0;
  if (*(uint *)(param_1 + 0x128) <= param_2) {
    return 0;
  }
  pcVar1 = *(char **)(param_1 + 0x88);
  pcVar19 = (char *)&_hb_NullPool;
  if ((uint *)pcVar1 != &_hb_NullPool) {
    if (*pcVar1 == '\x03') {
      if (*(short *)(pcVar1 + 1) == 0) {
        uVar8 = 0;
      }
      else {
        pcVar19 = pcVar1 + 3;
        uVar8 = *(ushort *)(pcVar1 + 1);
      }
      uVar7 = uVar8 << 8 | uVar8 >> 8;
      if (1 < uVar7) {
        iVar17 = uVar7 - 2;
        iVar21 = 0;
        do {
          while( true ) {
            uVar9 = (uint)(iVar17 + iVar21) >> 1;
            if (param_2 < (ushort)(*(ushort *)(pcVar19 + (ulong)uVar9 * 3) << 8 |
                                  *(ushort *)(pcVar19 + (ulong)uVar9 * 3) >> 8)) break;
            pcVar16 = pcVar19 + (ulong)uVar9 * 3;
            if (param_2 < (ushort)(*(ushort *)(pcVar16 + 3) << 8 | *(ushort *)(pcVar16 + 3) >> 8))
            goto LAB_00452cd1;
            iVar21 = uVar9 + 1;
            if (iVar17 < iVar21) goto LAB_00452cb4;
          }
          iVar17 = uVar9 - 1;
        } while (iVar21 <= iVar17);
      }
LAB_00452cb4:
      if (uVar8 == 0) {
        pcVar16 = (char *)&_hb_NullPool;
      }
      else {
        pcVar16 = pcVar1 + (ulong)(uVar7 - 1) * 3 + 3;
      }
LAB_00452cd1:
      pbVar15 = (byte *)(pcVar16 + 2);
    }
    else {
      if (*pcVar1 != '\0') goto LAB_00452cd9;
      pbVar15 = (byte *)(pcVar1 + (ulong)param_2 + 1);
    }
    uVar11 = (ulong)*pbVar15;
  }
LAB_00452cd9:
  auVar37 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[]
                      (*(CFFIndex<OT::IntType<unsigned_short,2u>> **)(param_1 + 0x78),param_2);
  local_70 = *(ushort **)(param_1 + 0x70);
  if ((uint)uVar11 < *(uint *)(param_1 + 0x11c)) {
    puVar10 = (undefined4 *)(uVar11 * 0x28 + *(long *)(param_1 + 0x120));
  }
  else {
    puVar10 = &_hb_NullPool;
  }
  puVar2 = *(ushort **)(puVar10 + 8);
  memset(&local_11a4,0,0x100c);
  local_11a8 = '\0';
  local_11b8._0_12_ = auVar37._0_12_;
  local_11b8._12_4_ = 0;
  local_170 = '\0';
  local_150 = 0;
  uStack_148 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_16c = 0;
  uStack_164 = 0;
  local_15c = 0;
  local_190 = auVar37._8_8_ & 0xffffffff;
  local_188 = 0;
  local_17f = 1;
  local_17c = 0;
  local_174 = 0;
  local_58 = 0.0;
  dStack_50 = 0.0;
  if ((local_70 == (ushort *)0x0) || (uVar8 = *local_70 << 8 | *local_70 >> 8, uVar8 < 0x4d8)) {
    local_78 = 0x6b;
  }
  else if (uVar8 < 0x846c) {
    local_78 = 0x46b;
  }
  else {
    local_78 = 0x8000;
  }
  if ((puVar2 == (ushort *)0x0) || (uVar8 = *puVar2 << 8 | *puVar2 >> 8, uVar8 < 0x4d8)) {
    local_68 = 0x6b;
  }
  else if (uVar8 < 0x846c) {
    local_68 = 0x46b;
  }
  else {
    local_68 = 0x8000;
  }
  local_40 = 0;
  local_48 = 0;
  local_44 = 0;
  uVar3 = false;
  local_180 = '\0';
  iVar21 = 200000;
  dVar36 = DAT_005de740;
  uVar9 = 0;
  uVar11 = _DAT_005d91b0;
  uVar35 = _UNK_005d91b8;
  local_1260 = _DAT_005de0f0;
  dStack_1258 = _UNK_005de0f8;
  local_1250 = _DAT_005de100;
  dStack_1248 = _UNK_005de108;
  local_60 = puVar2;
  local_38 = param_4;
  do {
    local_198 = auVar37._0_8_;
    uVar12 = uVar9 + 1;
    uVar18 = 0xffff;
    uVar20 = auVar37._8_4_;
    if (uVar20 < uVar12) {
switchD_00452f78_caseD_101:
      CFF::opset_t<CFF::number_t>::process_op(uVar18,(long *)local_11b8);
      dVar36 = DAT_005de740;
      uVar11 = _DAT_005d91b0;
      uVar35 = _UNK_005d91b8;
    }
    else {
      uVar5 = local_11b8._0_8_;
      pbVar15 = (byte *)(local_11b8._0_8_ + (ulong)uVar9);
      local_11b8._12_4_ = uVar12;
      uVar6 = (uint)*pbVar15;
      if (*pbVar15 == 0xc) {
        uVar9 = uVar9 + 2;
        if (uVar20 < uVar9) goto switchD_00452f78_caseD_101;
        uVar13 = (ulong)uVar12;
        local_11b8._12_4_ = uVar9;
        uVar12 = uVar9;
        uVar6 = *(byte *)(uVar5 + uVar13) | 0x100;
      }
      uVar18 = uVar6;
      if (uVar18 - 1 < 0x1f) {
                    /* WARNING: Could not recover jumptable at 0x00452ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (*(code *)(&DAT_005e1954 + *(int *)(&DAT_005e1954 + (ulong)(uVar18 - 1) * 4)))();
        return uVar11;
      }
      switch(uVar18) {
      case 0xff:
        if (uVar12 + 4 <= uVar20) {
          if (uVar12 < uVar20) {
            uVar9 = *(uint *)(uVar5 + (ulong)uVar12);
            if (0x200 < local_11a4) goto LAB_004583cc;
LAB_00452faa:
            uVar13 = (ulong)local_11a4;
            local_11a4 = local_11a4 + 1;
            pdVar14 = local_11a0 + uVar13;
          }
          else {
            uVar12 = uVar20 + 1;
            uVar9 = _hb_NullPool;
            if (local_11a4 < 0x201) goto LAB_00452faa;
LAB_004583cc:
            local_11a8 = '\x01';
            _hb_CrapPool = 0;
            pdVar14 = (double *)&_hb_CrapPool;
          }
          *pdVar14 = (double)(int)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                                  uVar9 << 0x18) * dVar36;
          local_11b8._12_4_ = uVar12 + 4;
        }
        goto LAB_00457f96;
      case 0x100:
        break;
      default:
        goto switchD_00452f78_caseD_101;
      case 0x122:
        if (local_11a4 == 7) {
          if (!(bool)uVar3) {
            uVar3 = true;
            if (local_58 < local_1260) {
              local_1260 = local_58;
            }
            if (local_1250 < local_58) {
              local_1250 = local_58;
            }
            if (dStack_50 < dStack_1258) {
              dStack_1258 = dStack_50;
            }
            if (dStack_1248 < dStack_50) {
              dStack_1248 = dStack_50;
            }
          }
          dVar34 = local_58 + local_11a0[0];
          if (dVar34 < local_1260) {
            local_1260 = dVar34;
          }
          if (local_1250 < dVar34) {
            local_1250 = dVar34;
          }
          if (dStack_50 < dStack_1258) {
            dStack_1258 = dStack_50;
          }
          if (dStack_1248 < dStack_50) {
            dStack_1248 = dStack_50;
          }
          dVar34 = local_11a0[1] + local_58 + local_11a0[0];
          dVar30 = local_11a0[2] + dStack_50;
          if (dVar34 < local_1260) {
            local_1260 = dVar34;
          }
          dVar23 = local_11a0[3] + dVar34;
          dVar22 = local_1180 + dVar23;
          dVar24 = dStack_1178 + dVar22;
          local_58 = local_1170 + dVar24;
          if (local_1250 < dVar34) {
            local_1250 = dVar34;
          }
          if (dVar30 < dStack_1258) {
            dStack_1258 = dVar30;
          }
          if (dStack_1248 < dVar30) {
            dStack_1248 = dVar30;
          }
          if (dVar23 < local_1260) {
            local_1260 = dVar23;
          }
          if (local_1250 < dVar23) {
            local_1250 = dVar23;
          }
          if (dVar30 < dStack_1258) {
            dStack_1258 = dVar30;
          }
          if (dStack_1248 < dVar30) {
            dStack_1248 = dVar30;
          }
          if (dVar22 < local_1260) {
            local_1260 = dVar22;
          }
          if (local_1250 < dVar22) {
            local_1250 = dVar22;
          }
          if (dVar30 < dStack_1258) {
            dStack_1258 = dVar30;
          }
          if (dStack_1248 < dVar30) {
            dStack_1248 = dVar30;
          }
          if (dVar24 < local_1260) {
            local_1260 = dVar24;
          }
          if (local_1250 < dVar24) {
            local_1250 = dVar24;
          }
          if (dStack_50 < dStack_1258) {
            dStack_1258 = dStack_50;
          }
          if (dStack_1248 < dStack_50) {
            dStack_1248 = dStack_50;
          }
          if (local_58 < local_1260) {
            local_1260 = local_58;
          }
          if (local_1250 < local_58) {
            local_1250 = local_58;
          }
          if (dStack_50 < dStack_1258) {
            dStack_1258 = dStack_50;
          }
          if (dStack_1248 < dStack_50) {
            dStack_1248 = dStack_50;
          }
        }
        else {
LAB_00458323:
          local_11b8._12_4_ = uVar20 + 1;
        }
        break;
      case 0x123:
        if (local_11a4 != 0xd) goto LAB_00458323;
        if ((bool)uVar3) {
          if (local_1260 <= local_58 + local_11a0[0]) goto LAB_004559d4;
LAB_0045772c:
          local_1260 = local_58 + local_11a0[0];
          if (local_1250 < local_1260) {
LAB_004559e0:
            local_1250 = local_58 + local_11a0[0];
          }
        }
        else {
          uVar3 = true;
          if (local_58 < local_1260) {
            local_1260 = local_58;
          }
          if (local_1250 < local_58) {
            local_1250 = local_58;
          }
          if (dStack_50 < dStack_1258) {
            dStack_1258 = dStack_50;
          }
          if (dStack_1248 < dStack_50) {
            dStack_1248 = dStack_50;
            if (local_1260 <= local_58 + local_11a0[0]) goto LAB_004559d4;
            goto LAB_0045772c;
          }
          if (local_58 + local_11a0[0] < local_1260) goto LAB_0045772c;
LAB_004559d4:
          if (local_1250 < local_58 + local_11a0[0]) goto LAB_004559e0;
        }
        dStack_50 = dStack_50 + local_11a0[1];
        local_58 = local_58 + local_11a0[0];
        if (dStack_50 < dStack_1258) {
          dStack_1258 = dStack_50;
        }
        if (dStack_1248 < dStack_50) {
          dStack_1248 = dStack_50;
        }
        if (local_58 + local_11a0[2] < local_1260) {
          local_1260 = local_58 + local_11a0[2];
        }
        dStack_50 = dStack_50 + local_11a0[3];
        local_58 = local_58 + local_11a0[2];
        if (local_1250 < local_58) {
          local_1250 = local_58;
        }
        if (dStack_50 < dStack_1258) {
          dStack_1258 = dStack_50;
        }
        if (dStack_1248 < dStack_50) {
          dStack_1248 = dStack_50;
        }
        local_58 = local_58 + local_1180;
        dStack_50 = dStack_50 + dStack_1178;
        if (local_1260 <= local_58) {
          if (local_58 <= local_1250) goto LAB_00455ac9;
LAB_00456080:
          local_1250 = local_58;
          if (dStack_50 < dStack_1258) goto LAB_00455adb;
LAB_0045609b:
          if (dStack_50 <= dStack_1248) goto LAB_00455aef;
LAB_004560a5:
          dStack_1248 = dStack_50;
          if (local_58 + local_1170 < local_1260) goto LAB_00455afd;
LAB_004560bd:
          if (local_58 + local_1170 <= local_1250) goto LAB_00455b11;
LAB_004560c7:
          local_1250 = local_58 + local_1170;
          if (dStack_50 + dStack_1168 < dStack_1258) goto LAB_00455b23;
LAB_004560e3:
          if (dStack_50 + dStack_1168 <= dStack_1248) goto LAB_00455b37;
LAB_004560ed:
          dStack_1248 = dStack_50 + dStack_1168;
          local_58 = local_58 + local_1170 + local_1160;
          dStack_50 = dStack_1248 + dStack_1158;
          if (local_58 < local_1260) goto LAB_00455b46;
LAB_00456106:
          if (local_58 <= local_1250) goto LAB_00455b5a;
LAB_00456110:
          local_1250 = local_58;
          if (dStack_50 < dStack_1258) goto LAB_00455b6c;
LAB_0045612c:
          if (dStack_1248 < dStack_50) goto LAB_00456132;
        }
        else {
          local_1260 = local_58;
          if (local_1250 < local_58) goto LAB_00456080;
LAB_00455ac9:
          if (dStack_1258 <= dStack_50) goto LAB_0045609b;
LAB_00455adb:
          dStack_1258 = dStack_50;
          if (dStack_1248 < dStack_50) goto LAB_004560a5;
LAB_00455aef:
          if (local_1260 <= local_58 + local_1170) goto LAB_004560bd;
LAB_00455afd:
          local_1260 = local_58 + local_1170;
          if (local_1250 < local_1260) goto LAB_004560c7;
LAB_00455b11:
          if (dStack_1258 <= dStack_50 + dStack_1168) goto LAB_004560e3;
LAB_00455b23:
          dStack_1258 = dStack_50 + dStack_1168;
          if (dStack_1248 < dStack_1258) goto LAB_004560ed;
LAB_00455b37:
          local_58 = local_58 + local_1170 + local_1160;
          dStack_50 = dStack_50 + dStack_1168 + dStack_1158;
          if (local_1260 <= local_58) goto LAB_00456106;
LAB_00455b46:
          local_1260 = local_58;
          if (local_1250 < local_58) goto LAB_00456110;
LAB_00455b5a:
          if (dStack_1258 <= dStack_50) goto LAB_0045612c;
LAB_00455b6c:
          dStack_1258 = dStack_50;
          if (dStack_1248 < dStack_50) {
LAB_00456132:
            dStack_1248 = dStack_50;
          }
        }
        local_58 = local_58 + local_1150;
        dStack_50 = dStack_50 + dStack_1148;
        if (local_58 < local_1260) {
          local_1260 = local_58;
        }
        if (local_1250 < local_58) {
          local_1250 = local_58;
        }
        if (dStack_50 < dStack_1258) {
          dStack_1258 = dStack_50;
        }
        if (dStack_1248 < dStack_50) {
          dStack_1248 = dStack_50;
        }
        break;
      case 0x124:
        if (local_11a4 != 9) goto LAB_00458323;
        if ((bool)uVar3) {
          if (local_1260 <= local_58 + local_11a0[0]) goto LAB_00455bd7;
LAB_004577b3:
          local_1260 = local_58 + local_11a0[0];
          if (local_1250 < local_1260) {
LAB_00455be5:
            local_1250 = local_58 + local_11a0[0];
          }
        }
        else {
          uVar3 = true;
          if (local_58 < local_1260) {
            local_1260 = local_58;
          }
          if (local_1250 < local_58) {
            local_1250 = local_58;
          }
          if (dStack_50 < dStack_1258) {
            dStack_1258 = dStack_50;
          }
          if (dStack_1248 < dStack_50) {
            dStack_1248 = dStack_50;
            if (local_1260 <= local_58 + local_11a0[0]) goto LAB_00455bd7;
            goto LAB_004577b3;
          }
          if (local_58 + local_11a0[0] < local_1260) goto LAB_004577b3;
LAB_00455bd7:
          if (local_1250 < local_58 + local_11a0[0]) goto LAB_00455be5;
        }
        dVar34 = dStack_50 + local_11a0[1];
        local_58 = local_58 + local_11a0[0];
        if (dVar34 < dStack_1258) {
          dStack_1258 = dVar34;
        }
        if (dStack_1248 < dVar34) {
          dStack_1248 = dVar34;
        }
        if (local_58 + local_11a0[2] < local_1260) {
          local_1260 = local_58 + local_11a0[2];
        }
        dVar34 = dVar34 + local_11a0[3];
        dVar23 = local_58 + local_11a0[2];
        dVar22 = dVar23 + local_1180;
        dVar30 = dStack_1178 + dVar22;
        dVar24 = local_1170 + dVar30;
        dVar25 = dStack_1168 + dVar34;
        local_58 = local_1160 + dVar24;
        if (local_1250 < dVar23) {
          local_1250 = dVar23;
        }
        dVar23 = dVar34;
        if (dStack_1258 <= dVar34) {
          dVar23 = dStack_1258;
        }
        if (dStack_1248 < dVar34) {
          dStack_1248 = dVar34;
        }
        dVar26 = dVar22;
        if (local_1260 <= dVar22) {
          dVar26 = local_1260;
        }
        local_1260 = dVar26;
        if (local_1250 < dVar22) {
          local_1250 = dVar22;
        }
        dStack_1258 = dVar34;
        if (dVar23 <= dVar34) {
          dStack_1258 = dVar23;
        }
        if (dStack_1248 < dVar34) {
          dStack_1248 = dVar34;
        }
        if (dVar30 < local_1260) {
          local_1260 = dVar30;
        }
        if (local_1250 < dVar30) {
          local_1250 = dVar30;
        }
        if (dVar34 < dStack_1258) {
          dStack_1258 = dVar34;
        }
        if (dStack_1248 < dVar34) {
          dStack_1248 = dVar34;
        }
        if (dVar24 < local_1260) {
          local_1260 = dVar24;
        }
        if (local_1250 < dVar24) {
          local_1250 = dVar24;
        }
        if (dVar25 < dStack_1258) {
          dStack_1258 = dVar25;
        }
        if (dStack_1248 < dVar25) {
          dStack_1248 = dVar25;
        }
        if (local_58 < local_1260) {
          local_1260 = local_58;
        }
        if (local_1250 < local_58) {
          local_1250 = local_58;
        }
        if (dStack_50 < dStack_1258) {
          dStack_1258 = dStack_50;
        }
        if (dStack_1248 < dStack_50) {
          dStack_1248 = dStack_50;
        }
        break;
      case 0x125:
        if (local_11a4 != 0xb) goto LAB_00458323;
        dVar28 = (double)((ulong)(local_11a0[0] + 0.0 + local_11a0[2] + local_1180 + local_1170 +
                                 local_1160) & uVar11);
        dVar29 = (double)((ulong)(local_11a0[1] + 0.0 + local_11a0[3] + dStack_1178 + dStack_1168 +
                                 dStack_1158) & uVar35);
        dVar22 = local_11a0[0] + local_58;
        dVar23 = local_11a0[1] + dStack_50;
        dVar24 = local_11a0[2] + dVar22;
        dVar25 = local_11a0[3] + dVar23;
        dVar30 = local_1180 + dVar24;
        dVar31 = dStack_1178 + dVar25;
        dVar32 = local_1170 + dVar30;
        dVar33 = dStack_1168 + dVar31;
        dVar26 = local_1160 + dVar32;
        dVar27 = dStack_1158 + dVar33;
        dVar34 = dStack_50;
        if (dVar28 <= dVar29) {
          dVar34 = dVar27 + local_1150;
        }
        if (!(bool)uVar3) {
          uVar3 = true;
          if (local_58 < local_1260) {
            local_1260 = local_58;
          }
          if (local_1250 < local_58) {
            local_1250 = local_58;
          }
          if (dStack_50 < dStack_1258) {
            dStack_1258 = dStack_50;
          }
          if (dStack_1248 < dStack_50) {
            dStack_1248 = dStack_50;
          }
        }
        dVar4 = dVar22;
        if (local_1260 <= dVar22) {
          dVar4 = local_1260;
        }
        if (local_1250 < dVar22) {
          local_1250 = dVar22;
        }
        dVar22 = dVar23;
        if (dStack_1258 <= dVar23) {
          dVar22 = dStack_1258;
        }
        if (dStack_1248 < dVar23) {
          dStack_1248 = dVar23;
        }
        local_1260 = dVar24;
        if (dVar4 <= dVar24) {
          local_1260 = dVar4;
        }
        if (local_1250 < dVar24) {
          local_1250 = dVar24;
        }
        if (dVar25 < dVar22) {
          dVar22 = dVar25;
        }
        if (dStack_1248 < dVar25) {
          dStack_1248 = dVar25;
        }
        if (dVar30 < local_1260) {
          local_1260 = dVar30;
        }
        if (dVar30 <= local_1250) {
          dVar30 = local_1250;
        }
        local_1250 = dVar30;
        dStack_1258 = dVar22;
        if (dVar31 < dVar22) {
          dStack_1258 = dVar31;
        }
        if (dStack_1248 < dVar31) {
          dStack_1248 = dVar31;
        }
        if (dVar32 < local_1260) {
          local_1260 = dVar32;
        }
        if (local_1250 < dVar32) {
          local_1250 = dVar32;
        }
        if (dVar33 < dStack_1258) {
          dStack_1258 = dVar33;
        }
        if (dStack_1248 < dVar33) {
          dStack_1248 = dVar33;
        }
        if (dVar26 < local_1260) {
          local_1260 = dVar26;
        }
        if (local_1250 < dVar26) {
          local_1250 = dVar26;
        }
        if (dVar27 < dStack_1258) {
          dStack_1258 = dVar27;
        }
        if (dStack_1248 < dVar27) {
          dStack_1248 = dVar27;
        }
        uVar11 = -(ulong)(dVar29 < dVar28);
        local_58 = (double)(~uVar11 & (ulong)local_58 | (ulong)(dVar26 + local_1150) & uVar11);
        if (local_58 < local_1260) {
          local_1260 = local_58;
        }
        if (local_1250 < local_58) {
          local_1250 = local_58;
        }
        if (dVar34 < dStack_1258) {
          dStack_1258 = dVar34;
        }
        uVar11 = _DAT_005d91b0;
        uVar35 = _UNK_005d91b8;
        dStack_50 = dVar34;
        if (dStack_1248 < dVar34) {
          dStack_1248 = dVar34;
        }
      }
      local_44 = 0;
      local_11a4 = 0;
    }
LAB_00457f96:
    if (local_170 != '\0') {
      return 0;
    }
    auVar37._8_4_ = local_11b8._8_4_;
    auVar37._0_8_ = local_198;
    auVar37._12_4_ = 0;
    if ((uint)local_11b8._8_4_ < (uint)local_11b8._12_4_) {
      return 0;
    }
    if (local_11a8 != '\0') {
      return 0;
    }
    iVar21 = iVar21 + -1;
    if (iVar21 == 0) {
      return 0;
    }
    uVar9 = local_11b8._12_4_;
    if (local_180 != '\0') {
      param_3[2] = local_1250;
      param_3[3] = dStack_1248;
      *param_3 = local_1260;
      param_3[1] = dStack_1258;
      return 1;
    }
  } while( true );
}


