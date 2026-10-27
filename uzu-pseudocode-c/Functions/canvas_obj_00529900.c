// Function : canvas_obj
// Namespace: 
// Entry    : 00529900
// Prototype: undefined canvas_obj(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, int param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00529900 - 00529a8c


void canvas_obj(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long *param_9,undefined8 param_10,int param_11,long param_12,char *param_13,
               undefined8 param_14)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined4 extraout_XMM0_Da;
  float fVar9;
  float fVar10;
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
  undefined8 uVar11;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double in_stack_ffffffffffffffb8;
  int local_3c;
  int local_38;
  undefined2 local_34 [2];
  undefined2 local_30 [2];
  uint local_2c;
  
  if (1 < param_11) {
    lVar4 = param_12;
    puVar2 = binbuf_new();
    binbuf_restore(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8,(int *)puVar2,param_11 + -2,(int *)(param_12 + 0x20),
                   lVar4,param_13,param_14);
    fVar9 = (float)atom_getfloatarg(0,param_11,param_12);
    fVar10 = (float)atom_getfloatarg(1,param_11,param_12);
    canvas_objtext(CONCAT44(extraout_XMM0_Db_00,fVar10),param_2,param_3,param_4,param_5,param_6,
                   param_7,param_8,param_9,(short)(int)fVar9,(short)(int)fVar10,0,0,puVar2);
    return;
  }
  uVar1 = glist_isvisible((long)param_9);
  if (uVar1 == 0) {
    post(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,param_6,
         param_7,param_8,"unable to create stub object in closed canvas!");
    return;
  }
  puVar2 = binbuf_new();
  piVar6 = &local_38;
  piVar8 = &local_3c;
  canvas_howputnew(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,param_9,&local_2c,(int *)local_30,(int *)local_34,piVar6
                   ,piVar8);
  puVar3 = gensym("editmode");
  uVar11 = pd_vmess(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_02),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,(long)param_9,puVar3,0x65522c,1,piVar6,piVar8,
                    in_stack_ffffffffffffffb8);
  uVar7 = 1;
  canvas_objtext(uVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_30[0],
                 local_34[0],0,1,puVar2);
  uVar14 = (undefined4)((ulong)param_3 >> 0x20);
  if (local_2c == 0) {
    lVar4 = glist_getcanvas((long)param_9);
    canvas_startmotion(lVar4);
  }
  else {
    fVar9 = (float)local_3c;
    uVar12 = 0;
    uVar13 = 0;
    uVar15 = 0;
    uVar16 = 0;
    canvas_connect((float)local_38,0,CONCAT44(uVar14,fVar9),0,param_5,param_6,param_7,param_8,
                   (long)param_9);
    param_4 = CONCAT44(uVar16,uVar15);
    param_3 = CONCAT44(uVar14,fVar9);
    param_2 = CONCAT44(uVar13,uVar12);
  }
  lVar4 = glist_getcanvas((long)param_9);
  lVar4 = canvas_undo_get(lVar4);
  if (*(int *)(lVar4 + 0x18) == 0) {
    lVar4 = glist_getcanvas((long)param_9);
    lVar5 = glist_getcanvas((long)param_9);
    piVar6 = canvas_undo_set_create
                       (CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_03),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,lVar5);
    canvas_undo_add(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_04),param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,lVar4,9,"create",piVar6,uVar7,puVar2);
  }
  return;
}


