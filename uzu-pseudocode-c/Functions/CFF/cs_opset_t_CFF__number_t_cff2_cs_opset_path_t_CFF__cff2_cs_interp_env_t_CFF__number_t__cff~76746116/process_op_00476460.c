// Function : process_op
// Namespace: CFF:cs_opset_t_CFF__number_t_cff2_cs_opset_path_t_CFF__cff2_cs_interp_env_t_CFF__number_t__cff~76746116
// Entry    : 00476460
// Prototype: undefined4 process_op(undefined4 param_1, int param_2_00, long * param_3, undefined8 * param_4)
// Body     : 00476460 - 0047881d


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::cs_opset_t<CFF::number_t, cff2_cs_opset_path_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_path_param_t, cff2_path_procs_path_t>::process_op(unsigned int,
   CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_path_param_t&) */

undefined4 __thiscall
CFF::
cs_opset_t<CFF::number_t,cff2_cs_opset_path_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_path_param_t,cff2_path_procs_path_t>
::process_op(undefined4 param_1,int param_2_00,long *param_3,undefined8 *param_4)

{
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  double *pdVar15;
  uint uVar16;
  uint *puVar17;
  long *plVar18;
  float *pfVar19;
  int iVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 local_b8 [12];
  undefined4 uStack_ac;
  double local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  double dStack_90;
  long lStack_80;
  long lStack_70;
  
  switch(param_2_00) {
  case 1:
  case 0x12:
    *(int *)((long)param_3 + 0x103c) =
         *(int *)((long)param_3 + 0x103c) + (*(uint *)((long)param_3 + 0x14) >> 1);
    break;
  case 2:
  case 9:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x1c:
switchD_0047648d_caseD_2:
    uVar21 = opset_t<CFF::number_t>::process_op(param_2_00,param_3);
    return uVar21;
  case 3:
  case 0x17:
    *(uint *)(param_3 + 0x208) = (int)param_3[0x208] + (*(uint *)((long)param_3 + 0x14) >> 1);
    break;
  case 4:
    dVar29 = (double)param_3[0x22c];
    if (*(int *)((long)param_3 + 0x14) == 0) {
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      dVar31 = 0.0;
    }
    else {
      uVar10 = *(int *)((long)param_3 + 0x14) - 1;
      *(uint *)((long)param_3 + 0x14) = uVar10;
      dVar31 = (double)param_3[(ulong)uVar10 + 3];
    }
    dVar31 = dVar31 + (double)param_3[0x22d];
    goto LAB_00476a95;
  case 5:
    uVar10 = *(uint *)((long)param_3 + 0x14);
    if (1 < uVar10) {
      dVar31 = (double)param_3[0x22c];
      dVar29 = (double)param_3[0x22d];
      uVar14 = 2;
      do {
        if (uVar14 - 2 < uVar10) {
          pdVar15 = (double *)(param_3 + (ulong)(uVar14 - 2) + 3);
          if (uVar14 - 1 < uVar10) goto LAB_004765b8;
LAB_00476625:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar15 = (double *)&_hb_CrapPool;
          if (uVar10 <= uVar14 - 1) goto LAB_00476625;
LAB_004765b8:
          uVar21 = (undefined4)param_3[(ulong)(uVar14 - 1) + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar14 - 1) + 3] >> 0x20);
        }
        dVar31 = dVar31 + *pdVar15;
        dVar29 = dVar29 + (double)CONCAT44(uVar23,uVar21);
        param_1 = cff2_path_param_t::line_to
                            (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31,
                             dVar29,(float *)*param_4);
        param_3[0x22c] = (long)dVar31;
        param_3[0x22d] = (long)dVar29;
        uVar14 = uVar14 + 2;
        uVar10 = *(uint *)((long)param_3 + 0x14);
      } while (uVar14 <= uVar10);
    }
    break;
  case 6:
    uVar14 = *(uint *)((long)param_3 + 0x14);
    uVar10 = 0;
    if (1 < uVar14) {
      local_b8._0_8_ = param_3[0x22c];
      local_a8 = (double)param_3[0x22d];
      uVar13 = 0;
      do {
        if (uVar13 < uVar14) {
          uVar21 = (undefined4)param_3[(ulong)uVar13 + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)uVar13 + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
        }
        local_b8._0_8_ = (double)local_b8._0_8_ + (double)CONCAT44(uVar23,uVar21);
        cff2_path_param_t::line_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),
                   (double)local_b8._0_8_,local_a8,(float *)*param_4);
        param_3[0x22c] = local_b8._0_8_;
        param_3[0x22d] = (long)local_a8;
        if (uVar13 + 1 < *(uint *)((long)param_3 + 0x14)) {
          uVar21 = (undefined4)param_3[(ulong)(uVar13 + 1) + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar13 + 1) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
        }
        local_a8 = local_a8 + (double)CONCAT44(uVar23,uVar21);
        cff2_path_param_t::line_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),
                   (double)local_b8._0_8_,local_a8,(float *)*param_4);
        param_3[0x22c] = local_b8._0_8_;
        param_1 = SUB84(local_a8,0);
        param_3[0x22d] = (long)local_a8;
        uVar14 = *(uint *)((long)param_3 + 0x14);
        uVar10 = uVar13 + 2;
        uVar16 = uVar13 + 4;
        uVar13 = uVar10;
      } while (uVar16 <= uVar14);
    }
    if (uVar14 <= uVar10) break;
    dVar31 = (double)param_3[0x22c];
    local_b8._0_8_ = param_3[0x22d];
    dVar29 = (double)param_3[(ulong)uVar10 + 3];
    cff2_path_param_t::line_to
              (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31 + dVar29,
               (double)local_b8._0_8_,(float *)*param_4);
    param_3[0x22c] = (long)(dVar31 + dVar29);
    goto LAB_004785fd;
  case 7:
    uVar14 = *(uint *)((long)param_3 + 0x14);
    uVar10 = 0;
    if (1 < uVar14) {
      local_b8._0_8_ = param_3[0x22c];
      local_a8 = (double)param_3[0x22d];
      uVar13 = 0;
      do {
        if (uVar13 < uVar14) {
          uVar21 = (undefined4)param_3[(ulong)uVar13 + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)uVar13 + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
        }
        local_a8 = local_a8 + (double)CONCAT44(uVar23,uVar21);
        cff2_path_param_t::line_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),
                   (double)local_b8._0_8_,local_a8,(float *)*param_4);
        param_3[0x22c] = local_b8._0_8_;
        param_3[0x22d] = (long)local_a8;
        if (uVar13 + 1 < *(uint *)((long)param_3 + 0x14)) {
          uVar21 = (undefined4)param_3[(ulong)(uVar13 + 1) + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar13 + 1) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
        }
        local_b8._0_8_ = (double)local_b8._0_8_ + (double)CONCAT44(uVar23,uVar21);
        cff2_path_param_t::line_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),
                   (double)local_b8._0_8_,local_a8,(float *)*param_4);
        param_3[0x22c] = local_b8._0_8_;
        param_1 = SUB84(local_a8,0);
        param_3[0x22d] = (long)local_a8;
        uVar14 = *(uint *)((long)param_3 + 0x14);
        uVar10 = uVar13 + 2;
        uVar16 = uVar13 + 4;
        uVar13 = uVar10;
      } while (uVar16 <= uVar14);
    }
    if (uVar14 <= uVar10) break;
    dVar31 = (double)param_3[0x22c];
    local_b8._0_8_ = (double)param_3[0x22d] + (double)param_3[(ulong)uVar10 + 3];
    cff2_path_param_t::line_to
              (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31,
               (double)local_b8._0_8_,(float *)*param_4);
    param_3[0x22c] = (long)dVar31;
    goto LAB_004785fd;
  case 8:
    uVar10 = *(uint *)((long)param_3 + 0x14);
    if (5 < uVar10) {
      dVar31 = (double)param_3[0x22c];
      dVar29 = (double)param_3[0x22d];
      uVar14 = 0;
      do {
        if (uVar14 < uVar10) {
          plVar18 = param_3 + (ulong)uVar14 + 3;
          if (uVar14 + 1 < uVar10) goto LAB_0047674d;
LAB_00476842:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
          uVar24 = (undefined4)*plVar18;
          uVar25 = (undefined4)((ulong)*plVar18 >> 0x20);
          if (uVar10 <= uVar14 + 2) goto LAB_00476864;
LAB_00476764:
          pdVar15 = (double *)(param_3 + (ulong)(uVar14 + 2) + 3);
          if (uVar14 + 3 < uVar10) goto LAB_00476779;
LAB_00476881:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          dVar34 = 0.0;
          dVar33 = *pdVar15;
          if (uVar10 <= uVar14 + 4) goto LAB_004768a3;
LAB_00476790:
          pdVar15 = (double *)(param_3 + (ulong)(uVar14 + 4) + 3);
          if (uVar14 + 5 < uVar10) goto LAB_004767a5;
LAB_004768c0:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          dVar35 = 0.0;
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          plVar18 = &_hb_CrapPool;
          if (uVar10 <= uVar14 + 1) goto LAB_00476842;
LAB_0047674d:
          uVar21 = (undefined4)param_3[(ulong)(uVar14 + 1) + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 1) + 3] >> 0x20);
          uVar24 = (undefined4)*plVar18;
          uVar25 = (undefined4)((ulong)*plVar18 >> 0x20);
          if (uVar14 + 2 < uVar10) goto LAB_00476764;
LAB_00476864:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar15 = (double *)&_hb_CrapPool;
          if (uVar10 <= uVar14 + 3) goto LAB_00476881;
LAB_00476779:
          dVar34 = (double)param_3[(ulong)(uVar14 + 3) + 3];
          dVar33 = *pdVar15;
          if (uVar14 + 4 < uVar10) goto LAB_00476790;
LAB_004768a3:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar15 = (double *)&_hb_CrapPool;
          if (uVar10 <= uVar14 + 5) goto LAB_004768c0;
LAB_004767a5:
          dVar35 = (double)param_3[(ulong)(uVar14 + 5) + 3];
        }
        dVar8 = dVar31 + (double)CONCAT44(uVar25,uVar24);
        dVar30 = dVar29 + (double)CONCAT44(uVar23,uVar21);
        dVar33 = dVar33 + dVar8;
        dVar34 = dVar34 + dVar30;
        dVar31 = *pdVar15 + dVar33;
        dVar29 = dVar35 + dVar34;
        param_1 = cff2_path_param_t::cubic_to
                            (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar8,
                             dVar30,dVar33,dVar34,dVar31,dVar29,(float *)*param_4);
        param_3[0x22c] = (long)dVar31;
        param_3[0x22d] = (long)dVar29;
        uVar10 = *(uint *)((long)param_3 + 0x14);
        uVar13 = uVar14 + 0xc;
        uVar14 = uVar14 + 6;
      } while (uVar13 <= uVar10);
    }
    break;
  case 10:
    if (*(int *)((long)param_3 + 0x14) == 0) {
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      uVar10 = *(uint *)(param_3 + 0x22a);
    }
    else {
      uVar10 = *(int *)((long)param_3 + 0x14) - 1;
      *(uint *)((long)param_3 + 0x14) = uVar10;
      uVar10 = (int)(double)param_3[(ulong)uVar10 + 3] + (int)param_3[0x22a];
    }
    if (((-1 < (int)uVar10) && ((uint *)param_3[0x22b] != (uint *)0x0)) &&
       (uVar14 = *(uint *)param_3[0x22b],
       uVar10 < (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18
                ))) {
      uVar11 = (ulong)*(uint *)((long)param_3 + 0x104c);
      if (uVar11 < 10) {
        lVar12 = *param_3;
        lVar9 = param_3[1];
        param_3[0x204] = lVar12;
        param_3[0x205] = lVar9;
        *(uint *)((long)param_3 + 0x104c) = *(uint *)((long)param_3 + 0x104c) + 1;
        param_3[uVar11 * 3 + 0x20c] = param_3[0x206];
        param_3[uVar11 * 3 + 0x20a] = lVar12;
        (param_3 + uVar11 * 3 + 0x20a)[1] = lVar9;
        pCVar1 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)param_3[0x22b];
        if ((pCVar1 == (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0) ||
           (uVar14 = *(uint *)pCVar1,
           (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) <=
           uVar10)) {
          lVar12 = 0;
          uVar11 = 0;
        }
        else {
          auVar38 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](pCVar1,uVar10);
          lVar12 = auVar38._0_8_;
          uVar11 = auVar38._8_8_ & 0xffffffff;
        }
        param_3[0x204] = lVar12;
        param_3[0x205] = uVar11;
        *(undefined4 *)(param_3 + 0x206) = 2;
LAB_00477175:
        *(uint *)((long)param_3 + 0x1034) = uVar10;
        *(int *)param_3 = (int)param_3[0x204];
        *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)((long)param_3 + 0x1024);
        *(int *)(param_3 + 1) = (int)param_3[0x205];
        *(undefined4 *)((long)param_3 + 0xc) = *(undefined4 *)((long)param_3 + 0x102c);
        return (int)param_3[0x204];
      }
    }
    goto LAB_0047871a;
  case 0xb:
    if (*(int *)((long)param_3 + 0x104c) == 0) {
      *(undefined1 *)(param_3 + 0x209) = 1;
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      DAT_0071cd90 = 0;
      plVar18 = &_hb_CrapPool;
    }
    else {
      uVar10 = *(int *)((long)param_3 + 0x104c) - 1;
      *(uint *)((long)param_3 + 0x104c) = uVar10;
      plVar18 = param_3 + (ulong)uVar10 * 3 + 0x20a;
    }
    param_3[0x206] = plVar18[2];
    lVar12 = plVar18[1];
    param_3[0x204] = *plVar18;
    param_3[0x205] = lVar12;
    lVar12 = *plVar18;
    uVar21 = *(undefined4 *)((long)plVar18 + 4);
    lVar9 = plVar18[1];
    uVar23 = *(undefined4 *)((long)plVar18 + 0xc);
    *(int *)param_3 = (int)lVar12;
    *(undefined4 *)((long)param_3 + 4) = uVar21;
    *(int *)(param_3 + 1) = (int)lVar9;
    *(undefined4 *)((long)param_3 + 0xc) = uVar23;
    return (int)lVar12;
  case 0xe:
    *(undefined1 *)(param_3 + 0x207) = 1;
    break;
  case 0x13:
  case 0x14:
    if (*(char *)((long)param_3 + 0x103a) == '\0') {
      iVar20 = (*(uint *)((long)param_3 + 0x14) >> 1) + (int)param_3[0x208];
      *(int *)(param_3 + 0x208) = iVar20;
      uVar10 = iVar20 + *(int *)((long)param_3 + 0x103c) + 7U >> 3;
      *(uint *)((long)param_3 + 0x1044) = uVar10;
      *(undefined1 *)((long)param_3 + 0x103a) = 1;
    }
    else {
      uVar10 = *(uint *)((long)param_3 + 0x1044);
    }
    uVar10 = uVar10 + *(int *)((long)param_3 + 0xc);
    if (*(uint *)(param_3 + 1) < uVar10) {
      return param_1;
    }
    *(undefined4 *)((long)param_3 + 0x14) = 0;
    *(uint *)((long)param_3 + 0xc) = uVar10;
    return param_1;
  case 0x15:
    dVar31 = (double)param_3[0x22d];
    iVar20 = *(int *)((long)param_3 + 0x14);
    if (iVar20 == 0) {
      pdVar15 = (double *)&_hb_CrapPool;
LAB_004786cd:
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      uVar21 = 0;
      uVar23 = 0;
    }
    else {
      uVar10 = iVar20 - 1;
      *(uint *)((long)param_3 + 0x14) = uVar10;
      pdVar15 = (double *)(param_3 + (ulong)uVar10 + 3);
      if (uVar10 == 0) goto LAB_004786cd;
      *(uint *)((long)param_3 + 0x14) = iVar20 - 2U;
      uVar21 = (undefined4)param_3[(ulong)(iVar20 - 2U) + 3];
      uVar23 = (undefined4)((ulong)param_3[(ulong)(iVar20 - 2U) + 3] >> 0x20);
    }
    dVar29 = *pdVar15;
    dVar34 = (double)CONCAT44(uVar23,uVar21) + (double)param_3[0x22c];
    cff2_path_param_t::move_to
              (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar34,dVar29 + dVar31,
               (float *)*param_4);
    local_b8._0_4_ = SUB84(dVar34,0);
    param_3[0x22c] = (long)dVar34;
    param_3[0x22d] = (long)(dVar29 + dVar31);
    param_1 = local_b8._0_4_;
    if (*(char *)((long)param_3 + 0x1039) != '\0') break;
    goto LAB_00476ade;
  case 0x16:
    dVar31 = (double)param_3[0x22d];
    if (*(int *)((long)param_3 + 0x14) == 0) {
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      uVar21 = 0;
      uVar23 = 0;
    }
    else {
      uVar10 = *(int *)((long)param_3 + 0x14) - 1;
      *(uint *)((long)param_3 + 0x14) = uVar10;
      uVar21 = (undefined4)param_3[(ulong)uVar10 + 3];
      uVar23 = (undefined4)((ulong)param_3[(ulong)uVar10 + 3] >> 0x20);
    }
    dVar29 = (double)CONCAT44(uVar23,uVar21) + (double)param_3[0x22c];
