// Function : sigvcf_dsp
// Namespace: 
// Entry    : 00599310
// Prototype: undefined8 sigvcf_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10)
// Body     : 00599310 - 0059937d


undefined8
sigvcf_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          long *param_10)

{
  long lVar1;
  undefined8 in_RAX;
  code *pcVar2;
  float fVar3;
  
  lVar1 = *param_10;
  fVar3 = DAT_0065d81c / *(float *)(lVar1 + 0x10);
  *(float *)(param_9 + 0x3c) = fVar3;
  pcVar2 = sigvcf_perform;
  if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x37) {
    pcVar2 = sigvcf_perform_old;
  }
  dsp_add((ulong)(uint)fVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar2,6,
          *(undefined8 *)(lVar1 + 8),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8),*(undefined8 *)(param_10[3] + 8),param_9 + 0x30);
  return in_RAX;
}


