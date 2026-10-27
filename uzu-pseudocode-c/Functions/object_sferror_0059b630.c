// Function : object_sferror
// Namespace: 
// Entry    : 0059b630
// Prototype: undefined object_sferror(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, char * param_11, int param_12, long param_13, undefined8 param_14)
// Body     : 0059b630 - 0059b6e0


void object_sferror(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,char *param_11,int param_12,long param_13,
                   undefined8 param_14)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  if ((param_13 == 0) || (*(undefined8 **)(param_13 + 8) == (undefined8 *)0x0)) {
    if (param_12 + 0x3ebU < 4) {
      pcVar2 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(param_12 + 0x3ebU)];
    }
    else {
      pcVar2 = strerror(param_12);
      param_1 = extraout_XMM0_Qa;
    }
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,"%s: %s: %s",
             param_10,param_11,pcVar2,param_14);
    return;
  }
  uVar1 = **(undefined8 **)(param_13 + 8);
  if (param_12 + 0x3ebU < 4) {
    pcVar2 = (&PTR_s_unsupported_sample_format_007150e8)[(int)(param_12 + 0x3ebU)];
  }
  else {
    pcVar2 = strerror(param_12);
    param_1 = extraout_XMM0_Qa_00;
  }
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,"%s %s: %s: %s",
           param_10,uVar1,param_11,pcVar2);
  return;
}


