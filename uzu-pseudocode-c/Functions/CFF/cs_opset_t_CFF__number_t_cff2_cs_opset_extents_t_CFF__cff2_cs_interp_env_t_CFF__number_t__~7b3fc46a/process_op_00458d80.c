// Function : process_op
// Namespace: CFF:cs_opset_t_CFF__number_t_cff2_cs_opset_extents_t_CFF__cff2_cs_interp_env_t_CFF__number_t__~7b3fc46a
// Entry    : 00458d80
// Prototype: undefined process_op(int param_1, long * param_2, char * param_3)
// Body     : 00458d80 - 0045b7fd


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* CFF::cs_opset_t<CFF::number_t, cff2_cs_opset_extents_t, CFF::cff2_cs_interp_env_t<CFF::number_t>,
   cff2_extents_param_t, cff2_path_procs_extents_t>::process_op(unsigned int,
   CFF::cff2_cs_interp_env_t<CFF::number_t>&, cff2_extents_param_t&) */

void __cdecl
CFF::
cs_opset_t<CFF::number_t,cff2_cs_opset_extents_t,CFF::cff2_cs_interp_env_t<CFF::number_t>,cff2_extents_param_t,cff2_path_procs_extents_t>
::process_op(int param_1,long *param_2,char *param_3)

