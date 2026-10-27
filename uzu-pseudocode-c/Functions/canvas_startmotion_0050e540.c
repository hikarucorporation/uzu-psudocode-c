// Function : canvas_startmotion
// Namespace: 
// Entry    : 0050e540
// Prototype: undefined canvas_startmotion(long param_1)
// Body     : 0050e540 - 0050e5b7


void canvas_startmotion(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  int iVar5;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar2 = **(long **)(*plVar4 + 0x48);
    iVar3 = 0x28;
    iVar5 = 0x28;
    if (*(long *)(lVar2 + 0x78) == param_1) {
      iVar5 = *(int *)(lVar2 + 0x80);
      iVar3 = *(int *)(lVar2 + 0x84);
      if (iVar5 == 0 && iVar3 == 0) {
        return;
      }
    }
    *(byte *)(lVar1 + 0x88) = *(byte *)(lVar1 + 0x88) & 0xf8 | 1;
    lVar1 = *(long *)(param_1 + 0xc0);
    *(int *)(lVar1 + 0x68) = iVar5;
    *(int *)(lVar1 + 0x6c) = iVar3;
  }
  return;
}


