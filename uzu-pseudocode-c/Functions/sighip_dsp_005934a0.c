// Function : sighip_dsp
// Namespace: 
// Entry    : 005934a0
// Prototype: undefined sighip_dsp(long param_1, undefined8 * param_2)
// Body     : 005934a0 - 0059353b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sighip_dsp(long param_1,undefined8 *param_2)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined8 in_stack_00000008;
  
  piVar1 = (int *)*param_2;
  fVar3 = (float)piVar1[4];
  *(float *)(param_1 + 0x30) = fVar3;
  fVar5 = *(float *)(param_1 + 0x34);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  dVar6 = ((double)fVar5 * _DAT_0065d800) / (double)fVar3 + _DAT_005d9000;
  fVar4 = (float)dVar6;
  *(float *)(param_1 + 0x34) = fVar5;
  *(float *)(param_1 + 0x3c) = fVar4;
  fVar3 = 0.0;
  if ((fVar4 < 0.0) || (fVar3 = DAT_005d9038, DAT_005d9038 < fVar4)) {
    *(float *)(param_1 + 0x3c) = fVar3;
  }
  pcVar2 = sighip_perform_old;
  if (0x2b < *(int *)PTR_pd_compatibilitylevel_00715a40) {
    pcVar2 = sighip_perform;
  }
  dsp_add((ulong)(uint)fVar3,(ulong)(uint)fVar4,(ulong)(uint)fVar5,dVar6,in_XMM4_Qa,in_XMM5_Qa,
          in_XMM6_Qa,in_XMM7_Qa,pcVar2,4,*(undefined8 *)(piVar1 + 2),*(undefined8 *)(param_2[1] + 8)
          ,param_1 + 0x38,(long)*piVar1,in_stack_00000008);
  return;
}


