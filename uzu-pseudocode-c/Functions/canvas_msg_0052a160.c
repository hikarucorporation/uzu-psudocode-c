// Function : canvas_msg
// Namespace: 
// Entry    : 0052a160
// Prototype: undefined canvas_msg(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 0052a160 - 0052a379


void canvas_msg(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,undefined8 param_11,long param_12,char *param_13,
               undefined8 param_14)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  int *piVar12;
  undefined4 extraout_XMM0_Da;
  float fVar13;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar14;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined8 uVar15;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined4 in_stack_ffffffffffffffc8;
  int in_stack_ffffffffffffffcc;
  int local_30;
  undefined2 local_2c [2];
  undefined2 local_28 [2];
  uint local_24;
  
  lVar7 = param_12;
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,message_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar2[6] = messresponder_class;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)plVar2,*plVar3 + 0x78,extraout_RDX,lVar7,
                      param_13,param_14);
  plVar2[7] = (long)plVar3;
  *(undefined2 *)((long)plVar2 + 0x2c) = 0;
  *(byte *)((long)plVar2 + 0x2e) = *(byte *)((long)plVar2 + 0x2e) & 0xfc | 2;
  puVar4 = binbuf_new();
  plVar2[2] = (long)puVar4;
  plVar2[8] = (long)param_9;
  lVar5 = clock_new(plVar2,message_tick);
  plVar2[9] = lVar5;
  iVar9 = (int)param_11;
  if (1 < iVar9) {
    fVar13 = (float)atom_getfloatarg(0,iVar9,param_12);
    *(short *)(plVar2 + 5) = (short)(int)fVar13;
    fVar13 = (float)atom_getfloatarg(1,iVar9,param_12);
    uVar14 = CONCAT44(extraout_XMM0_Db_00,fVar13);
    *(short *)((long)plVar2 + 0x2a) = (short)(int)fVar13;
    uVar15 = extraout_RDX_00;
    if (iVar9 != 2) {
      uVar14 = binbuf_restore(CONCAT44(extraout_XMM0_Db_00,fVar13),param_2,param_3,param_4,param_5,
                              param_6,param_7,param_8,(int *)plVar2[2],iVar9 + -2,
                              (int *)(param_12 + 0x20),lVar7,param_13,param_14);
      uVar15 = extraout_RDX_01;
    }
    glist_add(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,plVar2,uVar15,
              lVar7,param_13,param_14);
    return;
  }
  uVar1 = glist_isvisible((long)param_9);
  if (uVar1 == 0) {
    post(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,param_6,
         param_7,param_8,"unable to create stub message in closed canvas!");
    return;
  }
  piVar11 = &local_30;
  piVar12 = (int *)(local_2c + -4);
  canvas_howputnew(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,param_9,&local_24,(int *)local_28,(int *)local_2c,
                   piVar11,piVar12);
  puVar6 = gensym("editmode");
  uVar14 = 1;
  uVar15 = pd_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,(long)param_9,puVar6,0x65522c,1,piVar11,piVar12,
                    (double)CONCAT44(in_stack_ffffffffffffffcc,in_stack_ffffffffffffffc8));
  *(undefined2 *)(plVar2 + 5) = local_28[0];
  *(undefined2 *)((long)plVar2 + 0x2a) = local_2c[0];
  plVar3 = plVar2;
  uVar15 = glist_add(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,plVar2,
                     extraout_RDX_02,uVar14,(char *)piVar11,piVar12);
  uVar15 = glist_noselect(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          plVar3,extraout_RDX_03,uVar14,(char *)piVar11,piVar12);
  glist_select(uVar15,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,plVar2,
               extraout_RDX_04,uVar14,(char *)piVar11,piVar12);
  gobj_activate(plVar2);
  if (local_24 == 0) {
    lVar7 = glist_getcanvas((long)param_9);
    canvas_startmotion(lVar7);
  }
  else {
    uVar18 = 0;
    fVar13 = (float)in_stack_ffffffffffffffcc;
    uVar16 = 0;
    uVar17 = 0;
    uVar19 = 0;
    uVar20 = 0;
    canvas_connect((float)local_30,0,(ulong)(uint)fVar13,0,param_5,param_6,param_7,param_8,
                   (long)param_9);
    param_4 = CONCAT44(uVar20,uVar19);
    param_3 = CONCAT44(uVar18,fVar13);
    param_2 = CONCAT44(uVar17,uVar16);
  }
  lVar7 = glist_getcanvas((long)param_9);
  lVar5 = glist_getcanvas((long)param_9);
  piVar8 = canvas_undo_set_create
                     (CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,lVar5);
  pcVar10 = (char *)0x9;
  canvas_undo_add(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,lVar7,9,"create",piVar8,piVar11,piVar12);
  auVar21 = glist_getcanvas((long)param_9);
  canvas_dirty(DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,param_8,auVar21._0_8_,
               pcVar10,auVar21._8_8_,piVar8,(char *)piVar11,piVar12);
  return;
}


