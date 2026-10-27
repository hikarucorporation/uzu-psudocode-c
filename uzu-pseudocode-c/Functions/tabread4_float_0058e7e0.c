// Function : tabread4_float
// Namespace: 
// Entry    : 0058e7e0
// Prototype: undefined tabread4_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0058e7e0 - 0058e981


void tabread4_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13
                   ,undefined8 param_14)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  long local_18;
  float local_10;
  int local_c;
  
  local_10 = (float)param_1;
  plVar6 = pd_findbyclass(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          *(long *)(param_9 + 0x30),*(long *)PTR_garray_class_00715780);
  if (plVar6 == (long *)0x0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "%s: no such array",**(undefined8 **)(param_9 + 0x30),param_12,param_13,param_14);
    return;
  }
  uVar7 = garray_getfloatwords
                    (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     (long)plVar6,&local_c,&local_18,param_12,param_13,param_14);
  if ((int)uVar7 == 0) {
    pd_error(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "%s: bad template for tabread4",**(undefined8 **)(param_9 + 0x30),param_12,param_13,
             param_14);
    return;
  }
  if (local_c < 4) {
    outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
    return;
  }
  if (DAT_005d9038 < local_10) {
    uVar1 = local_c - 2;
    if (local_10 < (float)(int)uVar1) {
      iVar5 = local_c + -3;
      if ((int)local_10 < (int)uVar1) {
        iVar5 = (int)local_10;
      }
      lVar8 = (long)iVar5;
      fVar14 = local_10 - (float)iVar5;
      fVar2 = *(float *)(local_18 + -8 + lVar8 * 8);
      fVar3 = *(float *)(local_18 + lVar8 * 8);
      fVar4 = *(float *)(local_18 + 0x10 + lVar8 * 8);
      fVar10 = *(float *)(local_18 + 8 + lVar8 * 8) - fVar3;
      dVar13 = (double)fVar14 * DAT_0065ab18 - DAT_0065ab18;
      fVar11 = fVar10 * DAT_00652610;
      fVar12 = ((fVar4 - fVar2) + fVar11) * fVar14;
      dVar9 = ((double)(fVar2 + fVar2 + fVar4 + fVar3 * DAT_00652610 + fVar12) * dVar13 +
              (double)fVar10) * (double)fVar14 + (double)fVar3;
      outlet_float((ulong)(uint)(float)dVar9,dVar9,(ulong)(uint)(fVar3 * DAT_00652610),
                   (ulong)(uint)fVar11,(ulong)(uint)fVar12,dVar13,(ulong)(uint)fVar4,
                   (ulong)(uint)fVar14,*(long **)(param_9 + 0x18));
      return;
    }
    outlet_float((ulong)*(uint *)(local_18 + (ulong)uVar1 * 8),param_2,param_3,param_4,param_5,
                 param_6,param_7,(ulong)(uint)local_10,*(long **)(param_9 + 0x18));
    return;
  }
  outlet_float((ulong)*(uint *)(local_18 + 8),param_2,param_3,param_4,param_5,param_6,param_7,
               (ulong)(uint)local_10,*(long **)(param_9 + 0x18));
  return;
}