LAB_00476a95:
    cff2_path_param_t::move_to
              (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar29,dVar31,
               (float *)*param_4);
    param_3[0x22c] = (long)dVar29;
    param_1 = SUB84(dVar31,0);
    param_3[0x22d] = (long)dVar31;
    if (*(char *)((long)param_3 + 0x1039) == '\0') {
LAB_00476ade:
      if (*(char *)((long)param_3 + 0x103a) == '\0') {
        iVar20 = (*(uint *)((long)param_3 + 0x14) >> 1) + (int)param_3[0x208];
        *(int *)(param_3 + 0x208) = iVar20;
        *(uint *)((long)param_3 + 0x1044) = iVar20 + *(int *)((long)param_3 + 0x103c) + 7U >> 3;
        *(undefined1 *)((long)param_3 + 0x103a) = 1;
      }
      *(undefined1 *)((long)param_3 + 0x1039) = 1;
    }
    break;
  case 0x18:
    uVar10 = *(uint *)((long)param_3 + 0x14);
    if (uVar10 < 8) break;
    uVar14 = uVar10 - 2;
    dVar31 = (double)param_3[0x22c];
    dVar29 = (double)param_3[0x22d];
    uVar13 = 0;
    do {
      uVar16 = uVar13;
      if (uVar16 < uVar10) {
        plVar18 = param_3 + (ulong)uVar16 + 3;
        if (uVar16 + 1 < uVar10) goto LAB_00476b5d;
LAB_00476c53:
        *(undefined1 *)(param_3 + 2) = 1;
        _hb_CrapPool = 0;
        uVar21 = 0;
        uVar23 = 0;
        uVar24 = (undefined4)*plVar18;
        uVar25 = (undefined4)((ulong)*plVar18 >> 0x20);
        if (uVar10 <= uVar16 + 2) goto LAB_00476c75;
LAB_00476b74:
        pdVar15 = (double *)(param_3 + (ulong)(uVar16 + 2) + 3);
        if (uVar16 + 3 < uVar10) goto LAB_00476b89;
LAB_00476c92:
        *(undefined1 *)(param_3 + 2) = 1;
        _hb_CrapPool = 0;
        dVar34 = 0.0;
        dVar33 = *pdVar15;
        if (uVar10 <= uVar16 + 4) goto LAB_00476cb4;
LAB_00476ba0:
        pdVar15 = (double *)(param_3 + (ulong)(uVar16 + 4) + 3);
        if (uVar16 + 5 < uVar10) goto LAB_00476bb5;
LAB_00476cd1:
        *(undefined1 *)(param_3 + 2) = 1;
        _hb_CrapPool = 0;
        dVar35 = 0.0;
      }
      else {
        *(undefined1 *)(param_3 + 2) = 1;
        _hb_CrapPool = 0;
        plVar18 = &_hb_CrapPool;
        if (uVar10 <= uVar16 + 1) goto LAB_00476c53;
LAB_00476b5d:
        uVar21 = (undefined4)param_3[(ulong)(uVar16 + 1) + 3];
        uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar16 + 1) + 3] >> 0x20);
        uVar24 = (undefined4)*plVar18;
        uVar25 = (undefined4)((ulong)*plVar18 >> 0x20);
        if (uVar16 + 2 < uVar10) goto LAB_00476b74;
