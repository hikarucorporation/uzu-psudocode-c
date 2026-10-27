// Function : obj_findsignalscalar
// Namespace: 
// Entry    : 005397c0
// Prototype: undefined4 * obj_findsignalscalar(long * param_1, int param_2)
// Body     : 005397c0 - 00539842


undefined4 * obj_findsignalscalar(long *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  
  if ((*(byte *)(*param_1 + 0x94) & 4) != 0) {
    iVar1 = *(int *)(*param_1 + 0x90);
    if (((long)iVar1 != 0) && (bVar4 = param_2 == 0, param_2 = param_2 + -1, bVar4)) {
      if (iVar1 < 1) {
        return &obj_findsignalscalar_obj_scalarzero;
      }
      return (undefined4 *)((long)param_1 + (long)iVar1);
    }
  }
  lVar3 = param_1[4];
  if (lVar3 != 0) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    do {
      if ((*(long *)(lVar3 + 0x20) == *plVar2 + 0xf0) &&
         (bVar4 = param_2 == 0, param_2 = param_2 + -1, bVar4)) {
        return (undefined4 *)(lVar3 + 0x28);
      }
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != 0);
  }
  return &obj_findsignalscalar_obj_scalarzero;
}


