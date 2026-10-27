// Function : iemgui_new
// Namespace: 
// Entry    : 00576330
// Prototype: long * iemgui_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00576330 - 00576395


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * iemgui_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long extraout_RAX;
  void *pvVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar4 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                  param_11,param_12,param_13,param_14);
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  iVar1 = *(int *)(extraout_RAX + 0xd0);
  plVar4[6] = extraout_RAX;
  pvVar5 = getbytes(0x48);
  plVar4[9] = (long)pvVar5;
  plVar4[7] = (long)iemgui_draw;
  iVar3 = 4;
  if (4 < iVar1) {
    iVar3 = iVar1;
  }
  *(int *)((long)plVar4 + 0x444) = iVar3;
  *(undefined4 *)(plVar4 + 0x88) = 0;
  lVar2 = _UNK_0065b858;
  plVar4[0x89] = _DAT_0065b850;
  plVar4[0x8a] = lVar2;
  return plVar4;
}


