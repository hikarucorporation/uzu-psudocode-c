// Function : process_op
// Namespace: CFF:cs_opset_t_CFF__number_t_cff1_cs_opset_path_t_CFF__cff1_cs_interp_env_t_cff1_path_param_t_~414fbfe9
// Entry    : 00470800
// Prototype: undefined process_op(uint param_1, long * param_2, long * param_3)
// Body     : 00470800 - 004761a3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* CFF::cs_opset_t<CFF::number_t, cff1_cs_opset_path_t, CFF::cff1_cs_interp_env_t,
   cff1_path_param_t, cff1_path_procs_path_t>::process_op(unsigned int, CFF::cff1_cs_interp_env_t&,
   cff1_path_param_t&) */

void __cdecl
CFF::
cs_opset_t<CFF::number_t,cff1_cs_opset_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t,cff1_path_procs_path_t>
::process_op(uint param_1,long *param_2,long *param_3)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  ushort uVar3;
  CFFIndex<OT::IntType<unsigned_short,2u>> *pCVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  long lVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  code *pcVar25;
  bool bVar26;
  uint uVar27;
  uint uVar28;
  undefined8 uVar29;
  long *plVar30;
  double *pdVar31;
  uint *puVar32;
  float *pfVar33;
  float *pfVar34;
  undefined8 uVar35;
  hb_draw_funcs_t *phVar36;
  uint uVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  float fVar58;
  float fVar59;
  undefined4 uVar60;
  undefined4 in_XMM8_Db;
  undefined4 uVar61;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  float local_108;
  float local_f8;
  double dStack_f0;
  long lStack_e0;
  long lStack_d0;
  double local_c8;
  long lStack_c0;
  double dStack_a0;
  double dStack_90;
  double dStack_80;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  switch(param_1) {
  case 1:
  case 0x12:
    if (((char)param_2[0x22e] == '\0') && (param_1 < 0x13)) {
      if ((0x4400aU >> (param_1 & 0x1f) & 1) == 0) {
        if (param_1 != 4) goto LAB_004743d9;
        uVar22 = *(uint *)((long)param_2 + 0x14);
        if (1 < uVar22) goto LAB_004743ba;
      }
      else {
        uVar22 = *(uint *)((long)param_2 + 0x14);
        if ((uVar22 & 1) != 0) {
LAB_004743ba:
          if (uVar22 != 0) {
            param_2[0x22f] = param_2[3];
            *(undefined1 *)((long)param_2 + 0x1171) = 1;
          }
        }
      }
      *(undefined1 *)(param_2 + 0x22e) = 1;
    }
LAB_004743d9:
    *(int *)((long)param_2 + 0x103c) =
         *(int *)((long)param_2 + 0x103c) + (*(uint *)((long)param_2 + 0x14) >> 1);
    break;
  case 2:
  case 9:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x1c:
switchD_00470832_caseD_2:
    opset_t<CFF::number_t>::process_op(param_1,param_2);
    return;
  case 3:
  case 0x17:
    if (((char)param_2[0x22e] == '\0') && (param_1 < 0x18)) {
      if ((0x9c4008U >> (param_1 & 0x1f) & 1) == 0) {
        if ((0x400010U >> (param_1 & 0x1f) & 1) == 0) {
          if (param_1 != 0x15) goto LAB_0047441d;
          uVar22 = *(uint *)((long)param_2 + 0x14);
          bVar26 = uVar22 < 3;
        }
        else {
          uVar22 = *(uint *)((long)param_2 + 0x14);
          bVar26 = uVar22 < 2;
        }
        bVar26 = !bVar26;
      }
      else {
        uVar22 = *(uint *)((long)param_2 + 0x14);
        bVar26 = (bool)((byte)uVar22 & 1);
      }
      if ((bVar26 != false) && (uVar22 != 0)) {
        param_2[0x22f] = param_2[3];
        *(undefined1 *)((long)param_2 + 0x1171) = 1;
      }
      *(undefined1 *)(param_2 + 0x22e) = 1;
    }
LAB_0047441d:
    *(uint *)(param_2 + 0x208) = (int)param_2[0x208] + (*(uint *)((long)param_2 + 0x14) >> 1);
    break;
  case 4:
    uVar22 = *(uint *)((long)param_2 + 0x14);
    if ((char)param_2[0x22e] == '\0') {
      if (1 < uVar22) {
        param_2[0x22f] = param_2[3];
        *(undefined1 *)((long)param_2 + 0x1171) = 1;
        *(undefined4 *)((long)param_2 + 0x1174) = 1;
      }
      *(undefined1 *)(param_2 + 0x22e) = 1;
    }
    local_58._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
    local_58._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
    if (uVar22 == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      local_58._8_8_ = (double)local_58._8_8_ + 0.0;
    }
    else {
      *(uint *)((long)param_2 + 0x14) = uVar22 - 1;
      local_58._8_8_ = (double)param_2[(ulong)(uVar22 - 1) + 3] + (double)local_58._8_8_;
    }
    goto LAB_00471251;
  case 5:
    uVar22 = *(uint *)((long)param_2 + 0x14);
    if (1 < uVar22) {
      uVar28 = 2;
      do {
        auVar65 = *(undefined1 (*) [16])(param_2 + 0x22c);
        if (uVar28 - 2 < uVar22) {
          pdVar31 = (double *)(param_2 + (ulong)(uVar28 - 2) + 3);
          if (uVar22 <= uVar28 - 1) goto LAB_00470abc;
LAB_00470a49:
          uVar40 = (undefined4)param_2[(ulong)(uVar28 - 1) + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar28 - 1) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar31 = (double *)&_hb_CrapPool;
          if (uVar28 - 1 < uVar22) goto LAB_00470a49;
LAB_00470abc:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
        }
        local_58._0_8_ = auVar65._0_8_;
        local_58._8_8_ = auVar65._8_8_;
        dVar54 = (double)CONCAT44(uVar43,uVar40) + (double)local_58._8_8_;
        local_58._8_4_ = SUB84(dVar54,0);
        local_58._0_8_ = *pdVar31 + (double)local_58._0_8_;
        local_58._12_4_ = (int)((ulong)dVar54 >> 0x20);
        cff1_path_param_t::line_to
                  (*param_3,(float *)param_3[1],(double *)param_3[2],(double *)local_58);
        *(undefined8 *)*(undefined1 (*) [16])(param_2 + 0x22c) = local_58._0_8_;
        param_2[0x22d] = local_58._8_8_;
        uVar28 = uVar28 + 2;
        uVar22 = *(uint *)((long)param_2 + 0x14);
      } while (uVar28 <= uVar22);
    }
    break;
  case 6:
    uVar28 = *(uint *)((long)param_2 + 0x14);
    uVar22 = 0;
    if (1 < uVar28) {
      pauVar1 = (undefined1 (*) [16])(param_2 + 0x22c);
      uVar27 = 0;
      do {
        if (uVar27 < uVar28) {
          uVar40 = (undefined4)param_2[(ulong)uVar27 + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)uVar27 + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
        }
        local_58._0_8_ = SUB168(*pauVar1,0);
        local_58._0_8_ = (double)CONCAT44(uVar43,uVar40) + (double)local_58._0_8_;
        local_58._8_8_ = SUB168(*pauVar1,8);
        cff1_path_param_t::line_to
                  (*param_3,(float *)param_3[1],(double *)param_3[2],(double *)local_58);
        *(undefined8 *)*pauVar1 = local_58._0_8_;
        param_2[0x22d] = local_58._8_8_;
        if (uVar27 + 1 < *(uint *)((long)param_2 + 0x14)) {
          uVar40 = (undefined4)param_2[(ulong)(uVar27 + 1) + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar27 + 1) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
        }
        local_58._8_8_ = (double)CONCAT44(uVar43,uVar40) + (double)local_58._8_8_;
        cff1_path_param_t::line_to
                  (*param_3,(float *)param_3[1],(double *)param_3[2],(double *)local_58);
        *(undefined8 *)*pauVar1 = local_58._0_8_;
        param_2[0x22d] = local_58._8_8_;
        uVar28 = *(uint *)((long)param_2 + 0x14);
        uVar22 = uVar27 + 2;
        uVar37 = uVar27 + 4;
        uVar27 = uVar22;
      } while (uVar37 <= uVar28);
    }
    if (uVar28 <= uVar22) break;
    local_58._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
    local_58._0_8_ = (double)local_58._0_8_ + (double)param_2[(ulong)uVar22 + 3];
    local_58._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
    goto LAB_00470b58;
  case 7:
    uVar28 = *(uint *)((long)param_2 + 0x14);
    uVar22 = 0;
    if (1 < uVar28) {
      pauVar1 = (undefined1 (*) [16])(param_2 + 0x22c);
      uVar27 = 0;
      do {
        if (uVar27 < uVar28) {
          uVar40 = (undefined4)param_2[(ulong)uVar27 + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)uVar27 + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
        }
        local_58._8_8_ = SUB168(*pauVar1,8);
        local_58._8_8_ = (double)CONCAT44(uVar43,uVar40) + (double)local_58._8_8_;
        local_58._0_8_ = SUB168(*pauVar1,0);
        cff1_path_param_t::line_to
                  (*param_3,(float *)param_3[1],(double *)param_3[2],(double *)local_58);
        *(undefined8 *)*pauVar1 = local_58._0_8_;
        param_2[0x22d] = local_58._8_8_;
        if (uVar27 + 1 < *(uint *)((long)param_2 + 0x14)) {
          uVar40 = (undefined4)param_2[(ulong)(uVar27 + 1) + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar27 + 1) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
        }
        local_58._0_8_ = (double)CONCAT44(uVar43,uVar40) + (double)local_58._0_8_;
        cff1_path_param_t::line_to
                  (*param_3,(float *)param_3[1],(double *)param_3[2],(double *)local_58);
        *(undefined8 *)*pauVar1 = local_58._0_8_;
        param_2[0x22d] = local_58._8_8_;
        uVar28 = *(uint *)((long)param_2 + 0x14);
        uVar22 = uVar27 + 2;
        uVar37 = uVar27 + 4;
        uVar27 = uVar22;
      } while (uVar37 <= uVar28);
    }
    if (uVar28 <= uVar22) break;
    local_58._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
    local_58._8_8_ = (double)local_58._8_8_ + (double)param_2[(ulong)uVar22 + 3];
    local_58._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
LAB_00470b58:
    cff1_path_param_t::line_to(*param_3,(float *)param_3[1],(double *)param_3[2],(double *)local_58)
    ;
    param_2[0x22c] = local_58._0_8_;
    param_2[0x22d] = local_58._8_8_;
    break;
  case 8:
    uVar22 = *(uint *)((long)param_2 + 0x14);
    if (5 < uVar22) {
      dVar54 = (double)param_2[0x22c];
      dVar48 = (double)param_2[0x22d];
      uVar28 = 0;
      do {
        if (uVar28 < uVar22) {
          plVar30 = param_2 + (ulong)uVar28 + 3;
          if (uVar22 <= uVar28 + 1) goto LAB_00470d5e;
LAB_00470bc4:
          uVar40 = (undefined4)param_2[(ulong)(uVar28 + 1) + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 1) + 3] >> 0x20);
          uVar41 = (undefined4)*plVar30;
          uVar44 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar22 <= uVar28 + 2) goto LAB_00470d83;
LAB_00470bde:
          plVar30 = param_2 + (ulong)(uVar28 + 2) + 3;
          if (uVar22 <= uVar28 + 3) goto LAB_00470da7;
LAB_00470bf8:
          uVar60 = (undefined4)param_2[(ulong)(uVar28 + 3) + 3];
          uVar62 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 3) + 3] >> 0x20);
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar22 <= uVar28 + 4) goto LAB_00470dcc;
LAB_00470c12:
          pdVar31 = (double *)(param_2 + (ulong)(uVar28 + 4) + 3);
          if (uVar22 <= uVar28 + 5) goto LAB_00470df0;
LAB_00470c2c:
          dVar56 = (double)param_2[(ulong)(uVar28 + 5) + 3];
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          plVar30 = &_hb_CrapPool;
          if (uVar28 + 1 < uVar22) goto LAB_00470bc4;
LAB_00470d5e:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
          uVar41 = (undefined4)*plVar30;
          uVar44 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar28 + 2 < uVar22) goto LAB_00470bde;
LAB_00470d83:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          plVar30 = &_hb_CrapPool;
          if (uVar28 + 3 < uVar22) goto LAB_00470bf8;
LAB_00470da7:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar60 = 0;
          uVar62 = 0;
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar28 + 4 < uVar22) goto LAB_00470c12;
LAB_00470dcc:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar31 = (double *)&_hb_CrapPool;
          if (uVar28 + 5 < uVar22) goto LAB_00470c2c;