LAB_00476c75:
        *(undefined1 *)(param_3 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar15 = (double *)&_hb_CrapPool;
        if (uVar10 <= uVar16 + 3) goto LAB_00476c92;
LAB_00476b89:
        dVar34 = (double)param_3[(ulong)(uVar16 + 3) + 3];
        dVar33 = *pdVar15;
        if (uVar16 + 4 < uVar10) goto LAB_00476ba0;
LAB_00476cb4:
        *(undefined1 *)(param_3 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar15 = (double *)&_hb_CrapPool;
        if (uVar10 <= uVar16 + 5) goto LAB_00476cd1;
LAB_00476bb5:
        dVar35 = (double)param_3[(ulong)(uVar16 + 5) + 3];
      }
      dVar8 = dVar31 + (double)CONCAT44(uVar25,uVar24);
      dVar30 = dVar29 + (double)CONCAT44(uVar23,uVar21);
      dVar33 = dVar33 + dVar8;
      dVar34 = dVar34 + dVar30;
      dVar31 = *pdVar15 + dVar33;
      dVar29 = dVar35 + dVar34;
      auVar2._8_4_ = SUB84(dVar29,0);
      auVar2._0_8_ = dVar31;
      auVar2._12_4_ = (int)((ulong)dVar29 >> 0x20);
      cff2_path_param_t::cubic_to
                (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar8,dVar30,dVar33,
                 dVar34,dVar31,dVar29,(float *)*param_4);
      *(undefined1 (*) [16])(param_3 + 0x22c) = auVar2;
      uVar10 = *(uint *)((long)param_3 + 0x14);
      uVar13 = uVar16 + 6;
    } while (uVar16 + 0xc <= uVar14);
    if (uVar13 < uVar10) {
      pdVar15 = (double *)(param_3 + (ulong)uVar13 + 3);
      if (uVar16 + 7 < uVar10) goto LAB_00477792;
LAB_00478749:
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      uVar21 = 0;
      uVar23 = 0;
    }
    else {
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar15 = (double *)&_hb_CrapPool;
      if (uVar10 <= uVar16 + 7) goto LAB_00478749;
LAB_00477792:
      uVar21 = (undefined4)param_3[(ulong)(uVar16 + 7) + 3];
      uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar16 + 7) + 3] >> 0x20);
    }
    dVar29 = auVar2._8_8_ + (double)CONCAT44(uVar23,uVar21);
    local_b8._8_4_ = SUB84(dVar29,0);
    local_b8._0_8_ = dVar31 + *pdVar15;
    uStack_ac = (int)((ulong)dVar29 >> 0x20);
    cff2_path_param_t::line_to
              (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31 + *pdVar15,dVar29,
               (float *)*param_4);
    goto LAB_00477a94;
  case 0x19:
    uVar10 = *(uint *)((long)param_3 + 0x14);
    if (uVar10 < 8) break;
    uVar14 = uVar10 - 6;
    dVar29 = (double)param_3[0x22c];
    dVar31 = (double)param_3[0x22d];
    uVar13 = 0;
    do {
      uVar16 = uVar13;
      if (uVar16 < uVar10) {
        pdVar15 = (double *)(param_3 + (ulong)uVar16 + 3);
        if (uVar16 + 1 < uVar10) goto LAB_00476d25;
LAB_00476d9b:
        *(undefined1 *)(param_3 + 2) = 1;
        _hb_CrapPool = 0;
        uVar21 = 0;
        uVar23 = 0;
      }
      else {
        *(undefined1 *)(param_3 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar15 = (double *)&_hb_CrapPool;
        if (uVar10 <= uVar16 + 1) goto LAB_00476d9b;
LAB_00476d25:
        uVar21 = (undefined4)param_3[(ulong)(uVar16 + 1) + 3];
        uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar16 + 1) + 3] >> 0x20);
      }
      dVar29 = dVar29 + *pdVar15;
      dVar31 = dVar31 + (double)CONCAT44(uVar23,uVar21);
      auVar6._8_4_ = SUB84(dVar31,0);
      auVar6._0_8_ = dVar29;
      auVar6._12_4_ = (int)((ulong)dVar31 >> 0x20);
      cff2_path_param_t::line_to
                (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar29,dVar31,
                 (float *)*param_4);
      *(undefined1 (*) [16])(param_3 + 0x22c) = auVar6;
      uVar10 = *(uint *)((long)param_3 + 0x14);
      uVar13 = uVar16 + 2;
    } while (uVar16 + 4 <= uVar14);
    if (uVar13 < uVar10) {
      plVar18 = param_3 + (ulong)uVar13 + 3;
      if (uVar16 + 3 < uVar10) goto LAB_004777ee;
LAB_00478785:
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar21 = (undefined4)*plVar18;
      uVar23 = (undefined4)((ulong)*plVar18 >> 0x20);
      if (uVar10 <= uVar16 + 4) goto LAB_004787a4;
LAB_00477802:
      pdVar15 = (double *)(param_3 + (ulong)(uVar16 + 4) + 3);
      if (uVar16 + 5 < uVar10) goto LAB_0047781b;
LAB_004787c9:
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      uVar26 = 0;
      uVar28 = 0;
    }
    else {
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      plVar18 = &_hb_CrapPool;
      if (uVar10 <= uVar16 + 3) goto LAB_00478785;
LAB_004777ee:
      uVar24 = (undefined4)param_3[(ulong)(uVar16 + 3) + 3];
      uVar25 = (undefined4)((ulong)param_3[(ulong)(uVar16 + 3) + 3] >> 0x20);
      uVar21 = (undefined4)*plVar18;
      uVar23 = (undefined4)((ulong)*plVar18 >> 0x20);
      if (uVar16 + 4 < uVar10) goto LAB_00477802;
LAB_004787a4:
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar15 = (double *)&_hb_CrapPool;
      if (uVar10 <= uVar16 + 5) goto LAB_004787c9;
LAB_0047781b:
      uVar26 = (undefined4)param_3[(ulong)(uVar16 + 5) + 3];
      uVar28 = (undefined4)((ulong)param_3[(ulong)(uVar16 + 5) + 3] >> 0x20);
    }
    dVar29 = dVar29 + (double)CONCAT44(uVar23,uVar21);
    dStack_90 = auVar6._8_8_ + (double)CONCAT44(uVar25,uVar24);
    dVar31 = *pdVar15;
    if (uVar16 + 6 < uVar10) {
      pdVar15 = (double *)(param_3 + (ulong)(uVar16 + 6) + 3);
      if (uVar16 + 7 < uVar10) goto LAB_00477853;
LAB_00478806:
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      uVar21 = 0;
      uVar23 = 0;
    }
    else {
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar15 = (double *)&_hb_CrapPool;
      if (uVar10 <= uVar16 + 7) goto LAB_00478806;
LAB_00477853:
      uVar21 = (undefined4)param_3[(ulong)(uVar16 + 7) + 3];
      uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar16 + 7) + 3] >> 0x20);
    }
    uStack_a0 = (double)CONCAT44(uVar28,uVar26) + dStack_90;
    dVar31 = dVar31 + dVar29;
    dVar34 = *pdVar15 + dVar31;
    dVar33 = (double)CONCAT44(uVar23,uVar21) + uStack_a0;
    local_b8._8_4_ = SUB84(dVar33,0);
    local_b8._0_8_ = dVar34;
    uStack_ac = (int)((ulong)dVar33 >> 0x20);
    pfVar19 = (float *)*param_4;
    lVar12 = param_4[1];