{
  char cVar1;
  CFFIndex<OT::IntType<unsigned_int,4u>> *pCVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  int iVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 (*local_38) [16];
  
  pdVar13 = (double *)local_98;
  switch(param_1) {
  case 1:
  case 0x12:
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
switchD_00458daa_caseD_2:
    opset_t<CFF::number_t>::process_op(param_1,param_2);
    return;
  case 3:
  case 0x17:
    *(uint *)(param_2 + 0x208) = (int)param_2[0x208] + (*(uint *)((long)param_2 + 0x14) >> 1);
    break;
  case 4:
    lVar9 = param_2[0x22c];
    dVar31 = (double)param_2[0x22d];
    if (*(int *)((long)param_2 + 0x14) == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      dVar30 = 0.0;
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)((long)param_2 + 0x14) - 1;
      dVar30 = (double)param_2[(ulong)uVar7 + 3];
      uVar7 = uVar7 >> 1;
    }
    *param_3 = '\0';
    param_2[0x22c] = lVar9;
    param_2[0x22d] = (long)(dVar31 + dVar30);
    if (*(char *)((long)param_2 + 0x1039) != '\0') break;
    goto LAB_00459b0a;
  case 5:
    uVar8 = (ulong)*(uint *)((long)param_2 + 0x14);
    if (1 < uVar8) {
      pdVar13 = (double *)(param_2 + 3);
      uVar16 = 0;
      do {
        if (uVar16 < uVar8) {
          pdVar14 = pdVar13;
          if (uVar16 + 1 < uVar8) goto LAB_00458efe;
LAB_00459068:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar25 = 0;
          uVar27 = 0;
          uVar23 = (undefined4)param_2[0x22c];
          uVar24 = *(undefined4 *)((long)param_2 + 0x1164);
          uVar26 = (undefined4)param_2[0x22d];
          uVar28 = *(undefined4 *)((long)param_2 + 0x116c);
          dVar31 = *pdVar14;
          cVar1 = *param_3;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar14 = (double *)&_hb_CrapPool;
          if (uVar8 <= uVar16 + 1) goto LAB_00459068;
LAB_00458efe:
          uVar25 = SUB84(pdVar13[1],0);
          uVar27 = (undefined4)((ulong)pdVar13[1] >> 0x20);
          uVar23 = (undefined4)param_2[0x22c];
          uVar24 = *(undefined4 *)((long)param_2 + 0x1164);
          uVar26 = (undefined4)param_2[0x22d];
          uVar28 = *(undefined4 *)((long)param_2 + 0x116c);
          dVar31 = *pdVar14;
          cVar1 = *param_3;
        }
        if (cVar1 == '\0') {
          *param_3 = '\x01';
          dVar30 = (double)CONCAT44(uVar24,uVar23);
          if (*(double *)(param_3 + 8) < (double)CONCAT44(uVar24,uVar23) ||
              *(double *)(param_3 + 8) == (double)CONCAT44(uVar24,uVar23)) {
            if (*(double *)(param_3 + 0x18) <= dVar30 && dVar30 != *(double *)(param_3 + 0x18))
            goto LAB_00458f78;
LAB_00458f43:
            dVar30 = (double)param_2[0x22d];
            if (dVar30 < *(double *)(param_3 + 0x10)) goto LAB_00458f57;
LAB_00458f92:
            if (dVar30 < *(double *)(param_3 + 0x20) || dVar30 == *(double *)(param_3 + 0x20))
            goto LAB_00458fa0;
          }
          else {
            *(double *)(param_3 + 8) = dVar30;
            dVar30 = (double)param_2[0x22c];
            if (dVar30 < *(double *)(param_3 + 0x18) || dVar30 == *(double *)(param_3 + 0x18))
            goto LAB_00458f43;
LAB_00458f78:
            *(double *)(param_3 + 0x18) = dVar30;
            dVar30 = (double)param_2[0x22d];
            if (*(double *)(param_3 + 0x10) <= dVar30) goto LAB_00458f92;
LAB_00458f57:
            *(double *)(param_3 + 0x10) = dVar30;
            dVar30 = (double)param_2[0x22d];
            if (dVar30 < *(double *)(param_3 + 0x20) || dVar30 == *(double *)(param_3 + 0x20))
            goto LAB_00458fa0;
          }
          *(double *)(param_3 + 0x20) = dVar30;
        }
LAB_00458fa0:
        dVar31 = (double)CONCAT44(uVar24,uVar23) + dVar31;
        dVar30 = (double)CONCAT44(uVar28,uVar26) + (double)CONCAT44(uVar27,uVar25);
        auVar5._8_4_ = SUB84(dVar30,0);
        auVar5._0_8_ = dVar31;
        auVar5._12_4_ = (int)((ulong)dVar30 >> 0x20);
        *(undefined1 (*) [16])(param_2 + 0x22c) = auVar5;
        if (*(double *)(param_3 + 8) <= dVar31) {
          if (*(double *)(param_3 + 0x18) <= dVar31 && dVar31 != *(double *)(param_3 + 0x18))
          goto LAB_00459018;
LAB_00458fd2:
          dVar31 = (double)param_2[0x22d];
          uVar23 = SUB84(dVar31,0);
          uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
          if (dVar31 < *(double *)(param_3 + 0x10)) goto LAB_00458fe6;
LAB_00459032:
          if (*(double *)(param_3 + 0x20) <= (double)CONCAT44(uVar24,uVar23) &&
              (double)CONCAT44(uVar24,uVar23) != *(double *)(param_3 + 0x20)) goto LAB_0045903e;
        }
        else {
          *(double *)(param_3 + 8) = dVar31;
          dVar31 = (double)param_2[0x22c];
          if (dVar31 < *(double *)(param_3 + 0x18) || dVar31 == *(double *)(param_3 + 0x18))
          goto LAB_00458fd2;
LAB_00459018:
          *(double *)(param_3 + 0x18) = dVar31;
          dVar31 = (double)param_2[0x22d];
          uVar23 = SUB84(dVar31,0);
          uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
          if (*(double *)(param_3 + 0x10) <= dVar31) goto LAB_00459032;
LAB_00458fe6:
          *(ulong *)(param_3 + 0x10) = CONCAT44(uVar24,uVar23);
          dVar31 = (double)param_2[0x22d];
          uVar23 = SUB84(dVar31,0);
          uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
          if (*(double *)(param_3 + 0x20) <= dVar31 && dVar31 != *(double *)(param_3 + 0x20)) {
LAB_0045903e:
            *(ulong *)(param_3 + 0x20) = CONCAT44(uVar24,uVar23);
          }
        }
        pdVar13 = pdVar13 + 2;
        uVar17 = uVar16 + 4;
        uVar16 = uVar16 + 2;
      } while (uVar17 <= uVar8);
    }
    break;
  case 6:
    uVar7 = *(uint *)((long)param_2 + 0x14);
    uVar8 = (ulong)uVar7;
    uVar11 = 0;
    if (1 < uVar8) {
      uVar16 = 0;
      do {
        uVar17 = uVar16;
        if (uVar17 < uVar8) {
          dVar31 = (double)param_2[uVar17 + 3];
          uVar23 = (undefined4)param_2[0x22c];
          uVar24 = (undefined4)((ulong)param_2[0x22c] >> 0x20);
          uVar26 = (undefined4)param_2[0x22d];
          uVar28 = (undefined4)((ulong)param_2[0x22d] >> 0x20);
          cVar1 = *param_3;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          dVar31 = 0.0;
          uVar23 = (undefined4)param_2[0x22c];
          uVar24 = (undefined4)((ulong)param_2[0x22c] >> 0x20);
          uVar26 = (undefined4)param_2[0x22d];
          uVar28 = (undefined4)((ulong)param_2[0x22d] >> 0x20);
          cVar1 = *param_3;
        }
        if (cVar1 == '\0') {
          *param_3 = '\x01';
          dVar30 = (double)CONCAT44(uVar24,uVar23);
          if (*(double *)(param_3 + 8) < (double)CONCAT44(uVar24,uVar23) ||
              *(double *)(param_3 + 8) == (double)CONCAT44(uVar24,uVar23)) {
            if (*(double *)(param_3 + 0x18) <= dVar30 && dVar30 != *(double *)(param_3 + 0x18))
            goto LAB_00459158;
LAB_00459117:
            dVar30 = (double)param_2[0x22d];
            if (dVar30 < *(double *)(param_3 + 0x10)) goto LAB_0045912b;
LAB_00459172:
            if (dVar30 < *(double *)(param_3 + 0x20) || dVar30 == *(double *)(param_3 + 0x20))
            goto LAB_00459180;
          }
          else {
            *(ulong *)(param_3 + 8) = CONCAT44(uVar24,uVar23);
            dVar30 = (double)param_2[0x22c];
            if (dVar30 < *(double *)(param_3 + 0x18) || dVar30 == *(double *)(param_3 + 0x18))
            goto LAB_00459117;
LAB_00459158:
            *(double *)(param_3 + 0x18) = dVar30;
            dVar30 = (double)param_2[0x22d];
            if (*(double *)(param_3 + 0x10) <= dVar30) goto LAB_00459172;
LAB_0045912b:
            *(double *)(param_3 + 0x10) = dVar30;
            dVar30 = (double)param_2[0x22d];
            if (dVar30 < *(double *)(param_3 + 0x20) || dVar30 == *(double *)(param_3 + 0x20))
            goto LAB_00459180;
          }
          *(double *)(param_3 + 0x20) = dVar30;
        }
LAB_00459180:
        dVar31 = (double)CONCAT44(uVar24,uVar23) + dVar31;
        param_2[0x22c] = (long)dVar31;
        param_2[0x22d] = CONCAT44(uVar28,uVar26);
        dVar30 = *(double *)(param_3 + 8);
        if (dVar30 <= dVar31) {
          dVar29 = *(double *)(param_3 + 0x18);
          dVar32 = dVar31;
          if (dVar29 < dVar31) goto LAB_00459290;
LAB_004591ca:
          dVar32 = *(double *)(param_3 + 0x10);
          dVar34 = (double)param_2[0x22d];
          if (dVar34 < dVar32) goto LAB_004591e2;
LAB_004592b2:
          dVar33 = *(double *)(param_3 + 0x20);
          if (dVar33 < dVar34) goto LAB_004592c2;
LAB_00459204:
          if (uVar17 + 1 < uVar8) goto LAB_00459211;
LAB_004592d9:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          dVar34 = 0.0;
          cVar1 = *param_3;
        }
        else {
          *(double *)(param_3 + 8) = dVar31;
          dVar29 = *(double *)(param_3 + 0x18);
          dVar30 = dVar31;
          dVar32 = (double)param_2[0x22c];
          if ((double)param_2[0x22c] <= dVar29) goto LAB_004591ca;
LAB_00459290:
          dVar29 = dVar32;
          *(double *)(param_3 + 0x18) = dVar29;
          dVar32 = *(double *)(param_3 + 0x10);
          dVar34 = (double)param_2[0x22d];
          if (dVar32 <= dVar34) goto LAB_004592b2;
LAB_004591e2:
          dVar32 = dVar34;
          *(double *)(param_3 + 0x10) = dVar32;
          dVar33 = *(double *)(param_3 + 0x20);
          dVar34 = (double)param_2[0x22d];
          if ((double)param_2[0x22d] <= dVar33) goto LAB_00459204;
LAB_004592c2:
          dVar33 = dVar34;
          *(double *)(param_3 + 0x20) = dVar33;
          if (uVar8 <= uVar17 + 1) goto LAB_004592d9;
LAB_00459211:
          dVar34 = (double)param_2[uVar17 + 4];
          cVar1 = *param_3;
        }
        if (cVar1 == '\0') {
          *param_3 = '\x01';
          dVar35 = (double)param_2[0x22c];
          if (dVar30 <= dVar35) {
            if (dVar29 < dVar35) goto LAB_0045930a;
LAB_0045924f:
            dVar30 = (double)param_2[0x22d];
          }
          else {
            *(double *)(param_3 + 8) = dVar35;
            dVar35 = (double)param_2[0x22c];
            if (dVar35 <= dVar29) goto LAB_0045924f;
LAB_0045930a:
            *(double *)(param_3 + 0x18) = dVar35;
            dVar30 = (double)param_2[0x22d];
          }
          if (dVar30 < dVar32) {
            *(double *)(param_3 + 0x10) = dVar30;
            dVar30 = (double)param_2[0x22d];
          }
          if (dVar33 < dVar30) {
            *(double *)(param_3 + 0x20) = dVar30;
          }
        }
        param_2[0x22c] = (long)dVar31;
        param_2[0x22d] = (long)((double)CONCAT44(uVar28,uVar26) + dVar34);
        if (*(double *)(param_3 + 8) <= dVar31) {
          if (*(double *)(param_3 + 0x18) <= dVar31 && dVar31 != *(double *)(param_3 + 0x18))
          goto LAB_004593a8;
LAB_00459366:
          dVar31 = (double)param_2[0x22d];
          uVar23 = SUB84(dVar31,0);
          uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
          if (dVar31 < *(double *)(param_3 + 0x10)) goto LAB_0045937a;
LAB_004593c2:
          if (*(double *)(param_3 + 0x20) <= (double)CONCAT44(uVar24,uVar23) &&
              (double)CONCAT44(uVar24,uVar23) != *(double *)(param_3 + 0x20)) goto LAB_004593ce;
        }
        else {
          *(double *)(param_3 + 8) = dVar31;
          dVar31 = (double)param_2[0x22c];
          if (dVar31 < *(double *)(param_3 + 0x18) || dVar31 == *(double *)(param_3 + 0x18))
          goto LAB_00459366;
LAB_004593a8:
          *(double *)(param_3 + 0x18) = dVar31;
          dVar31 = (double)param_2[0x22d];
          uVar23 = SUB84(dVar31,0);
          uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
          if (*(double *)(param_3 + 0x10) <= dVar31) goto LAB_004593c2;
LAB_0045937a:
          *(ulong *)(param_3 + 0x10) = CONCAT44(uVar24,uVar23);
          dVar31 = (double)param_2[0x22d];
          uVar23 = SUB84(dVar31,0);
          uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
          if (*(double *)(param_3 + 0x20) <= dVar31 && dVar31 != *(double *)(param_3 + 0x20)) {
LAB_004593ce:
            *(ulong *)(param_3 + 0x20) = CONCAT44(uVar24,uVar23);
          }
        }
        uVar16 = uVar17 + 2;
      } while (uVar17 + 4 <= uVar8);
      uVar11 = (int)uVar17 + 2;
    }
    if (uVar7 <= uVar11) break;
    dVar29 = (double)param_2[0x22c];
    dVar31 = (double)param_2[0x22d];
    dVar30 = (double)param_2[(ulong)uVar11 + 3] + dVar29;
    if (*param_3 == '\0') {
      *param_3 = '\x01';
      if (*(double *)(param_3 + 8) <= dVar29) {
LAB_0045b464:
        if (dVar29 < *(double *)(param_3 + 0x18) || dVar29 == *(double *)(param_3 + 0x18))
        goto LAB_0045addd;
      }
      else {
        *(double *)(param_3 + 8) = dVar29;
        dVar29 = (double)param_2[0x22c];
        if (dVar29 < *(double *)(param_3 + 0x18) || dVar29 == *(double *)(param_3 + 0x18))
        goto LAB_0045addd;
      }
LAB_0045b470:
      *(double *)(param_3 + 0x18) = dVar29;
      dVar29 = (double)param_2[0x22d];
      if (*(double *)(param_3 + 0x10) <= dVar29) goto LAB_0045b48e;
LAB_0045adf5:
      *(double *)(param_3 + 0x10) = dVar29;
      dVar29 = (double)param_2[0x22d];
      if (*(double *)(param_3 + 0x20) <= dVar29 && dVar29 != *(double *)(param_3 + 0x20)) {
LAB_0045b496:
        *(double *)(param_3 + 0x20) = dVar29;
      }
    }
    goto LAB_0045b49c;
  case 7:
    uVar7 = *(uint *)((long)param_2 + 0x14);
    uVar8 = (ulong)uVar7;
    uVar11 = 0;
    if (1 < uVar8) {
      uVar16 = 0;
      do {
        uVar17 = uVar16;
        if (uVar17 < uVar8) {
          dVar31 = (double)param_2[uVar17 + 3];
          uVar23 = (undefined4)param_2[0x22c];
          uVar24 = (undefined4)((ulong)param_2[0x22c] >> 0x20);
          uVar26 = (undefined4)param_2[0x22d];
          uVar28 = (undefined4)((ulong)param_2[0x22d] >> 0x20);
          cVar1 = *param_3;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          dVar31 = 0.0;
          uVar23 = (undefined4)param_2[0x22c];
          uVar24 = (undefined4)((ulong)param_2[0x22c] >> 0x20);
          uVar26 = (undefined4)param_2[0x22d];
          uVar28 = (undefined4)((ulong)param_2[0x22d] >> 0x20);
          cVar1 = *param_3;
        }
        if (cVar1 == '\0') {
          *param_3 = '\x01';
          dVar30 = (double)CONCAT44(uVar24,uVar23);
          if (*(double *)(param_3 + 8) < (double)CONCAT44(uVar24,uVar23) ||
              *(double *)(param_3 + 8) == (double)CONCAT44(uVar24,uVar23)) {
            if (*(double *)(param_3 + 0x18) <= dVar30 && dVar30 != *(double *)(param_3 + 0x18))
            goto LAB_004594c8;
LAB_00459487:
            dVar30 = (double)param_2[0x22d];
            if (dVar30 < *(double *)(param_3 + 0x10)) goto LAB_0045949b;
LAB_004594e2:
            if (dVar30 < *(double *)(param_3 + 0x20) || dVar30 == *(double *)(param_3 + 0x20))
            goto LAB_004594f0;
          }
          else {
            *(ulong *)(param_3 + 8) = CONCAT44(uVar24,uVar23);
            dVar30 = (double)param_2[0x22c];
            if (dVar30 < *(double *)(param_3 + 0x18) || dVar30 == *(double *)(param_3 + 0x18))
            goto LAB_00459487;
LAB_004594c8:
            *(double *)(param_3 + 0x18) = dVar30;
            dVar30 = (double)param_2[0x22d];
            if (*(double *)(param_3 + 0x10) <= dVar30) goto LAB_004594e2;
LAB_0045949b:
            *(double *)(param_3 + 0x10) = dVar30;
            dVar30 = (double)param_2[0x22d];
            if (dVar30 < *(double *)(param_3 + 0x20) || dVar30 == *(double *)(param_3 + 0x20))
            goto LAB_004594f0;
          }
          *(double *)(param_3 + 0x20) = dVar30;
        }
LAB_004594f0:
        dVar31 = (double)CONCAT44(uVar28,uVar26) + dVar31;
        param_2[0x22c] = CONCAT44(uVar24,uVar23);
        param_2[0x22d] = (long)dVar31;
        dVar30 = *(double *)(param_3 + 8);
        if (dVar30 < (double)CONCAT44(uVar24,uVar23) || dVar30 == (double)CONCAT44(uVar24,uVar23)) {
          dVar29 = *(double *)(param_3 + 0x18);
          dVar32 = (double)CONCAT44(uVar24,uVar23);
          if (dVar29 < (double)CONCAT44(uVar24,uVar23)) goto LAB_00459600;
LAB_0045953a:
          dVar32 = *(double *)(param_3 + 0x10);
          dVar34 = (double)param_2[0x22d];
          if (dVar34 < dVar32) goto LAB_00459552;
LAB_00459622:
          dVar33 = *(double *)(param_3 + 0x20);
          if (dVar33 < dVar34) goto LAB_00459632;
LAB_00459574:
          if (uVar17 + 1 < uVar8) goto LAB_00459581;
LAB_00459649:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          dVar34 = 0.0;
          cVar1 = *param_3;
        }
        else {
          *(ulong *)(param_3 + 8) = CONCAT44(uVar24,uVar23);
          dVar30 = (double)CONCAT44(uVar24,uVar23);
          dVar29 = *(double *)(param_3 + 0x18);
          dVar32 = (double)param_2[0x22c];
          if ((double)param_2[0x22c] <= dVar29) goto LAB_0045953a;
LAB_00459600:
          dVar29 = dVar32;
          *(double *)(param_3 + 0x18) = dVar29;
          dVar32 = *(double *)(param_3 + 0x10);
          dVar34 = (double)param_2[0x22d];
          if (dVar32 <= dVar34) goto LAB_00459622;
LAB_00459552:
          dVar32 = dVar34;
          *(double *)(param_3 + 0x10) = dVar32;
          dVar33 = *(double *)(param_3 + 0x20);
          dVar34 = (double)param_2[0x22d];
          if ((double)param_2[0x22d] <= dVar33) goto LAB_00459574;
LAB_00459632:
          dVar33 = dVar34;
          *(double *)(param_3 + 0x20) = dVar33;
          if (uVar8 <= uVar17 + 1) goto LAB_00459649;
LAB_00459581:
          dVar34 = (double)param_2[uVar17 + 4];
          cVar1 = *param_3;
        }
        if (cVar1 == '\0') {
          *param_3 = '\x01';
          dVar35 = (double)param_2[0x22c];
          if (dVar30 <= dVar35) {
            if (dVar29 < dVar35) goto LAB_0045967a;
LAB_004595bf:
            dVar30 = (double)param_2[0x22d];
          }
          else {
            *(double *)(param_3 + 8) = dVar35;
            dVar35 = (double)param_2[0x22c];
            if (dVar35 <= dVar29) goto LAB_004595bf;
LAB_0045967a:
            *(double *)(param_3 + 0x18) = dVar35;
            dVar30 = (double)param_2[0x22d];
          }
          if (dVar30 < dVar32) {
            *(double *)(param_3 + 0x10) = dVar30;
            dVar30 = (double)param_2[0x22d];
          }
          if (dVar33 < dVar30) {
            *(double *)(param_3 + 0x20) = dVar30;
          }
        }
        dVar34 = (double)CONCAT44(uVar24,uVar23) + dVar34;
        param_2[0x22c] = (long)dVar34;
        param_2[0x22d] = (long)dVar31;
        if (*(double *)(param_3 + 8) <= dVar34) {
          if (*(double *)(param_3 + 0x18) <= dVar34 && dVar34 != *(double *)(param_3 + 0x18))
          goto LAB_00459718;
LAB_004596d6:
          dVar31 = (double)param_2[0x22d];
          uVar23 = SUB84(dVar31,0);
          uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
          if (dVar31 < *(double *)(param_3 + 0x10)) goto LAB_004596ea;
LAB_00459732:
          if (*(double *)(param_3 + 0x20) <= (double)CONCAT44(uVar24,uVar23) &&
              (double)CONCAT44(uVar24,uVar23) != *(double *)(param_3 + 0x20)) goto LAB_0045973e;
        }
        else {
          *(double *)(param_3 + 8) = dVar34;
          dVar34 = (double)param_2[0x22c];
          if (dVar34 < *(double *)(param_3 + 0x18) || dVar34 == *(double *)(param_3 + 0x18))
          goto LAB_004596d6;
LAB_00459718:
          *(double *)(param_3 + 0x18) = dVar34;
          dVar31 = (double)param_2[0x22d];
          uVar23 = SUB84(dVar31,0);
          uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
          if (*(double *)(param_3 + 0x10) <= dVar31) goto LAB_00459732;
LAB_004596ea:
          *(ulong *)(param_3 + 0x10) = CONCAT44(uVar24,uVar23);
          dVar31 = (double)param_2[0x22d];
          uVar23 = SUB84(dVar31,0);
          uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
          if (*(double *)(param_3 + 0x20) <= dVar31 && dVar31 != *(double *)(param_3 + 0x20)) {
LAB_0045973e:
            *(ulong *)(param_3 + 0x20) = CONCAT44(uVar24,uVar23);
          }
        }
        uVar16 = uVar17 + 2;
      } while (uVar17 + 4 <= uVar8);
      uVar11 = (int)uVar17 + 2;
    }
    if (uVar7 <= uVar11) break;
    dVar30 = (double)param_2[0x22c];
    dVar31 = (double)param_2[0x22d] + (double)param_2[(ulong)uVar11 + 3];
    if (*param_3 == '\0') {
      *param_3 = '\x01';
      dVar29 = dVar30;
      if (*(double *)(param_3 + 8) <= dVar30) goto LAB_0045b464;
      *(double *)(param_3 + 8) = dVar30;
      dVar29 = (double)param_2[0x22c];
      if (*(double *)(param_3 + 0x18) <= dVar29 && dVar29 != *(double *)(param_3 + 0x18))
      goto LAB_0045b470;
LAB_0045addd:
      dVar29 = (double)param_2[0x22d];
      if (dVar29 < *(double *)(param_3 + 0x10)) goto LAB_0045adf5;
LAB_0045b48e:
      if (*(double *)(param_3 + 0x20) <= dVar29 && dVar29 != *(double *)(param_3 + 0x20))
      goto LAB_0045b496;
    }
LAB_0045b49c:
    param_2[0x22c] = (long)dVar30;
    param_2[0x22d] = (long)dVar31;
    if (*(double *)(param_3 + 8) <= dVar30) {
LAB_0045b55d:
      if (*(double *)(param_3 + 0x18) <= dVar30 && dVar30 != *(double *)(param_3 + 0x18))
      goto LAB_0045b569;
LAB_0045b4d6:
      dVar31 = (double)param_2[0x22d];
      uVar23 = SUB84(dVar31,0);
      uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
      if (dVar31 < *(double *)(param_3 + 0x10)) goto LAB_0045b4ee;
LAB_0045b587:
      if ((double)CONCAT44(uVar24,uVar23) < *(double *)(param_3 + 0x20) ||
          (double)CONCAT44(uVar24,uVar23) == *(double *)(param_3 + 0x20)) break;
    }
    else {
LAB_0045b4bc:
      *(double *)(param_3 + 8) = dVar30;
      dVar30 = (double)param_2[0x22c];
      if (dVar30 < *(double *)(param_3 + 0x18) || dVar30 == *(double *)(param_3 + 0x18))
      goto LAB_0045b4d6;
LAB_0045b569:
      *(double *)(param_3 + 0x18) = dVar30;
      dVar31 = (double)param_2[0x22d];
      uVar23 = SUB84(dVar31,0);
      uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
      if (*(double *)(param_3 + 0x10) <= dVar31) goto LAB_0045b587;
LAB_0045b4ee:
      *(ulong *)(param_3 + 0x10) = CONCAT44(uVar24,uVar23);
      dVar31 = (double)param_2[0x22d];
      uVar23 = SUB84(dVar31,0);
      uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
      if (dVar31 < *(double *)(param_3 + 0x20) || dVar31 == *(double *)(param_3 + 0x20)) break;
    }
    *(ulong *)(param_3 + 0x20) = CONCAT44(uVar24,uVar23);
    break;
  case 8:
    uVar7 = *(uint *)((long)param_2 + 0x14);
    if (5 < uVar7) {
      uVar11 = 0;
      do {
        if (uVar11 < uVar7) {
          pdVar13 = (double *)(param_2 + (ulong)uVar11 + 3);
          if (uVar11 + 1 < uVar7) goto LAB_004597ca;
LAB_004598c9:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar13 = (double *)&_hb_CrapPool;
          if (uVar7 <= uVar11 + 1) goto LAB_004598c9;
LAB_004597ca:
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 1) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 1) + 3] >> 0x20);
        }
        local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
        local_98._0_8_ = *pdVar13 + (double)local_98._0_8_;
        local_98._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
        dVar31 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
        local_98._8_4_ = SUB84(dVar31,0);
        local_98._12_4_ = (int)((ulong)dVar31 >> 0x20);
        if (uVar11 + 2 < uVar7) {
          pdVar13 = (double *)(param_2 + (ulong)(uVar11 + 2) + 3);
          if (uVar11 + 3 < uVar7) goto LAB_00459811;
LAB_00459903:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar13 = (double *)&_hb_CrapPool;
          if (uVar7 <= uVar11 + 3) goto LAB_00459903;
LAB_00459811:
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 3) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 3) + 3] >> 0x20);
        }
        dVar31 = *pdVar13 + (double)local_98._0_8_;
        dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
        local_88._8_4_ = SUB84(dVar30,0);
        local_88._0_8_ = dVar31;
        local_88._12_4_ = (int)((ulong)dVar30 >> 0x20);
        if (uVar11 + 4 < uVar7) {
          pdVar13 = (double *)(param_2 + (ulong)(uVar11 + 4) + 3);
          if (uVar11 + 5 < uVar7) goto LAB_0045985b;
LAB_0045993d:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar13 = (double *)&_hb_CrapPool;
          if (uVar7 <= uVar11 + 5) goto LAB_0045993d;
LAB_0045985b:
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 5) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 5) + 3] >> 0x20);
        }
        dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_88._8_8_;
        local_78._8_4_ = SUB84(dVar30,0);
        local_78._0_8_ = *pdVar13 + dVar31;
        local_78._12_4_ = (int)((ulong)dVar30 >> 0x20);
        cff2_path_procs_extents_t::curve
                  ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                   (undefined8 *)local_78);
        uVar7 = *(uint *)((long)param_2 + 0x14);
        uVar21 = uVar11 + 0xc;
        uVar11 = uVar11 + 6;
      } while (uVar21 <= uVar7);
    }
    break;
  case 10:
    if (*(int *)((long)param_2 + 0x14) == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar7 = *(uint *)(param_2 + 0x22a);
    }
    else {
      uVar7 = *(int *)((long)param_2 + 0x14) - 1;
      *(uint *)((long)param_2 + 0x14) = uVar7;
      uVar7 = (int)(double)param_2[(ulong)uVar7 + 3] + (int)param_2[0x22a];
    }
    if (((-1 < (int)uVar7) && ((uint *)param_2[0x22b] != (uint *)0x0)) &&
       (uVar11 = *(uint *)param_2[0x22b],
       uVar7 < (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18)
       )) {
      uVar8 = (ulong)*(uint *)((long)param_2 + 0x104c);
      if (uVar8 < 10) {
        lVar9 = *param_2;
        lVar6 = param_2[1];
        param_2[0x204] = lVar9;
        param_2[0x205] = lVar6;
        *(uint *)((long)param_2 + 0x104c) = *(uint *)((long)param_2 + 0x104c) + 1;
        param_2[uVar8 * 3 + 0x20c] = param_2[0x206];
        param_2[uVar8 * 3 + 0x20a] = lVar9;
        (param_2 + uVar8 * 3 + 0x20a)[1] = lVar6;
        pCVar2 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)param_2[0x22b];
        if ((pCVar2 == (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0) ||
           (uVar11 = *(uint *)pCVar2,
           (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) <=
           uVar7)) {
          lVar9 = 0;
          uVar8 = 0;
        }
        else {
          auVar36 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](pCVar2,uVar7);
          lVar9 = auVar36._0_8_;
          uVar8 = auVar36._8_8_ & 0xffffffff;
        }
        param_2[0x204] = lVar9;
        param_2[0x205] = uVar8;
        *(undefined4 *)(param_2 + 0x206) = 2;
LAB_0045a2de:
        *(uint *)((long)param_2 + 0x1034) = uVar7;
        *param_2 = param_2[0x204];
        param_2[1] = param_2[0x205];
        return;
      }
    }
    goto LAB_0045b702;
  case 0xb:
    if (*(int *)((long)param_2 + 0x104c) == 0) {
      *(undefined1 *)(param_2 + 0x209) = 1;
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      DAT_0071cd90 = 0;
      plVar10 = &_hb_CrapPool;
    }
    else {
      uVar7 = *(int *)((long)param_2 + 0x104c) - 1;
      *(uint *)((long)param_2 + 0x104c) = uVar7;
      plVar10 = param_2 + (ulong)uVar7 * 3 + 0x20a;
    }
    param_2[0x206] = plVar10[2];
    lVar9 = plVar10[1];
    param_2[0x204] = *plVar10;
    param_2[0x205] = lVar9;
    lVar9 = plVar10[1];
    *param_2 = *plVar10;
    param_2[1] = lVar9;
    return;
  case 0xe:
    *(undefined1 *)(param_2 + 0x207) = 1;
    break;
  case 0x13:
  case 0x14:
    if (*(char *)((long)param_2 + 0x103a) == '\0') {
      iVar18 = (*(uint *)((long)param_2 + 0x14) >> 1) + (int)param_2[0x208];
      *(int *)(param_2 + 0x208) = iVar18;
      uVar7 = iVar18 + *(int *)((long)param_2 + 0x103c) + 7U >> 3;
      *(uint *)((long)param_2 + 0x1044) = uVar7;
      *(undefined1 *)((long)param_2 + 0x103a) = 1;
    }
    else {
      uVar7 = *(uint *)((long)param_2 + 0x1044);
    }
    uVar7 = uVar7 + *(int *)((long)param_2 + 0xc);
    if (*(uint *)(param_2 + 1) < uVar7) {
      return;
    }
    *(undefined4 *)((long)param_2 + 0x14) = 0;
    *(uint *)((long)param_2 + 0xc) = uVar7;
    return;
  case 0x15:
    dVar31 = (double)param_2[0x22c];
    dVar30 = (double)param_2[0x22d];
    iVar18 = *(int *)((long)param_2 + 0x14);
    if (iVar18 == 0) {
      pdVar13 = (double *)&_hb_CrapPool;
LAB_0045b6b1:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar7 = 0;
    }
    else {
      pdVar13 = (double *)(param_2 + (ulong)(iVar18 - 1U) + 3);
      if (iVar18 - 1U == 0) goto LAB_0045b6b1;
      uVar23 = (undefined4)param_2[(ulong)(iVar18 - 2U) + 3];
      uVar24 = (undefined4)((ulong)param_2[(ulong)(iVar18 - 2U) + 3] >> 0x20);
      uVar7 = iVar18 - 2U >> 1;
    }
    dVar29 = *pdVar13;
    *param_3 = '\0';
    auVar4._8_4_ = SUB84(dVar30 + dVar29,0);
    auVar4._0_8_ = dVar31 + (double)CONCAT44(uVar24,uVar23);
    auVar4._12_4_ = (int)((ulong)(dVar30 + dVar29) >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x22c) = auVar4;
    cVar1 = *(char *)((long)param_2 + 0x1039);
    goto joined_r0x00459b04;
  case 0x16:
    dVar31 = (double)param_2[0x22c];
    lVar9 = param_2[0x22d];
    if (*(int *)((long)param_2 + 0x14) == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      dVar30 = 0.0;
      uVar7 = 0;
    }
    else {
      uVar7 = *(int *)((long)param_2 + 0x14) - 1;
      dVar30 = (double)param_2[(ulong)uVar7 + 3];
      uVar7 = uVar7 >> 1;
    }
    *param_3 = '\0';
    param_2[0x22c] = (long)(dVar31 + dVar30);
    param_2[0x22d] = lVar9;
    cVar1 = *(char *)((long)param_2 + 0x1039);
