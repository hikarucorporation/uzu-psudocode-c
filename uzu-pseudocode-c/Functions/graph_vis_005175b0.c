// Function : graph_vis
// Namespace: 
// Entry    : 005175b0
// Prototype: undefined graph_vis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005175b0 - 005187ad


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void graph_vis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
              long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
              undefined8 param_14)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined7 extraout_var;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  uint *puVar13;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  ulong extraout_RDX_07;
  ulong extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  ulong extraout_RDX_15;
  ulong extraout_RDX_16;
  undefined8 extraout_RDX_17;
  undefined8 extraout_RDX_18;
  undefined8 extraout_RDX_19;
  ulong uVar14;
  ulong extraout_RDX_20;
  undefined8 extraout_RDX_21;
  undefined8 extraout_RDX_22;
  ulong extraout_RDX_23;
  undefined8 extraout_RDX_24;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  uint *puVar21;
  undefined1 uVar22;
  uint *puVar23;
  ulong uVar24;
  int iVar25;
  double dVar26;
  long lVar27;
  float fVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar29;
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
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar34;
  double dVar33;
  double dVar35;
  float fVar36;
  double dVar37;
  undefined1 in_stack_fffffffffffffeb8;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  float local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  undefined *local_80;
  undefined *local_78;
  char local_70 [8];
  char local_68 [56];
  
  if ((*(byte *)((long)param_9 + 0xe9) & 1) == 0) {
    (**(code **)(PTR_text_widgetbehavior_00715630 + 0x28))(param_9,param_10);
    return;
  }
  if ((int)param_11 == 0) {
    puVar13 = &local_d4;
    puVar21 = &local_d8;
    puVar23 = &local_dc;
    uVar29 = graph_getrect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)param_9,(long)param_10,(int *)&local_d0,(int *)puVar13,
                           (int *)puVar21,(int *)puVar23);
    lVar27 = glist_findrtext(uVar29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             (long)param_10,(long)param_9,extraout_RDX_03,puVar13,(char *)puVar21,
                             puVar23);
    rtext_erase(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar27);
    sprintf(local_68,"graph%lx",(ulong)param_9);
    uVar29 = glist_eraseiofor(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,(long)param_10,param_9,local_68,puVar13,puVar21,puVar23);
    lVar27 = param_9[9];
    if ((*(byte *)(param_9 + 0x1d) & 1) != 0) {
      do {
        lVar11 = lVar27;
        if (*(long *)(lVar11 + 0x48) == 0) break;
        lVar27 = *(long *)(lVar11 + 0x48);
      } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
      pdgui_vmess(uVar29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",lVar11,
                  "delete",local_68,puVar23,in_stack_fffffffffffffeb8);
      return;
    }
    do {
      lVar11 = lVar27;
      if (*(long *)(lVar11 + 0x48) == 0) break;
      lVar27 = *(long *)(lVar11 + 0x48);
    } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
    pdgui_vmess(uVar29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crs",lVar11,
                "delete",local_68,puVar23,in_stack_fffffffffffffeb8);
    for (plVar9 = (long *)param_9[6]; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
      gobj_vis(plVar9,param_9,0);
    }
    return;
  }
  bVar3 = canvas_showtext((long)param_9);
  uVar29 = extraout_XMM0_Qa;
  if ((int)CONCAT71(extraout_var,bVar3) != 0) {
    plVar9 = (long *)glist_findrtext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,
                                     param_7,param_8,(long)param_10,(long)param_9,extraout_RDX,
                                     param_12,param_13,param_14);
    uVar29 = rtext_draw(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        plVar9);
  }
  graph_getrect(uVar29,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                (long)param_10,(int *)&local_d0,(int *)&local_d4,(int *)&local_d8,(int *)&local_dc);
  sprintf(local_68,"graph%lx",(ulong)param_9);
  pcVar19 = (char *)(ulong)local_d0;
  pcVar10 = (char *)(ulong)local_d8;
  uVar22 = (undefined1)local_d4;
  plVar9 = param_9;
  pcVar17 = pcVar19;
  uVar14 = (ulong)local_d4;
  uVar4 = glist_drawiofor(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,(long)param_10,param_9,1,local_68,local_d0,uVar22,local_d8,
                          (char)local_dc);
  if ((*(byte *)(param_9 + 0x1d) & 1) != 0) {
    lVar27 = param_9[9];
    do {
      lVar11 = lVar27;
      if (*(long *)(lVar11 + 0x48) == 0) break;
      lVar27 = *(long *)(lVar11 + 0x48);
    } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
    glist_getzoom((long)param_9);
    pdgui_vmess(extraout_XMM0_Qa_07,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                "crr iiiiiiiiii ri rr rr rS",lVar11,"create","polygon",pcVar19,uVar22);
    return;
  }
  dVar30 = (double)(ulong)(uint)*(float *)(param_9 + 0xb);
  fVar32 = *(float *)((long)param_9 + 100) + (float)*(undefined8 *)((long)param_9 + 0x5c);
  fVar34 = *(float *)(param_9 + 0xb) + (float)((ulong)*(undefined8 *)((long)param_9 + 0x5c) >> 0x20)
  ;
  dVar33 = (double)CONCAT44(fVar34,fVar32);
  dVar26 = (double)-(ulong)((double)fVar32 * _DAT_00651fc0 < (double)*(float *)(param_9 + 0x13));
  lVar27 = -(ulong)((double)fVar34 * _UNK_00651fc8 < (double)*(float *)(param_9 + 0x17));
  auVar1._8_4_ = (int)lVar27;
  auVar1._0_8_ = dVar26;
  auVar1._12_4_ = (int)((ulong)lVar27 >> 0x20);
  uVar5 = movmskpd(uVar4,auVar1);
  local_78 = &DAT_006558e7;
  if ((uVar5 & 2) != 0) {
    local_78 = &DAT_006555c8;
  }
  local_80 = &DAT_00655882;
  if ((uVar5 & 1) != 0) {
    local_80 = &DAT_006552a4;
  }
  uVar5 = glist_getfont((double)*(float *)(param_9 + 0x13),dVar26,dVar30,dVar33,param_5,param_6,
                        param_7,param_8,(long)param_9,plVar9,local_80,&DAT_006552a4,pcVar17,uVar14);
  iVar6 = glist_getzoom((long)param_9);
  iVar6 = sys_hostfontsize(uVar5,iVar6);
  local_90 = "label";
  local_88 = "graph";
  lVar27 = param_9[9];
  do {
    lVar11 = lVar27;
    if (*(long *)(lVar11 + 0x48) == 0) break;
    lVar27 = *(long *)(lVar11 + 0x48);
  } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
  local_98 = local_68;
  glist_getzoom((long)param_9);
  pcVar17 = "crr iiiiiiiiii ri rr rS";
  pcVar12 = "create";
  pcVar20 = "line";
  pcVar18 = pcVar19;
  pdgui_vmess(extraout_XMM0_Qa_02,dVar26,dVar30,dVar33,param_5,param_6,param_7,param_8,0,
              "crr iiiiiiiiii ri rr rS",lVar11,"create","line",pcVar19,uVar22);
  puVar2 = PTR_garray_class_00715780;
  uVar5 = local_dc;
  if ((int)local_d4 < (int)local_dc) {
    uVar5 = local_d4;
  }
  plVar9 = (long *)param_9[6];
  uVar14 = extraout_RDX_00;
  if (plVar9 != (long *)0x0) {
    iVar25 = uVar5 - 1;
    do {
      if ((*plVar9 == *(long *)puVar2) &&
         (pcVar17 = local_70, uVar7 = garray_getname((long)plVar9,(undefined8 *)local_70),
         uVar14 = extraout_RDX_02, uVar7 == 0)) {
        iVar8 = glist_fontheight(extraout_XMM0_Qa_03,dVar26,dVar30,dVar33,param_5,param_6,param_7,
                                 param_8,(long)param_9,pcVar17,extraout_RDX_02,pcVar12,pcVar20,
                                 pcVar18);
        iVar25 = iVar25 - iVar8;
        local_c8 = 2;
        local_c0 = gensym(PTR_sys_font_00715cc0);
        local_b8 = 1;
        local_a8 = 2;
        local_b0 = (float)-iVar6;
        local_a0 = gensym(PTR_sys_fontweight_00715e60);
        plVar16 = param_9;
        do {
          plVar15 = plVar16;
          if ((long *)plVar15[9] == (long *)0x0) break;
          plVar16 = (long *)plVar15[9];
        } while ((*(ushort *)(plVar15 + 0x1d) & 0x901) == 0x100);
        pcVar17 = "crr ii rs rr rA rS";
        pcVar12 = "create";
        pcVar20 = "text";
        pcVar18 = pcVar19;
        pdgui_vmess(extraout_XMM0_Qa_04,dVar26,dVar30,dVar33,param_5,param_6,param_7,param_8,0,
                    "crr ii rs rr rA rS",plVar15,"create","text",pcVar19,(char)iVar25);
        uVar14 = extraout_RDX_01;
      }
      plVar9 = (long *)plVar9[1];
    } while (plVar9 != (long *)0x0);
  }
  uVar4 = (undefined4)((ulong)param_8 >> 0x20);
  pcVar12 = (char *)(ulong)*(uint *)(param_9 + 0x11);
  if (*(uint *)(param_9 + 0x11) != 0) {
    if ((int)local_dc < (int)local_d4) {
      local_dc = local_d4;
    }
    fVar36 = (float)(int)uVar5;
    param_6 = (double)CONCAT44((int)((ulong)param_6 >> 0x20),fVar36);
    fVar34 = (float)(int)local_dc;
    fVar32 = *(float *)(param_9 + 0x10);
    dVar30 = (double)fVar32;
    dVar37 = (double)*(float *)(param_9 + 0xc);
    dVar33 = _DAT_00654d70 * dVar37;
    dVar26 = (double)*(float *)(param_9 + 0xb);
    param_5 = DAT_00651f48 * dVar26 + dVar33;
    if (dVar30 < param_5) {
      iVar8 = (int)fVar34;
      iVar25 = 0;
      local_cc = fVar34;
      do {
        uVar14 = (ulong)(uint)fVar32;
        fVar28 = glist_xtopixels(uVar14,dVar26,dVar30,dVar33,param_5,param_6,dVar37,
                                 CONCAT44(uVar4,fVar34),(long)param_9,pcVar17,
                                 (long)iVar25 % (long)(int)pcVar12 & 0xffffffff,pcVar12,pcVar20,
                                 pcVar18);
        glist_xtopixels(uVar14,dVar26,dVar30,dVar33,param_5,param_6,dVar37,CONCAT44(uVar4,fVar34),
                        (long)param_9,pcVar17,extraout_RDX_04,pcVar12,pcVar20,pcVar18);
        lVar27 = param_9[9];
        do {
          lVar11 = lVar27;
          if (*(long *)(lVar11 + 0x48) == 0) break;
          lVar27 = *(long *)(lVar11 + 0x48);
        } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
        glist_getzoom((long)param_9);
        pcVar18 = "crr iiii ri rS";
        pcVar17 = "create";
        pcVar12 = "line";
        uVar24 = (ulong)(uint)(int)fVar28;
        pdgui_vmess(extraout_XMM0_Qa_08,dVar26,dVar30,dVar33,param_5,param_6,dVar37,
                    CONCAT44(uVar4,fVar34),0,"crr iiii ri rS",lVar11,"create","line",uVar24,
                    (char)iVar8);
        fVar28 = glist_xtopixels(uVar14,dVar26,dVar30,dVar33,param_5,param_6,dVar37,
                                 CONCAT44(uVar4,fVar34),(long)param_9,pcVar18,extraout_RDX_05,
                                 pcVar17,pcVar12,uVar24);
        glist_xtopixels(uVar14,dVar26,dVar30,dVar33,param_5,param_6,dVar37,CONCAT44(uVar4,fVar34),
                        (long)param_9,pcVar18,extraout_RDX_06,pcVar17,pcVar12,uVar24);
        lVar27 = param_9[9];
        do {
          lVar11 = lVar27;
          if (*(long *)(lVar11 + 0x48) == 0) break;
          lVar27 = *(long *)(lVar11 + 0x48);
        } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
        glist_getzoom((long)param_9);
        pcVar17 = "crr iiii ri rS";
        pcVar12 = "create";
        pcVar20 = "line";
        pcVar18 = (char *)(ulong)(uint)(int)fVar28;
        pdgui_vmess(extraout_XMM0_Qa_09,dVar26,dVar30,dVar33,param_5,param_6,dVar37,
                    CONCAT44(uVar4,fVar34),0,"crr iiii ri rS",lVar11,"create","line",pcVar18,
                    (char)(int)fVar36);
        fVar28 = *(float *)((long)param_9 + 0x84);
        dVar30 = (double)(ulong)(uint)fVar28;
        fVar32 = fVar32 + fVar28;
        dVar33 = (double)fVar32;
        dVar37 = (double)*(float *)(param_9 + 0xc);
        param_5 = dVar37 * _DAT_00654d70;
        dVar26 = (double)*(float *)(param_9 + 0xb);
        param_6 = dVar26 * DAT_00651f48 + param_5;
        if (param_6 <= dVar33) goto LAB_00517e1a;
        iVar25 = iVar25 + 1;
        pcVar12 = (char *)(ulong)*(uint *)(param_9 + 0x11);
      } while( true );
    }
    fVar28 = *(float *)((long)param_9 + 0x84);
    uVar14 = (ulong)local_d4;
    goto LAB_00517e2e;
  }
