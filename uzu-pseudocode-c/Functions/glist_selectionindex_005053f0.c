// Function : glist_selectionindex
// Namespace: 
// Entry    : 005053f0
// Prototype: int glist_selectionindex(long param_1, long param_2, int param_3)
// Body     : 005053f0 - 005054b0


int glist_selectionindex(long param_1,long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  
  lVar3 = *(long *)(param_1 + 0x30);
  iVar2 = 0;
  if ((lVar3 != 0) && (lVar3 != param_2)) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + (uint)(param_3 == 0);
        lVar3 = *(long *)(lVar3 + 8);
        if (lVar3 == 0) {
          return iVar2;
        }
      } while (lVar3 != param_2);
    }
    else {
      plVar1 = *(long **)(*(long *)(param_1 + 0xc0) + 0x20);
      if (plVar1 == (long *)0x0) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + (uint)(param_3 == 0);
          lVar3 = *(long *)(lVar3 + 8);
          if (lVar3 == 0) {
            return iVar2;
          }
        } while (lVar3 != param_2);
      }
      else {
        iVar2 = 0;
        do {
          plVar4 = plVar1;
          do {
            if (*plVar4 == lVar3) {
              iVar5 = 1;
              goto LAB_00505456;
            }
            plVar4 = (long *)plVar4[1];
          } while (plVar4 != (long *)0x0);
          iVar5 = 0;
LAB_00505456:
          iVar2 = iVar2 + (uint)(iVar5 == param_3);
          lVar3 = *(long *)(lVar3 + 8);
        } while ((lVar3 != 0) && (lVar3 != param_2));
      }
    }
  }
  return iVar2;
}


