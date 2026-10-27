// Function : sys_gui_audiopreferences
// Namespace: 
// Entry    : 0053cda0
// Prototype: undefined sys_gui_audiopreferences(void)
// Body     : 0053cda0 - 0053d597


/* WARNING: Removing unreachable block (ram,0x0053d57a) */
/* WARNING: Removing unreachable block (ram,0x0053d593) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sys_gui_audiopreferences(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 extraout_XMM0_Qa;
  ulong uVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_XMM3 [16];
  long lVar30;
  char *in_XMM4_Qa;
  long in_XMM5_Qa;
  long in_XMM6_Qa;
  char *in_XMM7_Qa;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint local_89bc;
  uint local_89b8;
  float local_89b4;
  float local_89b0;
  uint local_89ac;
  float local_89a8;
  float local_89a4;
  uint local_89a0;
  int local_899c;
  int local_8998;
  int local_8994;
  int local_8990;
  uint local_898c;
  int local_8988 [3];
  int local_897c;
  int local_8978;
  int local_8974;
  ulong local_8970;
  float local_8968;
  float local_8964;
  float local_8960;
  float local_895c;
  float local_8958;
  float local_8954;
  float local_8950;
  float local_894c;
  float local_8948;
  float local_8944;
  float local_8940;
  float local_893c;
  float local_8938;
  float local_8934;
  float local_8930;
  float local_892c;
  char local_8928 [80];
  char local_88d8 [80];
  char local_8888 [80];
  undefined *local_8838;
  long local_8830;
  long alStack_8828 [2];
  undefined1 auStack_8818 [16];
  long alStack_8808 [122];
  undefined *local_8438;
  long local_8430;
  long alStack_8428 [2];
  undefined1 auStack_8418 [16];
  long alStack_8408 [122];
  char local_8038 [16384];
  char local_4038 [16392];
  
  iVar6 = DAT_0071dfd4;
  iVar5 = DAT_0071dfd0;
  iVar4 = DAT_0071dfcc;
  iVar3 = DAT_0071dfc0;
  iVar2 = DAT_0071dfbc;
  local_89b8 = 0;
  local_89bc = 0;
  local_8988[1] = 0;
  local_8988[0] = 0;
  if (initted == '\x01') {
    iVar9 = (int)_audio_nextsettings;
    local_89b4 = (float)_DAT_0071df8c;
    local_89ac = DAT_0071dfd8;
    local_89b0 = (float)_DAT_0071dfa0;
    local_8970 = _DAT_0071dfd8 >> 0x20;
    local_89a8 = (float)_DAT_0071dfb4;
    local_89a0 = DAT_0071dfe4;
    local_89a4 = (float)_DAT_0071dfc8;
  }
  else {
    _audio_nextsettings = 0x100000009;
    _DAT_0071dfd8 = 0x190000ac44;
    _DAT_0071dfc4 = 0x200000001;
    _DAT_0071dfb0 = 1;
    _DAT_0071df9c = 0x200000001;
    _DAT_0071df8c = 0;
    initted = '\x01';
    iVar9 = 9;
    local_89a8 = 0.0;
    local_89ac = 0xac44;
    local_8970 = 0x19;
    local_89a0 = 0x40;
    local_89a4 = DAT_005d9078;
    local_89b0 = DAT_005d9078;
    local_89b4 = 0.0;
  }
  local_897c = DAT_0071df90;
  local_8978 = DAT_0071df94;
  local_8974 = DAT_0071df98;
  local_899c = DAT_0071dfa4;
  local_8998 = DAT_0071dfa8;
  local_8994 = DAT_0071dfac;
  local_8990 = DAT_0071dfb8;
  local_898c = DAT_0071dfe0;
  DAT_0071dfe4 = local_89a0;
  sys_get_audio_devs(local_4038,&local_89b8,local_8038,&local_89bc,local_8988 + 1,local_8988,0x80,
                     0x80,iVar9);
  uVar8 = local_898c;
  uVar7 = local_89a0;
  uVar14 = (ulong)local_89b8;
  if (uVar14 == 0) {
    local_89b8 = 1;
    local_8438 = &DAT_005e2ee7;
  }
  else if (0 < (int)local_89b8) {
    if (local_89b8 < 4) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulong)(local_89b8 & 0xfffffffc);
      uVar11 = (uVar10 - 4 >> 2) + 1;
      if (uVar10 - 4 == 0) {
        lVar12 = 0;
        uVar15 = _DAT_00656c40;
        uVar17 = _UNK_00656c48;
LAB_0053d155:
        auVar28._8_4_ = (int)local_4038;
        auVar28._0_8_ = local_4038;
        auVar28._12_4_ = (int)((ulong)local_4038 >> 0x20);
        auVar22._0_8_ = local_4038 + (_DAT_00656c50 + uVar15 & _DAT_00656c60);
        auVar22._8_8_ = (_UNK_00656c58 + uVar17 & _UNK_00656c68) + auVar28._8_8_;
        (&local_8438)[lVar12] = local_4038 + (uVar15 & _DAT_00656c60);
        alStack_8428[lVar12 + -1] = (uVar17 & _UNK_00656c68) + auVar28._8_8_;
        *(undefined1 (*) [16])(alStack_8428 + lVar12) = auVar22;
      }
      else {
        local_8988[2] = iVar6;
        uVar15 = uVar11 & 0xfffffffffffffffe;
        lVar12 = 0;
        auVar27._8_8_ = _UNK_00656c68;
        auVar27._0_8_ = _DAT_00656c60;
        in_XMM3._8_4_ = (int)local_4038;
        in_XMM3._0_8_ = local_4038;
        in_XMM3._12_4_ = (int)((ulong)local_4038 >> 0x20);
        lVar16 = _DAT_005d99f0;
        lVar18 = _UNK_005d99f8;
        do {
          auVar31._0_8_ = lVar16 * 0x80;
          auVar31._8_8_ = lVar18 * 0x80;
          auVar19._0_8_ = auVar31._0_8_ + _DAT_00656c50;
          auVar19._8_8_ = auVar31._8_8_ + _UNK_00656c58;
          in_XMM4_Qa = local_4038 + SUB168(auVar31 & auVar27,0);
          lVar30 = in_XMM3._8_8_;
          (&local_8438)[lVar12] = in_XMM4_Qa;
          alStack_8428[lVar12 + -1] = SUB168(auVar31 & auVar27,8) + lVar30;
          alStack_8428[lVar12] = (long)(local_4038 + SUB168(auVar19 & auVar27,0));
          alStack_8428[lVar12 + 1] = SUB168(auVar19 & auVar27,8) + lVar30;
          auVar20._0_8_ = auVar31._0_8_ + _DAT_00656c70;
          auVar20._8_8_ = auVar31._8_8_ + _UNK_00656c78;
          auVar32._0_8_ = auVar31._0_8_ + _DAT_00656c80;
          auVar32._8_8_ = auVar31._8_8_ + _UNK_00656c88;
          auVar21._0_8_ = local_4038 + SUB168(auVar20 & auVar27,0);
          auVar21._8_8_ = SUB168(auVar20 & auVar27,8) + lVar30;
          in_XMM7_Qa = local_4038 + SUB168(auVar32 & auVar27,0);
          *(undefined1 (*) [16])(auStack_8418 + lVar12 * 8) = auVar21;
          alStack_8408[lVar12] = (long)in_XMM7_Qa;
          alStack_8408[lVar12 + 1] = SUB168(auVar32 & auVar27,8) + lVar30;
          lVar12 = lVar12 + 8;
          lVar16 = lVar16 + _DAT_00652dc0;
          lVar18 = lVar18 + _UNK_00652dc8;
          uVar15 = uVar15 - 2;
        } while (uVar15 != 0);
        uVar15 = lVar16 * 0x80;
        uVar17 = lVar18 * 0x80;
        in_XMM5_Qa = _DAT_00656c80;
        in_XMM6_Qa = _DAT_00652dc0;
        if ((uVar11 & 1) != 0) goto LAB_0053d155;
      }
      if (uVar10 == uVar14) goto LAB_0053d1d4;
    }
    uVar11 = uVar10 << 7;
    do {
      (&local_8438)[uVar10] = local_4038 + (uVar11 & 0xffffffff);
      uVar10 = uVar10 + 1;
      uVar11 = uVar11 + 0x80;
    } while (uVar14 != uVar10);
  }
LAB_0053d1d4:
  local_8934 = (float)local_897c;
  local_8930 = (float)local_8978;
  local_892c = (float)local_8974;
  local_8944 = (float)local_899c;
  local_8948 = local_89b0;
  local_8940 = (float)local_8998;
  local_893c = (float)local_8994;
  uVar14 = (ulong)local_89bc;
  if (uVar14 == 0) {
    local_89bc = 1;
    local_8838 = &DAT_005e2ee7;
    goto LAB_0053d414;
  }
  if ((int)local_89bc < 1) goto LAB_0053d414;
  if (local_89bc < 4) {
    uVar10 = 0;
  }
  else {
    uVar10 = (ulong)(local_89bc & 0xfffffffc);
    uVar11 = (uVar10 - 4 >> 2) + 1;
    if (uVar10 - 4 == 0) {
      lVar12 = 0;
      uVar15 = _DAT_00656c40;
      uVar17 = _UNK_00656c48;
LAB_0053d393:
      auVar29._8_4_ = (int)local_8038;
      auVar29._0_8_ = local_8038;
      auVar29._12_4_ = (int)((ulong)local_8038 >> 0x20);
      auVar26._0_8_ = local_8038 + (_DAT_00656c50 + uVar15 & _DAT_00656c60);
      auVar26._8_8_ = (_UNK_00656c58 + uVar17 & _UNK_00656c68) + auVar29._8_8_;
      (&local_8838)[lVar12] = local_8038 + (uVar15 & _DAT_00656c60);
      alStack_8828[lVar12 + -1] = (uVar17 & _UNK_00656c68) + auVar29._8_8_;
      *(undefined1 (*) [16])(alStack_8828 + lVar12) = auVar26;
    }
    else {
      uVar15 = uVar11 & 0xfffffffffffffffe;
      lVar12 = 0;
      auVar1._8_8_ = _UNK_00656c68;
      auVar1._0_8_ = _DAT_00656c60;
      in_XMM3._8_4_ = (int)local_8038;
      in_XMM3._0_8_ = local_8038;
      in_XMM3._12_4_ = (int)((ulong)local_8038 >> 0x20);
      lVar16 = _DAT_005d99f0;
      lVar18 = _UNK_005d99f8;
      do {
        auVar33._0_8_ = lVar16 * 0x80;
        auVar33._8_8_ = lVar18 * 0x80;
        auVar23._0_8_ = auVar33._0_8_ + _DAT_00656c50;
        auVar23._8_8_ = auVar33._8_8_ + _UNK_00656c58;
        in_XMM4_Qa = local_8038 + SUB168(auVar33 & auVar1,0);
        lVar30 = in_XMM3._8_8_;
        (&local_8838)[lVar12] = in_XMM4_Qa;
        alStack_8828[lVar12 + -1] = SUB168(auVar33 & auVar1,8) + lVar30;
        alStack_8828[lVar12] = (long)(local_8038 + SUB168(auVar23 & auVar1,0));
        alStack_8828[lVar12 + 1] = SUB168(auVar23 & auVar1,8) + lVar30;
        auVar24._0_8_ = auVar33._0_8_ + _DAT_00656c70;
        auVar24._8_8_ = auVar33._8_8_ + _UNK_00656c78;
        auVar34._0_8_ = auVar33._0_8_ + _DAT_00656c80;
        auVar34._8_8_ = auVar33._8_8_ + _UNK_00656c88;
        auVar25._0_8_ = local_8038 + SUB168(auVar24 & auVar1,0);
        auVar25._8_8_ = SUB168(auVar24 & auVar1,8) + lVar30;
        in_XMM7_Qa = local_8038 + SUB168(auVar34 & auVar1,0);
        *(undefined1 (*) [16])(auStack_8818 + lVar12 * 8) = auVar25;
        alStack_8808[lVar12] = (long)in_XMM7_Qa;
        alStack_8808[lVar12 + 1] = SUB168(auVar34 & auVar1,8) + lVar30;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + _DAT_00652dc0;
        lVar18 = lVar18 + _UNK_00652dc8;
        uVar15 = uVar15 - 2;
      } while (uVar15 != 0);
      uVar15 = lVar16 * 0x80;
      uVar17 = lVar18 * 0x80;
      in_XMM5_Qa = _DAT_00656c80;
      in_XMM6_Qa = _DAT_00652dc0;
      if ((uVar11 & 1) != 0) goto LAB_0053d393;
    }
    if (uVar10 == uVar14) goto LAB_0053d414;
  }
  uVar11 = uVar10 << 7;
  do {
    (&local_8838)[uVar10] = local_8038 + (uVar11 & 0xffffffff);
    uVar10 = uVar10 + 1;
    uVar11 = uVar11 + 0x80;
  } while (uVar14 != uVar10);
LAB_0053d414:
  local_8954 = (float)local_8990;
  local_8950 = (float)iVar2;
  auVar27 = ZEXT416((uint)local_8950);
  local_8958 = local_89a8;
  local_894c = (float)iVar3;
  auVar19 = ZEXT416((uint)local_894c);
  local_8968 = local_89a4;
  local_8964 = (float)iVar4;
  local_8960 = (float)iVar5;
  local_895c = (float)iVar6;
  local_8938 = local_89b4;
  sprintf(local_8928,"%s%d",&DAT_005e2ee7,(ulong)local_89ac);
  pcVar13 = "!";
  if (local_8988[0] != 0) {
    pcVar13 = "";
  }
  sprintf(local_8888,"%s%d",pcVar13,(ulong)uVar8);
  sprintf(local_88d8,"%s%d",&DAT_005e2ee7,(ulong)uVar7);
  pdgui_vmess(extraout_XMM0_Qa,auVar27._0_8_,auVar19._0_8_,in_XMM3._0_8_,in_XMM4_Qa,in_XMM5_Qa,
              in_XMM6_Qa,in_XMM7_Qa,0x656def,"SFF SFF ssi si",(ulong)local_89b8,&local_8438,4,
              &local_8938,4);
  return;
}