LAB_0051804a:
  pcVar12 = (char *)(ulong)*(uint *)((long)param_9 + 0xa4);
  if (*(uint *)((long)param_9 + 0xa4) != 0) {
    fVar32 = *(float *)((long)param_9 + 0x5c);
    fVar34 = *(float *)((long)param_9 + 100);
    fVar36 = fVar34;
    if (fVar32 <= fVar34) {
      fVar36 = fVar32;
      fVar32 = fVar34;
    }
    fVar34 = *(float *)((long)param_9 + 0x9c);
    dVar33 = _DAT_00654d70 * (double)fVar32;
    dVar37 = (double)fVar36;
    dVar30 = DAT_00651f48 * dVar37 + dVar33;
    dVar26 = (double)fVar34;
    if (dVar26 < dVar30) {
      iVar25 = 0;
      dVar31 = dVar30;
      dVar35 = dVar37;
      do {
        uVar14 = (ulong)(uint)fVar34;
        fVar36 = glist_ytopixels(uVar14,dVar26,dVar31,dVar33,dVar35,param_6,param_7,param_8,
                                 (long)param_9,pcVar17,
                                 (long)iVar25 % (long)(int)pcVar12 & 0xffffffff,pcVar12,pcVar20,
                                 pcVar18);
        glist_ytopixels(uVar14,dVar26,dVar31,dVar33,dVar35,param_6,param_7,param_8,(long)param_9,
                        pcVar17,extraout_RDX_12,pcVar12,pcVar20,pcVar18);
        lVar27 = param_9[9];
        do {
          lVar11 = lVar27;
          if (*(long *)(lVar11 + 0x48) == 0) break;
          lVar27 = *(long *)(lVar11 + 0x48);
        } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
        glist_getzoom((long)param_9);
        pcVar12 = "crr iiii ri rS";
        pcVar18 = "create";
        pcVar20 = "line";
        pcVar17 = pcVar19;
        pdgui_vmess(extraout_XMM0_Qa_12,dVar26,dVar31,dVar33,dVar35,param_6,param_7,param_8,0,
                    "crr iiii ri rS",lVar11,"create","line",pcVar19,(char)(int)fVar36);
        fVar36 = glist_ytopixels(uVar14,dVar26,dVar31,dVar33,dVar35,param_6,param_7,param_8,
                                 (long)param_9,pcVar12,extraout_RDX_13,pcVar18,pcVar20,pcVar17);
        glist_ytopixels(uVar14,dVar26,dVar31,dVar33,dVar35,param_6,param_7,param_8,(long)param_9,
                        pcVar12,extraout_RDX_14,pcVar18,pcVar20,pcVar17);
        lVar27 = param_9[9];
        do {
          lVar11 = lVar27;
          if (*(long *)(lVar11 + 0x48) == 0) break;
          lVar27 = *(long *)(lVar11 + 0x48);
        } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
        glist_getzoom((long)param_9);
        pcVar17 = "crr iiii ri rS";
        pcVar12 = "create";
        pcVar20 = "line";
        pcVar18 = pcVar10;
        pdgui_vmess(extraout_XMM0_Qa_13,dVar26,dVar31,dVar33,dVar35,param_6,param_7,param_8,0,
                    "crr iiii ri rS",lVar11,"create","line",pcVar10,(char)(int)fVar36);
        fVar36 = *(float *)(param_9 + 0x14);
        dVar31 = (double)(ulong)(uint)fVar36;
        fVar34 = fVar34 + fVar36;
        dVar26 = (double)fVar34;
        dVar33 = dVar30;
        if (dVar30 <= dVar26) goto LAB_00518284;
        iVar25 = iVar25 + 1;
        pcVar12 = (char *)(ulong)*(uint *)((long)param_9 + 0xa4);
      } while( true );
    }
    fVar36 = *(float *)(param_9 + 0x14);
LAB_00518292:
    fVar34 = fVar34 - fVar36;
    param_5 = dVar37 * _DAT_00654d70;
    dVar26 = (double)fVar32 * DAT_00651f48 + param_5;
    dVar30 = (double)fVar34;
    if (dVar26 < dVar30) {
      iVar25 = 1;
      do {
        uVar14 = (ulong)(uint)fVar34;
        dVar37 = dVar26;
        fVar32 = glist_ytopixels(uVar14,dVar26,dVar30,dVar33,param_5,param_6,param_7,param_8,
                                 (long)param_9,pcVar17,
                                 (long)iVar25 % (long)*(int *)((long)param_9 + 0xa4) & 0xffffffff,
                                 pcVar12,pcVar20,pcVar18);
        glist_ytopixels(uVar14,dVar37,dVar30,dVar33,param_5,param_6,param_7,param_8,(long)param_9,
                        pcVar17,extraout_RDX_17,pcVar12,pcVar20,pcVar18);
        lVar27 = param_9[9];
        do {
          lVar11 = lVar27;
          if (*(long *)(lVar11 + 0x48) == 0) break;
          lVar27 = *(long *)(lVar11 + 0x48);
        } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
        glist_getzoom((long)param_9);
        pcVar12 = "crr iiii ri rS";
        pcVar18 = "create";
        pcVar20 = "line";
        pcVar17 = pcVar19;
        pdgui_vmess(extraout_XMM0_Qa_15,dVar37,dVar30,dVar33,param_5,param_6,param_7,param_8,0,
                    "crr iiii ri rS",lVar11,"create","line",pcVar19,(char)(int)fVar32);
        fVar32 = glist_ytopixels(uVar14,dVar37,dVar30,dVar33,param_5,param_6,param_7,param_8,
                                 (long)param_9,pcVar12,extraout_RDX_18,pcVar18,pcVar20,pcVar17);
        glist_ytopixels(uVar14,dVar37,dVar30,dVar33,param_5,param_6,param_7,param_8,(long)param_9,
                        pcVar12,extraout_RDX_19,pcVar18,pcVar20,pcVar17);
        lVar27 = param_9[9];
        do {
          lVar11 = lVar27;
          if (*(long *)(lVar11 + 0x48) == 0) break;
          lVar27 = *(long *)(lVar11 + 0x48);
        } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
        glist_getzoom((long)param_9);
        pcVar17 = "crr iiii ri rS";
        pcVar12 = "create";
        pcVar20 = "line";
        pcVar18 = pcVar10;
        pdgui_vmess(extraout_XMM0_Qa_14,dVar37,dVar30,dVar33,param_5,param_6,param_7,param_8,0,
                    "crr iiii ri rS",lVar11,"create","line",pcVar10,(char)(int)fVar32);
        fVar34 = fVar34 - *(float *)(param_9 + 0x14);
        iVar25 = iVar25 + 1;
        dVar30 = (double)fVar34;
        uVar14 = extraout_RDX_16;
      } while (dVar26 < dVar30);
    }
  }
  if (0 < *(int *)((long)param_9 + 0x8c)) {
    lVar27 = 0;
    pcVar10 = pcVar18;
    do {
      uVar29 = 0;
      dVar37 = strtod((char *)**(undefined8 **)(param_9[0x12] + lVar27 * 8),(char **)0x0);
      fVar32 = glist_xtopixels(CONCAT44((int)((ulong)dVar37 >> 0x20),(float)dVar37),dVar26,dVar30,
                               dVar33,param_5,param_6,param_7,param_8,(long)param_9,uVar29,
                               extraout_RDX_21,pcVar12,pcVar20,pcVar10);
      pcVar18 = (char *)(ulong)(uint)(int)fVar32;
      fVar32 = glist_ytopixels((ulong)*(uint *)(param_9 + 0x13),dVar26,dVar30,dVar33,param_5,param_6
                               ,param_7,param_8,(long)param_9,uVar29,extraout_RDX_22,pcVar12,pcVar20
                               ,pcVar10);
      local_c8 = 2;
      local_c0 = gensym(PTR_sys_font_00715cc0);
      local_b8 = 1;
      local_a8 = 2;
      local_b0 = (float)-iVar6;
      local_a0 = gensym(PTR_sys_fontweight_00715e60);
      plVar9 = param_9;
      do {
        plVar16 = plVar9;
        if ((long *)plVar16[9] == (long *)0x0) break;
        plVar9 = (long *)plVar16[9];
      } while ((*(ushort *)(plVar16 + 0x1d) & 0x901) == 0x100);
      pcVar17 = "crr ii rs rr rA rS";
      pcVar12 = "create";
      pcVar20 = "text";
      pdgui_vmess(extraout_XMM0_Qa_16,dVar26,dVar30,dVar33,param_5,param_6,param_7,param_8,0,
                  "crr ii rs rr rA rS",plVar16,"create","text",pcVar18,(char)(int)fVar32);
      lVar27 = lVar27 + 1;
      uVar14 = extraout_RDX_20;
      pcVar10 = pcVar18;
    } while (lVar27 < *(int *)((long)param_9 + 0x8c));
  }
  if (0 < (int)param_9[0x15]) {
    lVar27 = 0;
    do {
      fVar32 = glist_xtopixels((ulong)*(uint *)(param_9 + 0x17),dVar26,dVar30,dVar33,param_5,param_6
                               ,param_7,param_8,(long)param_9,pcVar17,uVar14,pcVar12,pcVar20,pcVar18
                              );
      pcVar10 = (char *)(ulong)(uint)(int)fVar32;
      uVar29 = 0;
      dVar37 = strtod((char *)**(undefined8 **)(param_9[0x16] + lVar27 * 8),(char **)0x0);
      fVar32 = glist_ytopixels(CONCAT44((int)((ulong)dVar37 >> 0x20),(float)dVar37),dVar26,dVar30,
                               dVar33,param_5,param_6,param_7,param_8,(long)param_9,uVar29,
                               extraout_RDX_24,pcVar12,pcVar20,pcVar18);
      local_c8 = 2;
      local_c0 = gensym(PTR_sys_font_00715cc0);
      local_b8 = 1;
      local_a8 = 2;
      local_b0 = (float)-iVar6;
      local_a0 = gensym(PTR_sys_fontweight_00715e60);
      plVar9 = param_9;
      do {
        plVar16 = plVar9;
        if ((long *)plVar16[9] == (long *)0x0) break;
        plVar9 = (long *)plVar16[9];
      } while ((*(ushort *)(plVar16 + 0x1d) & 0x901) == 0x100);
      pcVar17 = "crr ii rs rr rA rS";
      pcVar12 = "create";
      pcVar20 = "text";
      pdgui_vmess(extraout_XMM0_Qa_17,dVar26,dVar30,dVar33,param_5,param_6,param_7,param_8,0,
                  "crr ii rs rr rA rS",plVar16,"create","text",pcVar10,(char)(int)fVar32);
      lVar27 = lVar27 + 1;
      uVar14 = extraout_RDX_23;
      pcVar18 = pcVar10;
    } while (lVar27 < (int)param_9[0x15]);
  }
  for (plVar9 = (long *)param_9[6]; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
    gobj_vis(plVar9,param_9,1);
  }
  return;
