// Function : obj_sendinlet
// Namespace: 
// Entry    : 005399d0
// Prototype: undefined obj_sendinlet(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, ulong param_10, undefined8 * param_11, undefined8 param_12, int * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005399d0 - 00539a26


void obj_sendinlet(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                  ulong param_10,undefined8 *param_11,undefined8 param_12,int *param_13,
                  undefined8 param_14,undefined1 param_15)

{
  int iVar1;
  long *plVar2;
  uint7 uVar3;
  bool bVar4;
  
  uVar3 = (uint7)((ulong)param_14 >> 8);
  plVar2 = *(long **)(param_9 + 0x20);
  bVar4 = plVar2 != (long *)0x0;
  if ((bVar4) && ((int)param_10 != 0)) {
    param_10 = (ulong)((int)param_10 - 1);
    do {
      plVar2 = (long *)plVar2[1];
      iVar1 = (int)param_10;
      param_10 = (ulong)(iVar1 - 1);
      bVar4 = plVar2 != (long *)0x0;
      if (plVar2 == (long *)0x0) break;
    } while (iVar1 != 0);
  }
  if (bVar4 == false) {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"obj_sendinlet",param_10,
        param_11,param_12,(char *)param_13,(ulong)uVar3 << 8,param_15);
    return;
  }
  pd_typedmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar2,param_11,
               (uint)param_12,param_13,(uint *)param_13,(uint *)CONCAT71(uVar3,bVar4));
  return;
}


