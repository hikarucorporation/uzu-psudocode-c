// Function : canvas_undo_free
// Namespace: 
// Entry    : 0052ec70
// Prototype: undefined canvas_undo_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, char * param_12, uint * param_13, undefined4 * param_14)
// Body     : 0052ec70 - 0052ece1


void canvas_undo_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                     undefined8 param_10,undefined8 param_11,char *param_12,uint *param_13,
                     undefined4 *param_14)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar6;
  
  puVar5 = (undefined8 *)canvas_undo_get((long)param_9);
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = canvas_suspend_dsp(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8);
  pvVar2 = (void *)*puVar5;
  uVar3 = extraout_RDX;
  uVar6 = extraout_XMM0_Qa_00;
  while (pvVar2 != (void *)0x0) {
    param_12 = "canvas_undo_free";
    canvas_undo_doit(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long)pvVar2,0,(long *)"canvas_undo_free",param_13,param_14);
    pvVar1 = *(void **)((long)pvVar2 + 0x28);
    param_10 = 0x30;
    uVar6 = freebytes(pvVar2);
    pvVar2 = pvVar1;
    uVar3 = extraout_RDX_00;
  }
  canvas_resume_dsp(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar4,
                    param_10,uVar3,param_12,(char *)param_13,param_14);
  return;
}


