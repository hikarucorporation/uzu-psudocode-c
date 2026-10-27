// Function : scalar_displace
// Namespace: 
// Entry    : 00520260
// Prototype: undefined scalar_displace(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, long param_10, int param_11, undefined8 param_12, char * param_13, uint * param_14)
// Body     : 00520260 - 0052048f


void scalar_displace(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                    long param_10,int param_11,undefined8 param_12,char *param_13,uint *param_14)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint *puVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar10;
  float fVar11;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  long local_80;
  undefined4 local_78;
  long local_70;
  int local_68 [2];
  long *local_60;
  undefined4 local_58;
  float local_50;
  undefined4 local_48;
  float local_40;
  uint local_38 [2];
  
  puVar3 = *(undefined8 **)(param_9 + 0x10);
  uVar7 = param_12;
  lVar2 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)puVar3);
  if (lVar2 == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,0,"scalar: couldn\'t find template %s",*puVar3,uVar7,param_13,param_14)
    ;
    return;
  }
  puVar3 = gensym("x");
  puVar9 = local_38;
  uVar4 = template_find_field(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,lVar2,(long)puVar3,&local_84,
                              &local_8c,(char *)puVar9,param_14);
  puVar3 = gensym("y");
  uVar5 = template_find_field(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,lVar2,(long)puVar3,&local_88,
                              &local_90,(char *)puVar9,param_14);
  uVar7 = extraout_RDX;
  if (((int)uVar4 != 0) && (local_8c == 0)) {
    uVar6 = *(int *)(param_10 + 0xec) * param_11;
    uVar8 = (ulong)uVar6;
    fVar10 = glist_pixelstox((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,param_10,puVar3,extraout_RDX,uVar8,(char *)puVar9,param_14);
    fVar11 = glist_pixelstox(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                             puVar3,extraout_RDX_00,uVar8,(char *)puVar9,param_14);
    fVar10 = (fVar10 - fVar11) * (float)(int)uVar6 + *(float *)(param_9 + 0x18 + (long)local_84);
    param_2 = (ulong)(uint)fVar10;
    *(float *)(param_9 + 0x18 + (long)local_84) = fVar10;
    uVar7 = extraout_RDX_01;
  }
  uVar8 = (ulong)local_90;
  if (((int)uVar5 != 0) && (local_90 == 0)) {
    iVar1 = *(int *)(param_10 + 0xec);
    fVar10 = glist_pixelstoy((ulong)DAT_005d9038,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,param_10,puVar3,uVar7,0,(char *)puVar9,param_14);
    fVar11 = glist_pixelstoy(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                             puVar3,extraout_RDX_02,uVar8,(char *)puVar9,param_14);
    fVar10 = (fVar10 - fVar11) * (float)(iVar1 * (int)param_12) +
             *(float *)(param_9 + 0x18 + (long)local_88);
    param_2 = (ulong)(uint)fVar10;
    *(float *)(param_9 + 0x18 + (long)local_88) = fVar10;
  }
  local_70 = *(long *)(param_10 + 0x38);
  local_78 = *(undefined4 *)(param_10 + 0x40);
  *(int *)(local_70 + 0xc) = *(int *)(local_70 + 0xc) + 1;
  local_68[0] = 3;
  local_60 = &local_80;
  local_50 = (float)param_11;
  local_58 = 1;
  local_48 = 1;
  local_40 = (float)(int)param_12;
  local_80 = param_9;
  puVar3 = gensym("displace");
  template_notify(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,lVar2,puVar3,2,local_68,puVar9,param_14);
  uVar6 = glist_isvisible(param_10);
  if (uVar6 != 0) {
    sys_queuegui(param_9,param_10,0x51f990);
  }
  return;
}


