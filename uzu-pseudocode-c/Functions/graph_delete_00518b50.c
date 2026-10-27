// Function : graph_delete
// Namespace: 
// Entry    : 00518b50
// Prototype: undefined graph_delete(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10, undefined8 param_11, long * param_12, char * param_13, undefined8 param_14)
// Body     : 00518b50 - 00518bab


void graph_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,long param_10,undefined8 param_11,long *param_12,char *param_13,
                 undefined8 param_14)

{
  long *plVar1;
  uint uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar3;
  
  plVar1 = (long *)param_9[6];
  while (plVar1 != (long *)0x0) {
    param_1 = glist_delete(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                           plVar1,param_11,param_12,param_13,param_14);
    param_11 = extraout_RDX;
    plVar1 = (long *)param_9[6];
  }
  uVar2 = glist_isvisible((long)param_9);
  uVar3 = extraout_XMM0_Qa;
  if (uVar2 != 0) {
    uVar3 = (**(code **)(PTR_text_widgetbehavior_00715630 + 0x20))(param_9,param_10);
  }
  canvas_deletelinesfor
            (uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,param_9);
  return;
}