joined_r0x00459b04:
    if (cVar1 == '\0') {
LAB_00459b0a:
      if (*(char *)((long)param_2 + 0x103a) == '\0') {
        iVar18 = uVar7 + (int)param_2[0x208];
        *(int *)(param_2 + 0x208) = iVar18;
        *(uint *)((long)param_2 + 0x1044) = iVar18 + *(int *)((long)param_2 + 0x103c) + 7U >> 3;
        *(undefined1 *)((long)param_2 + 0x103a) = 1;
      }
      *(undefined1 *)((long)param_2 + 0x1039) = 1;
    }
    break;
  case 0x18:
    uVar7 = *(uint *)((long)param_2 + 0x14);
    if (uVar7 < 8) break;
    uVar11 = uVar7 - 2;
    uVar21 = 0;
    do {
      uVar20 = uVar21;
      if (uVar20 < uVar7) {
        pdVar13 = (double *)(param_2 + (ulong)uVar20 + 3);
        if (uVar20 + 1 < uVar7) goto LAB_00459b9b;
LAB_00459ca2:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        uVar23 = 0;
        uVar24 = 0;
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar13 = (double *)&_hb_CrapPool;
        if (uVar7 <= uVar20 + 1) goto LAB_00459ca2;
LAB_00459b9b:
        uVar23 = (undefined4)param_2[(ulong)(uVar20 + 1) + 3];
        uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar20 + 1) + 3] >> 0x20);
      }
      local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
      local_98._0_8_ = *pdVar13 + (double)local_98._0_8_;
      local_98._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
      dVar31 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
      local_98._8_4_ = SUB84(dVar31,0);
      local_98._12_4_ = (int)((ulong)dVar31 >> 0x20);
      if (uVar20 + 2 < uVar7) {
        pdVar13 = (double *)(param_2 + (ulong)(uVar20 + 2) + 3);
        if (uVar20 + 3 < uVar7) goto LAB_00459be4;
LAB_00459cdd:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        uVar23 = 0;
        uVar24 = 0;
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar13 = (double *)&_hb_CrapPool;
        if (uVar7 <= uVar20 + 3) goto LAB_00459cdd;
LAB_00459be4:
        uVar23 = (undefined4)param_2[(ulong)(uVar20 + 3) + 3];
        uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar20 + 3) + 3] >> 0x20);
      }
      dVar31 = *pdVar13 + (double)local_98._0_8_;
      dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
      local_88._8_4_ = SUB84(dVar30,0);
      local_88._0_8_ = dVar31;
      local_88._12_4_ = (int)((ulong)dVar30 >> 0x20);
      if (uVar20 + 4 < uVar7) {
        pdVar13 = (double *)(param_2 + (ulong)(uVar20 + 4) + 3);
        if (uVar20 + 5 < uVar7) goto LAB_00459c30;
LAB_00459d18:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        uVar23 = 0;
        uVar24 = 0;
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar13 = (double *)&_hb_CrapPool;
        if (uVar7 <= uVar20 + 5) goto LAB_00459d18;
LAB_00459c30:
        uVar23 = (undefined4)param_2[(ulong)(uVar20 + 5) + 3];
        uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar20 + 5) + 3] >> 0x20);
      }
      dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_88._8_8_;
      local_78._8_4_ = SUB84(dVar30,0);
      local_78._0_8_ = *pdVar13 + dVar31;
      local_78._12_4_ = (int)((ulong)dVar30 >> 0x20);
      cff2_path_procs_extents_t::curve
                ((long)param_2,param_3,(double *)local_98,(double *)local_88,(undefined8 *)local_78)
      ;
      uVar7 = *(uint *)((long)param_2 + 0x14);
      uVar21 = uVar20 + 6;
    } while (uVar20 + 0xc <= uVar11);
    if (uVar21 < uVar7) {
      pdVar13 = (double *)(param_2 + (ulong)uVar21 + 3);
      uVar23 = (undefined4)param_2[0x22c];
      uVar24 = *(undefined4 *)((long)param_2 + 0x1164);
      uVar26 = (undefined4)param_2[0x22d];
      uVar28 = *(undefined4 *)((long)param_2 + 0x116c);
      if (uVar20 + 7 < uVar7) goto LAB_0045a8c1;
LAB_0045b739:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      dVar31 = 0.0;
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar13 = (double *)&_hb_CrapPool;
      uVar23 = (undefined4)param_2[0x22c];
      uVar24 = *(undefined4 *)((long)param_2 + 0x1164);
      uVar26 = (undefined4)param_2[0x22d];
      uVar28 = *(undefined4 *)((long)param_2 + 0x116c);
      if (uVar7 <= uVar20 + 7) goto LAB_0045b739;
LAB_0045a8c1:
      dVar31 = (double)param_2[(ulong)(uVar20 + 7) + 3];
    }
    dVar30 = *pdVar13 + (double)CONCAT44(uVar24,uVar23);
    dVar31 = dVar31 + (double)CONCAT44(uVar28,uVar26);
    if (*param_3 == '\0') {
      *param_3 = '\x01';
      if (*(double *)(param_3 + 8) < (double)CONCAT44(uVar24,uVar23) ||
          *(double *)(param_3 + 8) == (double)CONCAT44(uVar24,uVar23)) {
        if (*(double *)(param_3 + 0x18) <= (double)CONCAT44(uVar24,uVar23) &&
            (double)CONCAT44(uVar24,uVar23) != *(double *)(param_3 + 0x18)) goto LAB_0045b519;
LAB_0045a90d:
        dVar29 = (double)param_2[0x22d];
        uVar23 = SUB84(dVar29,0);
        uVar24 = (undefined4)((ulong)dVar29 >> 0x20);
        if (dVar29 < *(double *)(param_3 + 0x10)) goto LAB_0045a925;
LAB_0045b537:
        if ((double)CONCAT44(uVar24,uVar23) < *(double *)(param_3 + 0x20) ||
            (double)CONCAT44(uVar24,uVar23) == *(double *)(param_3 + 0x20)) goto LAB_0045b545;
      }
      else {
        *(ulong *)(param_3 + 8) = CONCAT44(uVar24,uVar23);
        dVar29 = (double)param_2[0x22c];
        uVar23 = SUB84(dVar29,0);
        uVar24 = (undefined4)((ulong)dVar29 >> 0x20);
        if (dVar29 < *(double *)(param_3 + 0x18) || dVar29 == *(double *)(param_3 + 0x18))
        goto LAB_0045a90d;
LAB_0045b519:
        *(ulong *)(param_3 + 0x18) = CONCAT44(uVar24,uVar23);
        dVar29 = (double)param_2[0x22d];
        uVar23 = SUB84(dVar29,0);
        uVar24 = (undefined4)((ulong)dVar29 >> 0x20);
        if (*(double *)(param_3 + 0x10) <= dVar29) goto LAB_0045b537;
LAB_0045a925:
        *(ulong *)(param_3 + 0x10) = CONCAT44(uVar24,uVar23);
        dVar29 = (double)param_2[0x22d];
        uVar23 = SUB84(dVar29,0);
        uVar24 = (undefined4)((ulong)dVar29 >> 0x20);
        if (dVar29 < *(double *)(param_3 + 0x20) || dVar29 == *(double *)(param_3 + 0x20))
        goto LAB_0045b545;
      }
      *(ulong *)(param_3 + 0x20) = CONCAT44(uVar24,uVar23);
    }