LAB_00470df0:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          dVar56 = 0.0;
        }
        dVar50 = dVar54 + (double)CONCAT44(uVar44,uVar41);
        dVar49 = dVar48 + (double)CONCAT44(uVar43,uVar40);
        dVar57 = (double)CONCAT44(uVar42,uVar39) + dVar50;
        dVar51 = (double)CONCAT44(uVar62,uVar60) + dVar49;
        dVar54 = *pdVar31 + dVar57;
        dVar48 = dVar56 + dVar51;
        pdVar31 = (double *)param_3[2];
        dVar56 = dVar54;
        dVar52 = dVar48;
        if (pdVar31 != (double *)0x0) {
          dVar56 = *pdVar31;
          dVar52 = pdVar31[1];
          dVar51 = dVar51 + dVar52;
          dVar57 = dVar57 + dVar56;
          dVar49 = dVar49 + dVar52;
          dVar50 = dVar50 + dVar56;
          dVar56 = dVar56 + dVar54;
          dVar52 = dVar52 + dVar48;
        }
        pfVar34 = (float *)param_3[1];
        fVar46 = *(float *)(*param_3 + 0x4c);
        fVar63 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar50 * fVar46;
        fVar58 = (float)dVar57 * fVar46;
        fVar46 = (float)dVar56 * fVar46;
        fVar59 = (float)dVar52 * fVar63;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar2 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            in_XMM8_Db = 0;
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00470e29;
LAB_00470f8f:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_00470f8f;
LAB_00470e29:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
          fVar64 = (float)dVar49 * fVar63 * fVar2 + fVar64;
          fVar58 = (float)dVar51 * fVar63 * fVar2 + fVar58;
          fVar46 = fVar46 + fVar2 * fVar59;
          uVar47 = CONCAT44(in_XMM8_Db,fVar46);
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            in_XMM8_Db = 0;
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00470d31;
LAB_00470eb0:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_00470eb0;
LAB_00470d31:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
          uVar47 = CONCAT44(in_XMM8_Db,fVar46);
        }
        (*pcVar25)(fVar64,(float)dVar49 * fVar63,fVar58,(float)dVar51 * fVar63,uVar47,fVar59,phVar36
                   ,uVar35,pfVar33,uVar29);
        pfVar34[9] = fVar46;
        pfVar34[10] = fVar59;
        param_2[0x22c] = (long)dVar54;
        param_2[0x22d] = (long)dVar48;
        uVar22 = *(uint *)((long)param_2 + 0x14);
        uVar27 = uVar28 + 0xc;
        uVar28 = uVar28 + 6;
      } while (uVar27 <= uVar22);
    }
    break;
  case 10:
    if (*(int *)((long)param_2 + 0x14) == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar22 = *(uint *)(param_2 + 0x22a);
    }
    else {
      uVar22 = *(int *)((long)param_2 + 0x14) - 1;
      *(uint *)((long)param_2 + 0x14) = uVar22;
      uVar22 = (int)(double)param_2[(ulong)uVar22 + 3] + (int)param_2[0x22a];
    }
    if (((-1 < (int)uVar22) && ((ushort *)param_2[0x22b] != (ushort *)0x0)) &&
       (uVar3 = *(ushort *)param_2[0x22b], uVar22 < (ushort)(uVar3 << 8 | uVar3 >> 8))) {
      uVar23 = (ulong)*(uint *)((long)param_2 + 0x104c);
      if (uVar23 < 10) {
        lVar24 = *param_2;
        lVar18 = param_2[1];
        param_2[0x204] = lVar24;
        param_2[0x205] = lVar18;
        *(uint *)((long)param_2 + 0x104c) = *(uint *)((long)param_2 + 0x104c) + 1;
        param_2[uVar23 * 3 + 0x20c] = param_2[0x206];
        param_2[uVar23 * 3 + 0x20a] = lVar24;
        (param_2 + uVar23 * 3 + 0x20a)[1] = lVar18;
        pCVar4 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)param_2[0x22b];
        if ((pCVar4 == (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0) ||
           ((ushort)(*(ushort *)pCVar4 << 8 | *(ushort *)pCVar4 >> 8) <= uVar22)) {
          lVar24 = 0;
          uVar23 = 0;
        }
        else {
          auVar65 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[](pCVar4,uVar22);
          lVar24 = auVar65._0_8_;
          uVar23 = auVar65._8_8_ & 0xffffffff;
        }
        param_2[0x204] = lVar24;
        param_2[0x205] = uVar23;
        *(undefined4 *)(param_2 + 0x206) = 2;
LAB_00471939:
        *(uint *)((long)param_2 + 0x1034) = uVar22;
        *param_2 = param_2[0x204];
        param_2[1] = param_2[0x205];
        return;
      }
    }
    goto LAB_0047451d;
  case 0xb:
    if (*(int *)((long)param_2 + 0x104c) == 0) {
      *(undefined1 *)(param_2 + 0x209) = 1;
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      DAT_0071cd90 = 0;
      plVar30 = &_hb_CrapPool;
    }
    else {
      uVar22 = *(int *)((long)param_2 + 0x104c) - 1;
      *(uint *)((long)param_2 + 0x104c) = uVar22;
      plVar30 = param_2 + (ulong)uVar22 * 3 + 0x20a;
    }
    param_2[0x206] = plVar30[2];
    lVar24 = plVar30[1];
    param_2[0x204] = *plVar30;
    param_2[0x205] = lVar24;
    lVar24 = plVar30[1];
    *param_2 = *plVar30;
    param_2[1] = lVar24;
    return;
  case 0xe:
    if ((char)param_2[0x22e] == '\0') {
      if ((*(byte *)((long)param_2 + 0x14) & 1) != 0) {
        param_2[0x22f] = param_2[3];
        *(undefined1 *)((long)param_2 + 0x1171) = 1;
      }
      *(undefined1 *)(param_2 + 0x22e) = 1;
    }
    *(undefined1 *)(param_2 + 0x207) = 1;
    break;
  case 0x13:
  case 0x14:
    if ((char)param_2[0x22e] == '\0') {
      if ((*(byte *)((long)param_2 + 0x14) & 1) != 0) {
        param_2[0x22f] = param_2[3];
        *(undefined1 *)((long)param_2 + 0x1171) = 1;
        *(undefined4 *)((long)param_2 + 0x1174) = 1;
      }
      *(undefined1 *)(param_2 + 0x22e) = 1;
    }
    if (*(char *)((long)param_2 + 0x103a) == '\0') {
      iVar21 = (*(uint *)((long)param_2 + 0x14) >> 1) + (int)param_2[0x208];
      *(int *)(param_2 + 0x208) = iVar21;
      uVar22 = iVar21 + *(int *)((long)param_2 + 0x103c) + 7U >> 3;
      *(uint *)((long)param_2 + 0x1044) = uVar22;
      *(undefined1 *)((long)param_2 + 0x103a) = 1;
    }
    else {
      uVar22 = *(uint *)((long)param_2 + 0x1044);
    }
    uVar22 = uVar22 + *(int *)((long)param_2 + 0xc);
    if (*(uint *)(param_2 + 1) < uVar22) {
      return;
    }
    *(undefined4 *)((long)param_2 + 0x1174) = 0;
    *(undefined4 *)((long)param_2 + 0x14) = 0;
    *(uint *)((long)param_2 + 0xc) = uVar22;
    return;
  case 0x15:
    uVar22 = *(uint *)((long)param_2 + 0x14);
    if ((char)param_2[0x22e] == '\0') {
      if (2 < uVar22) {
        param_2[0x22f] = param_2[3];
        *(undefined1 *)((long)param_2 + 0x1171) = 1;
        *(undefined4 *)((long)param_2 + 0x1174) = 1;
      }
      *(undefined1 *)(param_2 + 0x22e) = 1;
    }
    if (uVar22 == 0) {
      pdVar31 = (double *)&_hb_CrapPool;
LAB_004744c7:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar40 = 0;
      uVar43 = 0;
    }
    else {
      uVar28 = uVar22 - 1;
      *(uint *)((long)param_2 + 0x14) = uVar28;
      pdVar31 = (double *)(param_2 + (ulong)uVar28 + 3);
      if (uVar28 == 0) goto LAB_004744c7;
      *(uint *)((long)param_2 + 0x14) = uVar22 - 2;
      uVar40 = (undefined4)param_2[(ulong)(uVar22 - 2) + 3];
      uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar22 - 2) + 3] >> 0x20);
    }
    local_58._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
    local_58._0_8_ = (double)CONCAT44(uVar43,uVar40) + (double)local_58._0_8_;
    local_58._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
    local_58._8_8_ = (double)local_58._8_8_ + *pdVar31;
    goto LAB_00471251;
  case 0x16:
    uVar22 = *(uint *)((long)param_2 + 0x14);
    if ((char)param_2[0x22e] == '\0') {
      if (1 < uVar22) {
        param_2[0x22f] = param_2[3];
        *(undefined1 *)((long)param_2 + 0x1171) = 1;
        *(undefined4 *)((long)param_2 + 0x1174) = 1;
      }
      *(undefined1 *)(param_2 + 0x22e) = 1;
    }
    if (uVar22 == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar40 = 0;
      uVar43 = 0;
    }
    else {
      *(uint *)((long)param_2 + 0x14) = uVar22 - 1;
      uVar40 = (undefined4)param_2[(ulong)(uVar22 - 1) + 3];
      uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar22 - 1) + 3] >> 0x20);
    }
    local_58._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
    local_58._0_8_ = (double)CONCAT44(uVar43,uVar40) + (double)local_58._0_8_;
    local_58._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
LAB_00471251:
    cff1_path_param_t::move_to(*param_3,(float *)param_3[1],(double *)param_3[2],(double *)local_58)
    ;
    param_2[0x22c] = local_58._0_8_;
    param_2[0x22d] = local_58._8_8_;
    if (*(char *)((long)param_2 + 0x1039) == '\0') {
      if (*(char *)((long)param_2 + 0x103a) == '\0') {
        iVar21 = (*(uint *)((long)param_2 + 0x14) >> 1) + (int)param_2[0x208];
        *(int *)(param_2 + 0x208) = iVar21;
        *(uint *)((long)param_2 + 0x1044) = iVar21 + *(int *)((long)param_2 + 0x103c) + 7U >> 3;
        *(undefined1 *)((long)param_2 + 0x103a) = 1;
      }
      *(undefined1 *)((long)param_2 + 0x1039) = 1;
    }
    break;
  case 0x18:
    uVar22 = *(uint *)((long)param_2 + 0x14);
    if (uVar22 < 8) break;
    uVar28 = uVar22 - 2;
    dVar54 = (double)param_2[0x22c];
    dVar48 = (double)param_2[0x22d];
    uVar27 = 0;
    do {
      uVar37 = uVar27;
      if (uVar37 < uVar22) {
        plVar30 = param_2 + (ulong)uVar37 + 3;
        if (uVar22 <= uVar37 + 1) goto LAB_004714be;
LAB_00471324:
        uVar40 = (undefined4)param_2[(ulong)(uVar37 + 1) + 3];
        uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar37 + 1) + 3] >> 0x20);
        uVar41 = (undefined4)*plVar30;
        uVar44 = (undefined4)((ulong)*plVar30 >> 0x20);
        if (uVar22 <= uVar37 + 2) goto LAB_004714e3;
LAB_0047133e:
        plVar30 = param_2 + (ulong)(uVar37 + 2) + 3;
        if (uVar22 <= uVar37 + 3) goto LAB_00471507;
LAB_00471358:
        uVar60 = (undefined4)param_2[(ulong)(uVar37 + 3) + 3];
        uVar62 = (undefined4)((ulong)param_2[(ulong)(uVar37 + 3) + 3] >> 0x20);
        uVar39 = (undefined4)*plVar30;
        uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
        if (uVar22 <= uVar37 + 4) goto LAB_0047152c;
LAB_00471372:
        pdVar31 = (double *)(param_2 + (ulong)(uVar37 + 4) + 3);
        if (uVar22 <= uVar37 + 5) goto LAB_00471550;
LAB_0047138c:
        dVar56 = (double)param_2[(ulong)(uVar37 + 5) + 3];
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        plVar30 = &_hb_CrapPool;
        if (uVar37 + 1 < uVar22) goto LAB_00471324;
LAB_004714be:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        uVar40 = 0;
        uVar43 = 0;
        uVar41 = (undefined4)*plVar30;
        uVar44 = (undefined4)((ulong)*plVar30 >> 0x20);
        if (uVar37 + 2 < uVar22) goto LAB_0047133e;
LAB_004714e3:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        plVar30 = &_hb_CrapPool;
        if (uVar37 + 3 < uVar22) goto LAB_00471358;
LAB_00471507:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        uVar60 = 0;
        uVar62 = 0;
        uVar39 = (undefined4)*plVar30;
        uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
        if (uVar37 + 4 < uVar22) goto LAB_00471372;
LAB_0047152c:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar31 = (double *)&_hb_CrapPool;
        if (uVar37 + 5 < uVar22) goto LAB_0047138c;
LAB_00471550:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        dVar56 = 0.0;
      }
      dVar50 = dVar54 + (double)CONCAT44(uVar44,uVar41);
      dVar49 = dVar48 + (double)CONCAT44(uVar43,uVar40);
      dVar57 = (double)CONCAT44(uVar42,uVar39) + dVar50;
      dVar51 = (double)CONCAT44(uVar62,uVar60) + dVar49;
      dVar54 = *pdVar31 + dVar57;
      dVar48 = dVar56 + dVar51;
      pdVar31 = (double *)param_3[2];
      dVar56 = dVar54;
      dVar52 = dVar48;
      if (pdVar31 != (double *)0x0) {
        dVar56 = *pdVar31;
        dVar52 = pdVar31[1];
        dVar51 = dVar51 + dVar52;
        dVar57 = dVar57 + dVar56;
        dVar49 = dVar49 + dVar52;
        dVar50 = dVar50 + dVar56;
        dVar56 = dVar56 + dVar54;
        dVar52 = dVar52 + dVar48;
      }
      pfVar34 = (float *)param_3[1];
      fVar46 = *(float *)(*param_3 + 0x4c);
      fVar63 = *(float *)(*param_3 + 0x50);
      fVar64 = (float)dVar50 * fVar46;
      fVar58 = (float)dVar57 * fVar46;
      fVar46 = (float)dVar56 * fVar46;
      fVar59 = (float)dVar52 * fVar63;
      pfVar33 = pfVar34 + 6;
      phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
      uVar35 = *(undefined8 *)(pfVar34 + 4);
      if (*(char *)(pfVar34 + 1) == '\0') {
        fVar2 = *pfVar34;
        if (pfVar34[6] == 0.0) {
          hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          in_XMM8_Db = 0;
          pcVar25 = *(code **)(phVar36 + 0x28);
          lVar24 = *(long *)(phVar36 + 0x38);
          if (lVar24 != 0) goto LAB_00471589;
LAB_004716d8:
          uVar29 = 0;
        }
        else {
          pcVar25 = *(code **)(phVar36 + 0x28);
          lVar24 = *(long *)(phVar36 + 0x38);
          if (lVar24 == 0) goto LAB_004716d8;
LAB_00471589:
          uVar29 = *(undefined8 *)(lVar24 + 0x18);
        }
        fVar64 = (float)dVar49 * fVar63 * fVar2 + fVar64;
        fVar58 = (float)dVar51 * fVar63 * fVar2 + fVar58;
        fVar46 = fVar46 + fVar2 * fVar59;
        uVar47 = CONCAT44(in_XMM8_Db,fVar46);
      }
      else {
        if (*pfVar33 == 0.0) {
          hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          in_XMM8_Db = 0;
          pcVar25 = *(code **)(phVar36 + 0x28);
          lVar24 = *(long *)(phVar36 + 0x38);
          if (lVar24 != 0) goto LAB_00471491;
LAB_00471600:
          uVar29 = 0;
        }
        else {
          pcVar25 = *(code **)(phVar36 + 0x28);
          lVar24 = *(long *)(phVar36 + 0x38);
          if (lVar24 == 0) goto LAB_00471600;
LAB_00471491:
          uVar29 = *(undefined8 *)(lVar24 + 0x18);
        }
        uVar47 = CONCAT44(in_XMM8_Db,fVar46);
      }
      (*pcVar25)(fVar64,(float)dVar49 * fVar63,fVar58,(float)dVar51 * fVar63,uVar47,fVar59,phVar36,
                 uVar35,pfVar33,uVar29);
      pfVar34[9] = fVar46;
      pfVar34[10] = fVar59;
      param_2[0x22c] = (long)dVar54;
      param_2[0x22d] = (long)dVar48;
      uVar22 = *(uint *)((long)param_2 + 0x14);
      uVar27 = uVar37 + 6;
    } while (uVar37 + 0xc <= uVar28);
    auVar65 = *(undefined1 (*) [16])(param_2 + 0x22c);
    if (uVar27 < uVar22) {
      pdVar31 = (double *)(param_2 + (ulong)uVar27 + 3);
      if (uVar22 <= uVar37 + 7) goto LAB_0047454f;
LAB_00472890:
      uVar40 = (undefined4)param_2[(ulong)(uVar37 + 7) + 3];
      uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar37 + 7) + 3] >> 0x20);
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar31 = (double *)&_hb_CrapPool;
      if (uVar37 + 7 < uVar22) goto LAB_00472890;
