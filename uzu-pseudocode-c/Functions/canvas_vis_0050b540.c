// Function : canvas_vis
// Namespace: 
// Entry    : 0050b540
// Prototype: undefined canvas_vis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, char * param_10, undefined8 param_11, undefined * param_12, char * param_13, undefined * param_14, undefined1 param_15)
// Body     : 0050b540 - 0050b8e1


void canvas_vis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,char *param_10,undefined8 param_11,undefined *param_12,char *param_13,
               undefined *param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined7 extraout_var;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long lVar12;
  char *pcVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 uVar18;
  undefined8 uVar17;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  undefined8 in_stack_ffffffffffffff48;
  ulong uVar22;
  char local_a8 [128];
  
  uVar21 = (undefined1)in_stack_ffffffffffffff48;
  uVar19 = 0;
  uVar20 = 0;
  if ((float)param_1 == 0.0) {
    lVar5 = param_9[0x18];
    if ((*(byte *)(param_9 + 0x1d) & 1) == 0) {
      if (lVar5 != 0) {
        canvas_destroy_editor
                  (param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14);
        return;
      }
    }
    else {
      if (lVar5 != 0) {
        puVar1 = *(undefined8 **)(lVar5 + 0x20);
        while (uVar21 = (undefined1)in_stack_ffffffffffffff48, puVar1 != (undefined8 *)0x0) {
          param_10 = (char *)*puVar1;
          glist_deselect(param_1,CONCAT44(uVar20,uVar19),param_3,param_4,param_5,param_6,param_7,
                         param_8,param_9,(long *)param_10,param_11,puVar1,param_13,param_14);
          param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          lVar5 = param_9[0x18];
          param_11 = extraout_RDX;
          puVar1 = *(undefined8 **)(lVar5 + 0x20);
        }
        bVar2 = *(byte *)(lVar5 + 0x88);
        param_12 = (undefined *)(ulong)bVar2;
        if ((bVar2 & 0x20) != 0) {
          *(byte *)(lVar5 + 0x88) = bVar2 & 0xdf;
          param_13 = local_a8;
          sprintf(param_13,"l%p",*(undefined8 *)(param_9[0x18] + 0x80));
          uVar21 = 0x51;
          param_10 = "crs rs";
          pcVar6 = "itemconfigure";
          pcVar15 = "-fill";
          pdgui_vmess(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar20,uVar19),
                      param_3,param_4,param_5,param_6,param_7,param_8,0,"crs rs",param_9,
                      "itemconfigure",param_13,"-fill",0x51);
          param_12 = pcVar6;
          param_14 = pcVar15;
        }
      }
      uVar3 = glist_isvisible((long)param_9);
      uVar17 = extraout_RDX_00;
      uVar16 = extraout_XMM0_Da_01;
      uVar18 = extraout_XMM0_Db_01;
      if (uVar3 != 0) {
        canvas_map(0,CONCAT44(uVar20,uVar19),param_3,param_4,param_5,param_6,param_7,param_8,param_9
                   ,param_10,extraout_RDX_00,param_12,param_13,param_14,uVar21);
        uVar17 = extraout_RDX_01;
        uVar16 = extraout_XMM0_Da_02;
        uVar18 = extraout_XMM0_Db_02;
      }
      canvas_destroy_editor
                (CONCAT44(uVar18,uVar16),CONCAT44(uVar20,uVar19),param_3,param_4,param_5,param_6,
                 param_7,param_8,param_9,param_10,uVar17,param_12,param_13,param_14);
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),CONCAT44(uVar20,uVar19),param_3,
                  param_4,param_5,param_6,param_7,param_8,0x65470f,"^",param_9,param_12,param_13,
                  param_14,uVar21);
      bVar2 = glist_isgraph((long)param_9);
      uVar17 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
      if ((((int)CONCAT71(extraout_var,bVar2) == 0) ||
          (plVar8 = (long *)param_9[9], plVar8 == (long *)0x0)) ||
         ((*(byte *)((long)param_9 + 0xe9) & 8) != 0)) {
        *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) & 0xfe;
      }
      else {
        uVar3 = glist_isvisible((long)plVar8);
        if (uVar3 != 0) {
          gobj_vis(param_9,plVar8,0);
        }
        *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) & 0xfe;
        uVar3 = glist_isvisible((long)plVar8);
        uVar17 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05);
        if ((uVar3 != 0) &&
           (uVar17 = CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),
           (*(byte *)(plVar8 + 0x1d) & 0x40) == 0)) {
          if (*(int *)((long)param_9 + 0xec) != *(int *)((long)plVar8 + 0xec)) {
            canvas_zoom((float)*(int *)((long)plVar8 + 0xec),(long)param_9);
          }
          uVar17 = gobj_vis(param_9,plVar8,1);
        }
      }
      canvas_updatewindowlist
                (uVar17,CONCAT44(uVar20,uVar19),param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    if ((param_9[0x18] != 0) && ((*(byte *)(param_9 + 0x1d) & 1) != 0)) {
      pdgui_vmess(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,0x6546c6,"^",param_9,
                  param_12,param_13,param_14,param_15);
      return;
    }
    uVar3 = sys_havegui();
    if (uVar3 == 0) {
      *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) | 1;
    }
    else {
      lVar5 = canvas_undo_get((long)param_9);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(lVar5 + 8);
      }
      pcVar6 = getbytes(0);
      canvas_create_editor
                (CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),CONCAT44(uVar20,uVar19),param_3,
                 param_4,param_5,param_6,param_7,param_8,(long)param_9,param_10,extraout_RDX_02,
                 param_12,param_13,param_14);
      if (((int)param_9[0xd] == 0) && (*(int *)((long)param_9 + 0x6c) == 0x32)) {
        local_a8[0] = '\0';
        iVar11 = 0;
        iVar4 = 0x32;
        uVar16 = extraout_XMM0_Da_07;
        uVar18 = extraout_XMM0_Db_07;
      }
      else {
        sprintf(local_a8,"+%d+%d",(int)param_9[0xd],*(int *)((long)param_9 + 0x6c));
        iVar11 = (int)param_9[0xd];
        iVar4 = *(int *)((long)param_9 + 0x6c);
        uVar16 = extraout_XMM0_Da_08;
        uVar18 = extraout_XMM0_Db_08;
      }
      uVar22 = (ulong)(*(uint *)(param_9 + 0x1d) >> 5) & 0xffffffff00000001;
      lVar12 = 0;
      pcVar15 = local_a8;
      pdgui_vmess(CONCAT44(uVar18,uVar16),CONCAT44(uVar20,uVar19),param_3,param_4,param_5,param_6,
                  param_7,param_8,0x6546d8,"^ ii si",param_9,
                  (ulong)(uint)((int)param_9[0xe] - iVar11),
                  (ulong)(uint)(*(int *)((long)param_9 + 0x74) - iVar4),pcVar15,(char)uVar22);
      uVar21 = (undefined1)uVar22;
      uVar16 = extraout_XMM0_Da_09;
      uVar18 = extraout_XMM0_Db_09;
      if (param_9[9] != 0) {
        lVar12 = 0;
        plVar8 = param_9;
        do {
          uVar21 = (undefined1)uVar22;
          if ((*(byte *)((long)plVar8 + 0xe9) & 8) != 0) break;
          pcVar7 = resizebytes(CONCAT44(uVar18,uVar16),CONCAT44(uVar20,uVar19),param_3,param_4,
                               param_5,param_6,param_7,param_8,pcVar6,lVar12 * 8,lVar12 * 8 + 8);
          uVar21 = (undefined1)uVar22;
          uVar16 = extraout_XMM0_Da_10;
          uVar18 = extraout_XMM0_Db_10;
          if (pcVar7 == (char *)0x0) break;
          plVar8 = (long *)plVar8[9];
          *(long **)(pcVar7 + lVar12 * 8) = plVar8;
          lVar12 = lVar12 + 1;
          pcVar6 = pcVar7;
        } while (plVar8[9] != 0);
      }
      lVar9 = lVar12;
      pcVar7 = pcVar6;
      pdgui_vmess(CONCAT44(uVar18,uVar16),CONCAT44(uVar20,uVar19),param_3,param_4,param_5,param_6,
                  param_7,param_8,0x6546f0,"^C",param_9,lVar12,pcVar6,pcVar15,uVar21);
      pcVar13 = (char *)(lVar12 * 0xf8);
      uVar17 = freebytes(pcVar6);
      *(byte *)(param_9 + 0x1d) = *(byte *)(param_9 + 0x1d) | 1;
      canvas_reflecttitle(uVar17,CONCAT44(uVar20,uVar19),param_3,param_4,param_5,param_6,param_7,
                          param_8,(long)param_9,pcVar13,extraout_RDX_03,lVar9,pcVar7,pcVar15,uVar21)
      ;
      canvas_updatewindowlist
                (CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_11),CONCAT44(uVar20,uVar19),param_3,
                 param_4,param_5,param_6,param_7,param_8);
      puVar14 = &DAT_0065efc5;
      if (lVar5 == 0) {
        puVar10 = &DAT_0065efc5;
      }
      else {
        puVar10 = *(undefined **)(lVar5 + 0x18);
        if (*(long *)(lVar5 + 0x28) != 0) {
          puVar14 = *(undefined **)(*(long *)(lVar5 + 0x28) + 0x18);
        }
      }
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_12),CONCAT44(uVar20,uVar19),param_3,
                  param_4,param_5,param_6,param_7,param_8,0x654682,"^ ss",param_9,puVar10,puVar14,
                  pcVar15,uVar21);
    }
  }
  return;
}


