// Function : canvas_doclick
// Namespace: 
// Entry    : 0050bb60
// Prototype: undefined canvas_doclick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, ulong param_10, ulong param_11, ulong param_12, int * param_13, uint * param_14, undefined1 param_15)
// Body     : 0050bb60 - 0050cb08


/* WARNING: Type propagation algorithm not settling */

void canvas_doclick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,ulong param_10,ulong param_11,ulong param_12,int *param_13,
                   uint *param_14,undefined1 param_15)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined7 extraout_var;
  long lVar11;
  undefined8 *puVar12;
  undefined7 extraout_var_00;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  undefined7 extraout_var_01;
  byte bVar16;
  uint uVar17;
  int iVar18;
  code *pcVar19;
  uint *puVar20;
  uint *puVar21;
  int *piVar22;
  uint uVar23;
  undefined8 extraout_RDX;
  ulong uVar24;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  ulong extraout_RDX_04;
  ulong extraout_RDX_05;
  ulong extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  long *extraout_RDX_13;
  undefined8 extraout_RDX_14;
  long *extraout_RDX_15;
  undefined8 extraout_RDX_16;
  undefined8 extraout_RDX_17;
  undefined8 extraout_RDX_18;
  undefined8 extraout_RDX_19;
  int iVar25;
  undefined8 uVar26;
  long lVar27;
  char *pcVar28;
  undefined8 uVar29;
  byte *pbVar30;
  int iVar31;
  double dVar32;
  int iVar33;
  undefined8 unaff_R15;
  undefined7 uVar34;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar35;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  float fVar36;
  float extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  float extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 uVar37;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  float extraout_XMM0_Da_20;
  float extraout_XMM0_Da_21;
  float extraout_XMM0_Da_22;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar39;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  double dVar38;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  float fVar40;
  float extraout_XMM0_Db_13;
  undefined4 extraout_XMM0_Db_14;
  float extraout_XMM0_Db_15;
  undefined4 extraout_XMM0_Db_16;
  undefined4 extraout_XMM0_Db_17;
  undefined4 extraout_XMM0_Db_18;
  undefined4 extraout_XMM0_Db_19;
  float extraout_XMM0_Db_20;
  float extraout_XMM0_Db_21;
  float extraout_XMM0_Db_22;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 in_stack_fffffffffffffed8;
  int local_10c;
  double local_108;
  uint local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e4;
  uint local_e0;
  int local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  uint local_b4;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  uint local_94;
  long local_90;
  uint local_74;
  undefined8 local_50;
  undefined8 local_48;
  
  local_10c = 0;
  local_fc = 0;
  local_dc = 0;
  local_e0 = 0;
  lVar11 = param_9[0x18];
  if (lVar11 == 0) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"editor",param_10,param_11,
        param_12,(char *)param_13,param_14,param_15);
    return;
  }
  iVar33 = (int)param_13;
  puVar21 = (uint *)(param_11 & 0xffffffff);
  dVar32 = (double)(param_10 & 0xffffffff);
  uVar34 = (undefined7)((ulong)unaff_R15 >> 8);
  uVar13 = CONCAT71(uVar34,1);
  local_d8 = (long *)CONCAT44(local_d8._4_4_,(int)param_12);
  if ((param_12 & 2) == 0) {
    uVar13 = CONCAT71(uVar34,(*(byte *)(param_9 + 0x1d) & 0x20) == 0);
  }
  plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
  dVar38 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  lVar27 = *plVar8;
  lVar9 = **(long **)(lVar27 + 0x48);
  *(undefined4 *)(lVar9 + 0x40) = 0;
  iVar5 = (int)param_10;
  iVar7 = (int)param_11;
  if (iVar33 == 0) {
    uVar37 = 1;
    uVar26 = 0;
    *(byte *)(lVar11 + 0x88) = *(byte *)(lVar11 + 0x88) & 0xf7;
    lVar11 = param_9[0x18];
    bVar16 = *(byte *)(lVar11 + 0x88);
  }
  else {
    uVar35 = extraout_XMM0_Da;
    uVar39 = extraout_XMM0_Db;
    if ((*(long *)(lVar11 + 0x30) != 0) &&
       (pcVar19 = *(code **)(lVar11 + 0x40), pcVar19 != (code *)0x0)) {
      lVar27 = lVar27 + 0x168;
      (*pcVar19)(0);
      if ((*(long **)(param_9[0x18] + 0x30) != (long *)0x0) &&
         ((plVar8 = pd_checkobject(*(long **)(param_9[0x18] + 0x30)), plVar8 != (long *)0x0 &&
          ((~*(byte *)((long)plVar8 + 0x2e) & 3) == 0)))) {
        gatom_undarken(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                       param_5,param_6,param_7,param_8,plVar8,lVar27,extraout_RDX,
                       CONCAT71((int7)((ulong)pcVar19 >> 8),~*(byte *)((long)plVar8 + 0x2e)),
                       (char *)param_13,param_14,in_stack_fffffffffffffed8);
      }
      param_13 = (int *)0x0;
      param_14 = (uint *)0x0;
      glist_grab((long)param_9,0,0,0,0,0);
      plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
      lVar9 = **(long **)(*plVar8 + 0x48);
      uVar35 = extraout_XMM0_Da_01;
      uVar39 = extraout_XMM0_Db_01;
    }
    uVar26 = 0;
    uVar37 = 1;
    dVar38 = (double)CONCAT44(uVar39,uVar35);
    if ((*(int *)(lVar9 + 0x50) == iVar5) &&
       (dVar38 = (double)CONCAT44(uVar39,uVar35), *(int *)(lVar9 + 0x54) == iVar7)) {
      local_108 = sys_getrealtime();
      plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
      uVar26 = 0;
      uVar37 = 1;
      dVar38 = local_108 - *(double *)(**(long **)(*plVar8 + 0x48) + 0x48);
      if (dVar38 < DAT_006544a8) {
        uVar26 = 1;
        uVar37 = 3;
      }
    }
    *(byte *)(param_9[0x18] + 0x88) = *(byte *)(param_9[0x18] + 0x88) & 0xf7;
    lVar11 = param_9[0x18];
    *(undefined8 *)(lVar11 + 0x30) = 0;
    pbVar30 = (byte *)(lVar11 + 0x88);
    *pbVar30 = *pbVar30 & 0xf8;
    lVar11 = param_9[0x18];
    bVar16 = *(byte *)(lVar11 + 0x88);
  }
  if ((bVar16 & 7) != 0) {
    return;
  }
  uVar24 = (ulong)local_d8 & 0xffffffff;
  local_f8 = CONCAT44(local_f8._4_4_,(float)local_d8) & 0xffffffff00000001;
  *(int *)(lVar11 + 0x68) = iVar5;
  *(int *)(lVar11 + 0x6c) = iVar7;
  if ((((ulong)local_d8 & 8) == 0) &&
     (puVar20 = (uint *)(uVar13 & 0xffffffff ^ 1), (char)(uVar13 & 0xffffffff) == '\x01')) {
    if ((iVar33 != 0) && (*(long *)(lVar11 + 0x28) != 0)) {
      plVar10 = (long *)rtext_getowner(*(long *)(lVar11 + 0x28));
      plVar8 = param_9;
      bVar2 = gobj_shouldvis(plVar10,param_9);
      uVar26 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
      uVar29 = extraout_RDX_00;
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        puVar20 = &local_b8;
        param_13 = &local_bc;
        param_14 = &local_c0;
        plVar8 = param_9;
        uVar26 = gobj_getrect(plVar10,param_9,(undefined4 *)&local_a8,puVar20,param_13,param_14);
        uVar29 = extraout_RDX_01;
        if (((((int)local_a8 <= iVar5) && (iVar5 <= local_bc)) && ((int)local_b8 <= iVar7)) &&
           (puVar20 = (uint *)(ulong)local_c0, iVar7 <= (int)local_c0)) {
          local_10c = (int)local_a8;
          local_fc = local_b8;
          local_dc = local_bc;
          local_e0 = local_c0;
          uVar35 = 4;
          if ((int)local_f8 == 0) {
            uVar35 = uVar37;
          }
          rtext_mouse(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      *(long **)(param_9[0x18] + 0x28),iVar5 - (int)local_a8,iVar7 - local_b8,uVar35
                      ,param_13,(byte *)param_14);
          *(byte *)(param_9[0x18] + 0x88) = *(byte *)(param_9[0x18] + 0x88) & 0xf8 | 5;
          lVar11 = param_9[0x18];
          *(int *)(lVar11 + 0x68) = (int)local_a8;
          *(uint *)(lVar11 + 0x6c) = local_b8;
          return;
        }
      }
      uVar26 = rtext_retext(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            *(long **)(param_9[0x18] + 0x28),plVar8,uVar29,puVar20,(char *)param_13,
                            (byte *)param_14);
      rtext_activate(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long **)(param_9[0x18] + 0x28),0);
      return;
    }
    plVar8 = (long *)param_9[6];
    if (plVar8 == (long *)0x0) {
      local_f0 = (ulong)local_f0._4_4_ << 0x20;
      local_c4 = 0;
      local_c8 = 0;
      local_e4 = 0.0;
    }
    else {
      local_b4 = ((uint)(float)local_d8 & 4) >> 2;
      local_e4 = 0.0;
      local_c8 = 0;
      local_c4 = 0;
      local_f0 = (ulong)local_f0._4_4_ << 0x20;
      local_108 = dVar32;
      local_b0 = uVar26;
      do {
        bVar2 = gobj_shouldvis(plVar8,param_9);
        dVar38 = (double)CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06);
        uVar24 = extraout_RDX_04;
        if ((int)CONCAT71(extraout_var_00,bVar2) != 0) {
          puVar20 = &local_b8;
          param_13 = &local_bc;
          param_14 = &local_c0;
          dVar38 = (double)gobj_getrect(plVar8,param_9,(undefined4 *)&local_a8,puVar20,param_13,
                                        param_14);
          iVar31 = (int)local_a8;
          uVar17 = local_b8;
          iVar5 = local_bc;
          uVar6 = local_c0;
          uVar24 = extraout_RDX_05;
          if ((((int)local_a8 <= (int)local_108._0_4_) && ((int)local_108._0_4_ <= local_bc)) &&
             (((int)local_b8 <= iVar7 && (iVar7 <= (int)local_c0)))) {
            if ((((ulong)local_d8 & 2) == 0) ||
               (uVar23 = 1, (*(byte *)(param_9 + 0x1d) & 0x20) != 0)) {
              uVar23 = local_b4;
            }
            param_14 = (uint *)(ulong)(uVar23 & 0xff);
            param_13 = (int *)(local_f8 & 0xffffffff);
            puVar20 = puVar21;
            uVar13 = gobj_click(plVar8);
            dVar38 = (double)CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07);
            if ((int)uVar13 != 0) {
              local_10c = iVar31;
              local_fc = uVar17;
              local_dc = iVar5;
              local_e0 = uVar6;
              if (iVar33 == 0) {
                canvas_setcursor(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,
                                 param_4,param_5,param_6,param_7,param_8,(long)param_9,
                                 uVar13 & 0xffffffff,extraout_RDX_06,puVar20,(char *)param_13,
                                 param_14,in_stack_fffffffffffffed8);
                return;
              }
              return;
            }
            local_f0 = CONCAT44(local_f0._4_4_,uVar6);
            local_c4 = iVar5;
            local_c8 = uVar17;
            local_e4 = (float)iVar31;
            uVar24 = extraout_RDX_06;
          }
        }
        plVar8 = (long *)plVar8[1];
      } while (plVar8 != (long *)0x0);
    }
    local_10c = (int)local_e4;
    local_fc = local_c8;
    local_dc = local_c4;
    local_e0 = (uint)(float)local_f0;
    if (iVar33 == 0) {
      canvas_setcursor(dVar38,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                       0,uVar24,puVar20,(char *)param_13,param_14,in_stack_fffffffffffffed8);
      return;
    }
    return;
  }
  local_f0 = CONCAT44(local_f0._4_4_,uVar37);
  piVar22 = &local_10c;
  puVar20 = &local_fc;
  pbVar30 = (byte *)&local_dc;
  plVar8 = canvas_findhitbox(param_9,iVar5,iVar7,piVar22,(int *)puVar20,(int *)pbVar30,
                             (int *)&local_e0);
  if (plVar8 == (long *)0x0) {
    if (((ulong)local_d8 & 8) != 0) {
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0x654b8a,"^ ii ii",param_9,dVar32,puVar21,1,0);
LAB_0050c220:
      plVar8 = (long *)__tls_get_addr();
      if ((*(long **)(**(long **)(*plVar8 + 0x48) + 0x88) != param_9) ||
         (*(int *)(**(long **)(*plVar8 + 0x48) + 0x90) != 0)) {
        pdgui_vmess(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,0,"^r rr",param_9,"configure","-cursor",
                    "$cursor_runmode_nothing",in_stack_fffffffffffffed8);
        plVar8 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar11 = **(long **)(*plVar8 + 0x48);
        *(long **)(lVar11 + 0x88) = param_9;
        *(undefined4 *)(lVar11 + 0x90) = 0;
      }
      return;
    }
    if ((char)uVar13 != '\0') goto LAB_0050c220;
    uVar26 = extraout_RDX_02;
    uVar37 = extraout_XMM0_Da_03;
    uVar35 = extraout_XMM0_Db_03;
    if (((ulong)local_d8 & 4) == 0) {
      local_108 = dVar32;
      local_f0 = glist_getcanvas((long)param_9);
      uVar26 = linetraverser_start(&local_a8,local_f0);
      puVar12 = linetraverser_next(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   &local_a8);
      uVar26 = extraout_RDX_08;
      uVar37 = extraout_XMM0_Da_11;
      uVar35 = extraout_XMM0_Db_11;
      if (puVar12 != (undefined8 *)0x0) {
        local_d8 = (long *)CONCAT44((float)iVar7,(float)(int)local_108._0_4_);
        uStack_d0 = 0;
        do {
          uVar13 = local_f0;
          fVar45 = (float)(int)((ulong)local_50 >> 0x20);
          fVar41 = (float)(int)local_48;
          fVar42 = (float)(int)((ulong)local_48 >> 0x20);
          fVar36 = fVar41 - (float)(int)local_50;
          fVar40 = fVar42 - fVar45;
          fVar43 = (float)local_d8 - (float)(int)local_50;
          fVar45 = local_d8._4_4_ - fVar45;
          fVar46 = fVar43 * fVar40;
          fVar48 = fVar40 * fVar40;
          fVar44 = fVar45 * fVar36 - fVar46;
          fVar44 = fVar44 * fVar44;
          fVar50 = (fVar48 + fVar36 * fVar36) * DAT_005d94c0;
          fVar47 = fVar46;
          fVar49 = fVar46;
          if (fVar44 < fVar50) {
            fVar43 = fVar43 * fVar36;
            fVar45 = fVar45 * fVar40;
            fVar44 = fVar45 + fVar43;
            fVar47 = fVar45;
            if (DAT_005d9058 <= fVar44) {
              fVar36 = fVar36 * (fVar41 - (float)local_d8);
              fVar40 = fVar40 * (fVar42 - local_d8._4_4_);
              fVar41 = fVar40 + fVar36;
              fVar42 = fVar40;
              if (DAT_005d9058 <= fVar41) {
                iVar5 = canvas_getindex(local_f0,local_a0);
                lVar11 = local_90;
                fVar42 = fVar40;
                uVar6 = canvas_getindex(uVar13,local_90);
                puVar20 = (uint *)(ulong)uVar6;
                uVar26 = extraout_RDX_10;
                fVar36 = extraout_XMM0_Da_13;
                fVar40 = extraout_XMM0_Db_13;
                if ((int)local_f8 == 0) {
                  if (iVar33 == 0) goto LAB_0050caf7;
                  glist_noselect(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_13),
                                 CONCAT44(fVar42,fVar41),CONCAT44(fVar45,fVar43),
                                 CONCAT44(fVar47,fVar44),CONCAT44(fVar49,fVar46),
                                 CONCAT44(fVar48,fVar50),param_7,param_8,param_9,lVar11,
                                 extraout_RDX_10,piVar22,(char *)puVar20,pbVar30);
                  fVar36 = extraout_XMM0_Da_20;
                  fVar40 = extraout_XMM0_Db_20;
                }
                else {
                  lVar11 = param_9[0x18];
                  if ((*(byte *)(lVar11 + 0x88) & 0x20) != 0) {
                    iVar31 = *(int *)(lVar11 + 0x70);
                    uVar17 = *(uint *)(lVar11 + 0x74);
                    uVar23 = *(uint *)(lVar11 + 0x78);
                    uVar1 = *(uint *)(lVar11 + 0x7c);
                    if ((((iVar5 == iVar31) && (uVar6 == uVar23)) && (uVar17 == local_94)) &&
                       (uVar1 == local_74)) {
                      if (iVar33 != 0) {
                        glist_deselectline(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_13),
                                           CONCAT44(fVar42,fVar41),CONCAT44(fVar45,fVar43),
                                           CONCAT44(fVar47,fVar44),CONCAT44(fVar49,fVar46),
                                           CONCAT44(fVar48,fVar50),param_7,param_8,(long)param_9);
                        uVar26 = extraout_RDX_19;
                        fVar36 = extraout_XMM0_Da_22;
                        fVar40 = extraout_XMM0_Db_22;
                      }
                      goto LAB_0050caf7;
                    }
                    if ((*(long *)(lVar11 + 0x20) == 0) && ((iVar5 == iVar31 || (uVar6 == uVar23))))
                    {
                      if (iVar33 != 0) {
                        canvas_undo_add(CONCAT44(extraout_XMM0_Db_13,extraout_XMM0_Da_13),
                                        CONCAT44(fVar42,fVar41),CONCAT44(fVar45,fVar43),
                                        CONCAT44(fVar47,fVar44),CONCAT44(fVar49,fVar46),
                                        CONCAT44(fVar48,fVar50),param_7,param_8,(long)param_9,0xc,
                                        "reconnect",0,puVar20,pbVar30);
                        local_108 = (double)CONCAT44(local_108._4_4_,(float)iVar31);
                        local_d8 = (long *)CONCAT44(local_d8._4_4_,(float)(int)uVar17);
                        local_f8 = CONCAT44(local_f8._4_4_,(float)(int)uVar23);
                        fVar36 = (float)(int)uVar1;
                        canvas_disconnect_with_undo
                                  ((float)iVar31,(ulong)(uint)(float)(int)uVar17,
                                   (ulong)(uint)(float)(int)uVar23,(ulong)(uint)fVar36,
                                   CONCAT44(fVar49,fVar46),CONCAT44(fVar48,fVar50),param_7,param_8,
                                   (long)param_9);
                        local_e4 = (float)iVar5;
                        local_f0 = CONCAT44(local_f0._4_4_,(float)(int)uVar6);
                        canvas_disconnect_with_undo
                                  (local_e4,(ulong)(uint)(float)(int)local_94,
                                   (ulong)(uint)(float)(int)uVar6,(ulong)(uint)(float)(int)local_74,
                                   CONCAT44(fVar49,fVar46),CONCAT44(fVar48,fVar50),param_7,param_8,
                                   (long)param_9);
                        canvas_connect_with_undo
                                  (local_e4,(ulong)(uint)(float)(int)local_94,local_f8 & 0xffffffff,
                                   (ulong)(uint)fVar36,CONCAT44(fVar49,fVar46),
                                   CONCAT44(fVar48,fVar50),param_7,param_8,(long)param_9);
                        fVar47 = 0.0;
                        fVar44 = (float)(int)local_74;
                        fVar42 = 0.0;
                        fVar45 = 0.0;
                        fVar41 = (float)local_d8;
                        fVar43 = (float)local_f0;
                        canvas_connect_with_undo
                                  (local_108._0_4_,(ulong)local_d8 & 0xffffffff,
                                   local_f0 & 0xffffffff,(ulong)(uint)fVar44,CONCAT44(fVar49,fVar46)
                                   ,CONCAT44(fVar48,fVar50),param_7,param_8,(long)param_9);
                        pcVar28 = (char *)0xd;
                        canvas_undo_add(CONCAT44(extraout_XMM0_Db_14,extraout_XMM0_Da_14),
                                        CONCAT44(fVar42,fVar41),CONCAT44(fVar45,fVar43),
                                        CONCAT44(fVar47,fVar44),CONCAT44(fVar49,fVar46),
                                        CONCAT44(fVar48,fVar50),param_7,param_8,(long)param_9,0xd,
                                        "reconnect",0,puVar20,pbVar30);
                        lVar11 = param_9[0x18];
                        *(int *)(lVar11 + 0x70) = iVar31;
                        *(uint *)(lVar11 + 0x74) = uVar17;
                        *(uint *)(lVar11 + 0x78) = uVar6;
                        piVar22 = (int *)(ulong)local_74;
                        *(uint *)(lVar11 + 0x7c) = local_74;
                        canvas_dirty(DAT_005d9038,CONCAT44(fVar42,fVar41),CONCAT44(fVar45,fVar43),
                                     CONCAT44(fVar47,fVar44),CONCAT44(fVar49,fVar46),
                                     CONCAT44(fVar48,fVar50),param_7,param_8,(long)param_9,pcVar28,
                                     extraout_RDX_11,piVar22,(char *)puVar20,pbVar30);
                        uVar26 = extraout_RDX_12;
                        fVar36 = extraout_XMM0_Da_15;
                        fVar40 = extraout_XMM0_Db_15;
                      }
                      goto LAB_0050caf7;
                    }
                    goto LAB_0050c383;
                  }
                  if (iVar33 == 0) goto LAB_0050caf7;
                }
                pbVar30 = (byte *)(ulong)local_74;
                piVar22 = (int *)(ulong)local_94;
                glist_selectline(CONCAT44(fVar40,fVar36),CONCAT44(fVar42,fVar41),
                                 CONCAT44(fVar45,fVar43),CONCAT44(fVar47,fVar44),
                                 CONCAT44(fVar49,fVar46),CONCAT44(fVar48,fVar50),param_7,param_8,
                                 local_f0,puVar12,iVar5,local_94,uVar6,local_74);
                uVar26 = extraout_RDX_18;
                fVar36 = extraout_XMM0_Da_21;
                fVar40 = extraout_XMM0_Db_21;
LAB_0050caf7:
                canvas_setcursor(CONCAT44(fVar40,fVar36),CONCAT44(fVar42,fVar41),
                                 CONCAT44(fVar45,fVar43),CONCAT44(fVar47,fVar44),
                                 CONCAT44(fVar49,fVar46),CONCAT44(fVar48,fVar50),param_7,param_8,
                                 (long)param_9,6,uVar26,piVar22,(char *)puVar20,pbVar30,
                                 in_stack_fffffffffffffed8);
                return;
              }
            }
          }
LAB_0050c383:
          puVar12 = linetraverser_next(CONCAT44(fVar40,fVar36),CONCAT44(fVar42,fVar41),
                                       CONCAT44(fVar45,fVar43),CONCAT44(fVar47,fVar44),
                                       CONCAT44(fVar49,fVar46),CONCAT44(fVar48,fVar50),param_7,
                                       param_8,&local_a8);
          param_6 = CONCAT44(fVar48,fVar50);
          param_5 = CONCAT44(fVar49,fVar46);
          param_4 = CONCAT44(fVar47,fVar44);
          param_3 = CONCAT44(fVar45,fVar43);
          param_2 = CONCAT44(fVar42,fVar41);
          uVar26 = extraout_RDX_09;
          uVar37 = extraout_XMM0_Da_12;
          uVar35 = extraout_XMM0_Db_12;
        } while (puVar12 != (undefined8 *)0x0);
      }
      dVar32 = local_108;
    }
    uVar29 = 4;
    uVar26 = canvas_setcursor(CONCAT44(uVar35,uVar37),param_2,param_3,param_4,param_5,param_6,
                              param_7,param_8,(long)param_9,4,uVar26,piVar22,(char *)puVar20,pbVar30
                              ,in_stack_fffffffffffffed8);
    if (iVar33 == 0) {
      return;
    }
    if ((int)local_f8 == 0) {
      uVar26 = glist_noselect(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                              ,uVar29,extraout_RDX_16,piVar22,(char *)puVar20,pbVar30);
    }
    pdgui_vmess(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crr iiii rs",
                param_9,"create","rectangle",(ulong)dVar32 & 0xffffffff,(char)puVar21);
    lVar11 = param_9[0x18];
    *(int *)(lVar11 + 0x68) = SUB84(dVar32,0);
    *(int *)(lVar11 + 0x6c) = iVar7;
    bVar16 = *(byte *)(lVar11 + 0x88) & 0xf8 | 3;
    goto LAB_0050c881;
  }
  plVar10 = pd_checkobject(plVar8);
  iVar31 = local_dc;
  uVar6 = local_e0;
  if (((ulong)local_d8 & 8) != 0) {
    lVar11 = class_getpropertiesfn(*plVar8);
    puVar12 = gensym("menu-open");
    lVar27 = zgetfn(plVar8,(long)puVar12);
    pdgui_vmess(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,0x654b8a,"^ ii ii",param_9,dVar32,puVar21,
                (ulong)(lVar11 != 0),lVar27 != 0);
    return;
  }
  local_d8 = plVar8;
  if ((int)local_f8 == 0) {
    iVar3 = *(int *)((long)param_9 + 0xec) * 4;
    uVar13 = (ulong)local_fc;
    local_f8 = CONCAT44(local_f8._4_4_,local_fc);
    uVar23 = local_e0 - local_fc;
    plVar8 = (long *)(ulong)uVar23;
    uVar17 = uVar23 + 3;
    if (-1 < (int)uVar23) {
      uVar17 = uVar23;
    }
    iVar18 = *(int *)((long)param_9 + 0xec) * 6;
    iVar25 = (int)uVar17 >> 2;
    if (iVar18 <= (int)uVar17 >> 2) {
      iVar25 = iVar18;
    }
    if (iVar25 < iVar3) {
      iVar25 = iVar3;
    }
    plVar14 = plVar10;
    uVar37 = extraout_XMM0_Da_04;
    uVar35 = extraout_XMM0_Db_04;
    if (((local_dc + -4 <= iVar5) && (iVar7 < (int)(local_e0 - 4))) && (plVar10 != (long *)0x0)) {
      local_108 = dVar32;
      if ((*(undefined **)(*plVar10 + 0x68) != PTR_text_widgetbehavior_00715630) &&
         ((~*(byte *)((long)plVar10 + 0x2e) & 3) != 0)) {
        plVar15 = pd_checkglist(plVar10);
        plVar8 = extraout_RDX_13;
        uVar37 = extraout_XMM0_Da_16;
        uVar35 = extraout_XMM0_Db_16;
        if (plVar15 == (long *)0x0) goto LAB_0050c127;
      }
      plVar14 = local_d8;
      dVar32 = local_108;
      uVar26 = CONCAT44(uVar35,uVar37);
      if (iVar33 != 0) {
        lVar11 = param_9[0x18];
        if (lVar11 != 0) {
          for (plVar15 = *(long **)(lVar11 + 0x20); puVar21 = (uint *)0x0, plVar15 != (long *)0x0;
              plVar15 = (long *)plVar15[1]) {
            if ((long *)*plVar15 == local_d8) goto LAB_0050c695;
          }
        }
        uVar26 = glist_noselect(CONCAT44(uVar35,uVar37),param_2,param_3,param_4,param_5,param_6,
                                param_7,param_8,param_9,uVar13,plVar8,puVar21,(char *)plVar10,
                                pbVar30);
        uVar26 = glist_select(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)param_9,plVar14,extraout_RDX_14,puVar21,(char *)plVar10,pbVar30)
        ;
        lVar11 = param_9[0x18];
        plVar8 = extraout_RDX_15;
LAB_0050c695:
        *(byte *)(lVar11 + 0x88) = *(byte *)(lVar11 + 0x88) & 0xf8 | 6;
        plVar14 = (long *)param_9[0x18];
        *(int *)(plVar14 + 0xd) = local_10c;
        *(int *)((long)plVar14 + 0x6c) = (int)local_f8;
        *(int *)(plVar14 + 0x13) = SUB84(dVar32,0);
        *(int *)((long)plVar14 + 0x9c) = iVar7;
        plVar15 = (long *)param_9[6];
        pcVar28 = (char *)0x0;
        if ((plVar15 != (long *)0x0) && (plVar14 = local_d8, plVar15 != local_d8)) {
          pcVar28 = (char *)0x0;
          do {
            pcVar28 = (char *)(ulong)((int)pcVar28 + 1);
            plVar15 = (long *)plVar15[1];
            if (plVar15 == (long *)0x0) break;
          } while (plVar15 != local_d8);
        }
        puVar12 = canvas_undo_set_apply
                            (uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                             pcVar28,plVar8,plVar14,plVar10,pbVar30);
        canvas_undo_add(CONCAT44(extraout_XMM0_Db_17,extraout_XMM0_Da_17),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)param_9,6,"resize",puVar12,plVar10,
                        pbVar30);
        return;
      }
      uVar13 = 7;
      goto LAB_0050ca7b;
    }
    local_108 = dVar32;
    if (plVar10 == (long *)0x0) {
      bVar2 = true;
      plVar10 = (long *)0x0;
LAB_0050c755:
LAB_0050c7fb:
      iVar18 = SUB84(local_108,0);
      if (iVar33 != 0) {
        if (bVar2) {
LAB_0050c835:
          lVar11 = param_9[0x18];
          if (lVar11 != 0) goto LAB_0050c841;
        }
        else {
LAB_0050c80f:
          lVar11 = param_9[0x18];
          plVar8 = *(long **)(lVar11 + 0x28);
          if (plVar8 != (long *)0x0) {
            plVar15 = (long *)glist_findrtext(CONCAT44(uVar35,uVar37),param_2,param_3,param_4,
                                              param_5,param_6,param_7,param_8,(long)param_9,
                                              (long)plVar10,local_d8,puVar21,(char *)plVar14,pbVar30
                                             );
            iVar33 = local_10c;
            uVar37 = extraout_XMM0_Da_18;
            uVar35 = extraout_XMM0_Db_18;
            if (plVar8 == plVar15) {
              iVar5 = (int)local_f8;
              rtext_mouse(CONCAT44(extraout_XMM0_Db_18,extraout_XMM0_Da_18),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,plVar8,iVar18 - local_10c,
                          iVar7 - (int)local_f8,(float)local_f0,plVar14,pbVar30);
              *(byte *)(param_9[0x18] + 0x88) = *(byte *)(param_9[0x18] + 0x88) & 0xf8 | 5;
              lVar11 = param_9[0x18];
              *(int *)(lVar11 + 0x68) = iVar33;
              *(int *)(lVar11 + 0x6c) = iVar5;
              return;
            }
            goto LAB_0050c835;
          }
LAB_0050c841:
          for (plVar8 = *(long **)(lVar11 + 0x20); puVar21 = (uint *)0x0, plVar8 != (long *)0x0;
              plVar8 = (long *)plVar8[1]) {
            if ((long *)*plVar8 == local_d8) goto LAB_0050c875;
          }
        }
        plVar8 = local_d8;
        uVar26 = glist_noselect(CONCAT44(uVar35,uVar37),param_2,param_3,param_4,param_5,param_6,
                                param_7,param_8,param_9,plVar10,local_d8,puVar21,(char *)plVar14,
                                pbVar30);
        glist_select(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                     plVar8,extraout_RDX_17,puVar21,(char *)plVar14,pbVar30);
        lVar11 = param_9[0x18];
LAB_0050c875:
        bVar16 = *(byte *)(lVar11 + 0x88) & 0xf8 | 1;
LAB_0050c881:
        *(byte *)(lVar11 + 0x88) = bVar16;
        return;
      }
    }
    else {
LAB_0050c127:
      iVar3 = obj_noutlets((long)plVar10);
      iVar5 = local_10c;
      bVar2 = false;
      uVar37 = extraout_XMM0_Da_08;
      uVar35 = extraout_XMM0_Db_08;
      if (iVar3 == 0) goto LAB_0050c7fb;
      uVar17 = uVar6 - iVar25;
      puVar21 = (uint *)(ulong)uVar17;
      bVar2 = false;
      if (iVar7 < (int)uVar17) goto LAB_0050c755;
      iVar31 = iVar31 - local_10c;
      iVar25 = 1;
      if (1 < iVar3) {
        iVar25 = iVar3 + -1;
      }
      iVar18 = SUB84(local_108,0);
      uVar17 = (iVar18 - local_10c) * iVar25;
      puVar21 = (uint *)(ulong)uVar17;
      iVar4 = (int)(iVar31 / 2 + uVar17) / iVar31;
      if ((iVar3 == 1) || (iVar4 < iVar3)) {
        if (iVar33 != 0) {
          local_f8 = (ulong)*(uint *)((long)param_9 + 0xec);
          bVar2 = obj_issignaloutlet((long)plVar10,iVar4);
          local_d8 = (long *)CONCAT44(local_d8._4_4_,(int)CONCAT71(extraout_var_01,bVar2));
          iVar33 = *(int *)((long)param_9 + 0xec);
          iVar7 = 0;
          if (1 < iVar3) {
            iVar7 = (((int)local_f8 * -7 + iVar31) * iVar4) / iVar25;
          }
          *(byte *)(param_9[0x18] + 0x88) = *(byte *)(param_9[0x18] + 0x88) & 0xf8 | 2;
          lVar11 = param_9[0x18];
          *(int *)(lVar11 + 0x68) = iVar33 * 3 + iVar5 + iVar7;
          *(uint *)(lVar11 + 0x6c) = uVar6;
          uVar26 = pdgui_vmess(CONCAT44(extraout_XMM0_Db_19,extraout_XMM0_Da_19),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,0x654b3f,"ci",param_9,0,
                               plVar14,pbVar30,in_stack_fffffffffffffed8);
          pdgui_vmess(uVar26,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                      "crr iiii ri rs",param_9,"create","line",
                      (ulong)*(uint *)(param_9[0x18] + 0x68),
                      (char)*(undefined4 *)(param_9[0x18] + 0x6c));
          return;
        }
        uVar13 = 5;
        plVar8 = local_d8;
        plVar10 = plVar14;
        goto LAB_0050ca7b;
      }
      if (iVar33 != 0) goto LAB_0050c80f;
    }
    uVar13 = 4;
    plVar8 = local_d8;
    plVar10 = plVar14;
