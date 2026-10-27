// Function : do_getparentcanvas
// Namespace: 
// Entry    : 00579b40
// Prototype: undefined do_getparentcanvas(long param_1, int param_2, int * param_3)
// Body     : 00579b40 - 00579b80


void do_getparentcanvas(long param_1,int param_2,int *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = *(long *)(param_1 + 0x50);
  iVar4 = 0;
  if (0 < param_2) {
    iVar3 = 0;
    do {
      for (; *(long *)(lVar2 + 0xe0) == 0; lVar2 = *(long *)(lVar2 + 0x48)) {
      }
      lVar1 = *(long *)(lVar2 + 0x48);
      if (lVar1 != 0) {
        lVar2 = lVar1;
      }
      iVar4 = iVar4 + (uint)(lVar1 != 0);
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_2);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar4;
  }
  return;
}


