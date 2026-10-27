// Function : canvas_doconnect
// Namespace: 
// Entry    : 0050ce70
// Prototype: undefined canvas_doconnect(undefined8 param_1, double param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, int param_10, int param_11, uint param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0050ce70 - 0050d6eb


void canvas_doconnect(undefined8 param_1,double param_2,ulong param_3,ulong param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,int param_10,int param_11,uint param_12,undefined8 param_13,
                     undefined8 param_14)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long *plVar9;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  int iVar15;
  ulong uVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  uint *puVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  double dVar24;
  undefined8 uVar25;
  double extraout_XMM0_Qa_04;
  double extraout_XMM0_Qa_05;
  double extraout_XMM0_Qa_06;
  ulong extraout_XMM0_Qa_07;
  double extraout_XMM0_Qa_08;
  double extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  double extraout_XMM0_Qa_11;
  double extraout_XMM0_Qa_12;
  double extraout_XMM0_Qa_13;
  double extraout_XMM0_Qa_14;
  double extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  double extraout_XMM0_Qa_17;
  float fVar26;
  float fVar27;
  undefined1 in_stack_fffffffffffffeb8;
  undefined1 uVar28;
  int *piVar29;
  undefined8 *local_120;
  float local_118;
  float local_114;
  uint local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 *local_b0;
  long local_a8;
  long *local_a0;
  int local_94;
  long *local_90;
  uint local_74;
  
  iVar15 = (int)param_13;
  local_e4 = 0;
  local_b4 = 0;
  local_e8 = 0;
  local_b8 = 0;
  local_ec = 0;
  local_bc = 0;
  local_f0 = 0;
  local_c0 = 0;
  uVar18 = *(uint *)(param_9[0x18] + 0x68);
  iVar3 = *(int *)(param_9[0x18] + 0x6c);
  if (iVar15 == 0) {
    pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs iiii",param_9
                ,"coords",&DAT_005db3a7,(ulong)uVar18,(char)iVar3);
  }
  else {
    uVar23 = pdgui_vmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x654b3f,
                         "ci",param_9,1,param_13,param_14,in_stack_fffffffffffffeb8);
    pdgui_vmess(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",param_9,
                "delete",&DAT_005db3a7,param_14,in_stack_fffffffffffffeb8);
  }
  piVar29 = &local_b8;
  plVar6 = canvas_findhitbox(param_9,uVar18,iVar3,&local_e4,&local_b4,&local_e8,piVar29);
  uVar28 = SUB81(piVar29,0);
  if (plVar6 != (long *)0x0) {
    piVar29 = &local_c0;
    puVar20 = &local_f0;
    plVar7 = canvas_findhitbox(param_9,param_10,param_11,&local_ec,&local_bc,(int *)puVar20,piVar29)
    ;
    uVar28 = SUB81(piVar29,0);
    if (plVar7 != (long *)0x0) {
      plVar6 = pd_checkobject(plVar6);
      plVar7 = pd_checkobject(plVar7);
      uVar28 = SUB81(piVar29,0);
      if (((plVar6 != (long *)0x0) && (plVar7 != (long *)0x0)) && (plVar6 != plVar7)) {
        iVar3 = obj_noutlets((long)plVar6);
        uVar28 = SUB81(piVar29,0);
        if (iVar3 != 0) {
          uVar4 = obj_ninlets(plVar7);
          uVar28 = SUB81(piVar29,0);
          if (uVar4 != 0) {
            local_d0 = (ulong)uVar4;
            uVar13 = 0;
            if (1 < iVar3) {
              uVar13 = (long)(int)((local_e8 - local_e4) / 2 + (iVar3 + -1) * (uVar18 - local_e4)) /
                       (long)(local_e8 - local_e4) & 0xffffffff;
            }
            if ((int)uVar4 < 2) {
              uVar5 = 0;
              uVar18 = local_f0;
            }
            else {
              uVar18 = local_f0 - local_ec;
              uVar5 = (int)((int)uVar18 / 2 + (param_10 - local_ec) * (uVar4 - 1)) / (int)uVar18;
            }
            pcVar19 = (char *)(ulong)uVar18;
            iVar22 = iVar3 + -1;
            if ((int)uVar13 < iVar3) {
              iVar22 = (int)uVar13;
            }
            uVar18 = uVar4 - 1;
            if ((int)uVar5 < (int)uVar4) {
              uVar18 = uVar5;
            }
            pcVar17 = (char *)(ulong)uVar18;
            uVar23 = linetraverser_start(&local_a8,param_9);
            do {
              puVar8 = linetraverser_next(uVar23,param_2,param_3,param_4,param_5,param_6,param_7,
                                          param_8,&local_a8);
              uVar28 = SUB81(piVar29,0);
              if (puVar8 == (undefined8 *)0x0) {
                bVar2 = obj_issignaloutlet((long)plVar6,iVar22);
                uVar23 = extraout_RDX;
                uVar25 = extraout_XMM0_Qa_01;
                if (((int)CONCAT71(extraout_var,bVar2) == 0) ||
                   (bVar2 = obj_issignalinlet(plVar7,uVar18), uVar23 = extraout_RDX_00,
                   uVar25 = extraout_XMM0_Qa_02, (int)CONCAT71(extraout_var_00,bVar2) != 0)) {
                  if (iVar15 != 0) {
                    iVar15 = 0;
                    canvas_undo_add(uVar25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    (long)param_9,0xc,"connect",0,pcVar19,puVar20);
                    plVar9 = plVar7;
                    plVar11 = plVar6;
                    pcVar19 = pcVar17;
                    tryconnect(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,(long)param_9,plVar6,iVar22,plVar7,uVar18);
                    dVar24 = (double)canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,
                                                  param_6,param_7,param_8,(long)param_9,
                                                  (char *)plVar11,extraout_RDX_01,plVar9,pcVar19,
                                                  puVar20);
                    if ((param_12 & 1) == 0) goto LAB_0050d1ff;
                    lVar1 = param_9[0x18];
                    if ((lVar1 != 0) && (plVar9 = *(long **)(lVar1 + 0x20), plVar9 != (long *)0x0))
                    {
                      plVar11 = plVar9;
                      goto LAB_0050d23c;
                    }
                    iVar12 = 0;
                    goto LAB_0050d295;
                  }
                  uVar16 = 5;
                }
                else {
                  if (iVar15 != 0) {
                    uVar25 = pd_error(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,
                                      param_7,param_8,0,
                                      "can\'t connect audio signal outlet to nonsignal inlet",
                                      extraout_RDX_00,uVar13,pcVar19,puVar20);
                    uVar23 = extraout_RDX_02;
                  }
                  uVar16 = 4;
                }
                canvas_setcursor(uVar25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 (long)param_9,uVar16,uVar23,uVar13,pcVar19,puVar20,uVar28);
                return;
              }
              uVar23 = extraout_XMM0_Qa;
            } while ((((local_a0 != plVar6) || (local_94 != iVar22)) || (local_90 != plVar7)) ||
                    (local_74 != uVar18));
          }
        }
      }
    }
  }
  plVar6 = (long *)__tls_get_addr();
  if ((*(long **)(**(long **)(*plVar6 + 0x48) + 0x88) == param_9) &&
     (*(int *)(**(long **)(*plVar6 + 0x48) + 0x90) == 4)) {
    return;
  }
  pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"^r rr",
              param_9,"configure","-cursor","$cursor_editmode_nothing",uVar28);
  plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = **(long **)(*plVar6 + 0x48);
  *(long **)(lVar1 + 0x88) = param_9;
  *(undefined4 *)(lVar1 + 0x90) = 4;
  return;
  while (plVar11 = (long *)plVar11[1], plVar11 != (long *)0x0) {
LAB_0050d23c:
    if ((long *)*plVar11 == plVar6) {
      iVar12 = 1;
      goto LAB_0050d289;
    }
  }
  iVar12 = 0;
