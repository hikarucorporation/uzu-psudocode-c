// Function : savestate_list
// Namespace: 
// Entry    : 0051d600
// Prototype: undefined savestate_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined8 param_14, double param_15)
// Body     : 0051d600 - 0051d68d


void savestate_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                   char *param_13,undefined8 param_14,double param_15)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  double unaff_RBX;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  
  piVar1 = *(int **)(param_9 + 0x40);
  if (piVar1 == (int *)0x0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "savestate: ignoring message sent when not saving parent",param_11,param_12,param_13,
             param_14);
    return;
  }
  puVar2 = gensym("#A");
  puVar3 = gensym("saved");
  uVar4 = binbuf_addv(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      piVar1,0x65470c,puVar2,puVar3,param_13,param_14,unaff_RBX);
  uVar4 = binbuf_add(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(int **)(param_9 + 0x40),(uint)param_11,param_12,puVar3,param_13,param_14);
  binbuf_addv(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(int **)(param_9 + 0x40),0x656033,extraout_RDX,puVar3,param_13,param_14,param_15);
  return;
}


