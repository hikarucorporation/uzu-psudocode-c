// Function : bonk_tick
// Namespace: 
// Entry    : 004dad50
// Prototype: undefined bonk_tick(long param_1)
// Body     : 004dad50 - 004db97a


/* WARNING: Removing unreachable block (ram,0x004db91d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bonk_tick(long param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  double dVar7;
  int iVar8;
  void *pvVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  char *pcVar21;
  ulong uVar22;
  ulong uVar23;
  char *in_R8;
  float *in_R9;
  long lVar24;
  uint uVar25;
  float *pfVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  float *pfVar30;
  long lVar31;
  bool bVar32;
  float fVar33;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar34;
  float extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  float extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar35;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar37;
  double dVar36;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  double in_XMM4_Qa;
  float in_XMM5_Da;
  float in_XMM5_Db;
  ulong in_XMM6_Qa;
  float in_XMM7_Da;
  undefined4 in_XMM7_Db;
  undefined8 uStack_d80;
  float local_d78 [800];
  undefined4 local_f8 [2];
  float local_f0;
  undefined4 local_e8;
  float local_e0;
  undefined4 local_d8;
  float local_d0;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  float local_a8;
  float fStack_a4;
  uint local_8c;
  long local_88;
  ulong local_80;
  long local_78;
  float local_6c;
  ulong local_68;
  float *local_60;
  ulong local_58;
  ulong local_50;
  uint local_48;
  float local_44;
  char *local_40;
  uint local_38;
  int local_34;
  
  local_38 = *(int *)(param_1 + 0x2630);
  local_34 = *(int *)(param_1 + 0x2634);
  uVar28 = *(uint *)(param_1 + 0x50);
  pcVar21 = (char *)(ulong)uVar28;
  local_58 = (ulong)(uVar28 * local_38);
  lVar6 = -((long)(int)(uVar28 * local_38) * 4 + 0xfU & 0xfffffffffffffff0);
  pfVar26 = (float *)((long)local_d78 + lVar6);
  fVar38 = 0.0;
  fVar43 = 0.0;
  uVar10 = local_38 - 1;
  local_78 = param_1;
  local_60 = pfVar26;
  local_48 = uVar10;
  local_40 = pcVar21;
  if (local_38 != 0) {
    fVar38 = 0.0;
    fVar43 = 0.0;
    if (0 < (int)uVar28) {
      pfVar30 = (float *)(*(long *)(param_1 + 0x2628) + 8);
      fVar43 = 0.0;
      fVar38 = 0.0;
      do {
        iVar27 = 0;
        pfVar12 = pfVar30;
        do {
          fVar33 = *pfVar12;
          dVar36 = 0.0;
          if (0.0 < fVar33) {
            local_68 = CONCAT44(local_68._4_4_,fVar38);
            local_50 = CONCAT44(local_50._4_4_,fVar43);
            *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4dae5e;
            qrsqrt(fVar33);
            *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4dae63;
            qrsqrt(extraout_XMM0_Da);
            dVar36 = (double)extraout_XMM0_Da_00 * DAT_005d90a0;
            pcVar21 = local_40;
            fVar38 = (float)local_68;
            fVar43 = (float)local_50;
          }
          in_XMM4_Qa = 0.0;
          fVar33 = (float)dVar36;
          *pfVar26 = fVar33;
          fVar38 = fVar38 + fVar33;
          fVar43 = fVar43 + (float)iVar27 * fVar33;
          pfVar26 = pfVar26 + 1;
          iVar27 = iVar27 + 1;
          pfVar12 = pfVar12 + 0xc;
        } while ((int)pcVar21 != iVar27);
        pfVar30 = pfVar30 + 0x966;
        bVar32 = uVar10 != 0;
        uVar10 = uVar10 - 1;
      } while (bVar32);
    }
  }
  iVar27 = local_34;
  uVar28 = local_38;
  lVar24 = local_78;
  fVar46 = 0.0;
  fVar33 = 0.0;
  local_6c = 0.0;
  if (0.0 < fVar38) {
    local_6c = fVar43 / fVar38;
    fVar43 = local_6c;
  }
  fVar34 = (float)(((double)fVar38 * DAT_005db338) / (double)(int)local_38);
  if (*(int *)(local_78 + 0x2660) == 0) {
    iVar8 = -1;
    goto LAB_004daf02;
  }
  fVar40 = *(float *)(local_78 + 0x80);
  if (fVar34 < fVar40) {
    if (*(int *)(local_78 + 0x2648) == 0) {
      return;
    }
    pcVar21 = "bounce cancelled: vel %f debounce %f";
LAB_004db0fd:
    post((double)fVar34,(double)fVar40,(ulong)(uint)fVar38,(ulong)(uint)fVar43,in_XMM4_Qa,
         CONCAT44(in_XMM5_Db,in_XMM5_Da),in_XMM6_Qa,CONCAT44(in_XMM7_Db,in_XMM7_Da),pcVar21);
    return;
  }
  fVar40 = *(float *)(local_78 + 0x6c);
  uVar37 = 0;
  if (fVar34 < fVar40) {
    if (*(int *)(local_78 + 0x2648) == 0) {
      return;
    }
    pcVar21 = "low velocity cancelled: vel %f, minvel %f";
    goto LAB_004db0fd;
  }
  *(float *)(local_78 + 0x80) = fVar34;
  local_44 = fVar34;
  if (*(int *)(local_78 + 0x264c) == 0) {
    *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4db173;
    clock_getlogicaltime();
    dVar36 = (double)CONCAT44(uVar37,fVar40);
    *(ulong *)(lVar24 + 0x88) = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_04);
    fVar34 = extraout_XMM0_Da_04;
    uVar37 = extraout_XMM0_Db_02;
    if (iVar27 != 0) goto LAB_004db185;
LAB_004db968:
    iVar8 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(local_78 + 0x88);
    *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4db143;
    clock_gettimesince(uVar2);
    iVar27 = local_34;
    if ((local_34 != 0) &&
       ((double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03) < DAT_00651f78 ||
        (double)CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_03) == DAT_00651f78)) {
      return;
    }
    iVar8 = (int)local_58;
    if (iVar8 == 0) {
      fVar34 = 0.0;
    }
    else {
      fVar34 = 0.0;
      if (iVar8 - 1U < 7) {
        pfVar26 = local_60;
      }
      else {
        pcVar21 = (char *)((ulong)(iVar8 - 1U) + 1);
        in_R8 = (char *)((ulong)pcVar21 & 0xfffffffffffffff8);
        uVar23 = ((ulong)(in_R8 + -8) >> 3) + 1;
        if (in_R8 + -8 == (char *)0x0) {
          fVar34 = 0.0;
          fVar40 = 0.0;
          fVar41 = 0.0;
          fVar42 = 0.0;
          lVar14 = 0;
          fVar44 = 0.0;
          fVar45 = 0.0;
          fVar47 = 0.0;
          fVar48 = 0.0;
        }
        else {
          uVar22 = uVar23 & 0xfffffffffffffffe;
          fVar34 = 0.0;
          fVar40 = 0.0;
          fVar41 = 0.0;
          fVar42 = 0.0;
          lVar14 = 0;
          fVar44 = 0.0;
          fVar45 = 0.0;
          fVar47 = 0.0;
          fVar48 = 0.0;
          do {
            pfVar26 = local_60 + lVar14;
            pfVar30 = local_60 + lVar14 + 4;
            pfVar12 = local_60 + lVar14 + 8;
            pfVar19 = local_60 + lVar14 + 0xc;
            fVar34 = *pfVar26 * *pfVar26 + fVar34;
            fVar40 = pfVar26[1] * pfVar26[1] + fVar40;
            in_XMM4_Qa = (double)CONCAT44(fVar40,fVar34);
            in_XMM5_Da = *pfVar30 * *pfVar30 + fVar44;
            in_XMM5_Db = pfVar30[1] * pfVar30[1] + fVar45;
            fVar34 = *pfVar12 * *pfVar12 + fVar34;
            fVar40 = pfVar12[1] * pfVar12[1] + fVar40;
            fVar41 = pfVar12[2] * pfVar12[2] + pfVar26[2] * pfVar26[2] + fVar41;
            fVar42 = pfVar12[3] * pfVar12[3] + pfVar26[3] * pfVar26[3] + fVar42;
            fVar44 = *pfVar19 * *pfVar19 + in_XMM5_Da;
            fVar45 = pfVar19[1] * pfVar19[1] + in_XMM5_Db;
            fVar47 = pfVar19[2] * pfVar19[2] + pfVar30[2] * pfVar30[2] + fVar47;
            fVar48 = pfVar19[3] * pfVar19[3] + pfVar30[3] * pfVar30[3] + fVar48;
            lVar14 = lVar14 + 0x10;
            uVar22 = uVar22 - 2;
            fVar38 = fVar34;
            fVar33 = fVar40;
            fVar43 = fVar44;
            fVar46 = fVar45;
          } while (uVar22 != 0);
        }
        if ((uVar23 & 1) != 0) {
          pfVar26 = local_60 + lVar14;
          pfVar30 = local_60 + lVar14 + 4;
          fVar38 = *pfVar26 * *pfVar26;
          fVar33 = pfVar26[1] * pfVar26[1];
          fVar34 = fVar34 + fVar38;
          fVar40 = fVar40 + fVar33;
          fVar41 = fVar41 + pfVar26[2] * pfVar26[2];
          fVar42 = fVar42 + pfVar26[3] * pfVar26[3];
          fVar43 = *pfVar30 * *pfVar30;
          fVar46 = pfVar30[1] * pfVar30[1];
          fVar44 = fVar44 + fVar43;
          fVar45 = fVar45 + fVar46;
          fVar47 = fVar47 + pfVar30[2] * pfVar30[2];
          fVar48 = fVar48 + pfVar30[3] * pfVar30[3];
        }
        fVar34 = fVar42 + fVar48 + fVar40 + fVar45 + fVar41 + fVar47 + fVar34 + fVar44;
        if (pcVar21 == in_R8) goto LAB_004db425;
        iVar8 = iVar8 - (int)in_R8;
        pfVar26 = local_60 + (long)in_R8;
      }
      lVar14 = 0;
      do {
        fVar34 = fVar34 + pfVar26[lVar14] * pfVar26[lVar14];
        lVar14 = lVar14 + 1;
      } while (iVar8 != (int)lVar14);
    }
LAB_004db425:
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(lVar24 + 0x2650));
    dVar36 = (double)fVar34;
    if (dVar36 < _DAT_00651f80) {
      fVar34 = DAT_00651f3c;
    }
    *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4db44e;
    qrsqrt(fVar34);
    fVar34 = extraout_XMM0_Da_05 * DAT_005d94c4;
    if ((int)local_58 == 0) {
      lVar15 = (long)iVar27;
      local_34 = iVar27 + uVar28;
      *(int *)(lVar24 + 0x2634) = local_34;
      pvVar9 = *(void **)(lVar24 + 0x2620);
      lVar14 = (long)local_34;
      local_a8 = fVar34;
      fStack_a4 = extraout_XMM0_Db_03;
      local_50 = lVar15 * 800;
      *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4db6a8;
      pvVar9 = resizebytes(CONCAT44(extraout_XMM0_Db_03,fVar34),dVar36,CONCAT44(fVar33,fVar38),
                           CONCAT44(fVar46,fVar43),in_XMM4_Qa,CONCAT44(in_XMM5_Db,in_XMM5_Da),
                           in_XMM6_Qa,CONCAT44(in_XMM7_Db,in_XMM7_Da),pvVar9,lVar15 * 800,
                           lVar14 * 800);
      *(void **)(lVar24 + 0x2620) = pvVar9;
      lVar24 = local_78;
      if (uVar28 == 0) goto LAB_004db933;
      uVar10 = (uint)local_40;
      if (uVar10 != 0) {
        uVar18 = uVar10 - 1;
        local_88 = local_50 + (ulong)uVar18 * 4 + 4;
        local_68 = (ulong)uVar18 + 1;
        local_80 = local_68 & 0xfffffffffffffff8;
        local_c0 = local_80 - 8;
        local_b8 = (local_c0 >> 3) + 1;
        local_8c = uVar10 - (int)local_80;
        local_b0 = local_b8 & 0xfffffffffffffffe;
        lVar14 = (long)pvVar9 + local_50 + 0x30;
        lVar31 = 0;
        in_R9 = local_60;
        uVar28 = local_48;
        do {
          lVar17 = lVar15 * 800;
          pfVar26 = (float *)((long)pvVar9 + lVar17);
          if ((uVar18 < 7) ||
             (((float *)(local_50 + lVar31 * 800 + (long)pvVar9) < in_R9 + local_68 &&
              (in_R9 < (float *)(lVar31 * 800 + local_88 + (long)pvVar9))))) {
            uVar20 = uVar10 - 1;
            pcVar21 = local_40;
            uVar29 = uVar10;
            if (((ulong)local_40 & 3) != 0) {
LAB_004db7b2:
              uVar25 = 0;
              do {
                dVar36 = (double)(ulong)(uint)(*in_R9 * local_a8);
                *pfVar26 = *in_R9 * local_a8;
                in_R9 = in_R9 + 1;
                pfVar26 = pfVar26 + 1;
                uVar25 = uVar25 + 1;
              } while ((uVar29 & 3) != uVar25);
              pcVar21 = (char *)(ulong)(uVar29 - uVar25);
            }
LAB_004db7e4:
            if (2 < uVar20) {
              lVar17 = 0;
              do {
                pfVar26[lVar17] = *in_R9 * local_a8;
                pfVar26[lVar17 + 1] = in_R9[1] * local_a8;
                pfVar26[lVar17 + 2] = in_R9[2] * local_a8;
                dVar36 = (double)(ulong)(uint)(in_R9[3] * local_a8);
                pfVar26[lVar17 + 3] = in_R9[3] * local_a8;
                in_R9 = in_R9 + 4;
                lVar17 = lVar17 + 4;
              } while ((int)pcVar21 != (int)lVar17);
            }
          }
          else {
            if (local_c0 == 0) {
              lVar16 = 0;
LAB_004db8c0:
              pfVar26 = in_R9 + lVar16;
              pfVar30 = in_R9 + lVar16 + 4;
              fVar43 = pfVar30[2];
              fVar46 = pfVar30[3];
              fVar38 = *pfVar30 * local_a8;
              fVar33 = pfVar30[1] * local_a8;
              dVar36 = (double)CONCAT44(pfVar26[1] * local_a8,*pfVar26 * local_a8);
              auVar5._8_4_ = pfVar26[2] * local_a8;
              auVar5._0_8_ = dVar36;
              auVar5._12_4_ = pfVar26[3] * local_a8;
              *(undefined1 (*) [16])((long)pvVar9 + lVar16 * 4 + lVar17) = auVar5;
              pfVar26 = (float *)((long)pvVar9 + lVar16 * 4 + lVar17 + 0x10);
              *pfVar26 = fVar38;
              pfVar26[1] = fVar33;
              pfVar26[2] = fVar43 * local_a8;
              pfVar26[3] = fVar46 * local_a8;
            }
            else {
              lVar16 = 0;
              uVar23 = local_b0;
              do {
                pfVar26 = in_R9 + lVar16;
                fVar38 = pfVar26[1];
                fVar43 = pfVar26[2];
                fVar33 = pfVar26[3];
                pfVar30 = in_R9 + lVar16 + 4;
                fVar46 = *pfVar30;
                fVar34 = pfVar30[1];
                fVar40 = pfVar30[2];
                fVar41 = pfVar30[3];
                pfVar30 = (float *)(lVar14 + -0x30 + lVar16 * 4);
                *pfVar30 = *pfVar26 * local_a8;
                pfVar30[1] = fVar38 * local_a8;
                pfVar30[2] = fVar43 * local_a8;
                pfVar30[3] = fVar33 * local_a8;
                pfVar26 = (float *)(lVar14 + -0x20 + lVar16 * 4);
                *pfVar26 = fVar46 * local_a8;
                pfVar26[1] = fVar34 * local_a8;
                pfVar26[2] = fVar40 * local_a8;
                pfVar26[3] = fVar41 * local_a8;
                pfVar26 = in_R9 + lVar16 + 8;
                pfVar30 = in_R9 + lVar16 + 0xc;
                fVar43 = pfVar30[2];
                fVar46 = pfVar30[3];
                fVar38 = *pfVar30 * local_a8;
                fVar33 = pfVar30[1] * local_a8;
                dVar36 = (double)CONCAT44(pfVar26[1] * local_a8,*pfVar26 * local_a8);
                auVar4._8_4_ = pfVar26[2] * local_a8;
                auVar4._0_8_ = dVar36;
                auVar4._12_4_ = pfVar26[3] * local_a8;
                *(undefined1 (*) [16])(lVar14 + -0x10 + lVar16 * 4) = auVar4;
                pfVar26 = (float *)(lVar14 + lVar16 * 4);
                *pfVar26 = fVar38;
                pfVar26[1] = fVar33;
                pfVar26[2] = fVar43 * local_a8;
                pfVar26[3] = fVar46 * local_a8;
                lVar16 = lVar16 + 0x10;
                uVar23 = uVar23 - 2;
              } while (uVar23 != 0);
              if ((local_b8 & 1) != 0) goto LAB_004db8c0;
            }
            in_R9 = in_R9 + local_80;
            if (local_68 != local_80) {
              pfVar26 = (float *)((long)pvVar9 + local_80 * 4 + lVar17);
              pcVar21 = (char *)(ulong)local_8c;
              uVar20 = local_8c - 1;
              uVar29 = local_8c;
              if ((local_8c & 3) != 0) goto LAB_004db7b2;
              goto LAB_004db7e4;
            }
          }
          lVar15 = lVar15 + 1;
          lVar31 = lVar31 + 1;
          lVar14 = lVar14 + 800;
          bVar32 = uVar28 != 0;
          uVar28 = uVar28 - 1;
        } while (bVar32);
        in_R8 = (char *)0xffffffff;
        fVar43 = local_a8;
        fVar46 = fStack_a4;
        uVar28 = local_38;
      }
    }
    else {
      if ((int)(iVar27 - uVar28) < 0) {
        local_a8 = fVar34;
        *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4db47a;
        post(CONCAT44(extraout_XMM0_Db_03,fVar34),dVar36,CONCAT44(fVar33,fVar38),
             CONCAT44(fVar46,fVar43),in_XMM4_Qa,CONCAT44(in_XMM5_Db,in_XMM5_Da),in_XMM6_Qa,
             CONCAT44(in_XMM7_Db,in_XMM7_Da),"bonk_tick bug");
        fVar34 = local_a8;
      }
      if (uVar28 != 0) {
        iVar8 = (int)local_40;
        if (iVar8 != 0) {
          fVar38 = (float)(int)local_58;
          lVar14 = *(long *)(lVar24 + 0x2620);
          lVar31 = (long)(int)(iVar27 - uVar28);
          in_R9 = (float *)(ulong)(iVar8 - 1U);
          uVar23 = (long)in_R9 + 1;
          uVar22 = uVar23 & 0x1fffffffc;
          in_R8 = (char *)(ulong)(uint)(iVar8 - (int)uVar22);
          in_XMM4_Qa = _DAT_005d9000 / ((double)(int)local_58 + _DAT_005d9000);
          lVar15 = lVar31 * 800 + lVar14;
          pfVar26 = local_60;
          uVar28 = local_48;
          do {
            pfVar30 = (float *)(lVar14 + lVar31 * 800);
            if ((iVar8 - 1U < 3) ||
               ((pfVar12 = (float *)(lVar31 * 800 + lVar14), pfVar12 < pfVar26 + uVar23 &&
                (pfVar26 < pfVar12 + uVar23)))) {
              pcVar21 = local_40;
              pfVar19 = pfVar26;
LAB_004db55d:
              iVar11 = (int)pcVar21;
              iVar27 = iVar11;
              pfVar26 = pfVar19;
              if (((ulong)pcVar21 & 1) != 0) {
                fVar43 = *pfVar19 * fVar34 + *pfVar30 * fVar38;
                in_XMM6_Qa = (ulong)(uint)fVar43;
                dVar36 = (double)fVar43 * in_XMM4_Qa;
                in_XMM5_Db = (float)((ulong)dVar36 >> 0x20);
                in_XMM5_Da = (float)dVar36;
                *pfVar30 = in_XMM5_Da;
                pfVar30 = pfVar30 + 1;
                iVar27 = iVar11 + -1;
                pfVar26 = pfVar19 + 1;
              }
              if (iVar11 != 1) {
                lVar17 = 0;
                do {
                  pfVar30[lVar17] =
                       (float)((double)(*pfVar26 * fVar34 + pfVar30[lVar17] * fVar38) * in_XMM4_Qa);
                  fVar43 = pfVar26[1] * fVar34 + pfVar30[lVar17 + 1] * fVar38;
                  in_XMM6_Qa = (ulong)(uint)fVar43;
                  dVar36 = (double)fVar43 * in_XMM4_Qa;
                  in_XMM5_Db = (float)((ulong)dVar36 >> 0x20);
                  in_XMM5_Da = (float)dVar36;
                  pfVar30[lVar17 + 1] = in_XMM5_Da;
                  pfVar26 = pfVar26 + 2;
                  lVar17 = lVar17 + 2;
                } while (iVar27 != (int)lVar17);
              }
            }
            else {
              pfVar19 = pfVar26 + uVar22;
              pfVar30 = pfVar12 + uVar22;
              uVar13 = 0;
              do {
                pfVar12 = (float *)(lVar15 + uVar13 * 4);
                pfVar1 = pfVar26 + uVar13;
                in_XMM5_Da = (float)((double)(*pfVar1 * fVar34 + *pfVar12 * fVar38) * in_XMM4_Qa);
                in_XMM5_Db = (float)((double)(pfVar1[1] * fVar34 + pfVar12[1] * fVar38) * in_XMM4_Qa
                                    );
                fVar43 = (float)((double)(pfVar1[2] * fVar34 + pfVar12[2] * fVar38) * in_XMM4_Qa);
                fVar33 = (float)((double)(pfVar1[3] * fVar34 + pfVar12[3] * fVar38) * in_XMM4_Qa);
                in_XMM6_Qa = CONCAT44(fVar33,fVar43);
                pfVar12 = (float *)(lVar15 + uVar13 * 4);
                *pfVar12 = in_XMM5_Da;
                pfVar12[1] = in_XMM5_Db;
                pfVar12[2] = fVar43;
                pfVar12[3] = fVar33;
                uVar13 = uVar13 + 4;
              } while (uVar22 != uVar13);
              pcVar21 = in_R8;
              pfVar26 = pfVar19;
              if (uVar23 != uVar22) goto LAB_004db55d;
            }
            lVar31 = lVar31 + 1;
            lVar15 = lVar15 + 800;
            bVar32 = uVar28 != 0;
            uVar28 = uVar28 - 1;
          } while (bVar32);
          fVar33 = fVar38;
          fVar43 = fVar34;
          fVar46 = fVar34;
          in_XMM7_Da = fVar38;
          uVar28 = local_38;
          dVar36 = in_XMM4_Qa;
        }
      }
LAB_004db933:
    }
    iVar27 = local_34;
    iVar8 = 0;
    if ((int)local_58 + 1 != *(int *)(lVar24 + 0x264c)) {
      iVar8 = (int)local_58 + 1;
    }
    *(int *)(lVar24 + 0x2650) = iVar8;
    *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4db956;
    clock_getlogicaltime();
    *(ulong *)(lVar24 + 0x88) = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_06);
    fVar34 = extraout_XMM0_Da_06;
    uVar37 = extraout_XMM0_Db_04;
    if (iVar27 == 0) goto LAB_004db968;
LAB_004db185:
    if (iVar27 < 0) {
      iVar8 = -1;
    }
    else {
      if ((int)uVar28 < 1) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      lVar24 = *(long *)(lVar24 + 0x2620);
      iVar8 = -1;
      uVar10 = 0;
      local_58 = local_58 & 0xffffffff00000000;
      pcVar21 = local_40;
      fVar34 = DAT_00651f40;
      local_34 = iVar27;
      do {
        local_88 = CONCAT44(local_88._4_4_,iVar8);
        local_80 = CONCAT44(local_80._4_4_,fVar34);
        if ((int)uVar10 < iVar27) {
          if ((int)pcVar21 == 0) {
            uVar18 = ~uVar10 + iVar27;
            if (local_48 <= ~uVar10 + iVar27) {
              uVar18 = local_48;
            }
            if (local_48 == 0) {
              uVar18 = local_48;
            }
            lVar24 = lVar24 + (ulong)uVar18 * 800 + 800;
            uVar10 = uVar10 + uVar18 + 1;
            goto LAB_004db1ee;
          }
          local_50 = local_50 & 0xffffffff00000000;
          fVar43 = 0.0;
          pfVar26 = local_60;
          do {
            lVar14 = 0;
            lVar15 = 0;
            do {
              fVar38 = *(float *)(lVar24 + lVar15 * 4);
              if (fVar38 < 0.0) {
LAB_004db250:
                local_68 = CONCAT44(local_68._4_4_,fVar43);
                *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4db263;
                post((ulong)(uint)fVar38,dVar36,0,(ulong)(uint)fVar43,in_XMM4_Qa,
                     CONCAT44(in_XMM5_Db,in_XMM5_Da),in_XMM6_Qa,CONCAT44(in_XMM7_Db,in_XMM7_Da),
                     "bonk_tick bug 2");
                fVar38 = *(float *)(lVar24 + lVar15 * 4);
                fVar33 = pfVar26[lVar15];
                pcVar21 = local_40;
                fVar43 = (float)local_68;
              }
              else {
                fVar33 = pfVar26[lVar15];
                dVar36 = (double)(ulong)(uint)fVar33;
                if (fVar33 < 0.0) goto LAB_004db250;
              }
              fVar33 = fVar33 * fVar38;
              dVar36 = (double)(ulong)(uint)fVar33;
              fVar43 = fVar43 + fVar33;
              lVar15 = lVar15 + 1;
              lVar14 = lVar14 + -4;
            } while ((int)pcVar21 != (int)lVar15);
            iVar8 = (int)(float)local_50 + 1;
            lVar24 = lVar24 + 800;
            uVar10 = uVar10 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar8);
            uVar28 = local_38;
            iVar27 = local_34;
            if ((int)local_38 <= iVar8) {
              dVar7 = (double)(ulong)(uint)fVar33;
              break;
            }
            pfVar26 = (float *)((long)pfVar26 - lVar14);
            dVar7 = (double)(ulong)(uint)fVar33;
          } while ((int)uVar10 < local_34);
        }
        else {
LAB_004db1ee:
          fVar43 = 0.0;
          dVar7 = dVar36;
        }
        dVar36 = dVar7;
        fVar46 = 0.0;
        fVar33 = 0.0;
        fVar38 = 0.0;
        iVar8 = (int)local_88;
        if ((float)local_80 < fVar43) {
          iVar8 = (int)local_58;
        }
        fVar34 = (float)local_80;
        if ((float)local_80 <= fVar43) {
          fVar34 = fVar43;
        }
        local_58 = CONCAT44(local_58._4_4_,(int)local_58 + 1);
      } while ((int)uVar10 < iVar27);
      uVar37 = 0;
      lVar24 = local_78;
      fVar34 = local_44;
      if (-1 < iVar8) goto LAB_004daf02;
    }
    *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4db32e;
    post(CONCAT44(uVar37,fVar34),dVar36,CONCAT44(fVar33,fVar38),CONCAT44(fVar46,fVar43),in_XMM4_Qa,
         CONCAT44(in_XMM5_Db,in_XMM5_Da),in_XMM6_Qa,CONCAT44(in_XMM7_Db,in_XMM7_Da),"bonk_tick bug")
    ;
  }
  fVar34 = local_44;
LAB_004daf02:
  *(undefined4 *)(lVar24 + 0x2644) = 1;
  if (*(int *)(lVar24 + 0x2648) != 0) {
    dVar36 = (double)local_6c;
    local_44 = fVar34;
    *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4daf47;
    post((double)fVar34,dVar36,(ulong)(uint)fVar34,CONCAT44(fVar46,fVar43),in_XMM4_Qa,
         CONCAT44(in_XMM5_Db,in_XMM5_Da),in_XMM6_Qa,CONCAT44(in_XMM7_Db,in_XMM7_Da),
         "bonk out: number %d, vel %f, temperature %f");
    fVar34 = local_44;
  }
  fVar38 = local_6c;
  uVar39 = 0;
  uVar37 = 0;
  local_f8[0] = 1;
  local_e8 = 1;
  local_d8 = 1;
  plVar3 = *(long **)(lVar24 + 0x30);
  iVar27 = 0;
  local_f0 = (float)iVar8;
  local_e0 = fVar34;
  local_d0 = local_6c;
  *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4dafaa;
  outlet_list((ulong)(uint)(float)iVar8,(ulong)(uint)fVar38,(ulong)(uint)fVar34,
              CONCAT44(fVar46,fVar43),in_XMM4_Qa,CONCAT44(in_XMM5_Db,in_XMM5_Da),in_XMM6_Qa,
              CONCAT44(in_XMM7_Db,in_XMM7_Da),plVar3,0,3,local_f8,in_R8,in_R9);
  if (0 < (int)uVar28) {
    uVar10 = (uint)local_40;
    pfVar26 = local_60 + (int)(uVar10 * local_48);
    lVar24 = (ulong)local_48 * 0x2598 + *(long *)(lVar24 + 0x2628);
    local_68 = -(long)(int)uVar10;
    local_50 = CONCAT44(local_50._4_4_,uVar10 - 1);
    local_38 = uVar10 & 0xfffffffc;
    fVar33 = extraout_XMM0_Da_01;
    uVar35 = extraout_XMM0_Db;
    do {
      pcVar21 = local_40;
      iVar8 = (int)local_40;
      if (0 < iVar8) {
        pfVar30 = local_d78;
        pfVar12 = pfVar26;
        if (2 < (uint)(float)local_50) {
          pfVar30 = local_d78;
          uVar18 = local_38;
          do {
            *pfVar30 = 1.4013e-45;
            pfVar30[2] = *pfVar12;
            pfVar30[4] = 1.4013e-45;
            pfVar30[6] = pfVar12[1];
            pfVar30[8] = 1.4013e-45;
            pfVar30[10] = pfVar12[2];
            pfVar30[0xc] = 1.4013e-45;
            fVar33 = pfVar12[3];
            uVar35 = 0;
            pfVar30[0xe] = fVar33;
            pfVar30 = pfVar30 + 0x10;
            pfVar12 = pfVar12 + 4;
            uVar18 = uVar18 - 4;
          } while (uVar18 != 0);
        }
        if (((ulong)pcVar21 & 3) != 0) {
          lVar14 = 0;
          do {
            pfVar30[lVar14] = 1.4013e-45;
            fVar33 = *(float *)((long)pfVar12 + lVar14);
            uVar35 = 0;
            pfVar30[lVar14 + 2] = fVar33;
            lVar14 = lVar14 + 4;
          } while ((uVar10 & 3) * 4 != (int)lVar14);
        }
      }
      plVar3 = *(long **)(lVar24 + 0x2580);
      *(undefined8 *)((long)local_d78 + lVar6 + -8) = 0x4db016;
      outlet_list(CONCAT44(uVar35,fVar33),CONCAT44(uVar37,fVar38),CONCAT44(uVar39,fVar34),
                  CONCAT44(fVar46,fVar43),in_XMM4_Qa,CONCAT44(in_XMM5_Db,in_XMM5_Da),in_XMM6_Qa,
                  CONCAT44(in_XMM7_Db,in_XMM7_Da),plVar3,0,iVar8,local_d78,in_R8,in_R9);
      iVar27 = iVar27 + 1;
      lVar24 = lVar24 + -0x2598;
      pfVar26 = pfVar26 + local_68;
      fVar33 = extraout_XMM0_Da_02;
      uVar35 = extraout_XMM0_Db_00;
    } while (iVar27 != uVar28);
  }
  return;
}