LAB_0047454f:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar40 = 0;
      uVar43 = 0;
    }
    local_58._0_8_ = auVar65._0_8_;
    local_58._8_8_ = auVar65._8_8_;
    dVar54 = (double)CONCAT44(uVar43,uVar40) + (double)local_58._8_8_;
    local_58._8_4_ = SUB84(dVar54,0);
    local_58._0_8_ = *pdVar31 + (double)local_58._0_8_;
    local_58._12_4_ = (int)((ulong)dVar54 >> 0x20);
    cff1_path_param_t::line_to(*param_3,(float *)param_3[1],(double *)param_3[2],(double *)local_58)
    ;
    *(undefined8 *)*(undefined1 (*) [16])(param_2 + 0x22c) = local_58._0_8_;
    param_2[0x22d] = local_58._8_8_;
    break;
  case 0x19:
    uVar22 = *(uint *)((long)param_2 + 0x14);
    if (uVar22 < 8) break;
    uVar28 = uVar22 - 6;
    pauVar1 = (undefined1 (*) [16])(param_2 + 0x22c);
    uVar27 = 0;
    do {
      uVar37 = uVar27;
      if (uVar37 < uVar22) {
        pdVar31 = (double *)(param_2 + (ulong)uVar37 + 3);
        if (uVar22 <= uVar37 + 1) goto LAB_004717dc;
LAB_00471766:
        uVar40 = (undefined4)param_2[(ulong)(uVar37 + 1) + 3];
        uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar37 + 1) + 3] >> 0x20);
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar31 = (double *)&_hb_CrapPool;
        if (uVar37 + 1 < uVar22) goto LAB_00471766;
LAB_004717dc:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        uVar40 = 0;
        uVar43 = 0;
      }
      local_58._0_8_ = SUB168(*pauVar1,0);
      local_58._8_8_ = SUB168(*pauVar1,8);
      dVar54 = (double)CONCAT44(uVar43,uVar40) + (double)local_58._8_8_;
      local_58._8_4_ = SUB84(dVar54,0);
      local_58._0_8_ = *pdVar31 + (double)local_58._0_8_;
      local_58._12_4_ = (int)((ulong)dVar54 >> 0x20);
      cff1_path_param_t::line_to
                (*param_3,(float *)param_3[1],(double *)param_3[2],(double *)local_58);
      *(undefined8 *)*pauVar1 = local_58._0_8_;
      param_2[0x22d] = local_58._8_8_;
      uVar22 = *(uint *)((long)param_2 + 0x14);
      uVar27 = uVar37 + 2;
    } while (uVar37 + 4 <= uVar28);
    if (uVar27 < uVar22) {
      plVar30 = param_2 + (ulong)uVar27 + 3;
      if (uVar22 <= uVar37 + 3) goto LAB_0047458d;
LAB_00472901:
      uVar41 = (undefined4)param_2[(ulong)(uVar37 + 3) + 3];
      uVar44 = (undefined4)((ulong)param_2[(ulong)(uVar37 + 3) + 3] >> 0x20);
      uVar40 = (undefined4)*plVar30;
      uVar43 = (undefined4)((ulong)*plVar30 >> 0x20);
      if (uVar22 <= uVar37 + 4) goto LAB_004745ad;
LAB_00472916:
      pdVar31 = (double *)(param_2 + (ulong)(uVar37 + 4) + 3);
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      plVar30 = &_hb_CrapPool;
      if (uVar37 + 3 < uVar22) goto LAB_00472901;
LAB_0047458d:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar41 = 0;
      uVar44 = 0;
      uVar40 = (undefined4)*plVar30;
      uVar43 = (undefined4)((ulong)*plVar30 >> 0x20);
      if (uVar37 + 4 < uVar22) goto LAB_00472916;
LAB_004745ad:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar31 = (double *)&_hb_CrapPool;
    }
    dVar54 = *(double *)*pauVar1;
    if (uVar37 + 5 < uVar22) {
      uVar39 = (undefined4)param_2[(ulong)(uVar37 + 5) + 3];
      uVar42 = (undefined4)((ulong)param_2[(ulong)(uVar37 + 5) + 3] >> 0x20);
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar39 = 0;
      uVar42 = 0;
    }
    dVar54 = dVar54 + (double)CONCAT44(uVar43,uVar40);
    dVar56 = (double)param_2[0x22d] + (double)CONCAT44(uVar44,uVar41);
    dVar48 = *pdVar31;
    if (uVar37 + 6 < uVar22) {
      pdVar31 = (double *)(param_2 + (ulong)(uVar37 + 6) + 3);
      if (uVar22 <= uVar37 + 7) goto LAB_00474608;
LAB_00472973:
      uVar40 = (undefined4)param_2[(ulong)(uVar37 + 7) + 3];
      uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar37 + 7) + 3] >> 0x20);
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar31 = (double *)&_hb_CrapPool;
      if (uVar37 + 7 < uVar22) goto LAB_00472973;
LAB_00474608:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar40 = 0;
      uVar43 = 0;
    }
    dVar49 = (double)CONCAT44(uVar42,uVar39) + dVar56;
    dVar48 = dVar48 + dVar54;
    dVar51 = *pdVar31 + dVar48;
    dVar57 = (double)CONCAT44(uVar43,uVar40) + dVar49;
    uVar40 = SUB84(dVar57,0);
    uVar23 = (ulong)dVar57 >> 0x20;
    pdVar31 = (double *)param_3[2];
    dVar50 = dVar51;
    if (pdVar31 != (double *)0x0) {
      dVar50 = *pdVar31;
      dVar52 = pdVar31[1];
      dVar49 = dVar49 + dVar52;
      dVar48 = dVar48 + dVar50;
      dVar56 = dVar56 + dVar52;
      dVar54 = dVar54 + dVar50;
      dVar57 = dVar52 + dVar57;
      dVar50 = dVar50 + dVar51;
    }
    pfVar34 = (float *)param_3[1];
    local_108 = *(float *)(*param_3 + 0x4c);
    fVar46 = *(float *)(*param_3 + 0x50);
    fVar64 = (float)dVar54 * local_108;
    fVar63 = (float)dVar48 * local_108;
    local_108 = (float)dVar50 * local_108;
    fVar58 = (float)dVar57 * fVar46;
    pfVar33 = pfVar34 + 6;
    phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
    uVar35 = *(undefined8 *)(pfVar34 + 4);
    auVar9._8_4_ = uVar40;
    auVar9._0_8_ = dVar51;
    auVar9._12_4_ = (int)uVar23;
    if (*(char *)(pfVar34 + 1) == '\0') {
      fVar59 = *pfVar34;
      if (pfVar34[6] == 0.0) {
        hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
      }
      fVar64 = (float)dVar56 * fVar46 * fVar59 + fVar64;
      fVar63 = (float)dVar49 * fVar46 * fVar59 + fVar63;
      local_108 = local_108 + fVar59 * fVar58;
      pcVar25 = *(code **)(phVar36 + 0x28);
      if (*(long *)(phVar36 + 0x38) == 0) {
        uVar29 = 0;
      }
      else {
        uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
      }
    }
    else {
      if (*pfVar33 == 0.0) {
        hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
        pcVar25 = *(code **)(phVar36 + 0x28);
        lVar24 = *(long *)(phVar36 + 0x38);
        if (lVar24 != 0) goto LAB_00473e46;
      }
      else {
        pcVar25 = *(code **)(phVar36 + 0x28);
        lVar24 = *(long *)(phVar36 + 0x38);
        if (lVar24 != 0) {
LAB_00473e46:
          uVar29 = *(undefined8 *)(lVar24 + 0x18);
          goto LAB_00474734;
        }
      }
      uVar29 = 0;
    }
LAB_00474734:
    (*pcVar25)(fVar64,(float)dVar56 * fVar46,fVar63,(float)dVar49 * fVar46,local_108,fVar58,phVar36,
               uVar35,pfVar33,uVar29);
    pfVar34[9] = local_108;
    pfVar34[10] = fVar58;
    lStack_c0 = auVar9._8_8_;
    *(double *)*pauVar1 = dVar51;
    param_2[0x22d] = lStack_c0;
    break;
  case 0x1a:
    uVar28 = *(uint *)((long)param_2 + 0x14);
    uVar27 = uVar28 & 1;
    uVar22 = uVar27 + 4;
    if (uVar22 <= uVar28) {
      dVar54 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
      dVar48 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
      if ((uVar28 & 1) != 0) {
        dVar54 = dVar54 + (double)param_2[3];
      }
      do {
        if (uVar27 < uVar28) {
          uVar40 = (undefined4)param_2[(ulong)uVar27 + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)uVar27 + 3] >> 0x20);
          if (uVar28 <= uVar27 + 1) goto LAB_00475bec;
LAB_00475a8f:
          plVar30 = param_2 + (ulong)(uVar27 + 1) + 3;
          if (uVar28 <= uVar27 + 2) goto LAB_00475c0e;
LAB_00475aa7:
          uVar41 = (undefined4)param_2[(ulong)(uVar27 + 2) + 3];
          uVar44 = (undefined4)((ulong)param_2[(ulong)(uVar27 + 2) + 3] >> 0x20);
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar28 <= uVar27 + 3) goto LAB_00475c31;
LAB_00475abf:
          uVar60 = (undefined4)param_2[(ulong)(uVar27 + 3) + 3];
          uVar62 = (undefined4)((ulong)param_2[(ulong)(uVar27 + 3) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
          if (uVar27 + 1 < uVar28) goto LAB_00475a8f;
LAB_00475bec:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          plVar30 = &_hb_CrapPool;
          if (uVar27 + 2 < uVar28) goto LAB_00475aa7;
LAB_00475c0e:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar41 = 0;
          uVar44 = 0;
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar27 + 3 < uVar28) goto LAB_00475abf;
LAB_00475c31:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar60 = 0;
          uVar62 = 0;
        }
        dVar56 = dVar48 + (double)CONCAT44(uVar43,uVar40);
        dVar51 = (double)CONCAT44(uVar42,uVar39) + dVar54;
        dVar50 = (double)CONCAT44(uVar44,uVar41) + dVar56;
        dVar48 = (double)CONCAT44(uVar62,uVar60) + dVar50;
        pdVar31 = (double *)param_3[2];
        dVar49 = dVar51;
        dVar57 = dVar48;
        if (pdVar31 != (double *)0x0) {
          dVar52 = pdVar31[1];
          dVar57 = dVar48 + dVar52;
          dVar50 = dVar50 + dVar52;
          dVar49 = dVar51 + *pdVar31;
          dVar56 = dVar56 + dVar52;
          dVar54 = dVar54 + *pdVar31;
        }
        pfVar34 = (float *)param_3[1];
        fVar46 = *(float *)(*param_3 + 0x4c);
        fVar63 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar54 * fVar46;
        fVar58 = (float)dVar49 * fVar46;
        fVar46 = (float)dVar49 * fVar46;
        fVar59 = (float)dVar57 * fVar63;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar2 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00475c6b;
LAB_00475a30:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_00475a30;
LAB_00475c6b:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
          fVar64 = (float)dVar56 * fVar63 * fVar2 + fVar64;
          fVar58 = (float)dVar50 * fVar63 * fVar2 + fVar58;
          fVar46 = fVar46 + fVar2 * fVar59;
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00475bc4;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00475bc4:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_00475cf3;
            }
          }
          uVar29 = 0;
        }