LAB_00477a85:
    cff2_path_param_t::cubic_to
              (*(float *)(lVar12 + 0x4c),*(float *)(lVar12 + 0x50),dVar29,dStack_90,dVar31,uStack_a0
               ,dVar34,dVar33,pfVar19);
LAB_00477a94:
    *(undefined4 *)(param_3 + 0x22c) = local_b8._0_4_;
    *(undefined4 *)((long)param_3 + 0x1164) = local_b8._4_4_;
    *(undefined4 *)(param_3 + 0x22d) = local_b8._8_4_;
    *(undefined4 *)((long)param_3 + 0x116c) = uStack_ac;
    param_1 = local_b8._0_4_;
    break;
  case 0x1a:
    uVar14 = *(uint *)((long)param_3 + 0x14);
    uVar13 = uVar14 & 1;
    uVar10 = uVar13 + 4;
    if (uVar10 <= uVar14) {
      dVar31 = SUB168(*(undefined1 (*) [16])(param_3 + 0x22c),0);
      dVar29 = SUB168(*(undefined1 (*) [16])(param_3 + 0x22c),8);
      if ((uVar14 & 1) != 0) {
        dVar31 = dVar31 + (double)param_3[3];
      }
      do {
        if (uVar13 < uVar14) {
          uVar21 = (undefined4)param_3[(ulong)uVar13 + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)uVar13 + 3] >> 0x20);
          if (uVar13 + 1 < uVar14) goto LAB_00476dfd;
LAB_00476ed0:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar15 = (double *)&_hb_CrapPool;
          if (uVar14 <= uVar13 + 2) goto LAB_00476eed;
LAB_00476e12:
          uVar24 = (undefined4)param_3[(ulong)(uVar13 + 2) + 3];
          uVar25 = (undefined4)((ulong)param_3[(ulong)(uVar13 + 2) + 3] >> 0x20);
          dVar34 = *pdVar15;
          if (uVar13 + 3 < uVar14) goto LAB_00476e29;
LAB_00476f0f:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar26 = 0;
          uVar28 = 0;
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
          if (uVar14 <= uVar13 + 1) goto LAB_00476ed0;
LAB_00476dfd:
          pdVar15 = (double *)(param_3 + (ulong)(uVar13 + 1) + 3);
          if (uVar13 + 2 < uVar14) goto LAB_00476e12;
LAB_00476eed:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar24 = 0;
          uVar25 = 0;
          dVar34 = *pdVar15;
          if (uVar14 <= uVar13 + 3) goto LAB_00476f0f;
LAB_00476e29:
          uVar26 = (undefined4)param_3[(ulong)(uVar13 + 3) + 3];
          uVar28 = (undefined4)((ulong)param_3[(ulong)(uVar13 + 3) + 3] >> 0x20);
        }
        dVar33 = dVar29 + (double)CONCAT44(uVar23,uVar21);
        dVar34 = dVar34 + dVar31;
        dVar35 = (double)CONCAT44(uVar25,uVar24) + dVar33;
        dVar29 = (double)CONCAT44(uVar28,uVar26) + dVar35;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31,dVar33,dVar34,
                   dVar35,dVar34,dVar29,(float *)*param_4);
        param_3[0x22c] = (long)dVar34;
        local_a8._0_4_ = SUB84(dVar29,0);
        param_3[0x22d] = (long)dVar29;
        uVar16 = uVar10 + 4;
        uVar14 = *(uint *)((long)param_3 + 0x14);
        param_1 = local_a8._0_4_;
        uVar13 = uVar10;
        dVar31 = dVar34;
        uVar10 = uVar16;
      } while (uVar16 <= uVar14);
    }
    break;
  case 0x1b:
    uVar14 = *(uint *)((long)param_3 + 0x14);
    uVar13 = uVar14 & 1;
    uVar10 = uVar13 + 4;
    if (uVar10 <= uVar14) {
      dVar29 = (double)param_3[0x22c];
      dVar31 = (double)param_3[0x22d];
      if ((uVar14 & 1) != 0) {
        dVar31 = dVar31 + (double)param_3[3];
      }
      do {
        if (uVar13 < uVar14) {
          uVar21 = (undefined4)param_3[(ulong)uVar13 + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)uVar13 + 3] >> 0x20);
          if (uVar13 + 1 < uVar14) goto LAB_00476f7d;
LAB_0047705d:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar15 = (double *)&_hb_CrapPool;
          if (uVar14 <= uVar13 + 2) goto LAB_0047707a;
LAB_00476f92:
          uVar24 = (undefined4)param_3[(ulong)(uVar13 + 2) + 3];
          uVar25 = (undefined4)((ulong)param_3[(ulong)(uVar13 + 2) + 3] >> 0x20);
          dVar34 = *pdVar15;
          if (uVar13 + 3 < uVar14) goto LAB_00476fa9;
LAB_0047709c:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar26 = 0;
          uVar28 = 0;
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
          if (uVar14 <= uVar13 + 1) goto LAB_0047705d;
LAB_00476f7d:
          pdVar15 = (double *)(param_3 + (ulong)(uVar13 + 1) + 3);
          if (uVar13 + 2 < uVar14) goto LAB_00476f92;
LAB_0047707a:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar24 = 0;
          uVar25 = 0;
          dVar34 = *pdVar15;
          if (uVar14 <= uVar13 + 3) goto LAB_0047709c;
LAB_00476fa9:
          uVar26 = (undefined4)param_3[(ulong)(uVar13 + 3) + 3];
          uVar28 = (undefined4)((ulong)param_3[(ulong)(uVar13 + 3) + 3] >> 0x20);
        }
        dVar33 = dVar29 + (double)CONCAT44(uVar23,uVar21);
        dVar34 = dVar34 + dVar29 + (double)CONCAT44(uVar23,uVar21);
        dVar35 = (double)CONCAT44(uVar25,uVar24) + dVar31;
        param_1 = SUB84(dVar35,0);
        dVar29 = (double)CONCAT44(uVar28,uVar26) + dVar34;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar33,dVar31,dVar34,
                   dVar35,dVar29,dVar35,(float *)*param_4);
        param_3[0x22c] = (long)dVar29;
        param_3[0x22d] = (long)dVar35;
        uVar16 = uVar10 + 4;
        uVar14 = *(uint *)((long)param_3 + 0x14);
        dVar31 = dVar35;
        uVar13 = uVar10;
        uVar10 = uVar16;
      } while (uVar16 <= uVar14);
    }
    break;
  case 0x1d:
    if (*(int *)((long)param_3 + 0x14) == 0) {
      *(undefined1 *)(param_3 + 2) = 1;
      _hb_CrapPool = 0;
      uVar10 = *(uint *)(param_3 + 0x228);
    }
    else {
      uVar10 = *(int *)((long)param_3 + 0x14) - 1;
      *(uint *)((long)param_3 + 0x14) = uVar10;
      uVar10 = (int)(double)param_3[(ulong)uVar10 + 3] + (int)param_3[0x228];
    }
    if (((-1 < (int)uVar10) && ((uint *)param_3[0x229] != (uint *)0x0)) &&
       (uVar14 = *(uint *)param_3[0x229],
       uVar10 < (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18
                ))) {
      uVar11 = (ulong)*(uint *)((long)param_3 + 0x104c);
      if (uVar11 < 10) {
        lVar12 = *param_3;
        lVar9 = param_3[1];
        param_3[0x204] = lVar12;
        param_3[0x205] = lVar9;
        *(uint *)((long)param_3 + 0x104c) = *(uint *)((long)param_3 + 0x104c) + 1;
        param_3[uVar11 * 3 + 0x20c] = param_3[0x206];
        param_3[uVar11 * 3 + 0x20a] = lVar12;
        (param_3 + uVar11 * 3 + 0x20a)[1] = lVar9;
        pCVar1 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)param_3[0x229];
        if ((pCVar1 == (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0) ||
           (uVar14 = *(uint *)pCVar1,
           (uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) <=
           uVar10)) {
          lVar12 = 0;
          uVar11 = 0;
        }
        else {
          auVar38 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](pCVar1,uVar10);
          lVar12 = auVar38._0_8_;
          uVar11 = auVar38._8_8_ & 0xffffffff;
        }
        param_3[0x204] = lVar12;
        param_3[0x205] = uVar11;
        *(undefined4 *)(param_3 + 0x206) = 1;
        goto LAB_00477175;
      }
    }
