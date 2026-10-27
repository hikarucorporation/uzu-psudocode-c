// Function : ptrobj_sendwindow
// Namespace: 
// Entry    : 005ae7b0
// Prototype: undefined ptrobj_sendwindow(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 005ae7b0 - 005ae838


void ptrobj_sendwindow(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                      undefined8 param_10,int param_11,int *param_12,uint *param_13,uint *param_14)

{
  bool bVar1;
  undefined7 extraout_var;
  long *plVar2;
  int *piVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar6;
  
  piVar3 = param_12;
  bVar1 = gpointer_check((long *)(param_9 + 0x30),1);
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    pcVar5 = "pointer send-window: empty pointer";
    uVar4 = extraout_RDX;
    uVar6 = extraout_XMM0_Qa;
  }
  else {
    plVar2 = *(long **)(param_9 + 0x40);
    if ((int)plVar2[1] != 1) {
      do {
        plVar2 = *(long **)(*plVar2 + 0x30);
      } while ((int)plVar2[1] == 2);
    }
    plVar2 = (long *)glist_getcanvas(*plVar2);
    if ((param_11 != 0) && (*param_12 == 2)) {
      pd_typedmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   plVar2,*(undefined8 **)(param_12 + 2),param_11 - 1,param_12 + 4,param_13,param_14
                  );
      return;
    }
    pcVar5 = "pointer send-window: no message?";
    uVar4 = extraout_RDX_00;
    uVar6 = extraout_XMM0_Qa_00;
  }
  pd_error(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar5,uVar4,piVar3
           ,(char *)param_13,param_14);
  return;
}


