// Function : obj_siginletindex
// Namespace: 
// Entry    : 00539570
// Prototype: uint obj_siginletindex(long * param_1, int param_2)
// Body     : 00539570 - 00539601


uint obj_siginletindex(long *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((*(byte *)(*param_1 + 0x94) & 4) != 0) {
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    uVar3 = (uint)(*(int *)(*param_1 + 0x90) != 0);
  }
  lVar2 = param_1[4];
  if (lVar2 != 0) {
    plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
    do {
      if (*(long *)(lVar2 + 0x20) == *plVar1 + 0xf0) {
        if (param_2 == 0) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
      }
      param_2 = param_2 + -1;
      lVar2 = *(long *)(lVar2 + 8);
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}


