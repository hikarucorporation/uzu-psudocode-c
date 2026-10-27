// Function : garray_arraydialog
// Namespace: 
// Entry    : 004fa1c0
// Prototype: undefined garray_arraydialog(undefined8 param_1, undefined8 param_2, ulong param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined * param_14)
// Body     : 004fa1c0 - 004fa4e6


void garray_arraydialog(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                       double param_5,double param_6,double param_7,undefined8 param_8,long *param_9
                       ,undefined8 *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                       undefined *param_14)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  int *piVar7;
  long extraout_RAX;
  char *pcVar8;
  undefined8 extraout_RAX_00;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined4 extraout_XMM0_Da;
  float fVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  ulong local_38;
  float fStack_34;
  
  fVar16 = (float)param_2;
  fVar19 = (float)param_3;
  uVar3 = (uint)(int)fVar16 >> 1 & 3;
  uVar4 = 0;
  if (uVar3 != 1) {
    uVar4 = uVar3;
  }
  if (uVar3 == 0) {
    uVar4 = 1;
  }
  uVar9 = param_3;
  lVar5 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(param_9[2] + 0x10));
  puVar6 = gensym("style");
  plVar10 = (long *)0x1;
  fVar12 = (float)template_getfloat(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,uVar9,
                                    param_4,param_5,param_6,param_7,param_8,lVar5,puVar6,
                                    param_9[2] + 0x18,1,param_13,param_14);
  fVar17 = 0.0;
  uVar18 = 0;
  uVar20 = 0;
  if (fVar19 != 0.0) {
    bVar1 = *(byte *)(param_9 + 6);
    glist_delete(CONCAT44(extraout_XMM0_Db_00,fVar12),0,param_3 & 0xffffffff,param_4,param_5,param_6
                 ,param_7,param_8,(long *)param_9[3],param_9,extraout_RDX,plVar10,param_13,param_14)
    ;
    if ((bVar1 & 1) == 0) {
      return;
    }
    canvas_update_dsp(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),CONCAT44(uVar18,fVar17),
                      CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8);
    return;
  }
  piVar7 = (int *)garray_getarray(CONCAT44(extraout_XMM0_Db_00,fVar12),0,param_3 & 0xffffffff,
                                  param_4,param_5,param_6,param_7,param_8,(long)param_9,puVar6,
                                  extraout_RDX,(int *)plVar10,param_13,param_14);
  if (piVar7 == (int *)0x0) {
    pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),CONCAT44(uVar18,fVar17),
             CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8,(long)param_9,
             "can\'t find array\n",extraout_RDX_00,plVar10,param_13,param_14);
    return;
  }
  template_findbyname(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),CONCAT44(uVar18,fVar17),
                      CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8,
                      *(long *)(param_9[2] + 0x10));
  if (extraout_RAX == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),CONCAT44(uVar18,fVar17),
             CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8,0,
             "array: no template of type %s",**(undefined8 **)(param_9[2] + 0x10),plVar10,param_13,
             param_14);
    return;
  }
  uVar14 = extraout_RDX_01;
  if ((undefined8 *)param_9[4] != param_10) {
    uVar21 = (undefined1)param_1;
    uVar13 = extraout_XMM0_Da_02;
    uVar15 = extraout_XMM0_Db_03;
    if ((*(byte *)(param_9 + 6) & 8) != 0) {
      *(byte *)(param_9 + 6) = *(byte *)(param_9 + 6) & 0xf7;
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),CONCAT44(uVar18,fVar17),
                  CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8,0x653c2c,"s",
                  *(undefined8 *)param_9[5],plVar10,param_13,param_14,uVar21);
      uVar14 = extraout_RDX_02;
      uVar13 = extraout_XMM0_Da_03;
      uVar15 = extraout_XMM0_Db_04;
    }
    param_9[4] = (long)param_10;
    pd_unbind(CONCAT44(uVar15,uVar13),CONCAT44(uVar18,fVar17),CONCAT44(uVar20,fVar19),param_4,
              param_5,param_6,param_7,param_8,param_9,(undefined8 *)param_9[5],uVar14,plVar10,
              param_13,param_14);
    pcVar8 = (char *)canvas_realizedollar
                               (CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_04),
                                CONCAT44(uVar18,fVar17),CONCAT44(uVar20,fVar19),param_4,param_5,
                                param_6,param_7,param_8,param_9[3],param_10,extraout_RDX_03,plVar10,
                                param_13,param_14);
    param_9[5] = (long)pcVar8;
    pd_bind(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_05),CONCAT44(uVar18,fVar17),
            CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8,param_9,(long)pcVar8,
            extraout_RDX_04,plVar10,param_13,param_14);
    plVar2 = (long *)param_9[3];
    if ((*(byte *)(plVar2 + 0x1d) & 1) == 0) {
      uVar3 = glist_isvisible(plVar2[9]);
      uVar14 = CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_07);
      if (uVar3 != 0) {
        gobj_vis((long *)param_9[3],(long *)((long *)param_9[3])[9],0);
        uVar14 = gobj_vis((long *)param_9[3],(long *)((long *)param_9[3])[9],1);
      }
    }
    else {
      canvas_redraw(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_06),CONCAT44(uVar18,fVar17),
                    CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8,plVar2,pcVar8,
                    extraout_RDX_05,(undefined *)plVar10,param_13,param_14,uVar21);
      uVar14 = CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_08);
    }
    canvas_update_dsp(uVar14,CONCAT44(uVar18,fVar17),CONCAT44(uVar20,fVar19),param_4,param_5,param_6
                      ,param_7,param_8);
    uVar14 = extraout_RDX_06;
  }
  uVar3 = (int)fVar16 & 1;
  uVar9 = 1;
  if (0 < (long)(float)param_1) {
    uVar9 = (long)(float)param_1;
  }
  if (uVar9 == (long)*piVar7) {
    uVar18 = 0;
    fVar17 = (float)uVar4;
    local_38 = CONCAT44(fVar12,fVar17);
    if (fVar12 != fVar17) {
      garray_fittograph((ulong)(uint)fVar12,(ulong)(uint)fVar17,CONCAT44(uVar20,fVar19),param_4,
                        param_5,param_6,param_7,param_8,(long)param_9,uVar9,(ulong)uVar4,
                        (int *)plVar10,param_13,(ulong)param_14);
    }
  }
  else {
    garray_resize_long((ulong)(uint)fVar12,CONCAT44(uVar18,fVar17),CONCAT44(uVar20,fVar19),param_4,
                       param_5,param_6,param_7,param_8,(long)param_9,uVar9,uVar14,(int *)plVar10,
                       param_13,(ulong)param_14);
    local_38 = CONCAT44(fVar12,(float)uVar4);
  }
  puVar6 = gensym("style");
  template_setfloat(local_38 & 0xffffffff,CONCAT44(uVar18,fVar17),CONCAT44(uVar20,fVar19),param_4,
                    param_5,param_6,param_7,param_8,extraout_RAX,puVar6,param_9[2] + 0x18,0,param_13
                    ,param_14);
  pcVar8 = (char *)gensym("linewidth");
  uVar11 = 0;
  template_setfloat((ulong)(uint)(float)(byte)((uVar4 == 0) + 1),CONCAT44(uVar18,fVar17),
                    CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8,extraout_RAX,
                    (undefined8 *)pcVar8,param_9[2] + 0x18,0,param_13,param_14);
  uVar9 = CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),*(byte *)(param_9 + 6));
  if ((uVar3 == 0) && (uVar11 = uVar9 & 0xffffff02, (*(byte *)(param_9 + 6) & 2) != 0)) {
    pcVar8 = *(char **)param_9[4];
    post(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_09),CONCAT44(uVar18,fVar17),
         CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8,
         "warning: array %s: clearing save-in-patch flag");
    uVar9 = (ulong)*(byte *)(param_9 + 6);
  }
  *(byte *)(param_9 + 6) = (byte)uVar9 & 0xfd | (char)uVar3 * '\x02';
  uVar4 = glist_isvisible(param_9[3]);
  if (uVar4 == 0) {
    uVar14 = extraout_RDX_07;
    if ((*(byte *)(param_9 + 6) & 8) != 0) {
      pcVar8 = "s";
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_10),CONCAT44(uVar18,fVar17),
                  CONCAT44(uVar20,fVar19),param_4,param_5,param_6,param_7,param_8,0x653aa2,"s",
                  *(undefined8 *)param_9[5],uVar11,param_13,param_14,uVar21);
      uVar14 = extraout_RDX_09;
    }
  }
  else {
    pcVar8 = (char *)param_9[3];
    sys_queuegui((long)param_9,(long)pcVar8,0x4fa9e0);
    uVar14 = extraout_RDX_08;
  }
  canvas_dirty(DAT_005d9038,CONCAT44(uVar18,fVar17),CONCAT44(uVar20,fVar19),param_4,param_5,param_6,
               param_7,param_8,param_9[3],pcVar8,uVar14,uVar11,param_13,param_14);
  return;
}