LAB_00475cf3:
        (*pcVar25)(fVar64,(float)dVar56 * fVar63,fVar58,(float)dVar50 * fVar63,fVar46,fVar59,phVar36
                   ,uVar35,pfVar33,uVar29);
        pfVar34[9] = fVar46;
        pfVar34[10] = fVar59;
        param_2[0x22c] = (long)dVar51;
        param_2[0x22d] = (long)dVar48;
        uVar37 = uVar22 + 4;
        uVar28 = *(uint *)((long)param_2 + 0x14);
        uVar27 = uVar22;
        dVar54 = dVar51;
        uVar22 = uVar37;
      } while (uVar37 <= uVar28);
    }
    break;
  case 0x1b:
    uVar28 = *(uint *)((long)param_2 + 0x14);
    uVar27 = uVar28 & 1;
    uVar22 = uVar27 + 4;
    if (uVar22 <= uVar28) {
      dVar54 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
      dStack_f0 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
      if ((uVar28 & 1) != 0) {
        dStack_f0 = dStack_f0 + (double)param_2[3];
      }
      do {
        if (uVar27 < uVar28) {
          uVar40 = (undefined4)param_2[(ulong)uVar27 + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)uVar27 + 3] >> 0x20);
          if (uVar28 <= uVar27 + 1) goto LAB_00475f76;
LAB_00475e1f:
          plVar30 = param_2 + (ulong)(uVar27 + 1) + 3;
          if (uVar28 <= uVar27 + 2) goto LAB_00475f98;
LAB_00475e37:
          uVar41 = (undefined4)param_2[(ulong)(uVar27 + 2) + 3];
          uVar44 = (undefined4)((ulong)param_2[(ulong)(uVar27 + 2) + 3] >> 0x20);
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar28 <= uVar27 + 3) goto LAB_00475fbb;
LAB_00475e4f:
          uVar60 = (undefined4)param_2[(ulong)(uVar27 + 3) + 3];
          uVar62 = (undefined4)((ulong)param_2[(ulong)(uVar27 + 3) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
          if (uVar27 + 1 < uVar28) goto LAB_00475e1f;
LAB_00475f76:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          plVar30 = &_hb_CrapPool;
          if (uVar27 + 2 < uVar28) goto LAB_00475e37;
LAB_00475f98:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar41 = 0;
          uVar44 = 0;
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar27 + 3 < uVar28) goto LAB_00475e4f;
LAB_00475fbb:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar60 = 0;
          uVar62 = 0;
        }
        dVar48 = dVar54 + (double)CONCAT44(uVar43,uVar40);
        dVar56 = (double)CONCAT44(uVar42,uVar39) + dVar48;
        dVar57 = (double)CONCAT44(uVar44,uVar41) + dStack_f0;
        dVar54 = (double)CONCAT44(uVar62,uVar60) + dVar56;
        pdVar31 = (double *)param_3[2];
        auVar6._8_4_ = SUB84(dVar57,0);
        auVar6._0_8_ = dVar56;
        auVar6._12_4_ = (int)((ulong)dVar57 >> 0x20);
        dVar51 = dVar54;
        dVar50 = dVar57;
        if (pdVar31 != (double *)0x0) {
          dVar49 = *pdVar31;
          dVar51 = dVar54 + dVar49;
          dVar50 = dVar57 + pdVar31[1];
          dVar56 = dVar56 + dVar49;
          dStack_f0 = dStack_f0 + pdVar31[1];
          dVar48 = dVar48 + dVar49;
        }
        pfVar34 = (float *)param_3[1];
        fVar46 = *(float *)(*param_3 + 0x4c);
        fVar63 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar48 * fVar46;
        fVar58 = (float)dVar56 * fVar46;
        fVar46 = (float)dVar51 * fVar46;
        fVar59 = (float)dVar50 * fVar63;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar2 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00475ff5;
LAB_00475dbf:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_00475dbf;
LAB_00475ff5:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
          fVar64 = (float)dStack_f0 * fVar63 * fVar2 + fVar64;
          fVar58 = (float)dVar50 * fVar63 * fVar2 + fVar58;
          fVar46 = fVar46 + fVar2 * fVar59;
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00475f4e;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00475f4e:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_00476073;
            }
          }
          uVar29 = 0;
        }
LAB_00476073:
        (*pcVar25)(fVar64,(float)dStack_f0 * fVar63,fVar58,(float)dVar50 * fVar63,fVar46,fVar59,
                   phVar36,uVar35,pfVar33,uVar29);
        pfVar34[9] = fVar46;
        pfVar34[10] = fVar59;
        param_2[0x22c] = (long)dVar54;
        param_2[0x22d] = (long)dVar57;
        dStack_f0 = auVar6._8_8_;
        uVar37 = uVar22 + 4;
        uVar28 = *(uint *)((long)param_2 + 0x14);
        uVar27 = uVar22;
        uVar22 = uVar37;
      } while (uVar37 <= uVar28);
    }
    break;
  case 0x1d:
    if (*(int *)((long)param_2 + 0x14) == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar22 = *(uint *)(param_2 + 0x228);
    }
    else {
      uVar22 = *(int *)((long)param_2 + 0x14) - 1;
      *(uint *)((long)param_2 + 0x14) = uVar22;
      uVar22 = (int)(double)param_2[(ulong)uVar22 + 3] + (int)param_2[0x228];
    }
    if (((-1 < (int)uVar22) && ((ushort *)param_2[0x229] != (ushort *)0x0)) &&
       (uVar3 = *(ushort *)param_2[0x229], uVar22 < (ushort)(uVar3 << 8 | uVar3 >> 8))) {
      uVar23 = (ulong)*(uint *)((long)param_2 + 0x104c);
      if (uVar23 < 10) {
        lVar24 = *param_2;
        lVar18 = param_2[1];
        param_2[0x204] = lVar24;
        param_2[0x205] = lVar18;
        *(uint *)((long)param_2 + 0x104c) = *(uint *)((long)param_2 + 0x104c) + 1;
        param_2[uVar23 * 3 + 0x20c] = param_2[0x206];
        param_2[uVar23 * 3 + 0x20a] = lVar24;
        (param_2 + uVar23 * 3 + 0x20a)[1] = lVar18;
        pCVar4 = (CFFIndex<OT::IntType<unsigned_short,2u>> *)param_2[0x229];
        if ((pCVar4 == (CFFIndex<OT::IntType<unsigned_short,2u>> *)0x0) ||
           ((ushort)(*(ushort *)pCVar4 << 8 | *(ushort *)pCVar4 >> 8) <= uVar22)) {
          lVar24 = 0;
          uVar23 = 0;
        }
        else {
          auVar65 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[](pCVar4,uVar22);
          lVar24 = auVar65._0_8_;
          uVar23 = auVar65._8_8_ & 0xffffffff;
        }
        param_2[0x204] = lVar24;
        param_2[0x205] = uVar23;
        *(undefined4 *)(param_2 + 0x206) = 1;
        goto LAB_00471939;
      }
    }
LAB_0047451d:
    *(int *)((long)param_2 + 0xc) = (int)param_2[1] + 1;
    return;
  case 0x1e:
    uVar22 = *(uint *)((long)param_2 + 0x14);
    if ((uVar22 & 4) == 0) {
      if (7 < uVar22) {
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_68._8_8_;
        local_68 = auVar19 << 0x40;
        uVar28 = 0;
        do {
          auVar65 = local_68;
          if (uVar28 < uVar22) {
            uVar40 = (undefined4)param_2[(ulong)uVar28 + 3];
            uVar43 = (undefined4)((ulong)param_2[(ulong)uVar28 + 3] >> 0x20);
            if (uVar22 <= uVar28 + 1) goto LAB_00471b17;
LAB_004719a0:
            plVar30 = param_2 + (ulong)(uVar28 + 1) + 3;
            if (uVar22 <= uVar28 + 2) goto LAB_00471b3b;
LAB_004719ba:
            uVar41 = (undefined4)param_2[(ulong)(uVar28 + 2) + 3];
            uVar44 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 2) + 3] >> 0x20);
            uVar39 = (undefined4)*plVar30;
            uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
            if (uVar22 <= uVar28 + 3) goto LAB_00471b61;
LAB_004719d5:
            uVar60 = (undefined4)param_2[(ulong)(uVar28 + 3) + 3];
            uVar62 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 3) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar40 = 0;
            uVar43 = 0;
            if (uVar28 + 1 < uVar22) goto LAB_004719a0;
LAB_00471b17:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            plVar30 = &_hb_CrapPool;
            if (uVar28 + 2 < uVar22) goto LAB_004719ba;
LAB_00471b3b:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar41 = 0;
            uVar44 = 0;
            uVar39 = (undefined4)*plVar30;
            uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
            if (uVar28 + 3 < uVar22) goto LAB_004719d5;
LAB_00471b61:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar60 = 0;
            uVar62 = 0;
          }
          dVar49 = (double)param_2[0x22c];
          dVar57 = (double)param_2[0x22d] + (double)CONCAT44(uVar43,uVar40);
          dVar56 = (double)CONCAT44(uVar42,uVar39) + dVar49;
          uVar40 = (undefined4)((ulong)dVar56 >> 0x20);
          dVar51 = (double)CONCAT44(uVar44,uVar41) + dVar57;
          dVar50 = (double)CONCAT44(uVar62,uVar60) + dVar56;
          pdVar31 = (double *)param_3[2];
          dVar48 = dVar51;
          dVar54 = dVar50;
          if (pdVar31 != (double *)0x0) {
            dVar52 = *pdVar31;
            dVar54 = dVar50 + dVar52;
            dVar48 = dVar51 + pdVar31[1];
            dVar56 = dVar56 + dVar52;
            dVar57 = dVar57 + pdVar31[1];
            dVar49 = dVar49 + dVar52;
          }
          pfVar34 = (float *)param_3[1];
          local_c8._0_4_ = *(float *)(*param_3 + 0x4c);
          fVar46 = *(float *)(*param_3 + 0x50);
          fVar63 = (float)dVar49 * local_c8._0_4_;
          fVar64 = (float)dVar56 * local_c8._0_4_;
          local_c8._0_4_ = (float)dVar54 * local_c8._0_4_;
          fVar58 = (float)dVar48 * fVar46;
          pfVar33 = pfVar34 + 6;
          phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
          uVar35 = *(undefined8 *)(pfVar34 + 4);
          if (*(char *)(pfVar34 + 1) == '\0') {
            fVar59 = *pfVar34;
            if (pfVar34[6] == 0.0) {
              hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) goto LAB_00471b9b;
LAB_0047200d:
              uVar29 = 0;
            }
            else {
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 == 0) goto LAB_0047200d;
LAB_00471b9b:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
            }
            fVar63 = (float)dVar57 * fVar46 * fVar59 + fVar63;
            fVar64 = (float)dVar48 * fVar46 * fVar59 + fVar64;
            local_c8._0_4_ = local_c8._0_4_ + fVar59 * fVar58;
          }
          else {
            if (*pfVar33 == 0.0) {
              hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) goto LAB_00471aed;
            }
            else {
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) {
LAB_00471aed:
                uVar29 = *(undefined8 *)(lVar24 + 0x18);
                goto LAB_00471c16;
              }
            }
            uVar29 = 0;
          }
LAB_00471c16:
          (*pcVar25)(fVar63,(float)dVar57 * fVar46,fVar64,(float)dVar48 * fVar46,local_c8._0_4_,
                     fVar58,phVar36,uVar35,pfVar33,uVar29);
          pfVar34[9] = local_c8._0_4_;
          pfVar34[10] = fVar58;
          param_2[0x22c] = (long)dVar50;
          param_2[0x22d] = (long)dVar51;
          uVar22 = *(uint *)((long)param_2 + 0x14);
          if (uVar28 + 4 < uVar22) {
            uVar43 = (undefined4)param_2[(ulong)(uVar28 + 4) + 3];
            uVar41 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 4) + 3] >> 0x20);
            if (uVar22 <= uVar28 + 5) goto LAB_00471e1d;
LAB_00471c83:
            plVar30 = param_2 + (ulong)(uVar28 + 5) + 3;
            if (uVar22 <= uVar28 + 6) goto LAB_00471e41;
LAB_00471c9d:
            uVar42 = (undefined4)param_2[(ulong)(uVar28 + 6) + 3];
            uVar60 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 6) + 3] >> 0x20);
            uVar44 = (undefined4)*plVar30;
            uVar39 = (undefined4)((ulong)*plVar30 >> 0x20);
            if (uVar22 <= uVar28 + 7) goto LAB_00471e65;
LAB_00471cb7:
            uVar62 = (undefined4)param_2[(ulong)(uVar28 + 7) + 3];
            uVar61 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 7) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar43 = 0;
            uVar41 = 0;
            if (uVar28 + 5 < uVar22) goto LAB_00471c83;
LAB_00471e1d:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            plVar30 = &_hb_CrapPool;
            if (uVar28 + 6 < uVar22) goto LAB_00471c9d;
LAB_00471e41:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar42 = 0;
            uVar60 = 0;
            uVar44 = (undefined4)*plVar30;
            uVar39 = (undefined4)((ulong)*plVar30 >> 0x20);
            if (uVar28 + 7 < uVar22) goto LAB_00471cb7;
