// Function : click_free
// Namespace: 
// Entry    : 0056a070
// Prototype: undefined click_free(long param_1)
// Body     : 0056a070 - 0056a11d


void click_free(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  if ((param_1 == 0) || (s_canvaslist == (long *)0x0)) {
    return;
  }
  plVar1 = s_canvaslist;
  plVar4 = s_canvaslist;
LAB_0056a0c9:
  if ((*plVar4 != 0) && (plVar1 != (long *)0x0)) {
    plVar2 = plVar1;
    do {
      if (*plVar2 == *plVar4) {
        plVar5 = (long *)plVar2[1];
        if (plVar5 != (long *)0x0) {
          if (*plVar5 != param_1) goto LAB_0056a100;
          plVar3 = (long *)0x0;
          goto LAB_0056a097;
        }
        break;
      }
      plVar2 = (long *)plVar2[2];
    } while (plVar2 != (long *)0x0);
  }
  goto LAB_0056a0c0;
  while (*plVar5 != param_1) {
LAB_0056a100:
    plVar3 = plVar5;
    plVar5 = (long *)plVar3[1];
    if (plVar5 == (long *)0x0) goto LAB_0056a0c0;
  }
LAB_0056a097:
  if (plVar3 == (long *)0x0) {
    plVar3 = plVar2;
  }
  plVar3[1] = plVar5[1];
  freebytes(plVar5);
  plVar1 = s_canvaslist;
LAB_0056a0c0:
  plVar4 = (long *)plVar4[2];
  if (plVar4 == (long *)0x0) {
    return;
  }
  goto LAB_0056a0c9;
}


