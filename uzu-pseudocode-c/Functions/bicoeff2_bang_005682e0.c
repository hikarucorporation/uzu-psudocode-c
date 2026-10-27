// Function : bicoeff2_bang
// Namespace: 
// Entry    : 005682e0
// Prototype: undefined bicoeff2_bang(long param_1)
// Body     : 005682e0 - 00568f61


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bicoeff2_bang(long param_1)

{
  float fVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long *plVar6;
  char *in_R8;
  undefined8 in_R9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  float extraout_XMM0_Da_07;
  double dVar7;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulong uVar11;
  double dVar12;
  float fVar13;
  undefined4 uVar14;
  double in_XMM3_Qa;
  double dVar15;
  double dVar16;
  double in_XMM4_Qa;
  double in_XMM5_Qa;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_58 [2];
  float local_50;
  undefined4 local_48;
  float local_40;
  undefined4 local_38;
  float local_30;
  undefined4 local_28;
  float local_20;
  undefined4 local_18;
  float local_10;
  
  fVar13 = *(float *)(param_1 + 0x3c);
  dVar19 = 0.0;
  if (fVar13 == 0.0) {
    dVar17 = 0.0;
    dVar18 = 0.0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = _DAT_005d9000;
    auVar9 = auVar5 << 0x40;
    goto LAB_0056867d;
  }
  if (fVar13 == DAT_005d9038) {
    fVar13 = *(float *)(param_1 + 0x30);
    fVar1 = *(float *)(param_1 + 0x34);
    dVar19 = exp2((double)(*(float *)(param_1 + 0x38) * DAT_005d904c) * _DAT_0065b128);
    sys_getsr();
    dVar18 = (double)fVar13;
    if ((double)fVar13 <= DAT_006524a0) {
      dVar18 = DAT_006524a0;
    }
    dVar17 = DAT_0065b130 + (double)extraout_XMM0_Da * DAT_005db338;
    dVar7 = (double)fVar1;
    if ((double)fVar1 <= DAT_00656ba0) {
      dVar7 = DAT_00656ba0;
    }
    if (dVar18 <= dVar17) {
      dVar17 = dVar18;
    }
    sincos((dVar17 * DAT_00652e70) / ((double)extraout_XMM0_Da * DAT_005db338),&local_e0,&local_e8);
    local_e0 = local_e0 / (dVar7 + dVar7);
    in_XMM4_Qa = local_e0 + _DAT_005d9000;
    in_XMM3_Qa = DAT_0065b138 * dVar19 * local_e8;
    local_b8 = _DAT_0065b150 * local_e8;
    local_b0 = dVar19 * (_DAT_005d9000 - local_e0);
    local_e0 = local_e0 + DAT_0065b188;
    dVar18 = _DAT_005d9000 / in_XMM4_Qa;
    in_XMM5_Qa = local_e8;
LAB_00568433:
    auVar9._0_8_ = local_b8 * dVar18;
    auVar9._8_8_ = local_b0 * dVar18;
    dVar17 = dVar18 * in_XMM3_Qa;
    dVar18 = dVar18 * local_e0;
  }
  else {
    if (fVar13 == DAT_005d9078) {
      fVar13 = *(float *)(param_1 + 0x30);
      fVar1 = *(float *)(param_1 + 0x34);
      dVar7 = exp2((double)(*(float *)(param_1 + 0x38) * DAT_005d904c) * _DAT_0065b128);
      sys_getsr();
      dVar19 = (double)fVar13;
      if ((double)fVar13 <= DAT_006524a0) {
        dVar19 = DAT_006524a0;
      }
      dVar18 = DAT_0065b130 + (double)extraout_XMM0_Da_00 * DAT_005db338;
      dVar17 = (double)fVar1;
      if ((double)fVar1 <= DAT_00656ba0) {
        dVar17 = DAT_00656ba0;
      }
      if (dVar19 <= dVar18) {
        dVar18 = dVar19;
      }
      sincos((dVar18 * DAT_00652e70) / ((double)extraout_XMM0_Da_00 * DAT_005db338),&local_d0,
             &local_d8);
      local_d0 = local_d0 / (dVar17 + dVar17);
      dVar19 = local_d0 + _DAT_005d9000;
      in_XMM3_Qa = _DAT_0065b150;
      dVar17 = local_d0;
LAB_0056852c:
      in_XMM4_Qa = local_d8 * in_XMM3_Qa;
      dVar19 = _DAT_005d9000 / dVar19;
      dVar18 = (local_d0 + DAT_00651e70) * dVar19;
      auVar9._0_8_ = dVar19 * in_XMM4_Qa;
      auVar9._8_8_ = dVar19 * dVar7 * dVar17;
      dVar19 = (double)((ulong)auVar9._8_8_ ^ _DAT_00652d10);
      dVar17 = 0.0;
      goto LAB_0056867d;
    }
    if (fVar13 == DAT_0065449c) {
      fVar13 = *(float *)(param_1 + 0x30);
      fVar1 = *(float *)(param_1 + 0x34);
      in_XMM4_Qa = exp2((double)(*(float *)(param_1 + 0x38) * DAT_005d904c) * _DAT_0065b128);
      sys_getsr();
      dVar19 = (double)fVar13;
      if ((double)fVar13 <= DAT_006524a0) {
        dVar19 = DAT_006524a0;
      }
      dVar18 = DAT_0065b130 + (double)extraout_XMM0_Da_01 * DAT_005db338;
      dVar17 = (double)fVar1;
      if ((double)fVar1 <= DAT_00656ba0) {
        dVar17 = DAT_00656ba0;
      }
      if (dVar19 <= dVar18) {
        dVar18 = dVar19;
      }
      sincos((dVar18 * DAT_00652e70) / ((double)extraout_XMM0_Da_01 * DAT_005db338),&local_c0,
             &local_c8);
      local_c0 = local_c0 / (dVar17 + dVar17);
      in_XMM3_Qa = local_c0 + _DAT_005d9000;
      dVar19 = _DAT_005d9000 / in_XMM3_Qa;
      dVar17 = DAT_0065b138 * in_XMM4_Qa * local_c8 * dVar19;
      dVar18 = (local_c0 + DAT_00651e70) * dVar19;
      auVar9._0_8_ = dVar19 * (local_c8 + local_c8);
      auVar9._8_8_ = dVar19 * in_XMM4_Qa;
    }
    else {
      if (fVar13 == DAT_005d94d4) {
        fVar13 = *(float *)(param_1 + 0x30);
        fVar1 = *(float *)(param_1 + 0x34);
        in_XMM4_Qa = exp2((double)(*(float *)(param_1 + 0x38) * _DAT_0065b148) * _DAT_0065b128);
        sys_getsr();
        dVar19 = (double)fVar13;
        if ((double)fVar13 <= DAT_006524a0) {
          dVar19 = DAT_006524a0;
        }
        dVar18 = DAT_0065b130 + (double)extraout_XMM0_Da_02 * DAT_005db338;
        dVar17 = (double)fVar1;
        if ((double)fVar1 <= DAT_00656ba0) {
          dVar17 = DAT_00656ba0;
        }
        if (dVar19 <= dVar18) {
          dVar18 = dVar19;
        }
        sincos((dVar18 * DAT_00652e70) / ((double)extraout_XMM0_Da_02 * DAT_005db338),&local_b0,
               &local_b8);
        local_b0 = local_b0 / (dVar17 + dVar17);
        local_e0 = local_b0 / in_XMM4_Qa;
        local_b0 = local_b0 * in_XMM4_Qa;
        dVar18 = _DAT_005d9000 / (local_e0 + _DAT_005d9000);
        dVar19 = (_DAT_005d9000 - local_b0) * dVar18;
        in_XMM3_Qa = DAT_0065b138 * local_b8;
        local_b0 = local_b0 + _UNK_0065b198;
        local_b8 = local_b8 + local_b8;
        local_e0 = local_e0 + DAT_0065b188;
        goto LAB_00568433;
      }
      if (fVar13 == DAT_00652628) {
        fVar13 = *(float *)(param_1 + 0x30);
        fVar1 = *(float *)(param_1 + 0x34);
        dVar18 = exp2((double)(*(float *)(param_1 + 0x38) * DAT_005d904c) * _DAT_0065b128);
        sys_getsr();
        dVar19 = (double)fVar13;
        if ((double)fVar13 <= DAT_006524a0) {
          dVar19 = DAT_006524a0;
        }
        dVar17 = DAT_0065b130 + (double)extraout_XMM0_Da_03 * DAT_005db338;
        dVar7 = (double)fVar1;
        if ((double)fVar1 <= DAT_00656ba0) {
          dVar7 = DAT_00656ba0;
        }
        if (dVar19 <= dVar17) {
          dVar17 = dVar19;
        }
        sincos((dVar17 * DAT_00652e70) / ((double)extraout_XMM0_Da_03 * DAT_005db338),&local_a0,
               &local_a8);
        local_a0 = local_a0 / (dVar7 + dVar7);
        in_XMM3_Qa = (double)(_DAT_00652d10 ^ (ulong)dVar18) * (local_a8 + _DAT_005d9000);
        in_XMM4_Qa = local_a0 + _DAT_005d9000;
        in_XMM5_Qa = in_XMM4_Qa + in_XMM4_Qa;
        auVar8._0_8_ = _DAT_0065b150 * local_a8;
        auVar8._8_8_ = dVar18 * (local_a8 + _DAT_005d9000);
        auVar4._8_8_ = in_XMM5_Qa;
        auVar4._0_8_ = in_XMM4_Qa;
        auVar9 = divpd(auVar8,auVar4);
        dVar17 = (_DAT_005d9000 / in_XMM4_Qa) * in_XMM3_Qa;
        dVar18 = (_DAT_005d9000 / in_XMM4_Qa) * (local_a0 + DAT_0065b188);
      }
      else {
        if (fVar13 == DAT_005d98e4) {
          fVar13 = *(float *)(param_1 + 0x30);
          fVar1 = *(float *)(param_1 + 0x34);
          dVar17 = exp2((double)(*(float *)(param_1 + 0x38) * _DAT_0065b148) * _DAT_0065b128);
          sys_getsr();
          dVar19 = (double)fVar13;
          if ((double)fVar13 <= DAT_006524a0) {
            dVar19 = DAT_006524a0;
          }
          dVar18 = DAT_0065b130 + (double)extraout_XMM0_Da_04 * DAT_005db338;
          if (dVar19 <= dVar18) {
            dVar18 = dVar19;
          }
          dVar19 = (double)fVar1;
          if ((double)fVar1 <= DAT_00656ba0) {
            dVar19 = DAT_00656ba0;
          }
          if (_DAT_005d9000 <= dVar19) {
            dVar19 = _DAT_005d9000;
          }
          sincos((dVar18 * DAT_00652e70) / ((double)extraout_XMM0_Da_04 * DAT_005db338),&local_90,
                 &local_98);
          dVar15 = dVar17 + _DAT_0065b160;
          dVar16 = dVar17 + _UNK_0065b168;
          dVar7 = dVar15 - dVar16 * local_98;
          in_XMM4_Qa = local_90 *
                       SQRT(dVar17 + dVar17 +
                            (_DAT_005d9000 / dVar19 + DAT_00651e70) *
                            (dVar17 * dVar17 + _DAT_005d9000));
          dVar19 = dVar16 * local_98 + dVar15;
          in_XMM3_Qa = dVar19 + in_XMM4_Qa;
          dVar18 = _DAT_005d9000 / (dVar7 + in_XMM4_Qa);
          dVar19 = (dVar19 - in_XMM4_Qa) * dVar17 * dVar18;
          auVar9._0_8_ = (dVar16 - dVar15 * local_98) * _DAT_0065b170 * dVar18;
          auVar9._8_8_ = dVar17 * in_XMM3_Qa * dVar18;
          dVar17 = dVar18 * (dVar15 * local_98 + dVar16) * _DAT_0065b170 * dVar17;
          dVar18 = dVar18 * (in_XMM4_Qa - dVar7);
          in_XMM5_Qa = _DAT_0065b170;
          goto LAB_0056867d;
        }
        if (fVar13 != DAT_0065b140) {
          if (fVar13 == DAT_00651f38) {
            fVar13 = *(float *)(param_1 + 0x30);
            fVar1 = *(float *)(param_1 + 0x34);
            dVar17 = exp2((double)(*(float *)(param_1 + 0x38) * _DAT_0065b148) * _DAT_0065b128);
            sys_getsr();
            dVar19 = (double)fVar13;
            if ((double)fVar13 <= DAT_006524a0) {
              dVar19 = DAT_006524a0;
            }
            dVar18 = DAT_0065b130 + (double)extraout_XMM0_Da_06 * DAT_005db338;
            if (dVar19 <= dVar18) {
              dVar18 = dVar19;
            }
            dVar19 = (double)fVar1;
            if ((double)fVar1 <= DAT_00656ba0) {
              dVar19 = DAT_00656ba0;
            }
            if (_DAT_005d9000 <= dVar19) {
              dVar19 = _DAT_005d9000;
            }
            sincos((dVar18 * DAT_00652e70) / ((double)extraout_XMM0_Da_06 * DAT_005db338),&local_70,
                   &local_78);
            local_70 = SQRT((_DAT_005d9000 / dVar19 + DAT_00651e70) *
                            (dVar17 * dVar17 + _DAT_005d9000) + dVar17 + dVar17) * local_70;
            dVar15 = dVar17 + _DAT_0065ad60;
            dVar12 = dVar17 + _UNK_0065ad68;
            dVar7 = dVar12 + local_78 * dVar15;
            in_XMM5_Qa = dVar7 + local_70;
            dVar20 = dVar12 - local_78 * dVar15;
            dVar16 = dVar15 - local_78 * dVar12;
            dVar18 = _DAT_005d9000 / in_XMM5_Qa;
            dVar19 = (dVar20 - local_70) * dVar17 * dVar18;
            in_XMM4_Qa = dVar16 - in_XMM5_Qa;
            auVar9._0_8_ = (dVar15 + local_78 * dVar12) * _DAT_0065b150 * dVar18;
            auVar9._8_8_ = dVar17 * (dVar20 + local_70) * dVar18;
            dVar17 = dVar18 * dVar16 * (dVar17 + dVar17);
            dVar18 = dVar18 * (local_70 - dVar7);
            in_XMM3_Qa = _DAT_0065b150;
            goto LAB_0056867d;
          }
          if (fVar13 != DAT_0065b144) {
            dVar17 = 0.0;
            dVar18 = 0.0;
            auVar9 = ZEXT816(0);
            goto LAB_0056867d;
          }
          fVar13 = *(float *)(param_1 + 0x30);
          fVar1 = *(float *)(param_1 + 0x34);
          dVar17 = exp2((double)(*(float *)(param_1 + 0x38) * DAT_005d904c) * _DAT_0065b128);
          sys_getsr();
          dVar19 = (double)fVar13;
          if ((double)fVar13 <= DAT_006524a0) {
            dVar19 = DAT_006524a0;
          }
          dVar18 = DAT_0065b130 + (double)extraout_XMM0_Da_07 * DAT_005db338;
          dVar7 = (double)fVar1;
          if ((double)fVar1 <= DAT_00656ba0) {
            dVar7 = DAT_00656ba0;
          }
          if (dVar19 <= dVar18) {
            dVar18 = dVar19;
          }
          sincos((dVar18 * DAT_00652e70) / ((double)extraout_XMM0_Da_07 * DAT_005db338),&local_60,
                 &local_68);
          dVar17 = dVar17 * dVar7;
          local_d0 = local_60 / (dVar7 + dVar7);
          dVar19 = local_d0 + _DAT_005d9000;
          in_XMM3_Qa = local_68;
          local_d8 = _DAT_0065b150;
          dVar7 = local_d0;
          goto LAB_0056852c;
        }
        fVar13 = *(float *)(param_1 + 0x30);
        fVar1 = *(float *)(param_1 + 0x34);
        dVar18 = exp2((double)(*(float *)(param_1 + 0x38) * DAT_005d904c) * _DAT_0065b128);
        sys_getsr();
        dVar19 = (double)fVar13;
        if ((double)fVar13 <= DAT_006524a0) {
          dVar19 = DAT_006524a0;
        }
        dVar17 = DAT_0065b130 + (double)extraout_XMM0_Da_05 * DAT_005db338;
        dVar7 = (double)fVar1;
        if ((double)fVar1 <= DAT_00656ba0) {
          dVar7 = DAT_00656ba0;
        }
        if (dVar19 <= dVar17) {
          dVar17 = dVar19;
        }
        sincos((dVar17 * DAT_00652e70) / ((double)extraout_XMM0_Da_05 * DAT_005db338),&local_80,
               &local_88);
        local_80 = local_80 / (dVar7 + dVar7);
        dVar19 = local_80 + _DAT_005d9000;
        in_XMM4_Qa = dVar19 + dVar19;
        auVar10._0_8_ = local_88 * _DAT_0065b150;
        auVar10._8_8_ = dVar18 * (_DAT_005d9000 - local_88);
        auVar3._8_4_ = SUB84(in_XMM4_Qa,0);
        auVar3._0_8_ = dVar19;
        auVar3._12_4_ = (int)((ulong)in_XMM4_Qa >> 0x20);
        auVar9 = divpd(auVar10,auVar3);
        dVar17 = (_DAT_005d9000 / dVar19) * auVar10._8_8_;
        dVar18 = (_DAT_005d9000 / dVar19) * (local_80 + DAT_00651e70);
        in_XMM3_Qa = auVar10._8_8_;
        in_XMM5_Qa = _DAT_0065b150;
      }
    }
    dVar19 = auVar9._8_8_;
  }
LAB_0056867d:
  local_58[0] = 1;
  local_50 = (float)auVar9._0_8_;
  local_48 = 1;
  local_20 = (float)dVar17;
  uVar11 = (ulong)(uint)local_20;
  uVar14 = 0;
  fVar13 = (float)dVar18;
  local_38 = 1;
  local_30 = (float)auVar9._8_8_;
  local_28 = 1;
  local_18 = 1;
  local_10 = (float)dVar19;
  plVar2 = *(long **)(param_1 + 0x18);
  local_40 = fVar13;
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_list(extraout_XMM0_Qa,uVar11,CONCAT44(uVar14,fVar13),in_XMM3_Qa,in_XMM4_Qa,in_XMM5_Qa,
              dVar18,dVar19,plVar2,*plVar6 + 0xc0,5,local_58,in_R8,in_R9);
  return;
}


