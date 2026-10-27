// Function : glob_compatibility
// Namespace: 
// Entry    : 005381c0
// Prototype: undefined glob_compatibility(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005381c0 - 005381fa


void glob_compatibility(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,undefined8 param_10,undefined8 param_11,
                       undefined8 param_12,char *param_13,undefined8 param_14)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  
  uVar2 = canvas_suspend_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar1 = PTR_pd_compatibilitylevel_00715a40;
  dVar4 = (double)(float)param_1 * DAT_005d90a0 + DAT_005db338;
  uVar3 = (uint)dVar4;
  *(uint *)PTR_pd_compatibilitylevel_00715a40 = uVar3;
  canvas_resume_dsp(dVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(ulong)uVar2,
                    param_10,puVar1,(ulong)uVar3,param_13,param_14);
  return;
}


