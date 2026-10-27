// Function : move_to
// Namespace: cff2_path_param_t
// Entry    : 00478820
// Prototype: undefined move_to(float param_1_00, float param_2, double param_3, double param_4, float * param_5)
// Body     : 00478820 - 00478936


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* cff2_path_param_t::move_to(CFF::point_t const&) */

void __cdecl
cff2_path_param_t::move_to
          (float param_1_00,float param_2,double param_3,double param_4,float *param_5)

{
  float *pfVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  float local_24;
  
  local_24 = (float)param_3 * param_1_00;
  pfVar1 = param_5 + 6;
  lVar2 = *(long *)(param_5 + 2);
  uVar3 = *(undefined8 *)(param_5 + 4);
  if (*(char *)(param_5 + 1) == '\0') {
    local_24 = local_24 + *param_5 * (float)param_4 * param_2;
    if (param_5[6] == 0.0) goto LAB_00478853;
    if ((param_5[7] == param_5[9]) && (!NAN(param_5[7]) && !NAN(param_5[9]))) {
      if ((param_5[8] == param_5[10]) && (!NAN(param_5[8]) && !NAN(param_5[10]))) goto LAB_004788f6;
    }
    pcVar4 = *(code **)(lVar2 + 0x18);
    lVar6 = *(long *)(lVar2 + 0x38);
    if (lVar6 == 0) {
LAB_004788af:
      uVar5 = 0;
    }
    else {
LAB_004788e7:
      uVar5 = *(undefined8 *)(lVar6 + 8);
    }
    (*pcVar4)(lVar2,uVar3,pfVar1,uVar5);
  }
  else {
    if (*pfVar1 == 0.0) goto LAB_00478853;
    if ((param_5[7] != param_5[9]) || (NAN(param_5[7]) || NAN(param_5[9]))) {
LAB_004788d8:
      pcVar4 = *(code **)(lVar2 + 0x18);
      lVar6 = *(long *)(lVar2 + 0x38);
      if (lVar6 == 0) goto LAB_004788af;
      goto LAB_004788e7;
    }
    if ((param_5[8] != param_5[10]) || (NAN(param_5[8]) || NAN(param_5[10]))) goto LAB_004788d8;
  }
LAB_004788f6:
  if (*(long *)(lVar2 + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + 0x20);
  }
  (**(code **)(lVar2 + 0x30))(lVar2,uVar3,pfVar1,uVar5);
  param_5[8] = 0.0;
  pfVar1[0] = 0.0;
  pfVar1[1] = 0.0;
LAB_00478853:
  param_5[9] = local_24;
  param_5[10] = (float)param_4 * param_2;
  return;
}


