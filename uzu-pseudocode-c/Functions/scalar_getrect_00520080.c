// Function : scalar_getrect
// Namespace: 
// Entry    : 00520080
// Prototype: undefined scalar_getrect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int * param_11, int * param_12, int * param_13, int * param_14)
// Body     : 00520080 - 00520256


void scalar_getrect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,long param_10,int *param_11,int *param_12,int *param_13,
                   int *param_14)

{
  long lVar1;
  long extraout_RAX;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  uint uVar10;
  undefined4 extraout_XMM0_Da_02;
  uint uVar11;
  float fVar12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  uint uVar13;
  undefined4 uVar14;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = param_10;
  local_68 = param_11;
  local_60 = param_12;
  local_58 = param_13;
  local_50 = param_14;
  local_38 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 *(long *)(param_9 + 0x10));
  lVar1 = template_findcanvas(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                              param_5,param_6,param_7,param_8,local_38,lVar1,extraout_RDX,param_12,
                              (char *)param_13,param_14);
  template_findbyname(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,*(long *)(param_9 + 0x10));
  puVar2 = gensym("x");
  lVar4 = param_9 + 0x18;
  uVar10 = template_getfloat(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,extraout_RAX,puVar2,lVar4,0,
                             (char *)param_13,param_14);
  puVar2 = gensym("y");
  uVar3 = 0;
  local_40 = lVar4;
  uVar11 = template_getfloat(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                             param_4,param_5,param_6,param_7,param_8,extraout_RAX,puVar2,lVar4,0,
                             (char *)param_13,param_14);
  if (lVar1 == 0) {
    uVar13 = uVar11;
    uVar14 = extraout_XMM0_Db_03;
    fVar12 = glist_xtopixels((ulong)uVar10,CONCAT44(extraout_XMM0_Db_03,uVar11),param_3,param_4,
                             param_5,param_6,param_7,param_8,param_10,puVar2,extraout_RDX_00,uVar3,
                             (char *)param_13,param_14);
    iVar5 = (int)fVar12;
    fVar12 = glist_ytopixels((ulong)uVar11,CONCAT44(uVar14,uVar13),param_3,param_4,param_5,param_6,
                             param_7,param_8,param_10,puVar2,extraout_RDX_01,uVar3,(char *)param_13,
                             param_14);
    iVar7 = (int)fVar12;
    iVar6 = iVar5;
    iVar8 = iVar7;
  }
  else {
    plVar9 = *(long **)(lVar1 + 0x30);
    if (plVar9 != (long *)0x0) {
      iVar8 = -0x7fffffff;
      iVar5 = 0x7fffffff;
      iVar7 = 0x7fffffff;
      iVar6 = -0x7fffffff;
      local_48 = param_10;
      do {
        puVar2 = (undefined8 *)pd_getparentwidget(plVar9);
        if (puVar2 != (undefined8 *)0x0) {
          (*(code *)*puVar2)(uVar10,uVar11,plVar9,local_48,local_40,local_38,&local_6c,&local_70,
                             &local_74,&local_78);
          if (local_6c < iVar5) {
            iVar5 = local_6c;
          }
          if (local_70 < iVar7) {
            iVar7 = local_70;
          }
          if (iVar6 < local_74) {
            iVar6 = local_74;
          }
          if (iVar8 < local_78) {
            iVar8 = local_78;
          }
        }
        plVar9 = (long *)plVar9[1];
      } while (plVar9 != (long *)0x0);
      if ((iVar5 <= iVar6) && (iVar7 <= iVar8)) goto LAB_00520229;
    }
    iVar7 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar8 = 0;
  }
LAB_00520229:
  *local_68 = iVar5;
  *local_60 = iVar7;
  *local_58 = iVar6;
  *local_50 = iVar8;
  return;
}


