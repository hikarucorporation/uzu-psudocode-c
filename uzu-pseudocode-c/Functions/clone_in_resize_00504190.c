// Function : clone_in_resize
// Namespace: 
// Entry    : 00504190
// Prototype: undefined clone_in_resize(uint param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 00504190 - 0050420b


void clone_in_resize(uint param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                    char *param_10,undefined8 param_11,int *param_12,uint *param_13,uint *param_14)

{
  int iVar1;
  long lVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar3;
  undefined8 extraout_RDX_02;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 in_stack_ffffffffffffffd8;
  
  iVar1 = *(int *)(*(long *)(param_9 + 8) + 0x38);
  lVar5 = (long)iVar1;
  canvas_setcurrent(*(undefined8 *)(*(long *)(param_9 + 8) + 0x30));
  uVar6 = clone_setn((ulong)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long *)(param_9 + 8),param_10,extraout_RDX,param_12,param_13,param_14);
  uVar6 = canvas_unsetcurrent(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(*(long *)(param_9 + 8) + 0x30),param_10,extraout_RDX_00,
                              param_12,(char *)param_13,param_14,in_stack_ffffffffffffffd8);
  lVar2 = *(long *)(param_9 + 8);
  if (iVar1 < *(int *)(lVar2 + 0x38)) {
    lVar4 = lVar5 << 4;
    uVar3 = extraout_RDX_01;
    do {
      uVar6 = canvas_loadbang(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(*(long *)(lVar2 + 0x40) + lVar4),(undefined8 *)param_10,
                              uVar3,param_12,param_13,param_14);
      lVar5 = lVar5 + 1;
      lVar2 = *(long *)(param_9 + 8);
      param_12 = (int *)(long)*(int *)(lVar2 + 0x38);
      lVar4 = lVar4 + 0x10;
      uVar3 = extraout_RDX_02;
    } while (lVar5 < (long)param_12);
  }
  return;
}


