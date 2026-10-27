// Function : array_sum_float
// Namespace: 
// Entry    : 00549a20
// Prototype: undefined array_sum_float(undefined8 param_1, double param_2, double param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00549a20 - 00549b05


void array_sum_float(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  float *pfVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  undefined8 in_R9;
  double dVar5;
  uint local_20;
  int local_1c;
  float *local_18;
  int local_c;
  
  *(int *)(param_9 + 0x68) = (int)param_1;
  uVar2 = array_rangeop_getrange
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)&local_18,(int *)&local_20,&local_1c,&local_c,in_R9);
  if ((int)uVar2 == 0) {
    return;
  }
  if ((int)local_20 < 1) {
    outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
    return;
  }
  lVar3 = (long)local_1c;
  uVar4 = local_20 & 3;
  if (local_20 - 1 < 3) {
    dVar5 = 0.0;
  }
  else {
    local_20 = local_20 & 0xfffffffc;
    dVar5 = 0.0;
    do {
      param_2 = (double)*local_18 + dVar5;
      param_3 = (double)*(float *)((long)local_18 + lVar3 * 2) +
                (double)*(float *)((long)local_18 + lVar3);
      pfVar1 = (float *)((long)local_18 + lVar3 * 3);
      local_18 = local_18 + lVar3;
      dVar5 = (double)*pfVar1 + param_2 + param_3;
      local_20 = local_20 - 4;
    } while (local_20 != 0);
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    param_2 = (double)*local_18;
    dVar5 = dVar5 + param_2;
    local_18 = (float *)((long)local_18 + lVar3);
  }
  outlet_float(CONCAT44((int)((ulong)dVar5 >> 0x20),(float)dVar5),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


