// Function : canvas_undo_set_pastebinbuf
// Namespace: 
// Entry    : 00507c90
// Prototype: int * canvas_undo_set_pastebinbuf(long param_1, undefined8 param_2, int param_3, int param_4, int param_5)
// Body     : 00507c90 - 00507da9


int * canvas_undo_set_pastebinbuf
                (long param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar1 = *(undefined8 *)**(undefined8 **)(*plVar2 + 0x48);
  *(undefined8 *)**(undefined8 **)(*plVar2 + 0x48) = param_2;
  piVar3 = getbytes(0x18);
  lVar5 = *(long *)(param_1 + 0x30);
  iVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = lVar5;
    do {
      iVar6 = iVar6 + 1;
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != 0);
  }
  *piVar3 = iVar6 - param_3;
  iVar6 = -1;
  if ((((param_4 == 0) &&
       (plVar2 = *(long **)(*(long *)(param_1 + 0xc0) + 0x20), plVar2 != (long *)0x0)) &&
      (plVar2[1] == 0)) && ((iVar6 = 0, lVar5 != 0 && (lVar5 != *plVar2)))) {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      lVar5 = *(long *)(lVar5 + 8);
      if (lVar5 == 0) break;
    } while (lVar5 != *plVar2);
  }
  piVar3[1] = iVar6;
  piVar3[2] = param_5;
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  piVar4 = binbuf_duplicate(*(int **)**(undefined8 **)(*plVar2 + 0x48));
  *(int **)(piVar3 + 4) = piVar4;
  *(undefined8 *)**(undefined8 **)(*plVar2 + 0x48) = uVar1;
  return piVar3;
}