LAB_0045b545:
    auVar3._8_4_ = SUB84(dVar31,0);
    auVar3._0_8_ = dVar30;
    auVar3._12_4_ = (int)((ulong)dVar31 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x22c) = auVar3;
    if (*(double *)(param_3 + 8) <= dVar30) goto LAB_0045b55d;
    goto LAB_0045b4bc;
  case 0x19:
    uVar7 = *(uint *)((long)param_2 + 0x14);
    uVar8 = (ulong)uVar7;
    if (uVar8 < 8) break;
    pdVar14 = (double *)(param_2 + 3);
    uVar16 = 0;
    do {
      uVar17 = uVar16;
      if (uVar17 < uVar8) {
        pdVar12 = pdVar14;
        if (uVar17 + 1 < uVar8) goto LAB_00459d81;
LAB_00459ef8:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        uVar25 = 0;
        uVar27 = 0;
        uVar23 = (undefined4)param_2[0x22c];
        uVar24 = *(undefined4 *)((long)param_2 + 0x1164);
        uVar26 = (undefined4)param_2[0x22d];
        uVar28 = *(undefined4 *)((long)param_2 + 0x116c);
        dVar31 = *pdVar12;
        cVar1 = *param_3;
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar12 = (double *)&_hb_CrapPool;
        if (uVar8 <= uVar17 + 1) goto LAB_00459ef8;
LAB_00459d81:
        uVar25 = (undefined4)param_2[uVar17 + 4];
        uVar27 = (undefined4)((ulong)param_2[uVar17 + 4] >> 0x20);
        uVar23 = (undefined4)param_2[0x22c];
        uVar24 = *(undefined4 *)((long)param_2 + 0x1164);
        uVar26 = (undefined4)param_2[0x22d];
        uVar28 = *(undefined4 *)((long)param_2 + 0x116c);
        dVar31 = *pdVar12;
        cVar1 = *param_3;
      }
      if (cVar1 == '\0') {
        *param_3 = '\x01';
        dVar30 = (double)CONCAT44(uVar24,uVar23);
        if (*(double *)(param_3 + 8) < (double)CONCAT44(uVar24,uVar23) ||
            *(double *)(param_3 + 8) == (double)CONCAT44(uVar24,uVar23)) {
          if (*(double *)(param_3 + 0x18) <= dVar30 && dVar30 != *(double *)(param_3 + 0x18))
          goto LAB_00459e08;
LAB_00459dc7:
          dVar30 = (double)param_2[0x22d];
          if (dVar30 < *(double *)(param_3 + 0x10)) goto LAB_00459ddb;
LAB_00459e22:
          if (dVar30 < *(double *)(param_3 + 0x20) || dVar30 == *(double *)(param_3 + 0x20))
          goto LAB_00459e30;
        }
        else {
          *(double *)(param_3 + 8) = dVar30;
          dVar30 = (double)param_2[0x22c];
          if (dVar30 < *(double *)(param_3 + 0x18) || dVar30 == *(double *)(param_3 + 0x18))
          goto LAB_00459dc7;
LAB_00459e08:
          *(double *)(param_3 + 0x18) = dVar30;
          dVar30 = (double)param_2[0x22d];
          if (*(double *)(param_3 + 0x10) <= dVar30) goto LAB_00459e22;
LAB_00459ddb:
          *(double *)(param_3 + 0x10) = dVar30;
          dVar30 = (double)param_2[0x22d];
          if (dVar30 < *(double *)(param_3 + 0x20) || dVar30 == *(double *)(param_3 + 0x20))
          goto LAB_00459e30;
        }
        *(double *)(param_3 + 0x20) = dVar30;
      }
LAB_00459e30:
      dVar31 = (double)CONCAT44(uVar24,uVar23) + dVar31;
      dVar30 = (double)CONCAT44(uVar28,uVar26) + (double)CONCAT44(uVar27,uVar25);
      auVar36._8_4_ = SUB84(dVar30,0);
      auVar36._0_8_ = dVar31;
      auVar36._12_4_ = (int)((ulong)dVar30 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 0x22c) = auVar36;
      if (*(double *)(param_3 + 8) <= dVar31) {
        if (*(double *)(param_3 + 0x18) <= dVar31 && dVar31 != *(double *)(param_3 + 0x18))
        goto LAB_00459ea8;
LAB_00459e62:
        dVar31 = (double)param_2[0x22d];
        uVar23 = SUB84(dVar31,0);
        uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
        if (dVar31 < *(double *)(param_3 + 0x10)) goto LAB_00459e76;
LAB_00459ec2:
        if (*(double *)(param_3 + 0x20) <= (double)CONCAT44(uVar24,uVar23) &&
            (double)CONCAT44(uVar24,uVar23) != *(double *)(param_3 + 0x20)) goto LAB_00459ece;
      }
      else {
        *(double *)(param_3 + 8) = dVar31;
        dVar31 = (double)param_2[0x22c];
        if (dVar31 < *(double *)(param_3 + 0x18) || dVar31 == *(double *)(param_3 + 0x18))
        goto LAB_00459e62;
LAB_00459ea8:
        *(double *)(param_3 + 0x18) = dVar31;
        dVar31 = (double)param_2[0x22d];
        uVar23 = SUB84(dVar31,0);
        uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
        if (*(double *)(param_3 + 0x10) <= dVar31) goto LAB_00459ec2;
LAB_00459e76:
        *(ulong *)(param_3 + 0x10) = CONCAT44(uVar24,uVar23);
        dVar31 = (double)param_2[0x22d];
        uVar23 = SUB84(dVar31,0);
        uVar24 = (undefined4)((ulong)dVar31 >> 0x20);
        if (*(double *)(param_3 + 0x20) <= dVar31 && dVar31 != *(double *)(param_3 + 0x20)) {
LAB_00459ece:
          *(ulong *)(param_3 + 0x20) = CONCAT44(uVar24,uVar23);
        }
      }
      pdVar14 = pdVar14 + 2;
      uVar16 = uVar17 + 2;
    } while (uVar17 + 4 <= (ulong)(uVar7 - 6));
    iVar18 = (int)uVar17;
    if (iVar18 + 2U < uVar7) {
      if (iVar18 + 3U < uVar7) goto LAB_0045a96c;
LAB_0045b772:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar23 = 0;
      uVar24 = 0;
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar14 = (double *)&_hb_CrapPool;
      if (uVar7 <= iVar18 + 3U) goto LAB_0045b772;
LAB_0045a96c:
      uVar23 = (undefined4)param_2[uVar17 + 6];
      uVar24 = (undefined4)((ulong)param_2[uVar17 + 6] >> 0x20);
    }
    local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
    local_98._0_8_ = *pdVar14 + (double)local_98._0_8_;
    local_98._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
    dVar31 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
    local_98._8_4_ = SUB84(dVar31,0);
    local_98._12_4_ = (int)((ulong)dVar31 >> 0x20);
    if (iVar18 + 4U < uVar7) {
      pdVar14 = (double *)(param_2 + (ulong)(iVar18 + 4U) + 3);
      if (iVar18 + 5U < uVar7) goto LAB_0045a9ae;
LAB_0045b7ac:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar23 = 0;
      uVar24 = 0;
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar14 = (double *)&_hb_CrapPool;
      if (uVar7 <= iVar18 + 5U) goto LAB_0045b7ac;
LAB_0045a9ae:
      uVar23 = (undefined4)param_2[(ulong)(iVar18 + 5) + 3];
      uVar24 = (undefined4)((ulong)param_2[(ulong)(iVar18 + 5) + 3] >> 0x20);
    }
    dVar31 = *pdVar14 + (double)local_98._0_8_;
    dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
    local_88._8_4_ = SUB84(dVar30,0);
    local_88._0_8_ = dVar31;
    local_88._12_4_ = (int)((ulong)dVar30 >> 0x20);
    if ((uint)(uVar17 + 6) < uVar7) {
      pdVar14 = (double *)(param_2 + (uVar17 + 6 & 0xffffffff) + 3);
      if (iVar18 + 7U < uVar7) goto LAB_0045a9f8;
LAB_0045b7e6:
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar23 = 0;
      uVar24 = 0;
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      pdVar14 = (double *)&_hb_CrapPool;
      if (uVar7 <= iVar18 + 7U) goto LAB_0045b7e6;
LAB_0045a9f8:
      uVar23 = (undefined4)param_2[(uVar17 + 7 & 0xffffffff) + 3];
      uVar24 = (undefined4)((ulong)param_2[(uVar17 + 7 & 0xffffffff) + 3] >> 0x20);
    }
    dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_88._8_8_;
    local_78._8_4_ = SUB84(dVar30,0);
    local_78._0_8_ = *pdVar14 + dVar31;
    local_78._12_4_ = (int)((ulong)dVar30 >> 0x20);
    goto LAB_0045b5cf;
  case 0x1a:
    local_98 = *(undefined1 (*) [16])(param_2 + 0x22c);
    uVar7 = *(uint *)((long)param_2 + 0x14);
    bVar22 = (uVar7 & 1) != 0;
    if (bVar22) {
      local_98._0_8_ = (double)local_98._0_8_ + (double)param_2[3];
    }
    if (bVar22 + 4 <= uVar7) {
      uVar11 = bVar22 + 4;
      uVar21 = (uint)bVar22;
      do {
        uVar20 = uVar11;
        if (uVar21 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)uVar21 + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)uVar21 + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        dVar31 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
        if (uVar21 + 1 < uVar7) {
          pdVar13 = (double *)(param_2 + (ulong)(uVar21 + 1) + 3);
          if (uVar21 + 2 < uVar7) goto LAB_00459fba;
LAB_0045a06f:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar13 = (double *)&_hb_CrapPool;
          if (uVar7 <= uVar21 + 2) goto LAB_0045a06f;
LAB_00459fba:
          uVar23 = (undefined4)param_2[(ulong)(uVar21 + 2) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar21 + 2) + 3] >> 0x20);
        }
        dVar30 = *pdVar13;
        dVar29 = (double)CONCAT44(uVar24,uVar23) + dVar31;
        local_88._8_4_ = SUB84(dVar29,0);
        local_88._0_8_ = dVar30 + (double)local_98._0_8_;
        local_88._12_4_ = (int)((ulong)dVar29 >> 0x20);
        if (uVar21 + 3 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar21 + 3) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar21 + 3) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_78._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_88._8_8_;
        local_78._0_8_ = dVar30 + (double)local_98._0_8_;
        local_98._8_8_ = dVar31;
        cff2_path_procs_extents_t::curve
                  ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                   (undefined8 *)local_78);
        local_98 = *(undefined1 (*) [16])(param_2 + 0x22c);
        uVar11 = uVar20 + 4;
        uVar7 = *(uint *)((long)param_2 + 0x14);
        uVar21 = uVar20;
      } while (uVar11 <= uVar7);
    }
    break;
  case 0x1b:
    local_98 = *(undefined1 (*) [16])(param_2 + 0x22c);
    uVar7 = *(uint *)((long)param_2 + 0x14);
    bVar22 = (uVar7 & 1) != 0;
    if (bVar22) {
      local_98._8_8_ = (double)local_98._8_8_ + (double)param_2[3];
    }
    if (bVar22 + 4 <= uVar7) {
      uVar11 = bVar22 + 4;
      uVar21 = (uint)bVar22;
      do {
        uVar20 = uVar11;
        if (uVar21 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)uVar21 + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)uVar21 + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        dVar31 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._0_8_;
        if (uVar21 + 1 < uVar7) {
          pdVar13 = (double *)(param_2 + (ulong)(uVar21 + 1) + 3);
          if (uVar21 + 2 < uVar7) goto LAB_0045a138;
LAB_0045a1ed:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar13 = (double *)&_hb_CrapPool;
          if (uVar7 <= uVar21 + 2) goto LAB_0045a1ed;
LAB_0045a138:
          uVar23 = (undefined4)param_2[(ulong)(uVar21 + 2) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar21 + 2) + 3] >> 0x20);
        }
        dVar30 = *pdVar13 + dVar31;
        dVar29 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
        local_88._8_4_ = SUB84(dVar29,0);
        local_88._0_8_ = dVar30;
        local_88._12_4_ = (int)((ulong)dVar29 >> 0x20);
        if (uVar21 + 3 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar21 + 3) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar21 + 3) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_78._8_8_ = local_88._8_8_;
        local_78._0_8_ = (double)CONCAT44(uVar24,uVar23) + dVar30;
        local_98._0_8_ = dVar31;
        cff2_path_procs_extents_t::curve
                  ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                   (undefined8 *)local_78);
        local_98 = *(undefined1 (*) [16])(param_2 + 0x22c);
        uVar11 = uVar20 + 4;
        uVar7 = *(uint *)((long)param_2 + 0x14);
        uVar21 = uVar20;
      } while (uVar11 <= uVar7);
    }
    break;
  case 0x1d:
    if (*(int *)((long)param_2 + 0x14) == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
      uVar7 = *(uint *)(param_2 + 0x228);
    }
    else {
      uVar7 = *(int *)((long)param_2 + 0x14) - 1;
      *(uint *)((long)param_2 + 0x14) = uVar7;
      uVar7 = (int)(double)param_2[(ulong)uVar7 + 3] + (int)param_2[0x228];
    }
    if (((-1 < (int)uVar7) && ((uint *)param_2[0x229] != (uint *)0x0)) &&
       (uVar11 = *(uint *)param_2[0x229],
       uVar7 < (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18)
       )) {
      uVar8 = (ulong)*(uint *)((long)param_2 + 0x104c);
      if (uVar8 < 10) {
        lVar9 = *param_2;
        lVar6 = param_2[1];
        param_2[0x204] = lVar9;
        param_2[0x205] = lVar6;
        *(uint *)((long)param_2 + 0x104c) = *(uint *)((long)param_2 + 0x104c) + 1;
        param_2[uVar8 * 3 + 0x20c] = param_2[0x206];
        param_2[uVar8 * 3 + 0x20a] = lVar9;
        (param_2 + uVar8 * 3 + 0x20a)[1] = lVar6;
        pCVar2 = (CFFIndex<OT::IntType<unsigned_int,4u>> *)param_2[0x229];
        if ((pCVar2 == (CFFIndex<OT::IntType<unsigned_int,4u>> *)0x0) ||
           (uVar11 = *(uint *)pCVar2,
           (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) <=
           uVar7)) {
          lVar9 = 0;
          uVar8 = 0;
        }
        else {
          auVar36 = OT::CFFIndex<OT::IntType<unsigned_int,4u>>::operator[](pCVar2,uVar7);
          lVar9 = auVar36._0_8_;
          uVar8 = auVar36._8_8_ & 0xffffffff;
        }
        param_2[0x204] = lVar9;
        param_2[0x205] = uVar8;
        *(undefined4 *)(param_2 + 0x206) = 1;
        goto LAB_0045a2de;
      }
    }