LAB_00471e65:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar62 = 0;
            uVar61 = 0;
          }
          uVar27 = uVar28 + 8;
          dVar50 = dVar50 + (double)CONCAT44(uVar41,uVar43);
          dVar54 = (double)CONCAT44(uVar39,uVar44) + dVar50;
          dVar48 = (double)CONCAT44(uVar60,uVar42) + dVar51;
          iVar21 = local_68._0_4_;
          dVar56 = dVar54;
          if ((iVar21 + uVar22 < 0x10) && ((uVar22 & 1) != 0)) {
            if (uVar27 < uVar22) {
              uVar43 = (undefined4)param_2[(ulong)uVar27 + 3];
              uVar41 = (undefined4)((ulong)param_2[(ulong)uVar27 + 3] >> 0x20);
            }
            else {
              *(undefined1 *)(param_2 + 2) = 1;
              _hb_CrapPool = 0;
              uVar43 = 0;
              uVar41 = 0;
            }
            dVar56 = (double)CONCAT44(uVar41,uVar43) + dVar54;
          }
          dVar52 = (double)CONCAT44(uVar61,uVar62) + dVar48;
          pdVar31 = (double *)param_3[2];
          dVar57 = dVar56;
          dVar49 = dVar52;
          if (pdVar31 != (double *)0x0) {
            dVar53 = *pdVar31;
            dVar55 = pdVar31[1];
            dVar57 = dVar56 + dVar53;
            dVar49 = dVar52 + dVar55;
            dVar48 = dVar48 + dVar55;
            dVar54 = dVar54 + dVar53;
            dVar51 = dVar51 + dVar55;
            dVar50 = dVar50 + dVar53;
          }
          pfVar34 = (float *)param_3[1];
          fVar46 = *(float *)(*param_3 + 0x4c);
          fVar63 = *(float *)(*param_3 + 0x50);
          fVar64 = (float)dVar50 * fVar46;
          fVar58 = (float)dVar54 * fVar46;
          fVar46 = (float)dVar57 * fVar46;
          fVar59 = (float)dVar49 * fVar63;
          pfVar33 = pfVar34 + 6;
          phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
          uVar35 = *(undefined8 *)(pfVar34 + 4);
          if (*(char *)(pfVar34 + 1) == '\0') {
            fVar2 = *pfVar34;
            if (pfVar34[6] == 0.0) {
              hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
              uVar40 = 0;
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) goto LAB_00471e9f;
LAB_004720ab:
              uVar29 = 0;
            }
            else {
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 == 0) goto LAB_004720ab;
LAB_00471e9f:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
            }
            fVar64 = (float)dVar51 * fVar63 * fVar2 + fVar64;
            fVar58 = (float)dVar48 * fVar63 * fVar2 + fVar58;
            fVar46 = fVar46 + fVar2 * fVar59;
            uVar47 = CONCAT44(uVar40,fVar46);
          }
          else {
            if (*pfVar33 == 0.0) {
              hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
              uVar40 = 0;
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) goto LAB_00471deb;
LAB_00471f04:
              uVar29 = 0;
            }
            else {
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 == 0) goto LAB_00471f04;
LAB_00471deb:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
            }
            uVar47 = CONCAT44(uVar40,fVar46);
          }
          (*pcVar25)(fVar64,(float)dVar51 * fVar63,fVar58,(float)dVar48 * fVar63,uVar47,fVar59,
                     phVar36,uVar35,pfVar33,uVar29);
          pfVar34[9] = fVar46;
          pfVar34[10] = fVar59;
          param_2[0x22c] = (long)dVar56;
          param_2[0x22d] = (long)dVar52;
          uVar22 = *(uint *)((long)param_2 + 0x14);
          local_68._4_4_ = 0;
          local_68._0_4_ = iVar21 - 8;
          local_68._8_8_ = auVar65._8_8_;
          uVar37 = uVar28 + 0x10;
          uVar28 = uVar27;
        } while (uVar37 <= uVar22);
      }
      break;
    }
    dVar57 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
    dVar48 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8) + (double)param_2[3];
    dVar54 = (double)param_2[4] + dVar57;
    dVar56 = (double)param_2[5] + dVar48;
    local_68._0_8_ = (double)param_2[6] + dVar54;
    uVar28 = 4;
    if (0xb < uVar22) {
      uVar27 = 6;
      do {
        uVar28 = uVar27;
        pdVar31 = (double *)param_3[2];
        dVar50 = dVar56;
        dVar51 = (double)local_68._0_8_;
        if (pdVar31 != (double *)0x0) {
          dVar51 = *pdVar31;
          dVar54 = dVar54 + dVar51;
          dVar48 = dVar48 + pdVar31[1];
          dVar57 = dVar57 + dVar51;
          dVar50 = dVar56 + pdVar31[1];
          dVar51 = (double)local_68._0_8_ + dVar51;
        }
        pfVar34 = (float *)param_3[1];
        fVar46 = *(float *)(*param_3 + 0x4c);
        fVar63 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar57 * fVar46;
        fVar58 = (float)dVar54 * fVar46;
        fVar46 = (float)dVar51 * fVar46;
        fVar59 = (float)dVar50 * fVar63;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar2 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00473011;
LAB_0047351b:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_0047351b;
LAB_00473011:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
          fVar64 = (float)dVar48 * fVar63 * fVar2 + fVar64;
          fVar58 = (float)dVar50 * fVar63 * fVar2 + fVar58;
          fVar46 = fVar46 + fVar2 * fVar59;
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00472fe7;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00472fe7:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_0047308f;
            }
          }
          uVar29 = 0;
        }
LAB_0047308f:
        (*pcVar25)(fVar64,(float)dVar48 * fVar63,fVar58,(float)dVar50 * fVar63,fVar46,fVar59,phVar36
                   ,uVar35,pfVar33,uVar29);
        pfVar34[9] = fVar46;
        pfVar34[10] = fVar59;
        param_2[0x22c] = local_68._0_8_;
        param_2[0x22d] = (long)dVar56;
        uVar22 = *(uint *)((long)param_2 + 0x14);
        if (uVar28 - 2 < uVar22) {
          uVar40 = (undefined4)param_2[(ulong)(uVar28 - 2) + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar28 - 2) + 3] >> 0x20);
          if (uVar22 <= uVar28 - 1) goto LAB_0047325f;
LAB_004730f5:
          plVar30 = param_2 + (ulong)(uVar28 - 1) + 3;
          if (uVar22 <= uVar28) goto LAB_0047327f;
LAB_0047310b:
          uVar41 = (undefined4)param_2[(ulong)uVar28 + 3];
          uVar44 = (undefined4)((ulong)param_2[(ulong)uVar28 + 3] >> 0x20);
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar22 <= uVar28 + 1) goto LAB_004732a3;
LAB_00473126:
          uVar60 = (undefined4)param_2[(ulong)(uVar28 + 1) + 3];
          uVar62 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 1) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
          if (uVar28 - 1 < uVar22) goto LAB_004730f5;
LAB_0047325f:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          plVar30 = &_hb_CrapPool;
          if (uVar28 < uVar22) goto LAB_0047310b;
LAB_0047327f:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar41 = 0;
          uVar44 = 0;
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar28 + 1 < uVar22) goto LAB_00473126;
LAB_004732a3:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar60 = 0;
          uVar62 = 0;
        }
        local_68._0_8_ = (double)local_68._0_8_ + (double)CONCAT44(uVar43,uVar40);
        dVar57 = (double)CONCAT44(uVar42,uVar39) + (double)local_68._0_8_;
        dVar48 = (double)CONCAT44(uVar62,uVar60) + (double)CONCAT44(uVar44,uVar41) + dVar56;
        pdVar31 = (double *)param_3[2];
        dVar51 = dVar48;
        dVar54 = dVar57;
        if (pdVar31 != (double *)0x0) {
          dVar54 = dVar57 + *pdVar31;
          dVar51 = dVar48 + pdVar31[1];
          dVar56 = dVar56 + pdVar31[1];
          local_68._0_8_ = (double)local_68._0_8_ + *pdVar31;
        }
        pfVar34 = (float *)param_3[1];
        fVar46 = *(float *)(*param_3 + 0x4c);
        fVar63 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)(double)local_68._0_8_ * fVar46;
        fVar46 = (float)dVar54 * fVar46;
        fVar58 = (float)dVar51 * fVar63;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar59 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_004732dc;
LAB_004735c5:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_004735c5;
LAB_004732dc:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
          fVar64 = (float)dVar56 * fVar63 * fVar59 + fVar64;
          fVar46 = fVar46 + fVar59 * fVar58;
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00473236;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00473236:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_00473360;
            }
          }
          uVar29 = 0;
        }
LAB_00473360:
        (*pcVar25)(fVar64,phVar36,uVar35,pfVar33,uVar29);
        pfVar34[9] = fVar46;
        pfVar34[10] = fVar58;
        param_2[0x22c] = (long)dVar57;
        param_2[0x22d] = (long)dVar48;
        uVar22 = *(uint *)((long)param_2 + 0x14);
        if (uVar28 + 2 < uVar22) {
          uVar40 = (undefined4)param_2[(ulong)(uVar28 + 2) + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 2) + 3] >> 0x20);
          if (uVar22 <= uVar28 + 3) goto LAB_0047344f;
LAB_004733c1:
          pdVar31 = (double *)(param_2 + (ulong)(uVar28 + 3) + 3);
          if (uVar22 <= uVar28 + 4) goto LAB_00473472;
LAB_004733da:
          uVar41 = (undefined4)param_2[(ulong)(uVar28 + 4) + 3];
          uVar44 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 4) + 3] >> 0x20);
          dVar54 = *pdVar31;
          if (uVar22 <= uVar28 + 5) goto LAB_00473495;
LAB_004733f3:
          uVar39 = (undefined4)param_2[(ulong)(uVar28 + 5) + 3];
          uVar42 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 5) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
          if (uVar28 + 3 < uVar22) goto LAB_004733c1;
LAB_0047344f:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar31 = (double *)&_hb_CrapPool;
          if (uVar28 + 4 < uVar22) goto LAB_004733da;
LAB_00473472:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar41 = 0;
          uVar44 = 0;
          dVar54 = *pdVar31;
          if (uVar28 + 5 < uVar22) goto LAB_004733f3;
LAB_00473495:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar39 = 0;
          uVar42 = 0;
        }
        dVar48 = dVar48 + (double)CONCAT44(uVar43,uVar40);
        dVar54 = dVar54 + dVar57;
        dVar56 = (double)CONCAT44(uVar44,uVar41) + dVar48;
        local_68._0_8_ = (double)CONCAT44(uVar42,uVar39) + dVar54;
        uVar27 = uVar28 + 8;
      } while (uVar28 + 0xe <= uVar22);
      uVar28 = uVar28 + 6;
    }
    local_c8 = dVar56;
    if (uVar28 < uVar22) {
      local_c8 = dVar56 + (double)param_2[(ulong)uVar28 + 3];
    }
    pdVar31 = (double *)param_3[2];
    dVar51 = (double)local_68._0_8_;
    dVar50 = local_c8;
    if (pdVar31 != (double *)0x0) {
      dVar49 = *pdVar31;
      dVar52 = pdVar31[1];
      dVar51 = (double)local_68._0_8_ + dVar49;
      dVar50 = local_c8 + dVar52;
      dVar56 = dVar56 + dVar52;
      dVar54 = dVar54 + dVar49;
      dVar48 = dVar48 + dVar52;
      dVar57 = dVar57 + dVar49;
    }
    pfVar34 = (float *)param_3[1];
    local_108 = *(float *)(*param_3 + 0x4c);
    local_f8 = *(float *)(*param_3 + 0x50);
    fVar63 = (float)dVar57 * local_108;
    fVar58 = (float)dVar48 * local_f8;
    fVar64 = (float)dVar54 * local_108;
    fVar46 = (float)dVar56 * local_f8;
    local_108 = (float)dVar51 * local_108;
    local_f8 = (float)dVar50 * local_f8;
    pfVar33 = pfVar34 + 6;
    phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
    uVar35 = *(undefined8 *)(pfVar34 + 4);
    if (*(char *)(pfVar34 + 1) == '\0') {
      fVar59 = *pfVar34;
      fVar38 = fVar58 * fVar59;
      fVar45 = fVar46 * fVar59;
      fVar59 = fVar59 * local_f8;
      fVar2 = pfVar34[6];
joined_r0x00475615:
      if (fVar2 == 0.0) {
        hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
      }
      fVar63 = fVar38 + fVar63;
      fVar64 = fVar45 + fVar64;
      local_108 = local_108 + fVar59;
      pcVar25 = *(code **)(phVar36 + 0x28);
      if (*(long *)(phVar36 + 0x38) == 0) {
        uVar29 = 0;
      }
      else {
        uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
      }
    }
    else {
      if (*pfVar33 == 0.0) {
        hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
        pcVar25 = *(code **)(phVar36 + 0x28);
        lVar24 = *(long *)(phVar36 + 0x38);
        if (lVar24 != 0) goto LAB_004742aa;
      }
      else {
        pcVar25 = *(code **)(phVar36 + 0x28);
        lVar24 = *(long *)(phVar36 + 0x38);
        if (lVar24 != 0) {
LAB_004742aa:
          uVar29 = *(undefined8 *)(lVar24 + 0x18);
          goto LAB_00475744;
        }
      }
      uVar29 = 0;
    }
    goto LAB_00475744;
  case 0x1f:
    uVar22 = *(uint *)((long)param_2 + 0x14);
    if ((uVar22 & 4) == 0) {
      if (7 < uVar22) {
        auVar20._8_8_ = 0;
        auVar20._0_8_ = local_68._8_8_;
        local_68 = auVar20 << 0x40;
        uVar28 = 0;
        do {
          auVar65 = local_68;
          if (uVar28 < uVar22) {
            uVar40 = (undefined4)param_2[(ulong)uVar28 + 3];
            uVar43 = (undefined4)((ulong)param_2[(ulong)uVar28 + 3] >> 0x20);
            if (uVar22 <= uVar28 + 1) goto LAB_0047228d;
LAB_00472130:
            plVar30 = param_2 + (ulong)(uVar28 + 1) + 3;
            if (uVar22 <= uVar28 + 2) goto LAB_004722b1;
LAB_0047214a:
            uVar41 = (undefined4)param_2[(ulong)(uVar28 + 2) + 3];
            uVar44 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 2) + 3] >> 0x20);
            uVar39 = (undefined4)*plVar30;
            uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
            if (uVar22 <= uVar28 + 3) goto LAB_004722d6;
LAB_00472164:
            uVar60 = (undefined4)param_2[(ulong)(uVar28 + 3) + 3];
            uVar62 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 3) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar40 = 0;
            uVar43 = 0;
            if (uVar28 + 1 < uVar22) goto LAB_00472130;
LAB_0047228d:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            plVar30 = &_hb_CrapPool;
            if (uVar28 + 2 < uVar22) goto LAB_0047214a;
LAB_004722b1:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar41 = 0;
            uVar44 = 0;
            uVar39 = (undefined4)*plVar30;
            uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
            if (uVar28 + 3 < uVar22) goto LAB_00472164;
