// Function : my_canvas_get_pos
// Namespace: 
// Entry    : 005a3d20
// Prototype: undefined my_canvas_get_pos(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a3d20 - 005a3dd3


void my_canvas_get_pos(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  float fVar5;
  undefined4 extraout_XMM0_Db;
  
  if (((*(byte *)(param_9 + 0x440) & 0x80) == 0) || (*(long *)(*(long *)(param_9 + 0x458) + 8) == 0)
     ) {
    return;
  }
  iVar2 = text_xpix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                    *(long *)(param_9 + 0x30),param_11,param_12,param_13,param_14);
  iVar3 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
  fVar5 = (float)(iVar2 / iVar3);
  *(float *)(param_9 + 0x498) = fVar5;
  iVar3 = text_ypix(CONCAT44(extraout_XMM0_Db,fVar5),param_2,param_3,param_4,param_5,param_6,param_7
                    ,param_8,param_9,*(long *)(param_9 + 0x30),
                    (long)iVar2 % (long)iVar3 & 0xffffffff,param_12,param_13,param_14);
  *(float *)(param_9 + 0x4a8) = (float)(iVar3 / *(int *)(*(long *)(param_9 + 0x30) + 0xec));
  plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  pd_list(plVar1,*plVar4 + 0xc0,2,param_9 + 0x490);
  return;
}


