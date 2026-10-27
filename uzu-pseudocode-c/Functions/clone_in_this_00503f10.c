// Function : clone_in_this
// Namespace: 
// Entry    : 00503f10
// Prototype: undefined clone_in_this(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, int * param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00503f10 - 00503f9b


void clone_in_this(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,uint param_11,int *param_12,undefined8 param_13,
                  undefined8 param_14,undefined1 param_15)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 extraout_XMM0_Qa;
  
  lVar1 = *(long *)(param_9 + 8);
  uVar3 = *(uint *)(lVar1 + 0x80);
  if (((int)uVar3 < 0) || (*(int *)(lVar1 + 0x38) <= (int)uVar3)) {
    uVar3 = 0;
  }
  if (((int)param_11 < 1) || (*(int *)(lVar1 + 0x48) == 0)) {
    return;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x40) + (ulong)uVar3 * 0x10);
  uVar3 = *(uint *)(param_9 + 0x14);
  if (*param_12 == 2) {
    puVar4 = *(undefined8 **)(param_12 + 2);
    param_11 = param_11 - 1;
    param_12 = param_12 + 4;
  }
  else {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    puVar4 = (undefined8 *)(*plVar2 + 0xc0);
    param_1 = extraout_XMM0_Qa;
  }
  obj_sendinlet(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,(ulong)uVar3,
                puVar4,(ulong)param_11,param_12,param_14,param_15);
  return;
}


