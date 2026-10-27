// Function : process_op
// Namespace: CFF:dict_opset_t
// Entry    : 0044cdd0
// Prototype: undefined process_op(int param_1, long * param_2)
// Body     : 0044cdd0 - 0044d4d4


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* CFF::dict_opset_t::process_op(unsigned int, CFF::interp_env_t<CFF::number_t>&) */

void __cdecl CFF::dict_opset_t::process_op(int param_1,long *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  ulong uVar9;
  char *pcVar10;
  byte bVar11;
  byte *pbVar12;
  double *pdVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  char *pcVar19;
  ulong uVar20;
  int iVar21;
  byte bVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  char local_58 [32];
  char *local_38;
  
  if (param_1 != 0x1e) {
    if (param_1 != 0x1d) {
      opset_t<CFF::number_t>::process_op(param_1,param_2);
      return;
    }
    uVar17 = *(uint *)(param_2 + 1);
    uVar8 = *(uint *)((long)param_2 + 0xc);
    if (uVar8 < uVar17) {
      bVar22 = *(byte *)(*param_2 + (ulong)uVar8);
      uVar16 = uVar8 + 1;
    }
    else {
      uVar8 = uVar17 + 1;
      *(uint *)((long)param_2 + 0xc) = uVar8;
      uVar16 = uVar17 + 2;
      bVar22 = (byte)_hb_NullPool;
    }
    if (uVar16 < uVar17) {
      uVar14 = uVar8 + 2;
      bVar11 = *(byte *)((ulong)uVar16 + *param_2);
    }
    else {
      uVar8 = uVar17 + 1;
      *(uint *)((long)param_2 + 0xc) = uVar8;
      uVar14 = uVar17 + 3;
      bVar11 = (byte)_hb_NullPool;
    }
    if (uVar14 < uVar17) {
      pbVar15 = (byte *)((ulong)uVar14 + *param_2);
      uVar16 = uVar8 + 3;
    }
    else {
      uVar8 = uVar17 + 1;
      *(uint *)((long)param_2 + 0xc) = uVar8;
      pbVar15 = (byte *)&_hb_NullPool;
      uVar16 = uVar17 + 4;
    }
    if (uVar16 < uVar17) {
      pbVar12 = (byte *)((ulong)uVar16 + *param_2);
    }
    else {
      uVar8 = uVar17 + 1;
      pbVar12 = (byte *)&_hb_NullPool;
    }
    bVar4 = *pbVar15;
    bVar1 = *pbVar12;
    uVar17 = *(uint *)((long)param_2 + 0x14);
    if ((ulong)uVar17 < 0x201) {
      *(uint *)((long)param_2 + 0x14) = uVar17 + 1;
      pdVar13 = (double *)(param_2 + (ulong)uVar17 + 3);
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar13 = (double *)&_hb_CrapPool;
    }
    *pdVar13 = (double)(int)((uint)bVar4 << 8 | (uint)bVar11 << 0x10 | (uint)bVar22 << 0x18 |
                            (uint)bVar1);
    *(uint *)((long)param_2 + 0xc) = uVar8 + 4;
    return;
  }
  uVar8 = *(uint *)(param_2 + 1);
  uVar17 = *(uint *)((long)param_2 + 0xc);
  if (uVar17 <= uVar8) {
    local_58[0x10] = '\0';
    local_58[0x11] = '\0';
    local_58[0x12] = '\0';
    local_58[0x13] = '\0';
    local_58[0x14] = '\0';
    local_58[0x15] = '\0';
    local_58[0x16] = '\0';
    local_58[0x17] = '\0';
    local_58[0x18] = '\0';
    local_58[0x19] = '\0';
    local_58[0x1a] = '\0';
    local_58[0x1b] = '\0';
    local_58[0x1c] = '\0';
    local_58[0x1d] = '\0';
    local_58[0x1e] = '\0';
    local_58[0x1f] = '\0';
    local_58[0] = '\0';
    local_58[1] = '\0';
    local_58[2] = '\0';
    local_58[3] = '\0';
    local_58[4] = '\0';
    local_58[5] = '\0';
    local_58[6] = '\0';
    local_58[7] = '\0';
    local_58[8] = '\0';
    local_58[9] = '\0';
    local_58[10] = '\0';
    local_58[0xb] = '\0';
    local_58[0xc] = '\0';
    local_58[0xd] = '\0';
    local_58[0xe] = '\0';
    local_58[0xf] = '\0';
    lVar18 = *param_2;
    uVar20 = 0;
    bVar11 = 0;
    bVar22 = 0;
    do {
      if ((bool)(bVar11 & 1)) {
        bVar4 = bVar22 & 0xf;
      }
      else {
        if (uVar8 < uVar17 + 1) break;
        if (uVar17 < uVar8) {
          pbVar15 = (byte *)((ulong)uVar17 + lVar18);
          uVar17 = uVar17 + 1;
        }
        else {
          pbVar15 = (byte *)&_hb_NullPool;
          uVar17 = uVar8 + 2;
        }
        bVar22 = *pbVar15;
        *(uint *)((long)param_2 + 0xc) = uVar17;
        bVar4 = bVar22 >> 4;
      }
      if (bVar4 == 0xf) {
        pcVar19 = local_58 + uVar20;
        if ((int)uVar20 == 0) {
          pcVar7 = local_58;
          pcVar10 = pcVar7;
          if (pcVar7 == pcVar19) goto LAB_0044cfa0;
          goto LAB_0044d00e;
        }
        pcVar10 = local_58;
        lVar18 = 0;
        goto LAB_0044cf7d;
      }
      if (bVar4 == 0xd) break;
      local_58[uVar20] = "0123456789.EE?-?"[bVar4];
      uVar9 = uVar20;
      if (bVar4 == 0xc) {
        uVar9 = uVar20 + 1;
        if ((int)uVar9 == 0x20) break;
        local_58[uVar20 + 1] = '-';
      }
      bVar11 = bVar11 + 1;
      uVar20 = (ulong)((uint)uVar9 + 1);
    } while ((uint)uVar9 < 0x1f);
    goto LAB_0044cfc4;
  }
  goto LAB_0044cfcc;
LAB_0044cf7d:
  if (((byte)(*pcVar10 - 9U) < 5) || (*pcVar10 == ' ')) {
    pcVar10 = pcVar10 + 1;
    lVar18 = lVar18 + -1;
    if (-lVar18 == uVar20) goto LAB_0044cfae;
    goto LAB_0044cf7d;
  }
  pcVar7 = local_58 + -lVar18;
  if (pcVar10 != pcVar19) goto LAB_0044d00e;
LAB_0044cfa0:
  dVar23 = 0.0;
  pcVar10 = pcVar19;
  goto LAB_0044cfb5;
LAB_0044cfae:
  dVar23 = 0.0;
  pcVar10 = pcVar19;
  goto LAB_0044cfb5;
LAB_0044d00e:
  local_38 = pcVar10 + ((long)pcVar19 - (long)pcVar7);
  iVar6 = 1;
  dVar25 = 0.0;
  bVar2 = false;
  bVar5 = false;
  bVar3 = false;
  uVar17 = 0;
  dVar24 = 0.0;
  dVar23 = 0.0;
  do {
    lVar18 = (long)iVar6;
    iVar21 = (int)*pcVar10;
    iVar6 = (int)(char)_double_parser_key_spans[lVar18];
    if (((int)(uint)(byte)"DEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abc"[lVar18 * 2 + 0x20] <= iVar21) &&
       (iVar21 <= (int)(uint)(byte)(&DAT_005f5361)[lVar18 * 2])) {
      iVar6 = iVar21 - (uint)(byte)"DEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abc"[lVar18 * 2 + 0x20];
    }
    uVar20 = (ulong)(char)_double_parser_indicies
                          [(long)iVar6 + (ulong)(byte)_double_parser_index_offsets[lVar18]];
    if ((0x24bUL >> (uVar20 & 0x3f) & 1) == 0) {
      switch(_double_parser_trans_actions[uVar20]) {
      case 1:
        bVar3 = true;
        break;
      case 2:
        dVar23 = dVar23 * _DAT_00655e08 + (double)(iVar21 + -0x30);
        break;
      case 3:
        if (dVar24 <= DAT_005de710) {
          dVar24 = dVar24 * _DAT_00655e08 + (double)(iVar21 + -0x30);
          dVar25 = dVar25 + _DAT_005d9000;
        }
        break;
      case 4:
        bVar2 = true;
        break;
      case 5:
        uVar16 = (iVar21 + uVar17 * 10) - 0x30;
        if (0x7ff < uVar16) {
          bVar5 = true;
          uVar16 = uVar17;
        }
        uVar17 = uVar16;
      }
    }
    if (_double_parser_indicies[(long)iVar6 + (ulong)(byte)_double_parser_index_offsets[lVar18]] ==
        '\x01') goto LAB_0044d179;
    iVar6 = (int)(char)_double_parser_trans_targs[uVar20];
    pcVar10 = pcVar10 + 1;
  } while (pcVar10 != pcVar19);
  pcVar10 = local_38;
LAB_0044d179:
  if ((dVar25 != 0.0) || (NAN(dVar25))) {
    uVar16 = (uint)(long)dVar25;
    dVar25 = *(double *)(&DAT_005de1a0 + (ulong)(((long)dVar25 & 0x100U) == 0) * 8);
    auVar29._0_4_ = -(uint)((uVar16 & _DAT_005de1c0) == 0);
    auVar29._4_4_ = -(uint)((uVar16 & _UNK_005de1c4) == 0);
    auVar29._8_4_ = -(uint)((uVar16 & _UNK_005de1c8) == 0);
    auVar29._12_4_ = -(uint)((uVar16 & _UNK_005de1cc) == 0);
    auVar28._0_4_ = -(uint)((_DAT_005de1b0 & uVar16) == 0);
    auVar28._4_4_ = -(uint)((_UNK_005de1b4 & uVar16) == 0);
    auVar28._8_4_ = -(uint)((_UNK_005de1b8 & uVar16) == 0);
    auVar28._12_4_ = -(uint)((_UNK_005de1bc & uVar16) == 0);
    auVar29 = packssdw(auVar28,auVar29);
    auVar29 = packsswb(auVar29,auVar29);
    if ((SUB161(auVar29 >> 0x3f,0) & 1) == 0) {
      dVar25 = dVar25 * _DAT_005de718;
    }
    if ((SUB161(auVar29 >> 0x37,0) & 1) == 0) {
      dVar25 = dVar25 * _DAT_005de720;
    }
    if ((SUB161(auVar29 >> 0x2f,0) & 1) == 0) {
      dVar25 = dVar25 * _DAT_005de728;
    }
    if ((SUB161(auVar29 >> 0x27,0) & 1) == 0) {
      dVar25 = dVar25 * _DAT_005de730;
    }
    if ((SUB161(auVar29 >> 0x1f,0) & 1) == 0) {
      dVar25 = dVar25 * _DAT_005de738;
    }
    if ((SUB161(auVar29 >> 0x17,0) & 1) == 0) {
      dVar25 = dVar25 * DAT_005db348;
    }
    if ((SUB161(auVar29 >> 0xf,0) & 1) == 0) {
      dVar25 = dVar25 * DAT_005d90a0;
    }
    if ((SUB161(auVar29 >> 7,0) & 1) == 0) {
      dVar25 = dVar25 * _DAT_00655e08;
    }
    dVar23 = dVar23 + dVar24 / dVar25;
  }
  if (bVar3) {
    dVar23 = (double)((ulong)dVar23 ^ _DAT_00652d10);
  }
  if (bVar5) {
    if ((dVar23 != 0.0) || (NAN(dVar23))) {
      if (bVar2) {
        dVar23 = *(double *)(&DAT_005de1d0 + (ulong)!bVar3 * 8);
      }
      else {
        dVar23 = *(double *)(&DAT_005dd110 + (ulong)!bVar3 * 8);
      }
    }
  }
  else if (uVar17 != 0) {
    dVar24 = *(double *)(&DAT_005de1a0 + (ulong)((uVar17 & 0x100) == 0) * 8);
    auVar26._0_4_ = -(uint)((uVar17 & _DAT_005de1c0) == 0);
    auVar26._4_4_ = -(uint)((uVar17 & _UNK_005de1c4) == 0);
    auVar26._8_4_ = -(uint)((uVar17 & _UNK_005de1c8) == 0);
    auVar26._12_4_ = -(uint)((uVar17 & _UNK_005de1cc) == 0);
    auVar27._0_4_ = -(uint)((_DAT_005de1b0 & uVar17) == 0);
    auVar27._4_4_ = -(uint)((_UNK_005de1b4 & uVar17) == 0);
    auVar27._8_4_ = -(uint)((_UNK_005de1b8 & uVar17) == 0);
    auVar27._12_4_ = -(uint)((_UNK_005de1bc & uVar17) == 0);
    auVar29 = packssdw(auVar27,auVar26);
    auVar29 = packsswb(auVar29,auVar29);
    if ((SUB161(auVar29 >> 0x3f,0) & 1) == 0) {
      dVar24 = dVar24 * _DAT_005de718;
    }
    if ((SUB161(auVar29 >> 0x37,0) & 1) == 0) {
      dVar24 = dVar24 * _DAT_005de720;
    }
    if ((SUB161(auVar29 >> 0x2f,0) & 1) == 0) {
      dVar24 = dVar24 * _DAT_005de728;
    }
    if ((SUB161(auVar29 >> 0x27,0) & 1) == 0) {
      dVar24 = dVar24 * _DAT_005de730;
    }
    if ((SUB161(auVar29 >> 0x1f,0) & 1) == 0) {
      dVar24 = dVar24 * _DAT_005de738;
    }
    if ((SUB161(auVar29 >> 0x17,0) & 1) == 0) {
      dVar24 = dVar24 * DAT_005db348;
    }
    if ((SUB161(auVar29 >> 0xf,0) & 1) == 0) {
      dVar24 = dVar24 * DAT_005d90a0;
    }
    if ((SUB161(auVar29 >> 7,0) & 1) == 0) {
      dVar24 = dVar24 * _DAT_00655e08;
    }
    if (bVar2) {
      dVar23 = dVar23 / dVar24;
    }
    else {
      dVar23 = dVar23 * dVar24;
    }
  }
LAB_0044cfb5:
  if ((local_58 == pcVar10) || (pcVar10 != pcVar19)) {
LAB_0044cfc4:
    *(uint *)((long)param_2 + 0xc) = uVar8 + 1;
LAB_0044cfcc:
    dVar23 = 0.0;
  }
  uVar8 = *(uint *)((long)param_2 + 0x14);
  if ((ulong)uVar8 < 0x201) {
    *(uint *)((long)param_2 + 0x14) = uVar8 + 1;
    pdVar13 = (double *)(param_2 + (ulong)uVar8 + 3);
  }
  else {
    *(undefined1 *)(param_2 + 2) = 1;
    _hb_CrapPool = 0;
    pdVar13 = (double *)&_hb_CrapPool;
  }
  *pdVar13 = dVar23;
  return;
}


