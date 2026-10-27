// Function : obj_issignaloutlet
// Namespace: 
// Entry    : 00539760
// Prototype: bool obj_issignaloutlet(long param_1, int param_2)
// Body     : 00539760 - 005397be


bool obj_issignaloutlet(long param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  for (; (lVar1 != 0 && (param_2 != 0)); param_2 = param_2 + -1) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  bVar3 = false;
  if (lVar1 != 0) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    bVar3 = *(long *)(lVar1 + 0x18) == *plVar2 + 0xf0;
  }
  return bVar3;
}


