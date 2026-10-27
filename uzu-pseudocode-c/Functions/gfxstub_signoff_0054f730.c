// Function : gfxstub_signoff
// Namespace: 
// Entry    : 0054f730
// Prototype: undefined gfxstub_signoff(long * param_1)
// Body     : 0054f730 - 0054f769


void gfxstub_signoff(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = gfxstub_list;
  if (gfxstub_list == param_1) {
    plVar2 = (long *)&gfxstub_list;
  }
  else {
    do {
      plVar2 = plVar1;
      plVar1 = (long *)plVar2[4];
      if (plVar1 == (long *)0x0) goto LAB_0054f765;
    } while (plVar1 != param_1);
    plVar2 = plVar2 + 4;
  }
  *plVar2 = param_1[4];
LAB_0054f765:
  pd_free(param_1);
  return;
}


