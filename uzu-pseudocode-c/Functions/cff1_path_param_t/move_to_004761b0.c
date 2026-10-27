// Function : move_to
// Namespace: cff1_path_param_t
// Entry    : 004761b0
// Prototype: undefined move_to(long param_1, float * param_2, double * param_3, double * param_4)
// Body     : 004761b0 - 004762df


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* cff1_path_param_t::move_to(CFF::point_t const&) */

void __cdecl cff1_path_param_t::move_to(long param_1,float *param_2,double *param_3,double *param_4)

{
  float *pfVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float local_24;
  
  dVar7 = *param_4;
  dVar8 = param_4[1];
  if (param_3 != (double *)0x0) {
    dVar7 = dVar7 + *param_3;
    dVar8 = dVar8 + param_3[1];
  }
  local_24 = (float)dVar7 * *(float *)(param_1 + 0x4c);
  fVar9 = (float)dVar8 * *(float *)(param_1 + 0x50);
  pfVar1 = param_2 + 6;
  lVar2 = *(long *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 4);
  if (*(char *)(param_2 + 1) == '\0') {
    local_24 = local_24 + *param_2 * fVar9;
    if (param_2[6] == 0.0) goto LAB_004761fc;
    if ((param_2[7] == param_2[9]) && (!NAN(param_2[7]) && !NAN(param_2[9]))) {
      if ((param_2[8] == param_2[10]) && (!NAN(param_2[8]) && !NAN(param_2[10]))) goto LAB_0047629f;
    }
    pcVar4 = *(code **)(lVar2 + 0x18);
    lVar6 = *(long *)(lVar2 + 0x38);
    if (lVar6 == 0) {
LAB_00476258:
      uVar5 = 0;
    }
    else {
LAB_00476290:
      uVar5 = *(undefined8 *)(lVar6 + 8);
    }
    (*pcVar4)(lVar2,uVar3,pfVar1,uVar5);
  }
  else {
    if (*pfVar1 == 0.0) goto LAB_004761fc;
    if ((param_2[7] != param_2[9]) || (NAN(param_2[7]) || NAN(param_2[9]))) {
LAB_00476281:
      pcVar4 = *(code **)(lVar2 + 0x18);
      lVar6 = *(long *)(lVar2 + 0x38);
      if (lVar6 == 0) goto LAB_00476258;
      goto LAB_00476290;
    }
    if ((param_2[8] != param_2[10]) || (NAN(param_2[8]) || NAN(param_2[10]))) goto LAB_00476281;
  }
LAB_0047629f:
  if (*(long *)(lVar2 + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x20);
  }
  (**(code **)(lVar2 + 0x30))(lVar2,uVar3,pfVar1,uVar5);
  param_2[8] = 0.0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
LAB_004761fc:
  param_2[9] = local_24;
  param_2[10] = fVar9;
  return;
}