LAB_004722d6:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar60 = 0;
            uVar62 = 0;
          }
          dVar50 = (double)param_2[0x22d];
          dVar49 = (double)param_2[0x22c] + (double)CONCAT44(uVar43,uVar40);
          dVar57 = (double)CONCAT44(uVar42,uVar39) + dVar49;
          dVar54 = (double)CONCAT44(uVar44,uVar41) + dVar50;
          dVar51 = (double)CONCAT44(uVar62,uVar60) + dVar54;
          pdVar31 = (double *)param_3[2];
          dVar48 = dVar57;
          dVar56 = dVar51;
          if (pdVar31 != (double *)0x0) {
            dVar52 = pdVar31[1];
            dVar48 = dVar57 + *pdVar31;
            dVar56 = dVar51 + dVar52;
            dVar54 = dVar54 + dVar52;
            dVar50 = dVar50 + dVar52;
            dVar49 = dVar49 + *pdVar31;
          }
          pfVar34 = (float *)param_3[1];
          local_c8._0_4_ = *(float *)(*param_3 + 0x4c);
          fVar46 = *(float *)(*param_3 + 0x50);
          fVar63 = (float)dVar49 * local_c8._0_4_;
          fVar64 = (float)dVar48 * local_c8._0_4_;
          local_c8._0_4_ = (float)dVar48 * local_c8._0_4_;
          fVar58 = (float)dVar56 * fVar46;
          pfVar33 = pfVar34 + 6;
          phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
          uVar35 = *(undefined8 *)(pfVar34 + 4);
          if (*(char *)(pfVar34 + 1) == '\0') {
            fVar59 = *pfVar34;
            if (pfVar34[6] == 0.0) {
              hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) goto LAB_00472310;
LAB_00472783:
              uVar29 = 0;
            }
            else {
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 == 0) goto LAB_00472783;
LAB_00472310:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
            }
            fVar63 = (float)dVar50 * fVar46 * fVar59 + fVar63;
            fVar64 = (float)dVar54 * fVar46 * fVar59 + fVar64;
            local_c8._0_4_ = local_c8._0_4_ + fVar59 * fVar58;
          }
          else {
            if (*pfVar33 == 0.0) {
              hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) goto LAB_00472263;
            }
            else {
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) {
LAB_00472263:
                uVar29 = *(undefined8 *)(lVar24 + 0x18);
                goto LAB_0047238b;
              }
            }
            uVar29 = 0;
          }
LAB_0047238b:
          (*pcVar25)(fVar63,(float)dVar50 * fVar46,fVar64,(float)dVar54 * fVar46,local_c8._0_4_,
                     fVar58,phVar36,uVar35,pfVar33,uVar29);
          pfVar34[9] = local_c8._0_4_;
          pfVar34[10] = fVar58;
          param_2[0x22c] = (long)dVar57;
          param_2[0x22d] = (long)dVar51;
          uVar22 = *(uint *)((long)param_2 + 0x14);
          if (uVar28 + 4 < uVar22) {
            uVar40 = (undefined4)param_2[(ulong)(uVar28 + 4) + 3];
            uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 4) + 3] >> 0x20);
            if (uVar22 <= uVar28 + 5) goto LAB_00472593;
LAB_004723f3:
            plVar30 = param_2 + (ulong)(uVar28 + 5) + 3;
            if (uVar22 <= uVar28 + 6) goto LAB_004725b7;
LAB_0047240d:
            uVar39 = (undefined4)param_2[(ulong)(uVar28 + 6) + 3];
            uVar42 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 6) + 3] >> 0x20);
            uVar41 = (undefined4)*plVar30;
            uVar44 = (undefined4)((ulong)*plVar30 >> 0x20);
            if (uVar22 <= uVar28 + 7) goto LAB_004725db;
LAB_00472427:
            uVar60 = (undefined4)param_2[(ulong)(uVar28 + 7) + 3];
            uVar62 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 7) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar40 = 0;
            uVar43 = 0;
            if (uVar28 + 5 < uVar22) goto LAB_004723f3;
LAB_00472593:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            plVar30 = &_hb_CrapPool;
            if (uVar28 + 6 < uVar22) goto LAB_0047240d;
LAB_004725b7:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar39 = 0;
            uVar42 = 0;
            uVar41 = (undefined4)*plVar30;
            uVar44 = (undefined4)((ulong)*plVar30 >> 0x20);
            if (uVar28 + 7 < uVar22) goto LAB_00472427;
LAB_004725db:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar60 = 0;
            uVar62 = 0;
          }
          uVar27 = uVar28 + 8;
          dVar51 = dVar51 + (double)CONCAT44(uVar43,uVar40);
          dVar48 = (double)CONCAT44(uVar44,uVar41) + dVar57;
          dVar54 = (double)CONCAT44(uVar42,uVar39) + dVar51;
          iVar21 = local_68._0_4_;
          dVar56 = dVar54;
          if ((iVar21 + uVar22 < 0x10) && ((uVar22 & 1) != 0)) {
            if (uVar27 < uVar22) {
              uVar40 = (undefined4)param_2[(ulong)uVar27 + 3];
              uVar43 = (undefined4)((ulong)param_2[(ulong)uVar27 + 3] >> 0x20);
            }
            else {
              *(undefined1 *)(param_2 + 2) = 1;
              _hb_CrapPool = 0;
              uVar40 = 0;
              uVar43 = 0;
            }
            dVar56 = dVar54 + (double)CONCAT44(uVar43,uVar40);
          }
          dVar52 = (double)CONCAT44(uVar62,uVar60) + dVar48;
          pdVar31 = (double *)param_3[2];
          dVar49 = dVar56;
          dVar50 = dVar52;
          if (pdVar31 != (double *)0x0) {
            dVar53 = *pdVar31;
            dVar55 = pdVar31[1];
            dVar50 = dVar52 + dVar53;
            dVar49 = dVar56 + dVar55;
            dVar54 = dVar54 + dVar55;
            dVar48 = dVar48 + dVar53;
            dVar51 = dVar51 + dVar55;
            dVar57 = dVar57 + dVar53;
          }
          pfVar34 = (float *)param_3[1];
          fVar46 = *(float *)(*param_3 + 0x4c);
          fVar63 = *(float *)(*param_3 + 0x50);
          fVar64 = (float)dVar57 * fVar46;
          fVar58 = (float)dVar48 * fVar46;
          fVar46 = (float)dVar50 * fVar46;
          fVar59 = (float)dVar49 * fVar63;
          pfVar33 = pfVar34 + 6;
          phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
          uVar35 = *(undefined8 *)(pfVar34 + 4);
          if (*(char *)(pfVar34 + 1) == '\0') {
            fVar2 = *pfVar34;
            if (pfVar34[6] == 0.0) {
              hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) goto LAB_00472615;
LAB_00472824:
              uVar29 = 0;
            }
            else {
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 == 0) goto LAB_00472824;
LAB_00472615:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
            }
            fVar64 = (float)dVar51 * fVar63 * fVar2 + fVar64;
            fVar58 = (float)dVar54 * fVar63 * fVar2 + fVar58;
            fVar46 = fVar46 + fVar2 * fVar59;
          }
          else {
            if (*pfVar33 == 0.0) {
              hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) goto LAB_00472569;
            }
            else {
              pcVar25 = *(code **)(phVar36 + 0x28);
              lVar24 = *(long *)(phVar36 + 0x38);
              if (lVar24 != 0) {
LAB_00472569:
                uVar29 = *(undefined8 *)(lVar24 + 0x18);
                goto LAB_00472690;
              }
            }
            uVar29 = 0;
          }
LAB_00472690:
          (*pcVar25)(fVar64,(float)dVar51 * fVar63,fVar58,(float)dVar54 * fVar63,fVar46,fVar59,
                     phVar36,uVar35,pfVar33,uVar29);
          pfVar34[9] = fVar46;
          pfVar34[10] = fVar59;
          param_2[0x22c] = (long)dVar52;
          param_2[0x22d] = (long)dVar56;
          uVar22 = *(uint *)((long)param_2 + 0x14);
          local_68._4_4_ = 0;
          local_68._0_4_ = iVar21 - 8;
          local_68._8_8_ = auVar65._8_8_;
          uVar37 = uVar28 + 0x10;
          uVar28 = uVar27;
        } while (uVar37 <= uVar22);
      }
      break;
    }
    dVar56 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
    dVar48 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0) + (double)param_2[3];
    dVar54 = (double)param_2[4] + dVar48;
    dVar57 = (double)param_2[5] + dVar56;
    local_c8 = dVar57 + (double)param_2[6];
    uVar28 = 4;
    if (0xb < uVar22) {
      uVar27 = 6;
      do {
        uVar28 = uVar27;
        pdVar31 = (double *)param_3[2];
        dVar50 = dVar54;
        dVar51 = local_c8;
        if (pdVar31 != (double *)0x0) {
          dVar51 = pdVar31[1];
          dVar57 = dVar57 + dVar51;
          dVar56 = dVar56 + dVar51;
          dVar48 = dVar48 + *pdVar31;
          dVar50 = dVar54 + *pdVar31;
          dVar51 = dVar51 + local_c8;
        }
        pfVar34 = (float *)param_3[1];
        fVar46 = *(float *)(*param_3 + 0x4c);
        fVar63 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar48 * fVar46;
        fVar58 = (float)dVar50 * fVar46;
        fVar46 = (float)dVar50 * fVar46;
        fVar59 = (float)dVar51 * fVar63;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar2 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00473759;
LAB_00473c70:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_00473c70;
LAB_00473759:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
          fVar64 = (float)dVar56 * fVar63 * fVar2 + fVar64;
          fVar58 = (float)dVar57 * fVar63 * fVar2 + fVar58;
          fVar46 = fVar46 + fVar2 * fVar59;
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00473730;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00473730:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_004737d7;
            }
          }
          uVar29 = 0;
        }
LAB_004737d7:
        (*pcVar25)(fVar64,(float)dVar56 * fVar63,fVar58,(float)dVar57 * fVar63,fVar46,fVar59,phVar36
                   ,uVar35,pfVar33,uVar29);
        pfVar34[9] = fVar46;
        pfVar34[10] = fVar59;
        param_2[0x22c] = (long)dVar54;
        param_2[0x22d] = (long)local_c8;
        uVar22 = *(uint *)((long)param_2 + 0x14);
        if (uVar28 - 2 < uVar22) {
          uVar40 = (undefined4)param_2[(ulong)(uVar28 - 2) + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar28 - 2) + 3] >> 0x20);
          if (uVar22 <= uVar28 - 1) goto LAB_004739a3;
LAB_00473840:
          plVar30 = param_2 + (ulong)(uVar28 - 1) + 3;
          if (uVar22 <= uVar28) goto LAB_004739c3;
LAB_00473856:
          uVar41 = (undefined4)param_2[(ulong)uVar28 + 3];
          uVar44 = (undefined4)((ulong)param_2[(ulong)uVar28 + 3] >> 0x20);
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar22 <= uVar28 + 1) goto LAB_004739e6;
LAB_00473870:
          uVar60 = (undefined4)param_2[(ulong)(uVar28 + 1) + 3];
          uVar62 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 1) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
          if (uVar28 - 1 < uVar22) goto LAB_00473840;
LAB_004739a3:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          plVar30 = &_hb_CrapPool;
          if (uVar28 < uVar22) goto LAB_00473856;
LAB_004739c3:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar41 = 0;
          uVar44 = 0;
          uVar39 = (undefined4)*plVar30;
          uVar42 = (undefined4)((ulong)*plVar30 >> 0x20);
          if (uVar28 + 1 < uVar22) goto LAB_00473870;
LAB_004739e6:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar60 = 0;
          uVar62 = 0;
        }
        local_c8 = local_c8 + (double)CONCAT44(uVar43,uVar40);
        dVar56 = (double)CONCAT44(uVar44,uVar41) + local_c8;
        dVar48 = (double)CONCAT44(uVar62,uVar60) + (double)CONCAT44(uVar42,uVar39) + dVar54;
        pdVar31 = (double *)param_3[2];
        dVar51 = dVar56;
        dVar57 = dVar48;
        if (pdVar31 != (double *)0x0) {
          dVar57 = dVar48 + *pdVar31;
          dVar51 = dVar56 + pdVar31[1];
          local_c8 = local_c8 + pdVar31[1];
          dVar54 = dVar54 + *pdVar31;
        }
        pfVar34 = (float *)param_3[1];
        fVar46 = *(float *)(*param_3 + 0x4c);
        fVar63 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar54 * fVar46;
        fVar46 = (float)dVar57 * fVar46;
        fVar58 = (float)dVar51 * fVar63;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar59 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00473a1f;
LAB_00473d14:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_00473d14;
LAB_00473a1f:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
          fVar64 = (float)local_c8 * fVar63 * fVar59 + fVar64;
          fVar46 = fVar46 + fVar59 * fVar58;
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_0047397a;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_0047397a:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_00473a9d;
            }
          }
          uVar29 = 0;
        }
LAB_00473a9d:
        (*pcVar25)(fVar64,phVar36,uVar35,pfVar33,uVar29);
        pfVar34[9] = fVar46;
        pfVar34[10] = fVar58;
        param_2[0x22c] = (long)dVar48;
        param_2[0x22d] = (long)dVar56;
        uVar22 = *(uint *)((long)param_2 + 0x14);
        if (uVar28 + 2 < uVar22) {
          uVar40 = (undefined4)param_2[(ulong)(uVar28 + 2) + 3];
          uVar43 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 2) + 3] >> 0x20);
          if (uVar22 <= uVar28 + 3) goto LAB_00473ba4;
LAB_00473b0b:
          pdVar31 = (double *)(param_2 + (ulong)(uVar28 + 3) + 3);
          if (uVar22 <= uVar28 + 4) goto LAB_00473bc7;
