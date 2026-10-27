// Function : glist_text
// Namespace: 
// Entry    : 005296b0
// Prototype: undefined glist_text(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 005296b0 - 005298f9


void glist_text(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,long param_12,char *param_13,
               undefined8 param_14)

{
  uint uVar1;
  long *plVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  int iVar8;
  long *plVar9;
  int *piVar10;
  int *piVar11;
  float fVar12;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 uVar14;
  undefined8 uVar13;
  undefined1 auVar15 [16];
  undefined4 auStackY_238 [128];
  int in_stack_ffffffffffffffc8;
  int in_stack_ffffffffffffffcc;
  int local_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  
  lVar4 = param_12;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_text_class_00715c88,param_10,param_11,param_12,param_13,param_14);
  *(undefined2 *)((long)plVar2 + 0x2c) = 0;
  *(byte *)((long)plVar2 + 0x2e) = *(byte *)((long)plVar2 + 0x2e) & 0xfc;
  puVar3 = binbuf_new();
  plVar2[2] = (long)puVar3;
  iVar8 = (int)param_11;
  if (iVar8 < 2) {
    lVar4 = glist_getcanvas((long)param_9);
    puVar5 = gensym("editmode");
    uVar13 = 1;
    pd_vmess(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,lVar4,puVar5,0x65522c,1,param_13,param_14,
             (double)CONCAT44(in_stack_ffffffffffffffcc,in_stack_ffffffffffffffc8));
    local_30 = 2;
    local_28 = gensym("comment");
    glist_noselect(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,param_9,puVar5,extraout_RDX,uVar13,param_13,param_14);
    if (param_9[0x18] != 0) {
      lVar4 = glist_getcanvas((long)param_9);
      for (plVar9 = *(long **)(lVar4 + 0x30); plVar9 != (long *)0x0; plVar9 = (long *)plVar9[1]) {
        plVar6 = pd_checkobject(plVar9);
        if ((plVar6 != (long *)0x0) && ((~*(byte *)((long)plVar6 + 0x2e) & 3) == 0)) {
          gatom_undarken(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,plVar6,puVar5,extraout_RDX_00,
                         (ulong)(byte)~*(byte *)((long)plVar6 + 0x2e),param_13,param_14,
                         (char)in_stack_ffffffffffffffc8);
        }
      }
      *(undefined8 *)(param_9[0x18] + 0x30) = 0;
    }
    uVar13 = glist_getnextxy((long)param_9,auStackY_238 + 0x81,auStackY_238 + 0x80);
    uVar1 = *(uint *)((long)param_9 + 0xec);
    piVar11 = (int *)(ulong)uVar1;
    *(short *)(plVar2 + 5) = (short)(in_stack_ffffffffffffffcc / (int)uVar1) + -1;
    *(short *)((long)plVar2 + 0x2a) = (short)(in_stack_ffffffffffffffc8 / (int)uVar1) + -1;
    uVar13 = binbuf_restore(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                            (int *)plVar2[2],1,&local_30,piVar11,param_13,param_14);
    plVar9 = plVar2;
    uVar13 = glist_add(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,plVar2
                       ,extraout_RDX_01,piVar11,param_13,param_14);
    uVar13 = glist_noselect(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            plVar9,extraout_RDX_02,piVar11,param_13,param_14);
    glist_select(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,plVar2
                 ,extraout_RDX_03,piVar11,param_13,param_14);
    lVar4 = glist_getcanvas((long)param_9);
    lVar4 = canvas_undo_get(lVar4);
    if (*(int *)(lVar4 + 0x18) == 0) {
      lVar4 = glist_getcanvas((long)param_9);
      lVar7 = glist_getcanvas((long)param_9);
      piVar11 = canvas_undo_set_create
                          (CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_03),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,lVar7);
      plVar2 = (long *)0x9;
      canvas_undo_add(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_04),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,lVar4,9,"create",piVar11,param_13,param_14);
    }
    lVar4 = glist_getcanvas((long)param_9);
    canvas_startmotion(lVar4);
    auVar15 = glist_getcanvas((long)param_9);
    canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auVar15._0_8_,
                 (char *)plVar2,auVar15._8_8_,piVar11,param_13,param_14);
  }
  else {
    fVar12 = (float)atom_getfloatarg(0,iVar8,param_12);
    *(short *)(plVar2 + 5) = (short)(int)fVar12;
    fVar12 = (float)atom_getfloatarg(1,iVar8,param_12);
    *(short *)((long)plVar2 + 0x2a) = (short)(int)fVar12;
    if (iVar8 == 2) {
      local_30 = 2;
      local_28 = gensym("comment");
      piVar10 = (int *)plVar2[2];
      piVar11 = &local_30;
      iVar8 = 1;
      fVar12 = extraout_XMM0_Da;
      uVar14 = extraout_XMM0_Db_00;
    }
    else {
      piVar10 = (int *)plVar2[2];
      iVar8 = iVar8 + -2;
      piVar11 = (int *)(param_12 + 0x20);
      uVar14 = extraout_XMM0_Db;
    }
    uVar13 = binbuf_restore(CONCAT44(uVar14,fVar12),param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,piVar10,iVar8,piVar11,lVar4,param_13,param_14);
    glist_add(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,plVar2,
              extraout_RDX_04,lVar4,param_13,param_14);
  }
  return;
}