LAB_0050d289:
  do {
    if (plVar9 == (long *)0x0) break;
    if ((long *)*plVar9 == plVar7) {
      iVar15 = 2;
      break;
    }
    plVar9 = (long *)plVar9[1];
  } while( true );
LAB_0050d295:
  iVar12 = iVar12 + iVar15;
  if (iVar12 == 1) {
    for (puVar8 = *(undefined8 **)(lVar1 + 0x20); puVar8 != (undefined8 *)0x0;
        puVar8 = (undefined8 *)puVar8[1]) {
      plVar9 = pd_checkobject((long *)*puVar8);
      dVar24 = extraout_XMM0_Qa_12;
      if ((plVar9 != (long *)0x0) && (plVar9 != plVar6)) {
        pcVar19 = pcVar17;
        tryconnect(extraout_XMM0_Qa_12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)param_9,plVar9,iVar22,plVar7,uVar18);
        dVar24 = extraout_XMM0_Qa_13;
      }
    }
    goto LAB_0050d1ff;
  }
  if (iVar12 == 2) {
    for (puVar8 = *(undefined8 **)(lVar1 + 0x20); puVar8 != (undefined8 *)0x0;
        puVar8 = (undefined8 *)puVar8[1]) {
      plVar9 = pd_checkobject((long *)*puVar8);
      dVar24 = extraout_XMM0_Qa_14;
      if ((plVar9 != (long *)0x0) && (plVar9 != plVar7)) {
        pcVar19 = pcVar17;
        tryconnect(extraout_XMM0_Qa_14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   (long)param_9,plVar6,iVar22,plVar9,uVar18);
        dVar24 = extraout_XMM0_Qa_15;
      }
    }
    goto LAB_0050d1ff;
  }
  if (iVar12 != 3) goto LAB_0050d1ff;
  if (*(long *)(*(long *)(*(long *)(lVar1 + 0x20) + 8) + 8) == 0) {
    do {
      pcVar19 = pcVar17;
      iVar15 = (int)pcVar19;
      tryconnect(dVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,plVar6
                 ,iVar22,plVar7,iVar15);
      iVar22 = iVar22 + 1;
      dVar24 = extraout_XMM0_Qa_05;
      if (iVar3 <= iVar22) break;
      uVar18 = iVar15 + 1;
      pcVar17 = (char *)(ulong)uVar18;
    } while ((int)uVar18 < (int)local_d0);
    goto LAB_0050d1ff;
  }
  obj_issignaloutlet((long)plVar6,iVar22);
  obj_issignalinlet(plVar7,uVar18);
  puVar8 = *(undefined8 **)(param_9[0x18] + 0x20);
  dVar24 = extraout_XMM0_Qa_04;
  if (puVar8 == (undefined8 *)0x0) goto LAB_0050d1ff;
  local_d8 = (ulong)(iVar22 + 1);
  local_e0 = (ulong)(uVar18 + 1);
  local_120 = (undefined8 *)0x0;
  local_114 = 0.0;
  local_118 = 0.0;
  iVar15 = 0;
  local_c8 = 0;