LAB_00517e1a:
  fVar32 = *(float *)(param_9 + 0x10);
  param_6 = (double)(ulong)(uint)fVar36;
  uVar4 = 0;
  uVar14 = extraout_RDX_07;
  fVar34 = local_cc;
LAB_00517e2e:
  param_8 = CONCAT44(uVar4,fVar34);
  fVar32 = fVar32 - fVar28;
  dVar26 = dVar26 * _DAT_00654d70;
  dVar30 = (double)fVar32;
  param_7 = dVar37 * DAT_00651f48 + dVar26;
  if (param_7 < dVar30) {
    iVar25 = (int)fVar34;
    fVar36 = SUB84(param_6,0);
    iVar8 = 1;
    do {
      uVar14 = (ulong)(uint)fVar32;
      fVar28 = glist_xtopixels(uVar14,dVar26,dVar30,dVar33,param_5,param_6,param_7,
                               CONCAT44(uVar4,fVar34),(long)param_9,pcVar17,
                               (long)iVar8 % (long)(int)param_9[0x11] & 0xffffffff,pcVar12,pcVar20,
                               pcVar18);
      glist_xtopixels(uVar14,dVar26,dVar30,dVar33,param_5,param_6,param_7,CONCAT44(uVar4,fVar34),
                      (long)param_9,pcVar17,extraout_RDX_09,pcVar12,pcVar20,pcVar18);
      lVar27 = param_9[9];
      do {
        lVar11 = lVar27;
        if (*(long *)(lVar11 + 0x48) == 0) break;
        lVar27 = *(long *)(lVar11 + 0x48);
      } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
      glist_getzoom((long)param_9);
      pcVar12 = "crr iiii ri rS";
      pcVar17 = "create";
      pcVar20 = "line";
      uVar24 = (ulong)(uint)(int)fVar28;
      pdgui_vmess(extraout_XMM0_Qa_11,dVar26,dVar30,dVar33,param_5,param_6,param_7,
                  CONCAT44(uVar4,fVar34),0,"crr iiii ri rS",lVar11,"create","line",uVar24,
                  (char)iVar25);
      fVar28 = glist_xtopixels(uVar14,dVar26,dVar30,dVar33,param_5,param_6,param_7,
                               CONCAT44(uVar4,fVar34),(long)param_9,pcVar12,extraout_RDX_10,pcVar17,
                               pcVar20,uVar24);
      pcVar18 = (char *)(ulong)(uint)(int)fVar28;
      glist_xtopixels(uVar14,dVar26,dVar30,dVar33,param_5,param_6,param_7,CONCAT44(uVar4,fVar34),
                      (long)param_9,pcVar12,extraout_RDX_11,pcVar17,pcVar20,uVar24);
      lVar27 = param_9[9];
      do {
        lVar11 = lVar27;
        if (*(long *)(lVar11 + 0x48) == 0) break;
        lVar27 = *(long *)(lVar11 + 0x48);
      } while ((*(ushort *)(lVar11 + 0xe8) & 0x901) == 0x100);
      glist_getzoom((long)param_9);
      pcVar17 = "crr iiii ri rS";
      pcVar12 = "create";
      pcVar20 = "line";
      pdgui_vmess(extraout_XMM0_Qa_10,dVar26,dVar30,dVar33,param_5,param_6,param_7,
                  CONCAT44(uVar4,fVar34),0,"crr iiii ri rS",lVar11,"create","line",pcVar18,
                  (char)(int)fVar36);
      param_8 = CONCAT44(uVar4,fVar34);
      fVar32 = fVar32 - *(float *)((long)param_9 + 0x84);
      iVar8 = iVar8 + 1;
      dVar33 = (double)fVar32;
      dVar26 = (double)*(float *)(param_9 + 0xc) * _DAT_00654d60;
      dVar30 = (double)*(float *)(param_9 + 0xb) * _UNK_00654d68 + dVar26;
      uVar14 = extraout_RDX_08;
    } while (dVar30 < dVar33);
  }
  goto LAB_0051804a;
LAB_00518284:
  fVar34 = *(float *)((long)param_9 + 0x9c);
  uVar14 = extraout_RDX_15;
  goto LAB_00518292;
}


