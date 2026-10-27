// Function : scalar_properties
// Namespace: 
// Entry    : 0051fd20
// Prototype: undefined scalar_properties(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long * param_10, undefined8 param_11, void * * param_12, char * param_13, undefined8 param_14)
// Body     : 0051fd20 - 0051fda6


void scalar_properties(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long *param_9,long *param_10,undefined8 param_11,void **param_12,
                      char *param_13,undefined8 param_14)

{
  int *piVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_ffffffffffffffd8;
  uint local_24;
  void *local_20;
  
  uVar2 = glist_noselect(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                         param_10,param_11,param_12,param_13,param_14);
  uVar2 = glist_select(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_10,
                       param_9,extraout_RDX,param_12,param_13,param_14);
  piVar1 = glist_writetobinbuf(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               (long)param_10,0,extraout_RDX_00,param_12,param_13,param_14);
  binbuf_gettext(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar1,
                 &local_20,(int *)&local_24,param_12,param_13,param_14);
  uVar2 = binbuf_free(piVar1);
  pdgui_stub_vnew(uVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_10,
                  "pdtk_data_dialog",(char *)param_9,"p",(char *)(ulong)local_24,local_20,
                  in_stack_ffffffffffffffd8);
  freebytes(local_20);
  return;
}