LAB_0050ca7b:
    canvas_setcursor(CONCAT44(uVar35,uVar37),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                     ,(long)param_9,uVar13,plVar8,puVar21,(char *)plVar10,pbVar30,param_15);
    return;
  }
  if (iVar33 == 0) {
    return;
  }
  uVar26 = extraout_RDX_03;
  uVar37 = extraout_XMM0_Da_04;
  uVar35 = extraout_XMM0_Db_04;
  if (plVar10 == (long *)0x0) {
LAB_0050c2df:
    lVar11 = param_9[0x18];
    if (lVar11 == 0) goto LAB_0050c30b;
  }
  else {
    lVar11 = param_9[0x18];
    plVar8 = *(long **)(lVar11 + 0x28);
    if (plVar8 != (long *)0x0) {
      plVar14 = (long *)glist_findrtext(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,
                                        param_3,param_4,param_5,param_6,param_7,param_8,
                                        (long)param_9,(long)plVar10,extraout_RDX_03,piVar22,
                                        (char *)plVar10,pbVar30);
      uVar6 = local_fc;
      iVar33 = local_10c;
      uVar26 = extraout_RDX_07;
      uVar37 = extraout_XMM0_Da_10;
      uVar35 = extraout_XMM0_Db_10;
      if (plVar8 == plVar14) {
        rtext_mouse(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_10),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,plVar8,iVar5 - local_10c,iVar7 - local_fc,4,
                    plVar10,pbVar30);
        *(byte *)(param_9[0x18] + 0x88) = *(byte *)(param_9[0x18] + 0x88) & 0xf8 | 5;
        lVar11 = param_9[0x18];
        *(int *)(lVar11 + 0x68) = iVar33;
        *(uint *)(lVar11 + 0x6c) = uVar6;
        return;
      }
      goto LAB_0050c2df;
    }
  }
  for (plVar8 = *(long **)(lVar11 + 0x20); plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    if ((long *)*plVar8 == local_d8) {
      glist_deselect(CONCAT44(uVar35,uVar37),param_2,param_3,param_4,param_5,param_6,param_7,param_8
                     ,param_9,local_d8,uVar26,piVar22,(char *)plVar10,pbVar30);
      return;
    }
  }
LAB_0050c30b:
  glist_select(CONCAT44(uVar35,uVar37),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               (long)param_9,local_d8,uVar26,piVar22,(char *)plVar10,pbVar30);
  return;
}


