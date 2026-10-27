// Function : freqshift_perform
// Namespace: 
// Entry    : 00562730
// Prototype: long freqshift_perform(long param_1)
// Body     : 00562730 - 00562bb3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long freqshift_perform(long param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_118;
  float local_114;
  float local_110;
  float local_100;
  float local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  long local_d8;
  long local_d0;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  lVar2 = *(long *)(param_1 + 8);
  fVar1 = *(float *)(lVar2 + 0x48);
  local_a8 = *(float *)(lVar2 + 0x4c);
  fVar11 = *(float *)(lVar2 + 0x50);
  local_58._4_4_ = 0;
  local_58._8_4_ = 0;
  local_58._12_4_ = 0;
  local_78 = *(float *)(lVar2 + 0x54);
  local_58._0_4_ = *(float *)(lVar2 + 0x58);
  local_114 = *(float *)(lVar2 + 0x5c);
  local_f8._0_4_ = *(float *)(lVar2 + 0x60);
  local_88 = *(float *)(lVar2 + 100);
  local_48._0_4_ = *(float *)(lVar2 + 0x68);
  fVar15 = *(float *)(lVar2 + 0x6c);
  local_68._0_4_ = *(float *)(lVar2 + 0x70);
  fVar10 = *(float *)(lVar2 + 0x74);
  fVar16 = *(float *)(lVar2 + 0x78);
  local_c8 = *(float *)(lVar2 + 0x7c);
  local_e8._0_4_ = *(float *)(lVar2 + 0x80);
  local_98 = *(float *)(lVar2 + 0x84);
  local_110 = *(float *)(lVar2 + 0x8c);
  iVar6 = (int)*(undefined8 *)(param_1 + 0x10);
  local_d8 = param_1;
  if (iVar6 != 0) {
    local_d0 = *(long *)(param_1 + 0x30);
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x20);
    local_48._4_4_ = 0;
    uStack_74 = 0;
    fVar8 = DAT_005d9038 / *(float *)(lVar2 + 0x88);
    local_68._4_4_ = 0;
    lVar7 = 0;
    local_e8 = ZEXT416((uint)local_e8._0_4_);
    local_f8 = ZEXT416((uint)local_f8._0_4_);
    fVar9 = fVar15;
    fStack_b4 = local_88;
    uStack_ac = 0;
    fVar12 = (float)local_68._0_4_;
    fVar14 = (float)local_48._0_4_;
    local_68._0_4_ = fVar16;
    fStack_c4 = local_98;
    uStack_bc = 0;
    fVar16 = fVar10;
    local_48._0_4_ = fVar1;
    local_118 = local_c8;
    do {
      fVar15 = fVar14;
      fVar10 = fVar12;
      fVar1 = *(float *)(lVar4 + lVar7 * 4);
      dVar13 = (double)fVar1;
      fVar14 = (float)(((double)local_78 - dVar13) * _UNK_0065ad18 +
                      (double)local_a8 +
                      ((double)(float)local_48._0_4_ - (double)fVar11) * _DAT_0065ad10);
      local_88 = (float)local_f8._0_4_;
      uStack_84 = local_f8._4_4_;
      uStack_80 = local_f8._8_4_;
      uStack_7c = local_f8._12_4_;
      fVar9 = (float)(((double)fVar10 - (double)fVar15) * _DAT_0065ad48 + (double)fVar9 +
                     (dVar13 - (double)fVar16) * _DAT_0065ad40);
      local_98 = (float)local_e8._0_4_;
      uStack_94 = local_e8._4_4_;
      uStack_90 = local_e8._8_4_;
      uStack_8c = local_e8._12_4_;
      fVar12 = *(float *)(lVar5 + lVar7 * 4) * fVar8;
      fVar16 = DAT_005d9038;
      if ((fVar12 <= DAT_005d9038) && (fVar16 = fVar12, fVar12 < DAT_005d9054)) {
        fVar16 = DAT_005d9054;
      }
      local_110 = local_110 + fVar16;
      local_f8 = ZEXT416((uint)(float)(((double)fVar14 - (double)fStack_b4) * _UNK_0065ad28 +
                                      (double)local_114 +
                                      ((double)(float)local_f8._0_4_ - (double)(float)local_58._0_4_
                                      ) * _DAT_0065ad20));
      local_e8 = ZEXT416((uint)(float)(((double)fVar9 - (double)fStack_c4) * _UNK_0065ad38 +
                                      (double)local_118 +
                                      ((double)(float)local_e8._0_4_ - (double)(float)local_68._0_4_
                                      ) * _DAT_0065ad30));
      if (DAT_005d9038 < local_110) {
        local_110 = local_110 + DAT_005d9054;
      }
      else if (local_110 < DAT_005d9058) {
        local_110 = local_110 + DAT_005d9038;
      }
      local_c8 = (float)local_68._0_4_;
      uStack_c0 = local_68._4_4_;
      local_b8 = (float)local_58._0_4_;
      uStack_b0 = local_58._4_4_;
      local_a8 = (float)local_48._0_4_;
      fStack_a4 = local_78;
      uStack_a0 = local_48._4_4_;
      uStack_9c = uStack_74;
      local_78 = fVar11;
      uStack_74 = local_58._4_4_;
      uStack_70 = local_58._8_4_;
      uStack_6c = local_58._12_4_;
      local_68 = ZEXT416((uint)fVar9);
      local_58 = ZEXT416((uint)fVar14);
      local_48 = ZEXT416((uint)fVar1);
      sincosf((float)((double)local_110 * DAT_00651f70),&local_fc,&local_100);
      *(float *)(lVar3 + lVar7 * 4) =
           local_100 * (float)local_f8._0_4_ - local_fc * (float)local_e8._0_4_;
      *(float *)(local_d0 + lVar7 * 4) =
           local_fc * (float)local_e8._0_4_ + local_100 * (float)local_f8._0_4_;
      lVar7 = lVar7 + 1;
      local_114 = local_b8;
      local_118 = local_c8;
      fVar9 = fVar15;
      fStack_b4 = local_88;
      uStack_ac = uStack_84;
      fVar12 = (float)local_68._0_4_;
      fVar14 = (float)local_48._0_4_;
      fStack_c4 = local_98;
      uStack_bc = uStack_94;
      fVar16 = fVar10;
      fVar11 = (float)local_58._0_4_;
    } while (iVar6 != (int)lVar7);
    fVar16 = (float)local_68._0_4_;
    fVar1 = (float)local_48._0_4_;
  }
  *(float *)(lVar2 + 0x8c) = local_110;
  *(float *)(lVar2 + 0x48) = fVar1;
  *(float *)(lVar2 + 0x4c) = local_a8;
  *(float *)(lVar2 + 0x50) = fVar11;
  *(float *)(lVar2 + 0x54) = local_78;
  *(undefined4 *)(lVar2 + 0x58) = local_58._0_4_;
  *(float *)(lVar2 + 0x5c) = local_114;
  *(undefined4 *)(lVar2 + 0x60) = local_f8._0_4_;
  *(float *)(lVar2 + 100) = local_88;
  *(undefined4 *)(lVar2 + 0x68) = local_48._0_4_;
  *(float *)(lVar2 + 0x6c) = fVar15;
  *(undefined4 *)(lVar2 + 0x70) = local_68._0_4_;
  *(float *)(lVar2 + 0x74) = fVar10;
  *(float *)(lVar2 + 0x78) = fVar16;
  *(float *)(lVar2 + 0x7c) = local_c8;
  *(undefined4 *)(lVar2 + 0x80) = local_e8._0_4_;
  *(float *)(lVar2 + 0x84) = local_98;
  return local_d8 + 0x38;
}


