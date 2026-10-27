// Function : exprproxy_float
// Namespace: 
// Entry    : 00583960
// Prototype: undefined exprproxy_float(float param_1, long param_2)
// Body     : 00583960 - 0058399d


void exprproxy_float(float param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  
  if ((long)*(int *)(param_2 + 8) < 100) {
    lVar2 = (long)*(int *)(param_2 + 8) * 0x20;
    pfVar1 = (float *)(*(long *)(param_2 + 0x10) + lVar2 + 0x698);
    lVar2 = *(long *)(*(long *)(param_2 + 0x10) + 0x6a0 + lVar2);
    if (lVar2 == 0xb) {
      *(long *)pfVar1 = (long)param_1;
    }
    else if (lVar2 == 0xc) {
      *pfVar1 = param_1;
      return;
    }
  }
  return;
}