LAB_0047871a:
    *(int *)((long)param_3 + 0xc) = (int)param_3[1] + 1;
    return param_1;
  case 0x1e:
    uVar10 = *(uint *)((long)param_3 + 0x14);
    if ((uVar10 & 4) == 0) {
      if (7 < uVar10) {
        iVar20 = 0;
        uVar11 = 0;
        do {
          uVar14 = (uint)uVar11;
          if (uVar14 < uVar10) {
            uVar21 = (undefined4)param_3[uVar11 + 3];
            uVar23 = (undefined4)((ulong)param_3[uVar11 + 3] >> 0x20);
            if (uVar14 + 1 < uVar10) goto LAB_00477232;
LAB_004773b2:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            pdVar15 = (double *)&_hb_CrapPool;
            if (uVar10 <= uVar14 + 2) goto LAB_004773cf;
LAB_00477247:
            uVar24 = (undefined4)param_3[(ulong)(uVar14 + 2) + 3];
            uVar25 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 2) + 3] >> 0x20);
            dVar31 = *pdVar15;
            if (uVar14 + 3 < uVar10) goto LAB_0047725e;
LAB_004773f1:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            dVar29 = 0.0;
          }
          else {
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar21 = 0;
            uVar23 = 0;
            if (uVar10 <= uVar14 + 1) goto LAB_004773b2;
LAB_00477232:
            pdVar15 = (double *)(param_3 + (ulong)(uVar14 + 1) + 3);
            if (uVar14 + 2 < uVar10) goto LAB_00477247;
LAB_004773cf:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar24 = 0;
            uVar25 = 0;
            dVar31 = *pdVar15;
            if (uVar10 <= uVar14 + 3) goto LAB_004773f1;
LAB_0047725e:
            dVar29 = (double)param_3[(ulong)(uVar14 + 3) + 3];
          }
          dVar34 = (double)param_3[0x22d] + (double)CONCAT44(uVar23,uVar21);
          dVar31 = dVar31 + (double)param_3[0x22c];
          dVar33 = (double)CONCAT44(uVar25,uVar24) + dVar34;
          dVar29 = dVar29 + dVar31;
          cff2_path_param_t::cubic_to
                    (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),
                     (double)param_3[0x22c],dVar34,dVar31,dVar33,dVar29,dVar33,(float *)*param_4);
          param_3[0x22c] = (long)dVar29;
          param_3[0x22d] = (long)dVar33;
          uVar10 = *(uint *)((long)param_3 + 0x14);
          if (uVar14 + 4 < uVar10) {
            uVar21 = (undefined4)param_3[(ulong)(uVar14 + 4) + 3];
            uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 4) + 3] >> 0x20);
            if (uVar14 + 5 < uVar10) goto LAB_0047730b;
LAB_0047742d:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            pdVar15 = (double *)&_hb_CrapPool;
            if (uVar10 <= uVar14 + 6) goto LAB_0047744a;
LAB_00477320:
            uVar24 = (undefined4)param_3[(ulong)(uVar14 + 6) + 3];
            uVar25 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 6) + 3] >> 0x20);
            dVar31 = *pdVar15;
            if (uVar14 + 7 < uVar10) goto LAB_00477337;
LAB_0047746c:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar26 = 0;
            uVar28 = 0;
          }
          else {
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar21 = 0;
            uVar23 = 0;
            if (uVar10 <= uVar14 + 5) goto LAB_0047742d;
LAB_0047730b:
            pdVar15 = (double *)(param_3 + (ulong)(uVar14 + 5) + 3);
            if (uVar14 + 6 < uVar10) goto LAB_00477320;
LAB_0047744a:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar24 = 0;
            uVar25 = 0;
            dVar31 = *pdVar15;
            if (uVar10 <= uVar14 + 7) goto LAB_0047746c;
LAB_00477337:
            uVar26 = (undefined4)param_3[(ulong)(uVar14 + 7) + 3];
            uVar28 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 7) + 3] >> 0x20);
          }
          uVar11 = (ulong)(uVar14 + 8);
          dVar29 = dVar29 + (double)CONCAT44(uVar23,uVar21);
          dVar31 = dVar31 + dVar29;
          dVar35 = (double)CONCAT44(uVar25,uVar24) + dVar33;
          dVar34 = dVar31;
          if ((iVar20 + uVar10 < 0x10) && ((uVar10 & 1) != 0)) {
            if (uVar14 + 8 < uVar10) {
              uVar21 = (undefined4)param_3[uVar11 + 3];
              uVar23 = (undefined4)((ulong)param_3[uVar11 + 3] >> 0x20);
            }
            else {
              *(undefined1 *)(param_3 + 2) = 1;
              _hb_CrapPool = 0;
              uVar21 = 0;
              uVar23 = 0;
            }
            dVar34 = (double)CONCAT44(uVar23,uVar21) + dVar31;
          }
          dVar8 = (double)CONCAT44(uVar28,uVar26) + dVar35;
          cff2_path_param_t::cubic_to
                    (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar29,dVar33,
                     dVar31,dVar35,dVar34,dVar8,(float *)*param_4);
          param_3[0x22c] = (long)dVar34;
          param_1 = SUB84(dVar8,0);
          param_3[0x22d] = (long)dVar8;
          uVar10 = *(uint *)((long)param_3 + 0x14);
          iVar20 = iVar20 + -8;
        } while (uVar14 + 0x10 <= uVar10);
      }
      break;
    }
    dVar31 = SUB168(*(undefined1 (*) [16])(param_3 + 0x22c),0);
    dVar34 = SUB168(*(undefined1 (*) [16])(param_3 + 0x22c),8) + (double)param_3[3];
    dVar29 = (double)param_3[4] + dVar31;
    dVar35 = (double)param_3[5] + dVar34;
    dVar33 = (double)param_3[6] + dVar29;
    uVar14 = 4;
    if (0xb < uVar10) {
      uVar13 = 6;
      do {
        uVar14 = uVar13;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31,dVar34,dVar29,
                   dVar35,dVar33,dVar35,(float *)*param_4);
        param_3[0x22c] = (long)dVar33;
        param_3[0x22d] = (long)dVar35;
        uVar10 = *(uint *)((long)param_3 + 0x14);
        if (uVar14 - 2 < uVar10) {
          uVar21 = (undefined4)param_3[(ulong)(uVar14 - 2) + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar14 - 2) + 3] >> 0x20);
          if (uVar14 - 1 < uVar10) goto LAB_00477fea;
