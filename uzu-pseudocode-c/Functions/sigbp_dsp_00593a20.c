// Function : sigbp_dsp
// Namespace: 
// Entry    : 00593a20
// Prototype: undefined sigbp_dsp(long param_1, undefined8 * param_2)
// Body     : 00593a20 - 00593b46


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sigbp_dsp(long param_1,undefined8 *param_2)

{
  int *piVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  double in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  undefined8 in_stack_00000008;
  
  piVar1 = (int *)*param_2;
  fVar3 = (float)piVar1[4];
  *(float *)(param_1 + 0x30) = fVar3;
  dVar2 = DAT_00651e50;
  fVar4 = *(float *)(param_1 + 0x34);
  if ((double)*(float *)(param_1 + 0x34) < DAT_00651e50) {
    fVar4 = DAT_0065260c;
  }
  fVar6 = 0.0;
  fVar8 = *(float *)(param_1 + 0x38);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(param_1 + 0x34) = fVar4;
  *(float *)(param_1 + 0x38) = fVar8;
  fVar3 = (fVar4 * DAT_0065d81c) / fVar3;
  fVar4 = DAT_005d9038;
  if (dVar2 <= (double)fVar8) {
    fVar4 = fVar3 / fVar8;
  }
  if (DAT_005d9038 <= fVar4) {
    fVar4 = DAT_005d9038;
  }
  fVar5 = DAT_005d9038 - fVar4;
  if ((_DAT_0065d80c <= fVar3) && (fVar3 <= _DAT_0065d810)) {
    fVar6 = fVar3 * fVar3;
    fVar8 = fVar6 * fVar6;
    in_XMM5_Qa = (double)fVar6 * DAT_00652be8 + _DAT_005d9000 +
                 (double)((fVar6 * _DAT_0065d814 + _DAT_0065d818) * fVar8);
    fVar6 = (float)in_XMM5_Qa + (float)in_XMM5_Qa;
  }
  *(float *)(param_1 + 0x44) = fVar6 * fVar5;
  fVar6 = (float)(_DAT_006524b0 ^ (uint)fVar5) * fVar5;
  uVar7 = CONCAT44(_UNK_006524b4,fVar6);
  *(float *)(param_1 + 0x48) = fVar6;
  fVar3 = fVar3 * fVar5 + fVar4;
  fVar3 = (fVar3 + fVar3) * fVar4;
  *(float *)(param_1 + 0x4c) = fVar3;
  dsp_add((ulong)(uint)fVar3,(ulong)(uint)fVar4,(ulong)(uint)fVar5,uVar7,(ulong)(uint)fVar8,
          in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,sigbp_perform,4,*(undefined8 *)(piVar1 + 2),
          *(undefined8 *)(param_2[1] + 8),param_1 + 0x3c,(long)*piVar1,in_stack_00000008);
  return;
}


