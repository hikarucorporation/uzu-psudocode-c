// Function : obj_issignalinlet
// Namespace: 
// Entry    : 00539610
// Prototype: bool obj_issignalinlet(long * param_1, int param_2)
// Body     : 00539610 - 00539693


bool obj_issignalinlet(long *param_1,int param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((*(byte *)(*param_1 + 0x94) & 4) != 0) {
    if (param_2 == 0) {
      return *(int *)(*param_1 + 0x90) != 0;
    }
    param_2 = param_2 + -1;
  }
  lVar1 = param_1[4];
  for (; (lVar1 != 0 && (param_2 != 0)); param_2 = param_2 + -1) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  if (lVar1 != 0) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    return *(long *)(lVar1 + 0x20) == *plVar2 + 0xf0;
  }
  return false;
}