LAB_00478125:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar15 = (double *)&_hb_CrapPool;
          if (uVar10 <= uVar14) goto LAB_0047813f;
LAB_00477ffc:
          uVar24 = (undefined4)param_3[(ulong)uVar14 + 3];
          uVar25 = (undefined4)((ulong)param_3[(ulong)uVar14 + 3] >> 0x20);
          dVar31 = *pdVar15;
          if (uVar14 + 1 < uVar10) goto LAB_00478013;
LAB_00478161:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar26 = 0;
          uVar28 = 0;
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
          if (uVar10 <= uVar14 - 1) goto LAB_00478125;
LAB_00477fea:
          pdVar15 = (double *)(param_3 + (ulong)(uVar14 - 1) + 3);
          if (uVar14 < uVar10) goto LAB_00477ffc;
LAB_0047813f:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar24 = 0;
          uVar25 = 0;
          dVar31 = *pdVar15;
          if (uVar10 <= uVar14 + 1) goto LAB_00478161;
LAB_00478013:
          uVar26 = (undefined4)param_3[(ulong)(uVar14 + 1) + 3];
          uVar28 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 1) + 3] >> 0x20);
        }
        dVar33 = dVar33 + (double)CONCAT44(uVar23,uVar21);
        dVar31 = dVar31 + dVar33;
        dVar29 = (double)CONCAT44(uVar25,uVar24) + dVar35;
        dVar34 = (double)CONCAT44(uVar28,uVar26) + dVar29;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar33,dVar35,dVar31,
                   dVar29,dVar31,dVar34,(float *)*param_4);
        param_3[0x22c] = (long)dVar31;
        param_3[0x22d] = (long)dVar34;
        uVar10 = *(uint *)((long)param_3 + 0x14);
        if (uVar14 + 2 < uVar10) {
          uVar21 = (undefined4)param_3[(ulong)(uVar14 + 2) + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 2) + 3] >> 0x20);
          if (uVar14 + 3 < uVar10) goto LAB_004780a2;
LAB_00478197:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar15 = (double *)&_hb_CrapPool;
          if (uVar10 <= uVar14 + 4) goto LAB_004781b4;
LAB_004780b7:
          uVar24 = (undefined4)param_3[(ulong)(uVar14 + 4) + 3];
          uVar25 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 4) + 3] >> 0x20);
          dVar29 = *pdVar15;
          if (uVar14 + 5 < uVar10) goto LAB_004780ce;
LAB_004781d6:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar26 = 0;
          uVar28 = 0;
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
          if (uVar10 <= uVar14 + 3) goto LAB_00478197;
LAB_004780a2:
          pdVar15 = (double *)(param_3 + (ulong)(uVar14 + 3) + 3);
          if (uVar14 + 4 < uVar10) goto LAB_004780b7;
LAB_004781b4:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar24 = 0;
          uVar25 = 0;
          dVar29 = *pdVar15;
          if (uVar10 <= uVar14 + 5) goto LAB_004781d6;
LAB_004780ce:
          uVar26 = (undefined4)param_3[(ulong)(uVar14 + 5) + 3];
          uVar28 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 5) + 3] >> 0x20);
        }
        dVar34 = dVar34 + (double)CONCAT44(uVar23,uVar21);
        dVar29 = dVar29 + dVar31;
        dVar35 = (double)CONCAT44(uVar25,uVar24) + dVar34;
        dVar33 = (double)CONCAT44(uVar28,uVar26) + dVar29;
        uVar13 = uVar14 + 8;
      } while (uVar14 + 0xe <= uVar10);
      uVar14 = uVar14 + 6;
    }
    local_b8._0_8_ = dVar35;
    if (uVar14 < uVar10) {
      local_b8._0_8_ = dVar35 + (double)param_3[(ulong)uVar14 + 3];
    }
    cff2_path_param_t::cubic_to
              (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31,dVar34,dVar29,
               dVar35,dVar33,(double)local_b8._0_8_,(float *)*param_4);
    param_3[0x22c] = (long)dVar33;
    goto LAB_004785fd;
  case 0x1f:
    uVar10 = *(uint *)((long)param_3 + 0x14);
    if ((uVar10 & 4) == 0) {
      if (7 < uVar10) {
        iVar20 = 0;
        uVar11 = 0;
        do {
          uVar14 = (uint)uVar11;
          if (uVar14 < uVar10) {
            uVar21 = (undefined4)param_3[uVar11 + 3];
            uVar23 = (undefined4)((ulong)param_3[uVar11 + 3] >> 0x20);
            if (uVar14 + 1 < uVar10) goto LAB_0047752b;
LAB_004776a9:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            pdVar15 = (double *)&_hb_CrapPool;
            if (uVar10 <= uVar14 + 2) goto LAB_004776c6;
LAB_00477540:
            uVar24 = (undefined4)param_3[(ulong)(uVar14 + 2) + 3];
            uVar25 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 2) + 3] >> 0x20);
            dVar31 = *pdVar15;
            if (uVar14 + 3 < uVar10) goto LAB_00477557;
LAB_004776e8:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar26 = 0;
            uVar28 = 0;
          }
          else {
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar21 = 0;
            uVar23 = 0;
            if (uVar10 <= uVar14 + 1) goto LAB_004776a9;
LAB_0047752b:
            pdVar15 = (double *)(param_3 + (ulong)(uVar14 + 1) + 3);
            if (uVar14 + 2 < uVar10) goto LAB_00477540;
LAB_004776c6:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar24 = 0;
            uVar25 = 0;
            dVar31 = *pdVar15;
            if (uVar10 <= uVar14 + 3) goto LAB_004776e8;
LAB_00477557:
            uVar26 = (undefined4)param_3[(ulong)(uVar14 + 3) + 3];
            uVar28 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 3) + 3] >> 0x20);
          }
          dVar31 = dVar31 + (double)param_3[0x22c] + (double)CONCAT44(uVar23,uVar21);
          dVar34 = (double)CONCAT44(uVar25,uVar24) + (double)param_3[0x22d];
          dVar29 = (double)CONCAT44(uVar28,uVar26) + dVar34;
          cff2_path_param_t::cubic_to
                    (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),
                     (double)param_3[0x22c] + (double)CONCAT44(uVar23,uVar21),(double)param_3[0x22d]
                     ,dVar31,dVar34,dVar31,dVar29,(float *)*param_4);
          param_3[0x22c] = (long)dVar31;
          param_3[0x22d] = (long)dVar29;
          uVar10 = *(uint *)((long)param_3 + 0x14);
          if (uVar14 + 4 < uVar10) {
            uVar21 = (undefined4)param_3[(ulong)(uVar14 + 4) + 3];
            uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 4) + 3] >> 0x20);
            if (uVar14 + 5 < uVar10) goto LAB_004775f6;
LAB_0047771e:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            pdVar15 = (double *)&_hb_CrapPool;
            if (uVar10 <= uVar14 + 6) goto LAB_0047773b;
LAB_0047760b:
            uVar24 = (undefined4)param_3[(ulong)(uVar14 + 6) + 3];
            uVar25 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 6) + 3] >> 0x20);
            dVar34 = *pdVar15;
            if (uVar14 + 7 < uVar10) goto LAB_00477622;
