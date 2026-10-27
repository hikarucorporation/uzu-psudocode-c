// Function : canvas_connect_selection
// Namespace: 
// Entry    : 005112e0
// Prototype: undefined canvas_connect_selection(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005112e0 - 0051200c


void canvas_connect_selection
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  undefined1 auVar1 [12];
  bool bVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined4 extraout_var_02;
  undefined8 *puVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  long *plVar8;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined8 uVar9;
  long *plVar10;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  char *pcVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long *in_R8;
  ulong in_R9;
  uint *unaff_R12;
  uint uVar18;
  ulong uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_23;
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  float fVar20;
  undefined8 extraout_XMM1_Qa;
  float fVar21;
  undefined1 auVar22 [16];
  uint local_144;
  ulong local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  long *local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  long *local_f0;
  undefined8 local_e8;
  float fStack_e0;
  float fStack_dc;
  ulong local_d0;
  long *local_c8;
  long local_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  long *local_a0;
  int local_94;
  long *local_90;
  int local_74;
  
  if (*(long *)(param_9 + 0xc0) == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(*(long *)(param_9 + 0xc0) + 0x20);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  plVar5 = (long *)0x0;
  plVar10 = (long *)0x0;
  plVar8 = (long *)0x0;
  do {
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)*puVar6;
    }
    else if (plVar10 == (long *)0x0) {
      plVar10 = (long *)*puVar6;
    }
    else {
      if (plVar8 != (long *)0x0) {
        return;
      }
      plVar8 = (long *)*puVar6;
    }
    puVar6 = (undefined8 *)puVar6[1];
  } while (puVar6 != (undefined8 *)0x0);
  if (plVar5 == (long *)0x0) {
    return;
  }
  local_c0 = param_9;
  if (plVar10 == (long *)0x0) {
    plVar5 = pd_checkobject(plVar5);
    lVar14 = local_c0;
    if (plVar5 == (long *)0x0) {
      return;
    }
    lVar17 = *(long *)(local_c0 + 0xc0);
    if ((*(byte *)(lVar17 + 0x88) & 0x20) != 0) {
      iVar3 = *(int *)(lVar17 + 0x70);
      plVar10 = *(long **)(local_c0 + 0x30);
      plVar8 = plVar10;
      if ((iVar3 != 0) && (plVar10 != (long *)0x0)) {
        do {
          iVar3 = iVar3 + -1;
          plVar8 = (long *)plVar8[1];
          if (plVar8 == (long *)0x0) break;
        } while (iVar3 != 0);
      }
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        uVar7 = extraout_XMM0_Qa;
      }
      else {
        plVar8 = pd_checkobject(plVar8);
        plVar10 = *(long **)(lVar14 + 0x30);
        lVar17 = *(long *)(lVar14 + 0xc0);
        uVar7 = extraout_XMM0_Qa_07;
      }
      iVar3 = *(int *)(lVar17 + 0x78);
      if ((iVar3 != 0) && (plVar10 != (long *)0x0)) {
        do {
          iVar3 = iVar3 + -1;
          plVar10 = (long *)plVar10[1];
          if (plVar10 == (long *)0x0) break;
        } while (iVar3 != 0);
      }
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = pd_checkobject(plVar10);
        lVar17 = *(long *)(lVar14 + 0xc0);
        uVar7 = extraout_XMM0_Qa_22;
      }
      bVar2 = canconnect(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar14,plVar8
                         ,*(int *)(lVar17 + 0x74),plVar5,0);
      if ((int)CONCAT71(extraout_var_00,bVar2) == 0) {
        return;
      }
      uVar18 = *(uint *)(*(long *)(local_c0 + 0xc0) + 0x7c);
      uVar13 = (ulong)uVar18;
      bVar2 = canconnect(extraout_XMM0_Qa_23,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                         ,local_c0,plVar5,0,plVar10,uVar18);
      lVar14 = local_c0;
      if ((int)CONCAT71(extraout_var_01,bVar2) == 0) {
        return;
      }
      canvas_undo_add(extraout_XMM0_Qa_24,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      local_c0,0xc,"reconnect",0,uVar13,in_R9);
      tryconnect(extraout_XMM0_Qa_25,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar14,
                 plVar8,*(int *)(*(long *)(lVar14 + 0xc0) + 0x74),plVar5,0);
      uVar18 = *(uint *)(*(long *)(lVar14 + 0xc0) + 0x7c);
      uVar13 = (ulong)uVar18;
      tryconnect(extraout_XMM0_Qa_26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar14,
                 plVar5,0,plVar10,uVar18);
      auVar22 = canvas_clearline(lVar14);
      canvas_undo_add(auVar22._0_8_,auVar22._8_8_,param_3,param_4,param_5,param_6,param_7,param_8,
                      lVar14,0xd,"reconnect",0,uVar13,in_R9);
      return;
    }
    canvas_undo_add(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    local_c0,0xc,"disconnect",0,in_R8,in_R9);
    auVar22 = linetraverser_start(&local_a8,lVar14);
    param_2 = auVar22._8_8_;
    puVar6 = linetraverser_next(auVar22._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,&local_a8);
    uVar7 = extraout_XMM0_Qa_00;
    if (puVar6 != (undefined8 *)0x0) {
      do {
        if ((plVar5 == local_a0) || (plVar5 == local_90)) {
          plVar8 = *(long **)(lVar14 + 0x30);
          iVar3 = 0;
          iVar4 = 0;
          if ((plVar8 != (long *)0x0) && (iVar4 = 0, plVar8 != local_a0)) {
            iVar4 = 0;
            plVar10 = plVar8;
            do {
              iVar4 = iVar4 + 1;
              plVar10 = (long *)plVar10[1];
              if (plVar10 == (long *)0x0) break;
            } while (plVar10 != local_a0);
          }
          if ((plVar8 != (long *)0x0) && (plVar8 != local_90)) {
            iVar3 = 0;
            do {
              iVar3 = iVar3 + 1;
              plVar8 = (long *)plVar8[1];
              if (plVar8 == (long *)0x0) break;
            } while (plVar8 != local_90);
          }
          local_e8._0_4_ = (float)iVar4;
          local_e8._4_4_ = (float)local_94;
          fStack_e0 = (float)iVar3;
          fVar20 = (float)local_74;
          auVar1._4_4_ = fStack_e0;
          auVar1._0_4_ = local_e8._4_4_;
          auVar1._8_4_ = fVar20;
          param_3 = auVar1._4_8_;
          fVar21 = fVar20;
          fStack_dc = fVar20;
          canvas_disconnect((float)local_e8,CONCAT44(local_e8._4_4_,local_e8._4_4_),param_3,
                            CONCAT44(fVar20,fVar20),param_5,param_6,param_7,param_8,lVar14);
          fStack_e0 = (float)(int)fStack_e0;
          fStack_dc = (float)(int)fStack_dc;
          local_e8 = (long *)CONCAT44((int)local_e8._4_4_,(int)(float)local_e8);
          param_2 = extraout_XMM1_Qa;
          puVar6 = getbytes(0x10);
          *puVar6 = local_e8;
          puVar6[1] = CONCAT44(fStack_dc,fStack_e0);
          canvas_undo_add(local_e8,param_2,param_3,CONCAT44(fVar21,fVar20),param_5,param_6,param_7,
                          param_8,lVar14,2,"disconnect",puVar6,in_R8,in_R9);
          param_4 = CONCAT44(fVar21,fVar20);
          uVar7 = extraout_XMM0_Qa_01;
        }
        puVar6 = linetraverser_next(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    &local_a8);
        uVar7 = extraout_XMM0_Qa_02;
      } while (puVar6 != (undefined8 *)0x0);
    }
    pcVar11 = "disconnect";
    goto LAB_00511ee3;
  }
  local_e8 = pd_checkobject(plVar5);
  if (plVar8 == (long *)0x0) {
    if (local_e8 == (long *)0x0) {
      return;
    }
    plVar5 = pd_checkobject(plVar10);
    if (plVar5 == (long *)0x0) {
      return;
    }
    plVar8 = local_e8;
    if (*(short *)((long)plVar5 + 0x2a) < *(short *)((long)local_e8 + 0x2a)) {
      plVar8 = plVar5;
      plVar5 = local_e8;
    }
    local_e8 = plVar8;
    iVar3 = obj_noutlets((long)plVar8);
    plVar8 = local_e8;
    if (iVar3 == 0) {
      return;
    }
    iVar3 = obj_noutlets((long)local_e8);
    iVar4 = obj_ninlets(plVar5);
    uVar18 = 1;
    uVar7 = extraout_XMM0_Qa_03;
    if (iVar3 == 1) {
      bVar2 = obj_issignaloutlet((long)plVar8,0);
      uVar18 = (uint)((int)CONCAT71(extraout_var,bVar2) == 0);
      uVar7 = extraout_XMM0_Qa_04;
    }
    uVar7 = tryconnect(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_c0,plVar8
                       ,0,plVar5,0);
    if ((int)uVar7 != 0) {
      return;
    }
    if (iVar3 < 1) {
      return;
    }
    if (iVar4 < 1) {
      return;
    }
    uVar15 = uVar18;
    iVar12 = 1;
    uVar7 = extraout_XMM0_Qa_05;
    while( true ) {
      uVar7 = tryconnect(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_c0,
                         local_e8,uVar15,plVar5,iVar12);
      if ((int)uVar7 != 0) {
        return;
      }
      if (iVar3 <= (int)uVar15) break;
      uVar15 = uVar15 + uVar18;
      bVar2 = iVar4 <= iVar12;
      iVar12 = iVar12 + 1;
      uVar7 = extraout_XMM0_Qa_06;
      if (bVar2) {
        return;
      }
    }
    return;
  }
  if (local_e8 == (long *)0x0) {
    return;
  }
  plVar5 = pd_checkobject(plVar10);
  if (plVar5 == (long *)0x0) {
    return;
  }
  local_f0 = pd_checkobject(plVar8);
  if (local_f0 == (long *)0x0) {
    return;
  }
  if (local_e8 == local_f0) {
    return;
  }
  if (plVar5 == local_f0) {
    return;
  }
  if (local_e8 == plVar5) {
    return;
  }
  iVar3 = obj_noutlets((long)local_e8);
  plVar8 = local_f0;
  local_120 = CONCAT44(extraout_var_02,iVar3);
  local_c8 = plVar5;
  if (iVar3 < 1) {
LAB_005117b3:
    local_118 = 0xffffffff;
    local_120 = 0xffffffff;
  }
  else {
    uVar13 = 0;
    unaff_R12 = (uint *)0x0;
    plVar5 = local_e8;
    local_118 = local_120;
    do {
      local_a8 = 0;
      puVar6 = (undefined8 *)obj_starttraverseoutlet((long)plVar5,&local_a8,(int)uVar13);
      uVar16 = local_118;
      uVar19 = local_120;
      if (puVar6 != (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)
                   obj_nexttraverseoutlet(puVar6,(long *)&local_110,&local_b8,&local_144);
          if (local_110 == plVar8) {
            uVar19 = (ulong)local_144;
            uVar16 = uVar13;
          }
          unaff_R12 = (uint *)(ulong)((int)unaff_R12 + (uint)(local_110 == plVar8));
        } while (puVar6 != (undefined8 *)0x0);
      }
      plVar5 = local_e8;
      uVar18 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar18;
      local_120 = uVar19;
      local_118 = uVar16;
      iVar3 = obj_noutlets((long)local_e8);
    } while ((int)uVar18 < iVar3);
    if ((int)unaff_R12 != 1) goto LAB_005117b3;
  }
  iVar3 = obj_noutlets((long)local_e8);
  plVar5 = local_c8;
  local_130 = CONCAT44(extraout_var_03,iVar3);
  if (iVar3 < 1) {
LAB_00511890:
    local_130 = 0xffffffff;
    local_d0 = 0xffffffff;
  }
  else {
    uVar13 = 0;
    unaff_R12 = &local_144;
    iVar3 = 0;
    plVar8 = local_e8;
    local_d0 = local_130;
    do {
      local_a8 = 0;
      puVar6 = (undefined8 *)obj_starttraverseoutlet((long)plVar8,&local_a8,(int)uVar13);
      uVar16 = local_130;
      if (puVar6 != (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)
                   obj_nexttraverseoutlet(puVar6,(long *)&local_110,&local_b8,unaff_R12);
          if (local_110 == plVar5) {
            local_d0 = (ulong)local_144;
            uVar16 = uVar13;
          }
          iVar3 = iVar3 + (uint)(local_110 == plVar5);
        } while (puVar6 != (undefined8 *)0x0);
      }
      plVar8 = local_e8;
      uVar18 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar18;
      local_130 = uVar16;
      iVar4 = obj_noutlets((long)local_e8);
    } while ((int)uVar18 < iVar4);
    if (iVar3 != 1) goto LAB_00511890;
  }
  iVar3 = obj_noutlets((long)local_f0);
  local_140 = CONCAT44(extraout_var_04,iVar3);
  if (iVar3 < 1) {
LAB_00511986:
    local_138 = 0xffffffff;
    local_140 = 0xffffffff;
  }
  else {
    uVar13 = 0;
    unaff_R12 = &local_144;
    iVar3 = 0;
    plVar5 = local_f0;
    local_138 = local_140;
    do {
      local_a8 = 0;
      puVar6 = (undefined8 *)obj_starttraverseoutlet((long)plVar5,&local_a8,(int)uVar13);
      uVar16 = local_138;
      uVar19 = local_140;
      if (puVar6 != (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)
                   obj_nexttraverseoutlet(puVar6,(long *)&local_110,&local_b8,unaff_R12);
          if (local_110 == local_e8) {
            uVar19 = (ulong)local_144;
            uVar16 = uVar13;
          }
          iVar3 = iVar3 + (uint)(local_110 == local_e8);
        } while (puVar6 != (undefined8 *)0x0);
      }
      plVar5 = local_f0;
      uVar18 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar18;
      local_140 = uVar19;
      local_138 = uVar16;
      iVar4 = obj_noutlets((long)local_f0);
    } while ((int)uVar18 < iVar4);
    if (iVar3 != 1) goto LAB_00511986;
  }
  iVar3 = obj_noutlets((long)local_f0);
  local_f8 = CONCAT44(extraout_var_05,iVar3);
  if (iVar3 < 1) {
LAB_00511a74:
    uVar13 = 0xffffffff;
    local_f8 = 0xffffffff;
  }
  else {
    uVar13 = 0;
    unaff_R12 = &local_144;
    iVar3 = 0;
    plVar5 = local_f0;
    local_128 = local_f8;
    do {
      local_a8 = 0;
      puVar6 = (undefined8 *)obj_starttraverseoutlet((long)plVar5,&local_a8,(int)uVar13);
      uVar16 = local_128;
      uVar19 = local_f8;
      if (puVar6 != (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)
                   obj_nexttraverseoutlet(puVar6,(long *)&local_110,&local_b8,unaff_R12);
          if (local_110 == local_c8) {
            uVar19 = (ulong)local_144;
            uVar16 = uVar13;
          }
          iVar3 = iVar3 + (uint)(local_110 == local_c8);
        } while (puVar6 != (undefined8 *)0x0);
      }
      plVar5 = local_f0;
      uVar18 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar18;
      local_128 = uVar16;
      local_f8 = uVar19;
      iVar4 = obj_noutlets((long)local_f0);
    } while ((int)uVar18 < iVar4);
    uVar13 = local_128;
    if (iVar3 != 1) goto LAB_00511a74;
  }
  iVar3 = obj_noutlets((long)local_c8);
  local_108 = CONCAT44(extraout_var_06,iVar3);
  local_128 = uVar13;
  if (iVar3 < 1) {
LAB_00511b5c:
    local_108 = 0xffffffff;
    local_100 = 0xffffffff;
  }
  else {
    uVar18 = 0;
    unaff_R12 = &local_144;
    iVar3 = 0;
    plVar5 = local_c8;
    local_100 = local_108;
    do {
      local_a8 = 0;
      puVar6 = (undefined8 *)obj_starttraverseoutlet((long)plVar5,&local_a8,uVar18);
      uVar13 = local_108;
      uVar16 = local_100;
      if (puVar6 != (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)
                   obj_nexttraverseoutlet(puVar6,(long *)&local_110,&local_b8,unaff_R12);
          if (local_110 == local_e8) {
            uVar16 = (ulong)local_144;
            uVar13 = (ulong)uVar18;
          }
          iVar3 = iVar3 + (uint)(local_110 == local_e8);
        } while (puVar6 != (undefined8 *)0x0);
      }
      plVar5 = local_c8;
      uVar18 = uVar18 + 1;
      local_108 = uVar13;
      local_100 = uVar16;
      iVar4 = obj_noutlets((long)local_c8);
    } while ((int)uVar18 < iVar4);
    if (iVar3 != 1) goto LAB_00511b5c;
  }
  plVar5 = local_c8;
  iVar3 = obj_noutlets((long)local_c8);
  uVar7 = extraout_XMM0_Qa_08;
  if (iVar3 < 1) {
LAB_00511c3a:
    uVar13 = 0xffffffff;
    unaff_R12 = (uint *)0xffffffff;
  }
  else {
    uVar18 = 0;
    iVar4 = 0;
    local_b0 = CONCAT44(extraout_var_07,iVar3);
    do {
      local_a8 = 0;
      puVar6 = (undefined8 *)obj_starttraverseoutlet((long)plVar5,&local_a8,uVar18);
      if (puVar6 != (undefined8 *)0x0) {
        do {
          puVar6 = (undefined8 *)
                   obj_nexttraverseoutlet(puVar6,(long *)&local_110,&local_b8,&local_144);
          if (local_110 == local_f0) {
            unaff_R12 = (uint *)(ulong)local_144;
            local_b0 = (ulong)uVar18;
          }
          iVar4 = iVar4 + (uint)(local_110 == local_f0);
        } while (puVar6 != (undefined8 *)0x0);
      }
      plVar5 = local_c8;
      uVar18 = uVar18 + 1;
      iVar3 = obj_noutlets((long)local_c8);
    } while ((int)uVar18 < iVar3);
    uVar13 = local_b0;
    uVar7 = extraout_XMM0_Qa_09;
    if (iVar4 != 1) goto LAB_00511c3a;
  }
  lVar14 = local_c0;
  canvas_undo_add(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_c0,0xc,
                  "reconnect",0,in_R8,in_R9);
  plVar10 = local_e8;
  plVar8 = local_f0;
  in_R8 = local_f0;
  in_R9 = local_120;
  uVar9 = canvas_try_bypassobj1
                    (lVar14,(long)local_e8,(uint)local_100,(uint)local_118,(long)local_f0,local_120,
                     (uint)local_128,(long)plVar5,(uint)local_f8,(uint)local_108);
  uVar7 = extraout_XMM0_Qa_10;
  if ((int)uVar9 == 0) {
    uVar18 = (uint)uVar13;
    uVar15 = (uint)unaff_R12;
    in_R8 = plVar5;
    in_R9 = local_d0;
    uVar9 = canvas_try_bypassobj1
                      (lVar14,(long)plVar10,(uint)local_140,(uint)local_130,(long)plVar5,local_d0,
                       uVar18,(long)plVar8,uVar15,(uint)local_138);
    uVar7 = extraout_XMM0_Qa_11;
    if ((int)uVar9 == 0) {
      in_R8 = plVar10;
      in_R9 = local_140;
      uVar9 = canvas_try_bypassobj1
                        (lVar14,(long)plVar8,uVar15,(uint)local_138,(long)plVar10,local_140,
                         (uint)local_130,(long)plVar5,(uint)local_d0,uVar18);
      uVar7 = extraout_XMM0_Qa_12;
      if ((int)uVar9 == 0) {
        in_R8 = plVar5;
        in_R9 = local_f8;
        uVar9 = canvas_try_bypassobj1
                          (lVar14,(long)plVar8,(uint)local_120,(uint)local_128,(long)plVar5,local_f8
                           ,(uint)local_108,(long)plVar10,(uint)local_100,(uint)local_118);
        uVar7 = extraout_XMM0_Qa_13;
        if ((int)uVar9 == 0) {
          in_R8 = plVar10;
          in_R9 = local_100;
          uVar9 = canvas_try_bypassobj1
                            (lVar14,(long)plVar5,(uint)local_f8,(uint)local_108,(long)plVar10,
                             local_100,(uint)local_118,(long)plVar8,(uint)local_120,(uint)local_128)
          ;
          uVar7 = extraout_XMM0_Qa_14;
          if ((int)uVar9 == 0) {
            in_R9 = (ulong)unaff_R12 & 0xffffffff;
            in_R8 = plVar8;
            uVar9 = canvas_try_bypassobj1
                              (lVar14,(long)plVar5,(uint)local_d0,uVar18,(long)plVar8,in_R9,
                               (uint)local_138,(long)plVar10,(uint)local_140,(uint)local_130);
            uVar7 = extraout_XMM0_Qa_15;
            if ((int)uVar9 == 0) {
              in_R8 = plVar8;
              in_R9 = local_120;
              uVar9 = canvas_try_insert(lVar14,plVar10,(uint)local_100,(uint)local_118,plVar8,
                                        local_120,(uint)local_128,plVar5,(uint)local_f8,
                                        (uint)local_108);
              uVar7 = extraout_XMM0_Qa_16;
              if ((int)uVar9 == 0) {
                in_R8 = plVar5;
                in_R9 = local_d0;
                uVar9 = canvas_try_insert(lVar14,plVar10,(uint)local_140,(uint)local_130,plVar5,
                                          local_d0,uVar18,plVar8,uVar15,(uint)local_138);
                uVar7 = extraout_XMM0_Qa_17;
                if ((int)uVar9 == 0) {
                  in_R8 = plVar10;
                  in_R9 = local_140;
                  uVar9 = canvas_try_insert(lVar14,plVar8,uVar15,(uint)local_138,plVar10,local_140,
                                            (uint)local_130,plVar5,(uint)local_d0,uVar18);
                  uVar7 = extraout_XMM0_Qa_18;
                  if ((int)uVar9 == 0) {
                    in_R8 = plVar5;
                    in_R9 = local_f8;
                    uVar9 = canvas_try_insert(lVar14,plVar8,(uint)local_120,(uint)local_128,plVar5,
                                              local_f8,(uint)local_108,plVar10,(uint)local_100,
                                              (uint)local_118);
                    uVar7 = extraout_XMM0_Qa_19;
                    if ((int)uVar9 == 0) {
                      in_R8 = plVar10;
                      in_R9 = local_100;
                      uVar9 = canvas_try_insert(lVar14,plVar5,(uint)local_f8,(uint)local_108,plVar10
                                                ,local_100,(uint)local_118,plVar8,(uint)local_120,
                                                (uint)local_128);
                      uVar7 = extraout_XMM0_Qa_20;
                      if ((int)uVar9 == 0) {
                        in_R9 = (ulong)unaff_R12 & 0xffffffff;
                        canvas_try_insert(lVar14,plVar5,(uint)local_d0,uVar18,plVar8,in_R9,
                                          (uint)local_138,plVar10,(uint)local_140,(uint)local_130);
                        in_R8 = plVar8;
                        uVar7 = extraout_XMM0_Qa_21;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  pcVar11 = "reconnect";
LAB_00511ee3:
  canvas_undo_add(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar14,0xd,pcVar11,0
                  ,in_R8,in_R9);
  return;
}


