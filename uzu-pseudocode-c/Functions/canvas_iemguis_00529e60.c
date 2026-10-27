// Function : canvas_iemguis
// Namespace: 
// Entry    : 00529e60
// Prototype: undefined canvas_iemguis(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10)
// Body     : 00529e60 - 00529f6d


void canvas_iemguis(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long *param_9,undefined8 param_10)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  int *piVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar8;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double in_stack_ffffffffffffffb8;
  int local_3c;
  int local_38;
  undefined2 local_34 [2];
  undefined2 local_30 [2];
  uint local_2c [3];
  undefined8 local_20;
  
  puVar1 = binbuf_new();
  piVar5 = &local_38;
  piVar7 = &local_3c;
  canvas_howputnew(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                   param_6,param_7,param_8,param_9,local_2c,(int *)local_30,(int *)local_34,piVar5,
                   piVar7);
  puVar2 = gensym("editmode");
  uVar6 = 1;
  uVar8 = pd_vmess(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5
                   ,param_6,param_7,param_8,(long)param_9,puVar2,0x65522c,1,piVar5,piVar7,
                   in_stack_ffffffffffffffb8);
  uVar8 = glist_noselect(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         puVar2,extraout_RDX,uVar6,(char *)piVar5,piVar7);
  local_2c[1] = 2;
  local_20 = param_10;
  uVar8 = binbuf_restore(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(int *)puVar1
                         ,1,(int *)(local_2c + 1),uVar6,(char *)piVar5,piVar7);
  uVar6 = 1;
  canvas_objtext(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_30[0],
                 local_34[0],0,1,puVar1);
  uVar12 = (undefined4)((ulong)param_3 >> 0x20);
  if (local_2c[0] == 0) {
    lVar3 = glist_getcanvas((long)param_9);
    canvas_startmotion(lVar3);
  }
  else {
    fVar11 = (float)local_3c;
    uVar9 = 0;
    uVar10 = 0;
    uVar13 = 0;
    uVar14 = 0;
    canvas_connect((float)local_38,0,CONCAT44(uVar12,fVar11),0,param_5,param_6,param_7,param_8,
                   (long)param_9);
    param_4 = CONCAT44(uVar14,uVar13);
    param_3 = CONCAT44(uVar12,fVar11);
    param_2 = CONCAT44(uVar10,uVar9);
  }
  lVar3 = glist_getcanvas((long)param_9);
  lVar4 = glist_getcanvas((long)param_9);
  piVar5 = canvas_undo_set_create
                     (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,lVar4);
  canvas_undo_add(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,lVar3,9,"create",piVar5,uVar6,puVar1);
  return;
}


