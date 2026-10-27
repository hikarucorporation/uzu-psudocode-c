// Function : iemgui_new_getnames
// Namespace: 
// Entry    : 005741c0
// Prototype: undefined iemgui_new_getnames(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10, long param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 005741c0 - 005743c4


void iemgui_new_getnames(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,int param_10,long param_11,undefined8 *param_12,char *param_13
                        ,undefined8 param_14)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar7;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  char acStack_f8 [128];
  undefined1 in_stack_ffffffffffffff88;
  
  if (param_11 == 0) {
    *(undefined8 *)(param_9 + 0x458) = 0;
    *(undefined8 *)(param_9 + 0x460) = 0;
    *(undefined8 *)(param_9 + 0x468) = 0;
    uVar2 = 0;
    goto LAB_00574389;
  }
  lVar6 = (long)param_10 * 0x10;
  if (*(int *)(param_11 + lVar6) == 1) {
    fVar7 = (float)atom_getfloatarg(param_10,100000,param_11);
    sprintf(acStack_f8 + 0x80,"%d",(int)fVar7);
    puVar5 = gensym(acStack_f8 + 0x80);
    param_1 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  }
  else if (*(int *)(param_11 + lVar6) == 2) {
    puVar3 = (undefined8 *)atom_getsymbolarg(param_10,100000,param_11);
    param_12 = gensym("empty");
    param_1 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
    puVar5 = (undefined8 *)0x0;
    if (param_12 != puVar3) {
      puVar5 = puVar3;
    }
  }
  else {
    puVar5 = (undefined8 *)0x0;
  }
  *(undefined8 **)(param_9 + 0x458) = puVar5;
  iVar1 = *(int *)(lVar6 + 0x10 + param_11);
  if (iVar1 == 1) {
    fVar7 = (float)atom_getfloatarg(param_10 + 1,100000,param_11);
    sprintf(acStack_f8 + 0x80,"%d",(int)fVar7);
    puVar5 = gensym(acStack_f8 + 0x80);
    param_1 = CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02);
    *(undefined8 **)(param_9 + 0x460) = puVar5;
    iVar1 = *(int *)(param_11 + 0x20 + lVar6);
joined_r0x00574332:
    if (iVar1 == 2) goto LAB_005742c8;
LAB_0057434d:
    if (iVar1 != 1) {
      puVar5 = (undefined8 *)0x0;
      goto LAB_0057437d;
    }
    atom_string(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                (int *)(param_11 + lVar6 + 0x20),acStack_f8 + 0x80,(uint *)0x50,param_12,param_13,
                param_14,in_stack_ffffffffffffff88);
    puVar5 = gensym(acStack_f8 + 0x80);
    *(undefined8 **)(param_9 + 0x468) = puVar5;
  }
  else {
    if (iVar1 != 2) {
      *(undefined8 *)(param_9 + 0x460) = 0;
      iVar1 = *(int *)(param_11 + 0x20 + lVar6);
      goto joined_r0x00574332;
    }
    puVar3 = (undefined8 *)atom_getsymbolarg(param_10 + 1,100000,param_11);
    param_12 = gensym("empty");
    param_1 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    puVar5 = (undefined8 *)0x0;
    if (param_12 != puVar3) {
      puVar5 = puVar3;
    }
    *(undefined8 **)(param_9 + 0x460) = puVar5;
    iVar1 = *(int *)(param_11 + 0x20 + lVar6);
    if (iVar1 != 2) goto LAB_0057434d;
LAB_005742c8:
    puVar3 = (undefined8 *)atom_getsymbolarg(param_10 + 2,100000,param_11);
    puVar4 = gensym("empty");
    puVar5 = (undefined8 *)0x0;
    if (puVar4 != puVar3) {
      puVar5 = puVar3;
    }
LAB_0057437d:
    *(undefined8 **)(param_9 + 0x468) = puVar5;
  }
  uVar2 = 1;
LAB_00574389:
  *(undefined4 *)(*(long *)(param_9 + 0x48) + 0x40) = uVar2;
  *(undefined8 *)(param_9 + 0x470) = 0;
  *(undefined8 *)(param_9 + 0x478) = 0;
  *(undefined8 *)(param_9 + 0x480) = 0;
  *(int *)(param_9 + 0x488) = param_10;
  *(int *)(param_9 + 0x48c) = param_10 + 3;
  return;
}


