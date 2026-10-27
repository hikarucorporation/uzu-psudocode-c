// Function : canvas_undo_set_paste
// Namespace: 
// Entry    : 00507bc0
// Prototype: int * canvas_undo_set_paste(long param_1, int param_2, int param_3, int param_4)
// Body     : 00507bc0 - 00507c82


int * canvas_undo_set_paste(long param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  piVar1 = getbytes(0x18);
  lVar4 = *(long *)(param_1 + 0x30);
  iVar5 = 0;
  if (lVar4 != 0) {
    lVar6 = lVar4;
    do {
      iVar5 = iVar5 + 1;
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != 0);
  }
  *piVar1 = iVar5 - param_2;
  iVar5 = -1;
  if ((((param_3 == 0) &&
       (plVar2 = *(long **)(*(long *)(param_1 + 0xc0) + 0x20), plVar2 != (long *)0x0)) &&
      (plVar2[1] == 0)) && ((iVar5 = 0, lVar4 != 0 && (lVar4 != *plVar2)))) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 == 0) break;
    } while (lVar4 != *plVar2);
  }
  piVar1[1] = iVar5;
  piVar1[2] = param_4;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  piVar3 = binbuf_duplicate(*(int **)**(undefined8 **)(*plVar2 + 0x48));
  *(int **)(piVar1 + 4) = piVar3;
  return piVar1;
}