LAB_0045b702:
    *(int *)((long)param_2 + 0xc) = (int)param_2[1] + 1;
    return;
  case 0x1e:
    uVar7 = *(uint *)((long)param_2 + 0x14);
    if ((uVar7 & 4) == 0) {
      if (7 < uVar7) {
        local_38 = (undefined1 (*) [16])(param_2 + 0x22c);
        iVar18 = 0;
        uVar8 = 0;
        do {
          uVar11 = (uint)uVar8;
          auVar36 = *local_38;
          if (uVar11 < uVar7) {
            uVar23 = (undefined4)param_2[uVar8 + 3];
            uVar24 = (undefined4)((ulong)param_2[uVar8 + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          local_98._8_8_ = auVar36._8_8_;
          local_98._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
          local_98._0_8_ = auVar36._0_8_;
          if (uVar11 + 1 < uVar7) {
            pdVar13 = (double *)(param_2 + (ulong)(uVar11 + 1) + 3);
            if (uVar11 + 2 < uVar7) goto LAB_0045a3b8;
LAB_0045a52d:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            pdVar13 = (double *)&_hb_CrapPool;
            if (uVar7 <= uVar11 + 2) goto LAB_0045a52d;
LAB_0045a3b8:
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 2) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 2) + 3] >> 0x20);
          }
          dVar31 = *pdVar13;
          dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
          local_88._8_4_ = SUB84(dVar30,0);
          local_88._0_8_ = dVar31 + (double)local_98._0_8_;
          local_88._12_4_ = (int)((ulong)dVar30 >> 0x20);
          if (uVar11 + 3 < uVar7) {
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 3) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 3) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          local_78._0_8_ = (double)CONCAT44(uVar24,uVar23) + dVar31 + (double)local_98._0_8_;
          local_78._8_8_ = local_88._8_8_;
          cff2_path_procs_extents_t::curve
                    ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                     (undefined8 *)local_78);
          uVar7 = *(uint *)((long)param_2 + 0x14);
          if (uVar11 + 4 < uVar7) {
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 4) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 4) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          local_98._0_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_78._0_8_;
          local_98._8_8_ = local_78._8_8_;
          if (uVar11 + 5 < uVar7) {
            pdVar13 = (double *)(param_2 + (ulong)(uVar11 + 5) + 3);
            if (uVar11 + 6 < uVar7) goto LAB_0045a46f;
LAB_0045a597:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            pdVar13 = (double *)&_hb_CrapPool;
            if (uVar7 <= uVar11 + 6) goto LAB_0045a597;
LAB_0045a46f:
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 6) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 6) + 3] >> 0x20);
          }
          local_78._0_8_ = *pdVar13 + (double)local_98._0_8_;
          local_78._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_78._8_8_;
          local_88._8_4_ = (int)local_78._8_8_;
          local_88._0_8_ = local_78._0_8_;
          local_88._12_4_ = (int)((ulong)local_78._8_8_ >> 0x20);
          if (uVar11 + 7 < uVar7) {
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 7) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 7) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          local_78._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_88._8_8_;
          uVar8 = (ulong)(uVar11 + 8);
          if ((uVar7 + iVar18 < 0x10) && ((uVar7 & 1) != 0)) {
            if (uVar11 + 8 < uVar7) {
              uVar23 = (undefined4)param_2[uVar8 + 3];
              uVar24 = (undefined4)((ulong)param_2[uVar8 + 3] >> 0x20);
            }
            else {
              *(undefined1 *)(param_2 + 2) = 1;
              _hb_CrapPool = 0;
              uVar23 = 0;
              uVar24 = 0;
            }
            local_78._0_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_78._0_8_;
          }
          cff2_path_procs_extents_t::curve
                    ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                     (undefined8 *)local_78);
          uVar7 = *(uint *)((long)param_2 + 0x14);
          iVar18 = iVar18 + -8;
        } while (uVar11 + 0x10 <= uVar7);
      }
      break;
    }
    local_98._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
    local_98._8_8_ = (double)local_98._8_8_ + (double)param_2[3];
    local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
    dVar31 = (double)param_2[5] + (double)local_98._8_8_;
    local_88._8_4_ = SUB84(dVar31,0);
    local_88._0_8_ = (double)param_2[4] + (double)local_98._0_8_;
    local_88._12_4_ = (int)((ulong)dVar31 >> 0x20);
    local_78._8_8_ = local_88._8_8_;
    local_78._0_8_ = (double)param_2[4] + (double)local_98._0_8_ + (double)param_2[6];
    uVar11 = 4;
    if (0xb < uVar7) {
      local_38 = (undefined1 (*) [16])(param_2 + 0x22c);
      uVar21 = 6;
      do {
        uVar11 = uVar21;
        cff2_path_procs_extents_t::curve
                  ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                   (undefined8 *)local_78);
        auVar36 = *local_38;
        uVar7 = *(uint *)((long)param_2 + 0x14);
        if (uVar11 - 2 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar11 - 2) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 - 2) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_98._0_8_ = auVar36._0_8_;
        local_98._0_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_98._0_8_;
        local_98._8_8_ = auVar36._8_8_;
        if (uVar11 - 1 < uVar7) {
          pdVar14 = (double *)(param_2 + (ulong)(uVar11 - 1) + 3);
          if (uVar11 < uVar7) goto LAB_0045af6d;
LAB_0045b0b2:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar14 = (double *)&_hb_CrapPool;
          if (uVar7 <= uVar11) goto LAB_0045b0b2;
LAB_0045af6d:
          uVar23 = (undefined4)param_2[(ulong)uVar11 + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)uVar11 + 3] >> 0x20);
        }
        local_78._0_8_ = *pdVar14 + (double)local_98._0_8_;
        dVar31 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
        local_88._8_4_ = SUB84(dVar31,0);
        local_88._0_8_ = local_78._0_8_;
        local_88._12_4_ = (int)((ulong)dVar31 >> 0x20);
        if (uVar11 + 1 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 1) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 1) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_78._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_88._8_8_;
        cff2_path_procs_extents_t::curve
                  ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                   (undefined8 *)local_78);
        uVar7 = *(uint *)((long)param_2 + 0x14);
        if (uVar11 + 2 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 2) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 2) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_98._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_78._8_8_;
        local_98._0_8_ = local_78._0_8_;
        if (uVar11 + 3 < uVar7) {
          pdVar14 = (double *)(param_2 + (ulong)(uVar11 + 3) + 3);
          if (uVar11 + 4 < uVar7) goto LAB_0045b020;
LAB_0045b11b:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar14 = (double *)&_hb_CrapPool;
          if (uVar7 <= uVar11 + 4) goto LAB_0045b11b;
LAB_0045b020:
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 4) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 4) + 3] >> 0x20);
        }
        dVar31 = *pdVar14;
        dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
        local_88._8_4_ = SUB84(dVar30,0);
        local_88._0_8_ = dVar31 + (double)local_78._0_8_;
        local_88._12_4_ = (int)((ulong)dVar30 >> 0x20);
        if (uVar11 + 5 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 5) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 5) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_78._8_8_ = local_88._8_8_;
        local_78._0_8_ = (double)CONCAT44(uVar24,uVar23) + dVar31 + (double)local_78._0_8_;
        uVar21 = uVar11 + 8;
      } while (uVar11 + 0xe <= uVar7);
      uVar11 = uVar11 + 6;
    }
    if (uVar11 < uVar7) {
      local_78._8_8_ = (double)local_78._8_8_ + (double)param_2[(ulong)uVar11 + 3];
    }
    goto LAB_0045b5cf;
  case 0x1f:
    uVar7 = *(uint *)((long)param_2 + 0x14);
    if ((uVar7 & 4) == 0) {
      if (7 < uVar7) {
        local_38 = (undefined1 (*) [16])(param_2 + 0x22c);
        iVar18 = 0;
        uVar8 = 0;
        do {
          uVar11 = (uint)uVar8;
          auVar36 = *local_38;
          if (uVar11 < uVar7) {
            uVar23 = (undefined4)param_2[uVar8 + 3];
            uVar24 = (undefined4)((ulong)param_2[uVar8 + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          local_98._0_8_ = auVar36._0_8_;
          local_98._0_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_98._0_8_;
          local_98._8_8_ = auVar36._8_8_;
          if (uVar11 + 1 < uVar7) {
            pdVar13 = (double *)(param_2 + (ulong)(uVar11 + 1) + 3);
            if (uVar11 + 2 < uVar7) goto LAB_0045a68b;
LAB_0045a802:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            pdVar13 = (double *)&_hb_CrapPool;
            if (uVar7 <= uVar11 + 2) goto LAB_0045a802;
LAB_0045a68b:
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 2) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 2) + 3] >> 0x20);
          }
          local_78._0_8_ = *pdVar13 + (double)local_98._0_8_;
          dVar31 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
          local_88._8_4_ = SUB84(dVar31,0);
          local_88._0_8_ = local_78._0_8_;
          local_88._12_4_ = (int)((ulong)dVar31 >> 0x20);
          if (uVar11 + 3 < uVar7) {
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 3) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 3) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          local_78._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_88._8_8_;
          cff2_path_procs_extents_t::curve
                    ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                     (undefined8 *)local_78);
          uVar7 = *(uint *)((long)param_2 + 0x14);
          if (uVar11 + 4 < uVar7) {
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 4) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 4) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          local_98._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_78._8_8_;
          local_98._0_8_ = local_78._0_8_;
          if (uVar11 + 5 < uVar7) {
            pdVar13 = (double *)(param_2 + (ulong)(uVar11 + 5) + 3);
            if (uVar11 + 6 < uVar7) goto LAB_0045a744;
LAB_0045a86c:
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            pdVar13 = (double *)&_hb_CrapPool;
            if (uVar7 <= uVar11 + 6) goto LAB_0045a86c;
LAB_0045a744:
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 6) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 6) + 3] >> 0x20);
          }
          dVar31 = *pdVar13;
          dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
          local_88._8_4_ = SUB84(dVar30,0);
          local_88._0_8_ = dVar31 + (double)local_78._0_8_;
          local_88._12_4_ = (int)((ulong)dVar30 >> 0x20);
          if (uVar11 + 7 < uVar7) {
            uVar23 = (undefined4)param_2[(ulong)(uVar11 + 7) + 3];
            uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 7) + 3] >> 0x20);
          }
          else {
            *(undefined1 *)(param_2 + 2) = 1;
            _hb_CrapPool = 0;
            uVar23 = 0;
            uVar24 = 0;
          }
          local_78._0_8_ = (double)CONCAT44(uVar24,uVar23) + dVar31 + (double)local_78._0_8_;
          uVar8 = (ulong)(uVar11 + 8);
          local_78._8_8_ = local_88._8_8_;
          if ((uVar7 + iVar18 < 0x10) && ((uVar7 & 1) != 0)) {
            if (uVar11 + 8 < uVar7) {
              uVar23 = (undefined4)param_2[uVar8 + 3];
              uVar24 = (undefined4)((ulong)param_2[uVar8 + 3] >> 0x20);
            }
            else {
              *(undefined1 *)(param_2 + 2) = 1;
              _hb_CrapPool = 0;
              uVar23 = 0;
              uVar24 = 0;
            }
            local_78._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_88._8_8_;
          }
          cff2_path_procs_extents_t::curve
                    ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                     (undefined8 *)local_78);
          uVar7 = *(uint *)((long)param_2 + 0x14);
          iVar18 = iVar18 + -8;
        } while (uVar11 + 0x10 <= uVar7);
      }
      break;
    }
    local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
    local_98._0_8_ = (double)local_98._0_8_ + (double)param_2[3];
    local_98._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
    local_78._0_8_ = (double)param_2[4] + (double)local_98._0_8_;
    local_88._8_4_ = SUB84((double)param_2[5] + (double)local_98._8_8_,0);
    local_88._0_8_ = local_78._0_8_;
    local_88._12_4_ = (int)((ulong)((double)param_2[5] + (double)local_98._8_8_) >> 0x20);
    local_78._8_8_ = (double)local_88._8_8_ + (double)param_2[6];
    uVar11 = 4;
    if (0xb < uVar7) {
      local_38 = (undefined1 (*) [16])(param_2 + 0x22c);
      uVar21 = 6;
      do {
        uVar11 = uVar21;
        cff2_path_procs_extents_t::curve
                  ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                   (undefined8 *)local_78);
        auVar36 = *local_38;
        uVar7 = *(uint *)((long)param_2 + 0x14);
        if (uVar11 - 2 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar11 - 2) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 - 2) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_98._8_8_ = auVar36._8_8_;
        local_98._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
        local_98._0_8_ = auVar36._0_8_;
        if (uVar11 - 1 < uVar7) {
          pdVar14 = (double *)(param_2 + (ulong)(uVar11 - 1) + 3);
          if (uVar11 < uVar7) goto LAB_0045b23f;
LAB_0045b382:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar14 = (double *)&_hb_CrapPool;
          if (uVar7 <= uVar11) goto LAB_0045b382;
LAB_0045b23f:
          uVar23 = (undefined4)param_2[(ulong)uVar11 + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)uVar11 + 3] >> 0x20);
        }
        dVar31 = *pdVar14;
        dVar30 = (double)CONCAT44(uVar24,uVar23) + (double)local_98._8_8_;
        local_88._8_4_ = SUB84(dVar30,0);
        local_88._0_8_ = dVar31 + (double)local_98._0_8_;
        local_88._12_4_ = (int)((ulong)dVar30 >> 0x20);
        if (uVar11 + 1 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 1) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 1) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_78._0_8_ = (double)CONCAT44(uVar24,uVar23) + dVar31 + (double)local_98._0_8_;
        local_78._8_8_ = local_88._8_8_;
        cff2_path_procs_extents_t::curve
                  ((long)param_2,param_3,(double *)local_98,(double *)local_88,
                   (undefined8 *)local_78);
        uVar7 = *(uint *)((long)param_2 + 0x14);
        if (uVar11 + 2 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 2) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 2) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_98._0_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_78._0_8_;
        local_98._8_8_ = local_78._8_8_;
        if (uVar11 + 3 < uVar7) {
          pdVar14 = (double *)(param_2 + (ulong)(uVar11 + 3) + 3);
          if (uVar11 + 4 < uVar7) goto LAB_0045b2f0;
LAB_0045b3eb:
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          pdVar14 = (double *)&_hb_CrapPool;
          if (uVar7 <= uVar11 + 4) goto LAB_0045b3eb;
LAB_0045b2f0:
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 4) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 4) + 3] >> 0x20);
        }
        local_78._0_8_ = *pdVar14 + (double)local_98._0_8_;
        local_78._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_78._8_8_;
        local_88._8_4_ = (int)local_78._8_8_;
        local_88._0_8_ = local_78._0_8_;
        local_88._12_4_ = (int)((ulong)local_78._8_8_ >> 0x20);
        if (uVar11 + 5 < uVar7) {
          uVar23 = (undefined4)param_2[(ulong)(uVar11 + 5) + 3];
          uVar24 = (undefined4)((ulong)param_2[(ulong)(uVar11 + 5) + 3] >> 0x20);
        }
        else {
          *(undefined1 *)(param_2 + 2) = 1;
          _hb_CrapPool = 0;
          uVar23 = 0;
          uVar24 = 0;
        }
        local_78._8_8_ = (double)CONCAT44(uVar24,uVar23) + (double)local_88._8_8_;
        uVar21 = uVar11 + 8;
      } while (uVar11 + 0xe <= uVar7);
      uVar11 = uVar11 + 6;
    }
    if (uVar11 < uVar7) {
      local_78._0_8_ = (double)local_78._0_8_ + (double)param_2[(ulong)uVar11 + 3];
    }
