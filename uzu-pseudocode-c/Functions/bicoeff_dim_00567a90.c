// Function : bicoeff_dim
// Namespace: 
// Entry    : 00567a90
// Prototype: undefined bicoeff_dim(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00567a90 - 00567b89


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bicoeff_dim(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  long lVar1;
  ulong param3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  char *in_R8;
  undefined8 in_R9;
  float fVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  float fVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_2 >> 0x20);
  fVar2 = (float)param_1;
  if ((float)param_1 <= _DAT_0065af70) {
    fVar2 = _DAT_0065af70;
  }
  fVar3 = (float)param_2;
  if ((float)param_2 <= DAT_005d94c4) {
    fVar3 = DAT_005d94c4;
  }
  *(int *)(param_9 + 0x38) = (int)fVar2;
  *(int *)(param_9 + 0x3c) = (int)fVar3;
  sys_vgui(CONCAT44((int)((ulong)param_1 >> 0x20),fVar2),CONCAT44(uVar4,fVar3),param_3,param_4,
           param_5,param_6,param_7,param_8,"%s delete %s\n");
  param3 = glist_getcanvas(*(long *)(param_9 + 0x30));
  snprintf((char *)(param_9 + 0x58),1000,".x%lx.c",param3);
  lVar1 = *(long *)(param_9 + 0x30);
  text_xpix(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(uVar4,fVar3),param_3,param_4,
            param_5,param_6,param_7,param_8,param_9,lVar1,extraout_RDX,param3,in_R8,in_R9);
  text_ypix(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),CONCAT44(uVar4,fVar3),param_3,param_4,
            param_5,param_6,param_7,param_8,param_9,lVar1,extraout_RDX_00,param3,in_R8,in_R9);
  text_xpix(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar4,fVar3),param_3,param_4,
            param_5,param_6,param_7,param_8,param_9,lVar1,extraout_RDX_01,param3,in_R8,in_R9);
  text_ypix(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),CONCAT44(uVar4,fVar3),param_3,param_4,
            param_5,param_6,param_7,param_8,param_9,lVar1,extraout_RDX_02,param3,in_R8,in_R9);
  sys_vgui(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),CONCAT44(uVar4,fVar3),param_3,param_4,
           param_5,param_6,param_7,param_8,"bicoeff::drawme %s %s %s %s %d %d %d %d %s\n");
  return;
}


