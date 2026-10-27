// Function : graph_displace
// Namespace: 
// Entry    : 00518980
// Prototype: undefined graph_displace(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, ulong param_10, int param_11, undefined8 param_12, char * param_13, ulong param_14)
// Body     : 00518980 - 005189df


void graph_displace(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                   ulong param_10,int param_11,undefined8 param_12,char *param_13,ulong param_14)

{
  uint uVar1;
  short sVar2;
  undefined6 uVar3;
  undefined2 extraout_DX;
  undefined2 extraout_var;
  undefined4 extraout_var_00;
  ulong uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  
  sVar2 = (short)param_12;
  uVar3 = (undefined6)((ulong)param_12 >> 0x10);
  if ((*(byte *)((long)param_9 + 0xe9) & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x005189a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(PTR_text_widgetbehavior_00715630 + 8))(param_9,param_10);
    return;
  }
  *(short *)(param_9 + 5) = (short)param_9[5] + (short)param_11;
  *(short *)((long)param_9 + 0x2a) = *(short *)((long)param_9 + 0x2a) + sVar2;
  uVar4 = param_10;
  uVar1 = glist_isvisible(param_10);
  if (uVar1 == 0) {
    return;
  }
  uVar5 = glist_redraw(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,uVar4,CONCAT44(extraout_var_00,CONCAT22(extraout_var,extraout_DX)),
                       (char *)CONCAT62(uVar3,sVar2),param_13,param_14);
  canvas_fixlinesfor(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                     (long)param_9);
  return;
}


