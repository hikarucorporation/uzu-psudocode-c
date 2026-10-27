// Function : garray_resize_long
// Namespace: 
// Entry    : 004fa510
// Prototype: undefined garray_resize_long(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, ulong param_10, undefined8 param_11, int * param_12, char * param_13, ulong param_14)
// Body     : 004fa510 - 004fa5af


void garray_resize_long(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                       ulong param_10,undefined8 param_11,int *param_12,char *param_13,
                       ulong param_14)

{
  int *piVar1;
  long extraout_RAX;
  undefined8 *puVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar6;
  
  piVar1 = (int *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  param_9,param_10,param_11,param_12,param_13,param_14);
  uVar4 = 1;
  if (0 < (long)param_10) {
    uVar4 = param_10;
  }
  if (uVar4 != (long)*piVar1) {
    template_findbyname(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                        param_6,param_7,param_8,*(long *)(*(long *)(param_9 + 0x10) + 0x10));
    puVar2 = gensym("style");
    piVar3 = (int *)0x1;
    fVar5 = (float)template_getfloat(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,
                                     param_3,param_4,param_5,param_6,param_7,param_8,extraout_RAX,
                                     puVar2,*(long *)(param_9 + 0x10) + 0x18,1,param_13,param_14);
    uVar6 = garray_fittograph(CONCAT44(extraout_XMM0_Db_01,fVar5),param_2,param_3,param_4,param_5,
                              param_6,param_7,param_8,param_9,uVar4 & 0xffffffff,
                              (ulong)(uint)(int)fVar5,piVar3,param_13,param_14);
    uVar6 = array_resize_and_redraw
                      (uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                       *(long **)(param_9 + 0x18),(int)uVar4);
    if ((*(byte *)(param_9 + 0x30) & 1) != 0) {
      canvas_update_dsp(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  return;
}