LAB_0045b5cf:
    pdVar14 = (double *)local_88;
    puVar19 = (undefined8 *)local_78;
LAB_0045b5dc:
    cff2_path_procs_extents_t::curve((long)param_2,param_3,pdVar13,pdVar14,puVar19);
    break;
  default:
    switch(param_1) {
    case 0xff:
      uVar7 = *(uint *)(param_2 + 1);
      uVar11 = *(uint *)((long)param_2 + 0xc);
      if (uVar7 < uVar11 + 4) {
        return;
      }
      if (uVar11 < uVar7) {
        puVar15 = (uint *)(*param_2 + (ulong)uVar11);
      }
      else {
        uVar11 = uVar7 + 1;
        puVar15 = &_hb_NullPool;
      }
      uVar7 = *puVar15;
      uVar21 = *(uint *)((long)param_2 + 0x14);
      if ((ulong)uVar21 < 0x201) {
        *(uint *)((long)param_2 + 0x14) = uVar21 + 1;
        pdVar13 = (double *)(param_2 + (ulong)uVar21 + 3);
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        pdVar13 = (double *)&_hb_CrapPool;
      }
      *pdVar13 = (double)(int)(uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                              uVar7 << 0x18) * DAT_005de740;
      *(uint *)((long)param_2 + 0xc) = uVar11 + 4;
      return;
    default:
      goto switchD_00458daa_caseD_2;
    case 0x122:
      if (*(int *)((long)param_2 + 0x14) != 7) {
LAB_0045b5fd:
        *(int *)((long)param_2 + 0xc) = (int)param_2[1] + 1;
        goto LAB_0045b5e7;
      }
      local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
      local_98._0_8_ = (double)local_98._0_8_ + (double)param_2[3];
      local_98._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
      local_78._0_8_ = (double)param_2[4] + (double)local_98._0_8_;
      local_88._8_4_ = SUB84((double)param_2[5] + (double)local_98._8_8_,0);
      local_88._0_8_ = local_78._0_8_;
      local_88._12_4_ = (int)((ulong)((double)param_2[5] + (double)local_98._8_8_) >> 0x20);
      local_78._0_8_ = (double)local_78._0_8_ + (double)param_2[6];
      local_78._8_8_ = local_88._8_8_;
      local_48._0_8_ = (double)local_78._0_8_ + (double)param_2[7];
      local_48._8_8_ = local_88._8_8_;
      local_58._0_8_ = (double)local_48._0_8_ + (double)param_2[8];
      local_58._8_8_ = local_98._8_8_;
      local_68._8_8_ = local_98._8_8_;
      local_68._0_8_ = (double)local_58._0_8_ + (double)param_2[9];
      break;
    case 0x123:
      if (*(int *)((long)param_2 + 0x14) != 0xd) goto LAB_0045b5fd;
      local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
      local_98._0_8_ = (double)param_2[3] + (double)local_98._0_8_;
      local_98._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
      dVar31 = (double)param_2[4] + (double)local_98._8_8_;
      local_98._8_4_ = SUB84(dVar31,0);
      local_98._12_4_ = (int)((ulong)dVar31 >> 0x20);
      dVar31 = (double)param_2[5] + (double)local_98._0_8_;
      local_88._8_4_ = SUB84((double)param_2[6] + (double)local_98._8_8_,0);
      local_88._0_8_ = dVar31;
      local_88._12_4_ = (int)((ulong)((double)param_2[6] + (double)local_98._8_8_) >> 0x20);
      dVar31 = (double)param_2[7] + dVar31;
      local_78._8_4_ = SUB84((double)param_2[8] + (double)local_88._8_8_,0);
      local_78._0_8_ = dVar31;
      local_78._12_4_ = (int)((ulong)((double)param_2[8] + (double)local_88._8_8_) >> 0x20);
      dVar31 = (double)param_2[9] + dVar31;
      local_48._8_4_ = SUB84((double)param_2[10] + (double)local_78._8_8_,0);
      local_48._0_8_ = dVar31;
      local_48._12_4_ = (int)((ulong)((double)param_2[10] + (double)local_78._8_8_) >> 0x20);
      dVar31 = (double)param_2[0xb] + dVar31;
      local_58._8_4_ = SUB84((double)param_2[0xc] + (double)local_48._8_8_,0);
      local_58._0_8_ = dVar31;
      local_58._12_4_ = (int)((ulong)((double)param_2[0xc] + (double)local_48._8_8_) >> 0x20);
      local_68._8_4_ = SUB84((double)param_2[0xe] + (double)local_58._8_8_,0);
      local_68._0_8_ = (double)param_2[0xd] + dVar31;
      local_68._12_4_ = (int)((ulong)((double)param_2[0xe] + (double)local_58._8_8_) >> 0x20);
      break;
    case 0x124:
      if (*(int *)((long)param_2 + 0x14) != 9) goto LAB_0045b5fd;
      local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
      local_98._0_8_ = (double)param_2[3] + (double)local_98._0_8_;
      local_98._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
      dVar31 = (double)param_2[4] + (double)local_98._8_8_;
      local_98._8_4_ = SUB84(dVar31,0);
      local_98._12_4_ = (int)((ulong)dVar31 >> 0x20);
      local_78._0_8_ = (double)param_2[5] + (double)local_98._0_8_;
      local_88._8_4_ = SUB84((double)param_2[6] + (double)local_98._8_8_,0);
      local_88._0_8_ = local_78._0_8_;
      local_88._12_4_ = (int)((ulong)((double)param_2[6] + (double)local_98._8_8_) >> 0x20);
      local_78._0_8_ = (double)local_78._0_8_ + (double)param_2[7];
      local_78._8_8_ = local_88._8_8_;
      local_48._0_8_ = (double)local_78._0_8_ + (double)param_2[8];
      local_48._8_8_ = local_88._8_8_;
      local_68._0_8_ = (double)param_2[9] + (double)local_48._0_8_;
      local_58._8_4_ = SUB84((double)param_2[10] + (double)local_88._8_8_,0);
      local_58._0_8_ = local_68._0_8_;
      local_58._12_4_ = (int)((ulong)((double)param_2[10] + (double)local_88._8_8_) >> 0x20);
      local_68._0_8_ = (double)local_68._0_8_ + (double)param_2[0xb];
LAB_0045ad09:
      local_68._8_8_ = param_2[0x22d];
      break;
    case 0x125:
      if (*(int *)((long)param_2 + 0x14) != 0xb) goto LAB_0045b5fd;
      local_98._0_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),0);
      local_98._0_8_ = (double)param_2[3] + (double)local_98._0_8_;
      local_98._8_8_ = SUB168(*(undefined1 (*) [16])(param_2 + 0x22c),8);
      dVar31 = (double)param_2[4] + (double)local_98._8_8_;
      local_98._8_4_ = SUB84(dVar31,0);
      local_98._12_4_ = (int)((ulong)dVar31 >> 0x20);
      local_88._0_8_ = (double)param_2[5] + (double)local_98._0_8_;
      local_88._8_8_ = (double)param_2[6] + (double)local_98._8_8_;
      local_78._0_8_ = (double)param_2[7] + (double)local_88._0_8_;
      local_78._8_8_ = (double)param_2[8] + (double)local_88._8_8_;
      local_48._0_8_ = (double)param_2[9] + (double)local_78._0_8_;
      local_48._8_8_ = (double)param_2[10] + (double)local_78._8_8_;
      local_58._0_8_ = (double)param_2[0xb] + (double)local_48._0_8_;
      local_58._8_8_ = (double)param_2[0xc] + (double)local_48._8_8_;
      if ((double)((ulong)((double)param_2[4] + 0.0 + (double)param_2[6] + (double)param_2[8] +
                           (double)param_2[10] + (double)param_2[0xc]) & _UNK_005d91b8) <
          (double)((ulong)((double)param_2[3] + 0.0 + (double)param_2[5] + (double)param_2[7] +
                           (double)param_2[9] + (double)param_2[0xb]) & _DAT_005d91b0)) {
        local_68._0_8_ = (double)local_58._0_8_ + (double)param_2[0xd];
        goto LAB_0045ad09;
      }
      local_68._8_8_ = (double)local_58._8_8_ + (double)param_2[0xd];
      local_68._0_8_ = param_2[0x22c];
    }
    cff2_path_procs_extents_t::curve
              ((long)param_2,param_3,(double *)local_98,(double *)local_88,(undefined8 *)local_78);
    pdVar13 = (double *)local_48;
    pdVar14 = (double *)local_58;
    puVar19 = (undefined8 *)local_68;
    goto LAB_0045b5dc;
  }
LAB_0045b5e7:
  *(undefined4 *)((long)param_2 + 0x14) = 0;
  return;
}