LAB_0047775d:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar26 = 0;
            uVar28 = 0;
          }
          else {
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar21 = 0;
            uVar23 = 0;
            if (uVar10 <= uVar14 + 5) goto LAB_0047771e;
LAB_004775f6:
            pdVar15 = (double *)(param_3 + (ulong)(uVar14 + 5) + 3);
            if (uVar14 + 6 < uVar10) goto LAB_0047760b;
LAB_0047773b:
            *(undefined1 *)(param_3 + 2) = 1;
            _hb_CrapPool = 0;
            uVar24 = 0;
            uVar25 = 0;
            dVar34 = *pdVar15;
            if (uVar10 <= uVar14 + 7) goto LAB_0047775d;
LAB_00477622:
            uVar26 = (undefined4)param_3[(ulong)(uVar14 + 7) + 3];
            uVar28 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 7) + 3] >> 0x20);
          }
          uVar11 = (ulong)(uVar14 + 8);
          dVar29 = dVar29 + (double)CONCAT44(uVar23,uVar21);
          dVar35 = (double)CONCAT44(uVar25,uVar24) + dVar29;
          dVar33 = dVar35;
          if ((iVar20 + uVar10 < 0x10) && ((uVar10 & 1) != 0)) {
            if (uVar14 + 8 < uVar10) {
              uVar21 = (undefined4)param_3[uVar11 + 3];
              uVar23 = (undefined4)((ulong)param_3[uVar11 + 3] >> 0x20);
            }
            else {
              *(undefined1 *)(param_3 + 2) = 1;
              _hb_CrapPool = 0;
              uVar21 = 0;
              uVar23 = 0;
            }
            dVar33 = dVar35 + (double)CONCAT44(uVar23,uVar21);
          }
          dVar8 = (double)CONCAT44(uVar28,uVar26) + dVar34 + dVar31;
          cff2_path_param_t::cubic_to
                    (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31,dVar29,
                     dVar34 + dVar31,dVar35,dVar8,dVar33,(float *)*param_4);
          param_3[0x22c] = (long)dVar8;
          param_1 = SUB84(dVar33,0);
          param_3[0x22d] = (long)dVar33;
          uVar10 = *(uint *)((long)param_3 + 0x14);
          iVar20 = iVar20 + -8;
        } while (uVar14 + 0x10 <= uVar10);
      }
      break;
    }
    dStack_90 = SUB168(*(undefined1 (*) [16])(param_3 + 0x22c),8);
    dVar31 = SUB168(*(undefined1 (*) [16])(param_3 + 0x22c),0) + (double)param_3[3];
    dVar29 = (double)param_3[4] + dVar31;
    dVar34 = (double)param_3[5] + dStack_90;
    local_b8._0_8_ = dVar34 + (double)param_3[6];
    uVar14 = 4;
    if (0xb < uVar10) {
      uVar13 = 6;
      do {
        uVar14 = uVar13;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31,dStack_90,
                   dVar29,dVar34,dVar29,(double)local_b8._0_8_,(float *)*param_4);
        param_3[0x22c] = (long)dVar29;
        param_3[0x22d] = local_b8._0_8_;
        uVar10 = *(uint *)((long)param_3 + 0x14);
        if (uVar14 - 2 < uVar10) {
          uVar21 = (undefined4)param_3[(ulong)(uVar14 - 2) + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar14 - 2) + 3] >> 0x20);
          if (uVar14 - 1 < uVar10) goto LAB_004782a9;
LAB_004783ee:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar15 = (double *)&_hb_CrapPool;
          if (uVar10 <= uVar14) goto LAB_00478408;
LAB_004782bb:
          uVar24 = (undefined4)param_3[(ulong)uVar14 + 3];
          uVar25 = (undefined4)((ulong)param_3[(ulong)uVar14 + 3] >> 0x20);
          dVar34 = *pdVar15;
          if (uVar14 + 1 < uVar10) goto LAB_004782d2;
LAB_0047842a:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          dVar31 = 0.0;
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
          if (uVar10 <= uVar14 - 1) goto LAB_004783ee;
LAB_004782a9:
          pdVar15 = (double *)(param_3 + (ulong)(uVar14 - 1) + 3);
          if (uVar14 < uVar10) goto LAB_004782bb;
LAB_00478408:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar24 = 0;
          uVar25 = 0;
          dVar34 = *pdVar15;
          if (uVar10 <= uVar14 + 1) goto LAB_0047842a;
LAB_004782d2:
          dVar31 = (double)param_3[(ulong)(uVar14 + 1) + 3];
        }
        local_b8._0_8_ = (double)local_b8._0_8_ + (double)CONCAT44(uVar23,uVar21);
        dStack_90 = (double)CONCAT44(uVar25,uVar24) + (double)local_b8._0_8_;
        dVar31 = dVar31 + dVar34 + dVar29;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar29,
                   (double)local_b8._0_8_,dVar34 + dVar29,dStack_90,dVar31,dStack_90,
                   (float *)*param_4);
        param_3[0x22c] = (long)dVar31;
        param_3[0x22d] = (long)dStack_90;
        uVar10 = *(uint *)((long)param_3 + 0x14);
        if (uVar14 + 2 < uVar10) {
          uVar21 = (undefined4)param_3[(ulong)(uVar14 + 2) + 3];
          uVar23 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 2) + 3] >> 0x20);
          if (uVar14 + 3 < uVar10) goto LAB_0047836b;
LAB_00478466:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar15 = (double *)&_hb_CrapPool;
          if (uVar10 <= uVar14 + 4) goto LAB_00478483;
LAB_00478380:
          uVar24 = (undefined4)param_3[(ulong)(uVar14 + 4) + 3];
          uVar25 = (undefined4)((ulong)param_3[(ulong)(uVar14 + 4) + 3] >> 0x20);
          dVar29 = *pdVar15;
          if (uVar14 + 5 < uVar10) goto LAB_00478397;
LAB_004784a5:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          local_b8._0_8_ = 0.0;
        }
        else {
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar21 = 0;
          uVar23 = 0;
          if (uVar10 <= uVar14 + 3) goto LAB_00478466;
LAB_0047836b:
          pdVar15 = (double *)(param_3 + (ulong)(uVar14 + 3) + 3);
          if (uVar14 + 4 < uVar10) goto LAB_00478380;
LAB_00478483:
          *(undefined1 *)(param_3 + 2) = 1;
          _hb_CrapPool = 0;
          uVar24 = 0;
          uVar25 = 0;
          dVar29 = *pdVar15;
          if (uVar10 <= uVar14 + 5) goto LAB_004784a5;
LAB_00478397:
          local_b8._0_8_ = param_3[(ulong)(uVar14 + 5) + 3];
        }
        dVar31 = dVar31 + (double)CONCAT44(uVar23,uVar21);
        dVar29 = dVar29 + dVar31;
        dVar34 = (double)CONCAT44(uVar25,uVar24) + dStack_90;
        local_b8._0_8_ = dVar34 + (double)local_b8._0_8_;
        uVar13 = uVar14 + 8;
      } while (uVar14 + 0xe <= uVar10);
      uVar14 = uVar14 + 6;
    }
    local_a8 = dVar29;
    if (uVar14 < uVar10) {
      local_a8 = dVar29 + (double)param_3[(ulong)uVar14 + 3];
    }
    pfVar19 = (float *)*param_4;
    fVar22 = *(float *)(param_4[1] + 0x4c);
    fVar27 = *(float *)(param_4[1] + 0x50);
LAB_004785e5:
    cff2_path_param_t::cubic_to
              (fVar22,fVar27,dVar31,dStack_90,dVar29,dVar34,local_a8,(double)local_b8._0_8_,pfVar19)
    ;
    param_3[0x22c] = (long)local_a8;
