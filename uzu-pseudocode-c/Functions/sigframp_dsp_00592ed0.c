// Function : sigframp_dsp
// Namespace: 
// Entry    : 00592ed0
// Prototype: undefined sigframp_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 00592ed0 - 00592f57


void sigframp_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14,undefined8 param_15)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)*param_10;
  if ((int)uVar1 < 4) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
             "framp: minimum 4 points",param_11,param_12,param_13,param_14);
    return;
  }
  uVar3 = (ulong)(uVar1 >> 1);
  uVar2 = *(undefined8 *)(param_10[3] + 8);
  uVar4 = dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigframp_perform,5
                  ,*(undefined8 *)((uint *)*param_10 + 2),*(undefined8 *)(param_10[1] + 8),
                  *(undefined8 *)(param_10[2] + 8),uVar2,uVar3);
  dsp_add(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,PTR_sigsqrt_perform_00715978
          ,3,*(undefined8 *)(param_10[3] + 8),*(undefined8 *)(param_10[3] + 8),uVar3,uVar2,param_15)
  ;
  return;
}