LAB_00473b24:
          uVar41 = (undefined4)param_2[(ulong)(uVar28 + 4) + 3];
          uVar44 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 4) + 3] >> 0x20);
          dVar54 = *pdVar31;
          if (uVar22 <= uVar28 + 5) goto LAB_00473bea;
LAB_00473b3d:
          uVar39 = (undefined4)param_2[(ulong)(uVar28 + 5) + 3];
          uVar42 = (undefined4)((ulong)param_2[(ulong)(uVar28 + 5) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar40 = 0;
          uVar43 = 0;
          if (uVar28 + 3 < uVar22) goto LAB_00473b0b;
LAB_00473ba4:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar31 = (double *)&_hb_CrapPool;
          if (uVar28 + 4 < uVar22) goto LAB_00473b24;
LAB_00473bc7:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar41 = 0;
          uVar44 = 0;
          dVar54 = *pdVar31;
          if (uVar28 + 5 < uVar22) goto LAB_00473b3d;
LAB_00473bea:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar39 = 0;
          uVar42 = 0;
        }
        dVar48 = dVar48 + (double)CONCAT44(uVar43,uVar40);
        dVar54 = dVar54 + dVar48;
        dVar57 = (double)CONCAT44(uVar44,uVar41) + dVar56;
        local_c8 = dVar57 + (double)CONCAT44(uVar42,uVar39);
        uVar27 = uVar28 + 8;
      } while (uVar28 + 0xe <= uVar22);
      uVar28 = uVar28 + 6;
    }
    local_68._0_8_ = dVar54;
    if (uVar28 < uVar22) {
      local_68._0_8_ = dVar54 + (double)param_2[(ulong)uVar28 + 3];
    }
    pdVar31 = (double *)param_3[2];
    dVar50 = local_c8;
    dVar51 = (double)local_68._0_8_;
    if (pdVar31 != (double *)0x0) {
      dVar49 = *pdVar31;
      dVar52 = pdVar31[1];
      dVar51 = (double)local_68._0_8_ + dVar49;
      dVar50 = local_c8 + dVar52;
      dVar57 = dVar57 + dVar52;
      dVar54 = dVar54 + dVar49;
      dVar56 = dVar56 + dVar52;
      dVar48 = dVar48 + dVar49;
    }
    pfVar34 = (float *)param_3[1];
    local_108 = *(float *)(*param_3 + 0x4c);
    local_f8 = *(float *)(*param_3 + 0x50);
    fVar63 = (float)dVar48 * local_108;
    fVar58 = (float)dVar56 * local_f8;
    fVar64 = (float)dVar54 * local_108;
    fVar46 = (float)dVar57 * local_f8;
    local_108 = (float)dVar51 * local_108;
    local_f8 = (float)dVar50 * local_f8;
    pfVar33 = pfVar34 + 6;
    phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
    uVar35 = *(undefined8 *)(pfVar34 + 4);
    if (*(char *)(pfVar34 + 1) == '\0') {
      fVar59 = *pfVar34;
      fVar38 = fVar58 * fVar59;
      fVar45 = fVar46 * fVar59;
      fVar59 = fVar59 * local_f8;
      fVar2 = pfVar34[6];
      goto joined_r0x00475615;
    }
    if (*pfVar33 == 0.0) {
      hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
      pcVar25 = *(code **)(phVar36 + 0x28);
      lVar24 = *(long *)(phVar36 + 0x38);
      if (lVar24 != 0) goto LAB_0047439e;
    }
    else {
      pcVar25 = *(code **)(phVar36 + 0x28);
      lVar24 = *(long *)(phVar36 + 0x38);
      if (lVar24 != 0) {
LAB_0047439e:
        uVar29 = *(undefined8 *)(lVar24 + 0x18);
        goto LAB_00475744;
      }
    }
    uVar29 = 0;
LAB_00475744:
    (*pcVar25)(fVar63,fVar58,fVar64,fVar46,local_108,local_f8,phVar36,uVar35,pfVar33,uVar29);
    pfVar34[9] = local_108;
    pfVar34[10] = local_f8;
    param_2[0x22c] = local_68._0_8_;
    param_2[0x22d] = (long)local_c8;
    break;
  default:
    switch(param_1) {
    case 0xff:
      uVar22 = *(uint *)(param_2 + 1);
      uVar28 = *(uint *)((long)param_2 + 0xc);
      if (uVar22 < uVar28 + 4) {
        return;
      }
      if (uVar28 < uVar22) {
        puVar32 = (uint *)(*param_2 + (ulong)uVar28);
      }
      else {
        uVar28 = uVar22 + 1;
        puVar32 = &_hb_NullPool;
      }
      uVar22 = *puVar32;
      uVar27 = *(uint *)((long)param_2 + 0x14);
      if ((ulong)uVar27 < 0x201) {
        *(uint *)((long)param_2 + 0x14) = uVar27 + 1;
        pdVar31 = (double *)(param_2 + (ulong)uVar27 + 3);
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar31 = (double *)&_hb_CrapPool;
      }
      *pdVar31 = (double)(int)(uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                              uVar22 << 0x18) * DAT_005de740;
      *(uint *)((long)param_2 + 0xc) = uVar28 + 4;
      return;
    default:
      goto switchD_00470832_caseD_2;
    case 0x122:
      if (*(int *)((long)param_2 + 0x14) == 7) {
        local_68._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
        dVar54 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
        dVar48 = dVar54 + (double)param_2[3];
        dVar51 = (double)param_2[4] + dVar54 + (double)param_2[3];
        dVar57 = (double)param_2[5] + (double)local_68._0_8_;
        uVar40 = SUB84(dVar57,0);
        uVar43 = (undefined4)((ulong)dVar57 >> 0x20);
        dVar56 = dVar51 + (double)param_2[6] + (double)param_2[7];
        dVar50 = dVar51 + (double)param_2[6];
        dVar49 = (double)param_2[8] + dVar56;
        pdVar31 = (double *)param_3[2];
        dVar52 = dVar50;
        dVar53 = (double)local_68._0_8_;
        if (pdVar31 != (double *)0x0) {
          dVar54 = *pdVar31;
          dVar57 = dVar57 + pdVar31[1];
          dVar51 = dVar51 + dVar54;
          dVar48 = dVar48 + dVar54;
          dVar52 = dVar54 + dVar50;
          dVar53 = (double)local_68._0_8_ + pdVar31[1];
        }
        dVar54 = (double)param_2[9] + dVar49;
        pfVar34 = (float *)param_3[1];
        local_f8 = *(float *)(*param_3 + 0x4c);
        fVar46 = *(float *)(*param_3 + 0x50);
        fVar63 = (float)dVar48 * local_f8;
        fVar64 = (float)dVar51 * local_f8;
        local_f8 = (float)dVar52 * local_f8;
        fVar58 = (float)dVar57 * fVar46;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        auVar15._8_4_ = uVar40;
        auVar15._0_8_ = dVar56;
        auVar15._12_4_ = uVar43;
        auVar11._8_4_ = uVar40;
        auVar11._0_8_ = dVar50;
        auVar11._12_4_ = uVar43;
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar59 = *pfVar34;
          local_38 = fVar59 * fVar58;
          local_40 = fVar63;
          local_3c = fVar64;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          }
          fVar63 = (float)dVar53 * fVar46 * fVar59 + local_40;
          fVar64 = (float)dVar57 * fVar46 * fVar59 + local_3c;
          local_f8 = local_f8 + local_38;
          pcVar25 = *(code **)(phVar36 + 0x28);
          if (*(long *)(phVar36 + 0x38) == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
          }
        }
        else {
          if (*pfVar33 == 0.0) {
            local_40 = fVar63;
            local_3c = fVar64;
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            fVar63 = local_40;
            fVar64 = local_3c;
            if (lVar24 != 0) goto LAB_00473f19;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00473f19:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_00474aa8;
            }
          }
          uVar29 = 0;
        }
LAB_00474aa8:
        (*pcVar25)(fVar63,(float)dVar53 * fVar46,fVar64,(float)dVar57 * fVar46,local_f8,fVar58,
                   phVar36,uVar35,pfVar33,uVar29);
        pfVar34[9] = local_f8;
        pfVar34[10] = fVar58;
        lStack_d0 = auVar11._8_8_;
        param_2[0x22c] = (long)dVar50;
        param_2[0x22d] = lStack_d0;
        pdVar31 = (double *)param_3[2];
        dStack_a0 = auVar15._8_8_;
        dVar57 = (double)local_68._0_8_;
        dVar48 = dVar54;
        if (pdVar31 != (double *)0x0) {
          dVar51 = *pdVar31;
          dVar48 = dVar54 + dVar51;
          dVar57 = (double)local_68._0_8_ + pdVar31[1];
          dVar49 = dVar49 + dVar51;
          dStack_a0 = dStack_a0 + pdVar31[1];
          dVar56 = dVar56 + dVar51;
        }
        pfVar34 = (float *)param_3[1];
        local_108 = *(float *)(*param_3 + 0x4c);
        fVar46 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar56 * local_108;
        fVar63 = (float)dVar49 * local_108;
        local_108 = (float)dVar48 * local_108;
        fVar58 = (float)dVar57 * fVar46;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar59 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          }
          fVar64 = (float)dStack_a0 * fVar46 * fVar59 + fVar64;
          fVar63 = (float)dVar57 * fVar46 * fVar59 + fVar63;
          local_108 = local_108 + fVar59 * fVar58;
          pcVar25 = *(code **)(phVar36 + 0x28);
          if (*(long *)(phVar36 + 0x38) == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
          }
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00474bb1;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00474bb1:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_0047536c;
            }
          }
          uVar29 = 0;
        }
LAB_0047536c:
        (*pcVar25)(fVar64,(float)dStack_a0 * fVar46,fVar63,(float)dVar57 * fVar46,local_108,fVar58,
                   phVar36,uVar35,pfVar33,uVar29);
        pfVar34[9] = local_108;
        pfVar34[10] = fVar58;
LAB_0047555b:
        param_2[0x22c] = (long)dVar54;
        param_2[0x22d] = local_68._0_8_;
        goto LAB_004760d4;
      }
      break;
    case 0x123:
      if (*(int *)((long)param_2 + 0x14) == 0xd) {
        dVar52 = (double)param_2[3] + (double)param_2[0x22c];
        dVar53 = (double)param_2[4] + (double)param_2[0x22d];
        dVar54 = (double)param_2[5] + dVar52;
        dVar48 = (double)param_2[6] + dVar53;
        dVar50 = (double)param_2[7] + dVar54;
        dVar56 = (double)param_2[8] + dVar48;
        uVar40 = SUB84(dVar56,0);
        uVar23 = (ulong)dVar56 >> 0x20;
        dVar57 = (double)param_2[9] + dVar50;
        dVar51 = (double)param_2[10] + dVar56;
        pdVar31 = (double *)param_3[2];
        dVar49 = dVar50;
        if (pdVar31 != (double *)0x0) {
          dVar49 = *pdVar31;
          dVar55 = pdVar31[1];
          dVar48 = dVar48 + dVar55;
          dVar54 = dVar54 + dVar49;
          dVar53 = dVar53 + dVar55;
          dVar52 = dVar52 + dVar49;
          dVar56 = dVar55 + dVar56;
          dVar49 = dVar49 + dVar50;
        }
        dVar55 = (double)param_2[0xb] + dVar57;
        auVar65 = *(undefined1 (*) [16])(param_2 + 0xd);
        pfVar34 = (float *)param_3[1];
        local_c8._0_4_ = *(float *)(*param_3 + 0x4c);
        fVar46 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar52 * local_c8._0_4_;
        fVar63 = (float)dVar54 * local_c8._0_4_;
        local_c8._0_4_ = (float)dVar49 * local_c8._0_4_;
        fVar58 = (float)dVar56 * fVar46;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        auVar10._8_4_ = SUB84((double)param_2[0xc] + dVar51,0);
        auVar10._0_8_ = dVar55;
        auVar10._12_4_ = (int)((ulong)((double)param_2[0xc] + dVar51) >> 0x20);
        auVar13._8_4_ = SUB84(dVar51,0);
        auVar13._0_8_ = dVar57;
        auVar13._12_4_ = (int)((ulong)dVar51 >> 0x20);
        auVar14._8_4_ = uVar40;
        auVar14._0_8_ = dVar50;
        auVar14._12_4_ = (int)uVar23;
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar59 = *pfVar34;
          local_40 = fVar59 * fVar58;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          }
          fVar64 = (float)dVar53 * fVar46 * fVar59 + fVar64;
          fVar63 = (float)dVar48 * fVar46 * fVar59 + fVar63;
          local_c8._0_4_ = local_c8._0_4_ + local_40;
          pcVar25 = *(code **)(phVar36 + 0x28);
          if (*(long *)(phVar36 + 0x38) == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
          }
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00473fec;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00473fec:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_00474ccc;
            }
          }
          uVar29 = 0;
        }
LAB_00474ccc:
        (*pcVar25)(fVar64,(float)dVar53 * fVar46,fVar63,(float)dVar48 * fVar46,local_c8._0_4_,fVar58
                   ,phVar36,uVar35,pfVar33,uVar29);
        local_68._0_8_ = auVar65._0_8_;
        local_68._8_8_ = auVar65._8_8_;
        dStack_90 = auVar10._8_8_;
        local_68._0_8_ = (double)local_68._0_8_ + dVar55;
        dVar54 = (double)local_68._8_8_ + dStack_90;
        pfVar34[9] = local_c8._0_4_;
        pfVar34[10] = fVar58;
        dStack_a0 = auVar14._8_8_;
        param_2[0x22c] = (long)dVar50;
        param_2[0x22d] = (long)dStack_a0;
        pdVar31 = (double *)param_3[2];
        dStack_80 = auVar13._8_8_;
        auVar5._8_4_ = SUB84(dVar54,0);
        auVar5._0_8_ = local_68._0_8_;
        auVar5._12_4_ = (int)((ulong)dVar54 >> 0x20);
        dVar48 = (double)local_68._0_8_;
        if (pdVar31 != (double *)0x0) {
          dVar48 = *pdVar31;
          dVar56 = pdVar31[1];
          dStack_90 = dStack_90 + dVar56;
          dVar55 = dVar55 + dVar48;
          dStack_80 = dStack_80 + dVar56;
          dVar57 = dVar57 + dVar48;
          dVar54 = dVar56 + dVar54;
          dVar48 = dVar48 + (double)local_68._0_8_;
        }
        pfVar34 = (float *)param_3[1];
        local_108 = *(float *)(*param_3 + 0x4c);
        fVar46 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar57 * local_108;
        fVar63 = (float)dVar55 * local_108;
        local_108 = (float)dVar48 * local_108;
        fVar58 = (float)dVar54 * fVar46;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar59 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          }
          fVar64 = (float)dStack_80 * fVar46 * fVar59 + fVar64;
          fVar63 = (float)dStack_90 * fVar46 * fVar59 + fVar63;
          local_108 = local_108 + fVar59 * fVar58;
          pcVar25 = *(code **)(phVar36 + 0x28);
          if (*(long *)(phVar36 + 0x38) == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
          }
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00474de5;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00474de5:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_004753fd;
            }
          }
          uVar29 = 0;
        }