LAB_004785fd:
    param_1 = (undefined4)local_b8._0_8_;
    param_3[0x22d] = local_b8._0_8_;
    break;
  default:
    switch(param_2_00) {
    case 0xff:
      uVar10 = *(uint *)(param_3 + 1);
      uVar14 = *(uint *)((long)param_3 + 0xc);
      if (uVar10 < uVar14 + 4) {
        return param_1;
      }
      if (uVar14 < uVar10) {
        puVar17 = (uint *)(*param_3 + (ulong)uVar14);
      }
      else {
        uVar14 = uVar10 + 1;
        puVar17 = &_hb_NullPool;
      }
      uVar10 = *puVar17;
      uVar13 = *(uint *)((long)param_3 + 0x14);
      if ((ulong)uVar13 < 0x201) {
        *(uint *)((long)param_3 + 0x14) = uVar13 + 1;
        pdVar15 = (double *)(param_3 + (ulong)uVar13 + 3);
      }
      else {
        *(undefined1 *)(param_3 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar15 = (double *)&_hb_CrapPool;
      }
      dVar31 = (double)(int)(uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                            uVar10 << 0x18) * DAT_005de740;
      *pdVar15 = dVar31;
      *(uint *)((long)param_3 + 0xc) = uVar14 + 4;
      return SUB84(dVar31,0);
    default:
      goto switchD_0047648d_caseD_2;
    case 0x122:
      if (*(int *)((long)param_3 + 0x14) == 7) {
        dVar35 = *(double *)*(undefined1 (*) [16])(param_3 + 0x22c);
        dVar8 = (double)param_3[0x22d];
        auVar38 = *(undefined1 (*) [16])(param_3 + 0x22c);
        dVar30 = (double)param_3[4] + dVar35 + (double)param_3[3];
        dVar32 = (double)param_3[5] + dVar8;
        dVar34 = (double)param_3[6] + dVar30;
        dVar31 = (double)param_3[7];
        dVar33 = (double)param_3[8] + dVar31 + dVar34;
        dVar29 = (double)param_3[9] + dVar33;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),
                   dVar35 + (double)param_3[3],dVar8,dVar30,dVar32,dVar34,dVar32,(float *)*param_4);
        param_3[0x22c] = (long)dVar34;
        param_3[0x22d] = (long)dVar32;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar31 + dVar34,
                   dVar32,dVar33,dVar8,dVar29,dVar8,(float *)*param_4);
        param_3[0x22c] = (long)dVar29;
        local_a8._0_4_ = auVar38._0_4_;
        uStack_a0._0_4_ = auVar38._8_4_;
        uStack_a0._4_4_ = auVar38._12_4_;
        *(undefined4 *)(param_3 + 0x22d) = (undefined4)uStack_a0;
        *(undefined4 *)((long)param_3 + 0x116c) = uStack_a0._4_4_;
        param_1 = local_a8._0_4_;
        goto LAB_00478605;
      }
      break;
    case 0x123:
      if (*(int *)((long)param_3 + 0x14) != 0xd) break;
      dVar30 = (double)param_3[5] + (double)param_3[3] + (double)param_3[0x22c];
      dVar32 = (double)param_3[6] + (double)param_3[4] + (double)param_3[0x22d];
      dVar35 = (double)param_3[7] + dVar30;
      dVar8 = (double)param_3[8] + dVar32;
      dVar29 = (double)param_3[9] + dVar35;
      dVar33 = (double)param_3[10] + dVar8;
      auVar3._8_4_ = SUB84(dVar33,0);
      auVar3._0_8_ = dVar29;
      auVar3._12_4_ = (int)((ulong)dVar33 >> 0x20);
      auVar4._8_4_ = SUB84(dVar8,0);
      auVar4._0_8_ = dVar35;
      auVar4._12_4_ = (int)((ulong)dVar8 >> 0x20);
      dVar31 = (double)param_3[0xb] + dVar29;
      dVar33 = (double)param_3[0xc] + dVar33;
      auVar5._8_4_ = SUB84(dVar33,0);
      auVar5._0_8_ = dVar31;
      auVar5._12_4_ = (int)((ulong)dVar33 >> 0x20);
      dVar34 = (double)param_3[0xd] + dVar31;
      local_b8._8_4_ = SUB84((double)param_3[0xe] + dVar33,0);
      local_b8._0_8_ = dVar34;
      uStack_ac = (int)((ulong)((double)param_3[0xe] + dVar33) >> 0x20);
      cff2_path_param_t::cubic_to
                (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),
                 (double)param_3[3] + (double)param_3[0x22c],
                 (double)param_3[4] + (double)param_3[0x22d],dVar30,dVar32,dVar35,dVar8,
                 (float *)*param_4);
      lStack_80 = auVar4._8_8_;
      param_3[0x22c] = (long)dVar35;
      param_3[0x22d] = lStack_80;
      pfVar19 = (float *)*param_4;
      lVar12 = param_4[1];
      dStack_90 = auVar3._8_8_;
      uStack_a0 = auVar5._8_8_;
      dVar33 = stack0xffffffffffffff50;
      goto LAB_00477a85;
    case 0x124:
      if (*(int *)((long)param_3 + 0x14) == 9) {
        auVar38 = *(undefined1 (*) [16])(param_3 + 0x22c);
        dVar34 = (double)param_3[3] + auVar38._0_8_;
        dVar33 = (double)param_3[4] + auVar38._8_8_;
        dVar37 = (double)param_3[5] + dVar34;
        dVar36 = (double)param_3[6] + dVar33;
        dVar31 = (double)param_3[7];
        dVar35 = dVar37 + dVar31;
        dVar30 = (double)param_3[8] + dVar35;
        dVar8 = (double)param_3[10];
        dVar32 = (double)param_3[9] + dVar30;
        dVar29 = (double)param_3[0xb] + dVar32;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar34,dVar33,dVar37,
                   dVar36,dVar35,dVar36,(float *)*param_4);
        param_3[0x22c] = (long)(dVar37 + dVar31);
        param_3[0x22d] = (long)dVar36;
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar30,dVar36,dVar32,
                   dVar8 + dVar36,dVar29,auVar38._8_8_,(float *)*param_4);
        param_3[0x22c] = (long)dVar29;
        local_98 = auVar38._0_4_;
        *(int *)(param_3 + 0x22d) = auVar38._8_4_;
        *(int *)((long)param_3 + 0x116c) = auVar38._12_4_;
        param_1 = local_98;
        goto LAB_00478605;
      }
      break;
    case 0x125:
      if (*(int *)((long)param_3 + 0x14) == 0xb) {
        local_a8 = (double)param_3[0x22c];
        local_b8._0_8_ = param_3[0x22d];
        dVar33 = (double)param_3[3] + local_a8;
        dVar35 = (double)param_3[4] + (double)local_b8._0_8_;
        dVar32 = (double)param_3[5] + dVar33;
        dVar37 = (double)param_3[6] + dVar35;
        dVar8 = (double)param_3[7] + dVar32;
        dVar30 = (double)param_3[8] + dVar37;
        dVar31 = (double)param_3[9] + dVar8;
        dVar34 = (double)param_3[10] + dVar30;
        auVar38._8_4_ = SUB84(dVar34,0);
        auVar38._0_8_ = dVar31;
        auVar38._12_4_ = (int)((ulong)dVar34 >> 0x20);
        dVar29 = (double)param_3[0xb] + dVar31;
        dVar34 = (double)param_3[0xc] + dVar34;
        if ((double)((ulong)((double)param_3[3] + 0.0 + (double)param_3[5] + (double)param_3[7] +
                             (double)param_3[9] + (double)param_3[0xb]) & _DAT_005d91b0) <=
            (double)((ulong)((double)param_3[4] + 0.0 + (double)param_3[6] + (double)param_3[8] +
                             (double)param_3[10] + (double)param_3[0xc]) & _UNK_005d91b8)) {
          local_b8._0_8_ = (double)param_3[0xd] + dVar34;
        }
        else {
          local_a8 = (double)param_3[0xd] + dVar29;
        }
        auVar7._8_4_ = SUB84(dVar30,0);
        auVar7._0_8_ = dVar8;
        auVar7._12_4_ = (int)((ulong)dVar30 >> 0x20);
        cff2_path_param_t::cubic_to
                  (*(float *)(param_4[1] + 0x4c),*(float *)(param_4[1] + 0x50),dVar33,dVar35,dVar32,
                   dVar37,dVar8,dVar30,(float *)*param_4);
        lStack_70 = auVar7._8_8_;
        param_3[0x22c] = (long)dVar8;
        param_3[0x22d] = lStack_70;
        pfVar19 = (float *)*param_4;
        dStack_90 = auVar38._8_8_;
        fVar22 = *(float *)(param_4[1] + 0x4c);
        fVar27 = *(float *)(param_4[1] + 0x50);
        goto LAB_004785e5;
      }
    }
    *(int *)((long)param_3 + 0xc) = (int)param_3[1] + 1;
  }
LAB_00478605:
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  return param_1;
}