LAB_0050d375:
  do {
    plVar9 = pd_checkobject((long *)*puVar8);
    dVar24 = extraout_XMM0_Qa_06;
    if (((plVar9 != (long *)0x0) && (plVar6 != plVar9)) && (plVar7 != plVar9)) {
      iVar12 = (int)local_c8;
      bVar2 = canconnect(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,param_9,plVar6,(int)local_d8 + iVar12,plVar9,uVar18);
      uVar13 = extraout_XMM0_Qa_07;
      if ((int)CONCAT71(extraout_var_01,bVar2) != 0) {
        local_c8 = (ulong)(iVar12 + 1);
        uVar13 = (ulong)(uint)(float)(int)*(short *)((long)plVar9 + 0x2a);
        local_118 = local_118 + (float)(int)*(short *)((long)plVar9 + 0x2a);
        param_2 = (double)(ulong)(uint)local_118;
      }
      uVar4 = (int)local_e0 + iVar15;
      pcVar19 = (char *)(ulong)uVar4;
      bVar2 = canconnect(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         plVar9,iVar22,plVar7,uVar4);
      if ((int)CONCAT71(extraout_var_02,bVar2) != 0) {
        iVar15 = iVar15 + 1;
        local_114 = local_114 + (float)(int)*(short *)((long)plVar9 + 0x2a);
        param_2 = (double)(ulong)(uint)local_114;
      }
      puVar10 = getbytes(0x10);
      dVar24 = extraout_XMM0_Qa_08;
      if (puVar10 != (undefined8 *)0x0) {
        *puVar10 = plVar9;
        if (local_120 != (undefined8 *)0x0) {
          puVar14 = (undefined8 *)0x0;
          puVar21 = local_120;
          local_b0 = puVar10;
          do {
            plVar11 = pd_checkobject((long *)*puVar21);
            if (plVar11 == (long *)0x0) {
              puVar10 = puVar14;
            }
            else if (((short)plVar9[5] < (short)plVar11[5]) ||
                    ((puVar10 = puVar21, (short)plVar9[5] == (short)plVar11[5] &&
                     (*(short *)((long)plVar9 + 0x2a) < *(short *)((long)plVar11 + 0x2a))))) {
              local_b0[1] = puVar21;
              if (puVar14 != (undefined8 *)0x0) {
                puVar14[1] = local_b0;
                goto LAB_0050d4d4;
              }
              local_120 = local_b0;
              goto LAB_0050d4eb;
            }
            puVar14 = puVar10;
            puVar21 = (undefined8 *)puVar21[1];
          } while (puVar21 != (undefined8 *)0x0);
          if (puVar14 == (undefined8 *)0x0) {
            local_120 = local_b0;
          }
          else {
LAB_0050d4d4:
            puVar14[1] = local_b0;
          }
LAB_0050d4eb:
          puVar8 = (undefined8 *)puVar8[1];
          dVar24 = extraout_XMM0_Qa_09;
          if (puVar8 == (undefined8 *)0x0) break;
          goto LAB_0050d375;
        }
        local_120 = puVar10;
      }
    }
    puVar8 = (undefined8 *)puVar8[1];
  } while (puVar8 != (undefined8 *)0x0);
  iVar12 = (int)local_c8;
  if ((iVar12 == 0) || (iVar12 != iVar15)) {
    uVar13 = param_3;
    uVar16 = param_4;
    if (iVar15 < iVar12) goto LAB_0050d669;
LAB_0050d57b:
    param_3 = uVar13;
    param_4 = uVar16;
    if (((int)local_e0 < (int)local_d0) && (local_120 != (undefined8 *)0x0)) {
      iVar3 = 0;
      pcVar17 = (char *)(local_e0 & 0xffffffff);
      puVar8 = local_120;
      do {
        plVar6 = pd_checkobject((long *)*puVar8);
        pcVar19 = pcVar17;
        uVar23 = tryconnect(extraout_XMM0_Qa_10,param_2,uVar13,uVar16,param_5,param_6,param_7,
                            param_8,(long)param_9,plVar6,iVar22,plVar7,(int)pcVar17);
        iVar3 = (int)uVar23 + iVar3;
        uVar18 = (int)local_e0 + iVar3;
        pcVar17 = (char *)(ulong)uVar18;
        dVar24 = extraout_XMM0_Qa_11;
        param_3 = uVar13;
        param_4 = uVar16;
        if ((int)local_d0 <= (int)uVar18) break;
        puVar8 = (undefined8 *)puVar8[1];
      } while (puVar8 != (undefined8 *)0x0);
    }
  }
  else {
    fVar26 = DAT_005d9038 / (float)iVar12;
    param_3 = (ulong)(uint)fVar26;
    fVar27 = (local_118 - (float)(int)*(short *)((long)plVar6 + 0x2a)) * fVar26;
    param_4 = (ulong)(uint)fVar27;
    dVar24 = (double)fVar27;
    param_2 = (double)(((float)(int)*(short *)((long)plVar7 + 0x2a) - local_114) * fVar26);
    uVar13 = (ulong)(uint)fVar26;
    uVar16 = (ulong)(uint)fVar27;
    if (dVar24 <= param_2) goto LAB_0050d57b;
LAB_0050d669:
    if (((int)local_d8 < iVar3) && (local_120 != (undefined8 *)0x0)) {
      iVar15 = 0;
      uVar13 = local_d8 & 0xffffffff;
      puVar8 = local_120;
      do {
        plVar7 = pd_checkobject((long *)*puVar8);
        pcVar19 = pcVar17;
        uVar23 = tryconnect(extraout_XMM0_Qa_16,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,(long)param_9,plVar6,(int)uVar13,plVar7,uVar18);
        iVar15 = (int)uVar23 + iVar15;
        uVar4 = (int)local_d8 + iVar15;
        uVar13 = (ulong)uVar4;
        dVar24 = extraout_XMM0_Qa_17;
        if (iVar3 <= (int)uVar4) break;
        puVar8 = (undefined8 *)puVar8[1];
      } while (puVar8 != (undefined8 *)0x0);
    }
  }
  while (local_120 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)local_120[1];
    dVar24 = (double)freebytes(local_120);
    local_120 = puVar8;
  }
LAB_0050d1ff:
  canvas_undo_add(dVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,0xd,
                  "connect",0,pcVar19,puVar20);
  return;
}