LAB_004753fd:
        (*pcVar25)(fVar64,(float)dStack_80 * fVar46,fVar63,(float)dStack_90 * fVar46,local_108,
                   fVar58,phVar36,uVar35,pfVar33,uVar29);
        pfVar34[9] = local_108;
        pfVar34[10] = fVar58;
        local_68._8_8_ = auVar5._8_8_;
        param_2[0x22c] = local_68._0_8_;
        param_2[0x22d] = local_68._8_8_;
        goto LAB_004760d4;
      }
      break;
    case 0x124:
      if (*(int *)((long)param_2 + 0x14) == 9) {
        auVar65 = *(undefined1 (*) [16])(param_2 + 0x22c);
        uVar41 = auVar65._4_4_;
        dVar53 = (double)param_2[3] + auVar65._0_8_;
        dVar50 = auVar65._8_8_;
        dVar55 = (double)param_2[4] + dVar50;
        dVar48 = (double)param_2[5] + dVar53;
        dVar57 = (double)param_2[6] + dVar55;
        uVar40 = SUB84(dVar57,0);
        uVar43 = (undefined4)((ulong)dVar57 >> 0x20);
        dVar49 = dVar48 + (double)param_2[7];
        dVar54 = dVar48 + (double)param_2[7] + (double)param_2[8];
        auVar7._8_4_ = uVar40;
        auVar7._0_8_ = dVar54;
        auVar7._12_4_ = uVar43;
        dVar51 = (double)param_2[9] + dVar54;
        dVar56 = (double)param_2[10] + dVar57;
        pdVar31 = (double *)param_3[2];
        dVar52 = dVar49;
        if (pdVar31 != (double *)0x0) {
          dVar52 = *pdVar31;
          dVar48 = dVar48 + dVar52;
          dVar55 = dVar55 + pdVar31[1];
          dVar53 = dVar53 + dVar52;
          dVar57 = pdVar31[1] + dVar57;
          dVar52 = dVar52 + dVar49;
        }
        dVar8 = (double)param_2[0xb] + dVar51;
        pfVar34 = (float *)param_3[1];
        local_c8._0_4_ = *(float *)(*param_3 + 0x4c);
        fVar46 = *(float *)(*param_3 + 0x50);
        fVar63 = (float)dVar53 * local_c8._0_4_;
        fVar64 = (float)dVar48 * local_c8._0_4_;
        fVar58 = (float)dVar57 * fVar46;
        local_c8._0_4_ = (float)dVar52 * local_c8._0_4_;
        fVar59 = (float)dVar57 * fVar46;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        auVar12._8_4_ = uVar40;
        auVar12._0_8_ = dVar49;
        auVar12._12_4_ = uVar43;
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar2 = *pfVar34;
          local_34 = fVar2 * fVar59;
          local_40 = fVar58;
          local_3c = fVar63;
          local_38 = fVar64;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          }
          fVar63 = (float)dVar55 * fVar46 * fVar2 + local_3c;
          fVar64 = fVar58 * fVar2 + local_38;
          local_c8._0_4_ = local_c8._0_4_ + local_34;
          pcVar25 = *(code **)(phVar36 + 0x28);
          if (*(long *)(phVar36 + 0x38) == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
          }
          fVar58 = local_40;
        }
        else {
          if (*pfVar33 == 0.0) {
            local_40 = fVar58;
            local_3c = fVar63;
            local_38 = fVar64;
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            fVar63 = local_3c;
            fVar64 = local_38;
            fVar58 = local_40;
            if (lVar24 != 0) goto LAB_004740d1;
LAB_00474f01:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_00474f01;
LAB_004740d1:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
        }
        (*pcVar25)(fVar63,(float)dVar55 * fVar46,fVar64,fVar58,local_c8._0_4_,fVar59,phVar36,uVar35,
                   pfVar33,uVar29);
        pfVar34[9] = local_c8._0_4_;
        pfVar34[10] = fVar59;
        lStack_d0 = auVar12._8_8_;
        param_2[0x22c] = (long)dVar49;
        param_2[0x22d] = lStack_d0;
        pdVar31 = (double *)param_3[2];
        dStack_a0 = auVar7._8_8_;
        dVar48 = dVar8;
        dVar57 = dVar50;
        if (pdVar31 != (double *)0x0) {
          dVar49 = *pdVar31;
          dVar52 = pdVar31[1];
          dVar48 = dVar8 + dVar49;
          dVar57 = dVar50 + dVar52;
          dVar56 = dVar56 + dVar52;
          dVar51 = dVar51 + dVar49;
          dStack_a0 = dStack_a0 + dVar52;
          dVar54 = dVar54 + dVar49;
        }
        pfVar34 = (float *)param_3[1];
        local_108 = *(float *)(*param_3 + 0x4c);
        fVar46 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar54 * local_108;
        fVar63 = (float)dVar51 * local_108;
        local_108 = (float)dVar48 * local_108;
        fVar58 = (float)dVar57 * fVar46;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar59 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          }
          fVar64 = (float)dStack_a0 * fVar46 * fVar59 + fVar64;
          fVar63 = (float)dVar56 * fVar46 * fVar59 + fVar63;
          local_108 = local_108 + fVar59 * fVar58;
          pcVar25 = *(code **)(phVar36 + 0x28);
          if (*(long *)(phVar36 + 0x38) == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
          }
          uVar23 = (ulong)(uint)local_108;
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            uVar41 = 0;
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00475014;
LAB_00475488:
            uVar29 = 0;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 == 0) goto LAB_00475488;
LAB_00475014:
            uVar29 = *(undefined8 *)(lVar24 + 0x18);
          }
          uVar23 = CONCAT44(uVar41,local_108);
        }
        (*pcVar25)(fVar64,(float)dStack_a0 * fVar46,fVar63,(float)dVar56 * fVar46,uVar23,fVar58,
                   phVar36,uVar35,pfVar33,uVar29);
        pfVar34[9] = local_108;
        pfVar34[10] = fVar58;
        param_2[0x22c] = (long)dVar8;
        param_2[0x22d] = (long)dVar50;
        goto LAB_004760d4;
      }
      break;
    case 0x125:
      if (*(int *)((long)param_2 + 0x14) == 0xb) {
        local_68._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
        dVar54 = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
        dVar53 = (double)param_2[3] + dVar54;
        dVar55 = (double)param_2[4] + (double)local_68._0_8_;
        dVar57 = (double)param_2[5] + dVar53;
        dVar51 = (double)param_2[6] + dVar55;
        dVar52 = (double)param_2[7] + dVar57;
        dVar50 = (double)param_2[8] + dVar51;
        uVar40 = SUB84(dVar50,0);
        uVar23 = (ulong)dVar50 >> 0x20;
        dVar48 = (double)param_2[9] + dVar52;
        dVar56 = (double)param_2[10] + dVar50;
        auVar65._8_4_ = SUB84(dVar56,0);
        auVar65._0_8_ = dVar48;
        auVar65._12_4_ = (int)((ulong)dVar56 >> 0x20);
        dVar49 = (double)param_2[0xb] + dVar48;
        dVar56 = (double)param_2[0xc] + dVar56;
        if ((double)((ulong)((double)param_2[3] + 0.0 + (double)param_2[5] + (double)param_2[7] +
                             (double)param_2[9] + (double)param_2[0xb]) & _DAT_005d91b0) <=
            (double)((ulong)((double)param_2[4] + 0.0 + (double)param_2[6] + (double)param_2[8] +
                             (double)param_2[10] + (double)param_2[0xc]) & _UNK_005d91b8)) {
          local_68._0_8_ = (double)param_2[0xd] + dVar56;
        }
        else {
          dVar54 = (double)param_2[0xd] + dVar49;
        }
        pdVar31 = (double *)param_3[2];
        dVar8 = dVar52;
        if (pdVar31 != (double *)0x0) {
          dVar8 = *pdVar31;
          dVar17 = pdVar31[1];
          dVar51 = dVar51 + dVar17;
          dVar57 = dVar57 + dVar8;
          dVar55 = dVar55 + dVar17;
          dVar53 = dVar53 + dVar8;
          dVar50 = dVar17 + dVar50;
          dVar8 = dVar8 + dVar52;
        }
        pfVar34 = (float *)param_3[1];
        local_f8 = *(float *)(*param_3 + 0x4c);
        fVar46 = *(float *)(*param_3 + 0x50);
        fVar63 = (float)dVar53 * local_f8;
        fVar64 = (float)dVar57 * local_f8;
        local_f8 = (float)dVar8 * local_f8;
        fVar58 = (float)dVar50 * fVar46;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        auVar16._8_4_ = uVar40;
        auVar16._0_8_ = dVar52;
        auVar16._12_4_ = (int)uVar23;
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar59 = *pfVar34;
          local_38 = fVar59 * fVar58;
          local_40 = fVar63;
          local_3c = fVar64;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          }
          fVar63 = (float)dVar55 * fVar46 * fVar59 + local_40;
          fVar64 = (float)dVar51 * fVar46 * fVar59 + local_3c;
          local_f8 = local_f8 + local_38;
          pcVar25 = *(code **)(phVar36 + 0x28);
          if (*(long *)(phVar36 + 0x38) == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
          }
        }
        else {
          if (*pfVar33 == 0.0) {
            local_40 = fVar63;
            local_3c = fVar64;
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            fVar63 = local_40;
            fVar64 = local_3c;
            if (lVar24 != 0) goto LAB_00474199;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00474199:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_00475135;
            }
          }
          uVar29 = 0;
        }
LAB_00475135:
        (*pcVar25)(fVar63,(float)dVar55 * fVar46,fVar64,(float)dVar51 * fVar46,local_f8,fVar58,
                   phVar36,uVar35,pfVar33,uVar29);
        pfVar34[9] = local_f8;
        pfVar34[10] = fVar58;
        lStack_e0 = auVar16._8_8_;
        param_2[0x22c] = (long)dVar52;
        param_2[0x22d] = lStack_e0;
        pdVar31 = (double *)param_3[2];
        dStack_80 = auVar65._8_8_;
        if (pdVar31 == (double *)0x0) {
          dVar57 = dVar54;
          dVar51 = (double)local_68._0_8_;
        }
        else {
          dVar57 = *pdVar31;
          dVar51 = pdVar31[1];
          dVar56 = dVar56 + dVar51;
          dVar49 = dVar49 + dVar57;
          dStack_80 = dStack_80 + dVar51;
          dVar48 = dVar48 + dVar57;
          dVar57 = dVar54 + dVar57;
          dVar51 = dVar51 + (double)local_68._0_8_;
        }
        pfVar34 = (float *)param_3[1];
        local_108 = *(float *)(*param_3 + 0x4c);
        fVar46 = *(float *)(*param_3 + 0x50);
        fVar64 = (float)dVar48 * local_108;
        fVar63 = (float)dVar49 * local_108;
        local_108 = (float)dVar57 * local_108;
        fVar58 = (float)dVar51 * fVar46;
        pfVar33 = pfVar34 + 6;
        phVar36 = *(hb_draw_funcs_t **)(pfVar34 + 2);
        uVar35 = *(undefined8 *)(pfVar34 + 4);
        if (*(char *)(pfVar34 + 1) == '\0') {
          fVar59 = *pfVar34;
          if (pfVar34[6] == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
          }
          fVar64 = (float)dStack_80 * fVar46 * fVar59 + fVar64;
          fVar63 = (float)dVar56 * fVar46 * fVar59 + fVar63;
          local_108 = local_108 + fVar59 * fVar58;
          pcVar25 = *(code **)(phVar36 + 0x28);
          if (*(long *)(phVar36 + 0x38) == 0) {
            uVar29 = 0;
          }
          else {
            uVar29 = *(undefined8 *)(*(long *)(phVar36 + 0x38) + 0x18);
          }
        }
        else {
          if (*pfVar33 == 0.0) {
            hb_draw_funcs_t::start_path(phVar36,uVar35,pfVar33);
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) goto LAB_00475257;
          }
          else {
            pcVar25 = *(code **)(phVar36 + 0x28);
            lVar24 = *(long *)(phVar36 + 0x38);
            if (lVar24 != 0) {
LAB_00475257:
              uVar29 = *(undefined8 *)(lVar24 + 0x18);
              goto LAB_0047553d;
            }
          }
          uVar29 = 0;
        }
LAB_0047553d:
        (*pcVar25)(fVar64,(float)dStack_80 * fVar46,fVar63,(float)dVar56 * fVar46,local_108,fVar58,
                   phVar36,uVar35,pfVar33,uVar29);
        pfVar34[9] = local_108;
        pfVar34[10] = fVar58;
        goto LAB_0047555b;
      }
    }
    *(int *)((long)param_2 + 0xc) = (int)param_2[1] + 1;
  }
LAB_004760d4:
  *(undefined4 *)((long)param_2 + 0x1174) = 0;
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  return;
}


