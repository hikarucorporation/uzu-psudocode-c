// Function : line_to
// Namespace: cff1_path_param_t
// Entry    : 004762e0
// Prototype: undefined line_to(long param_1, float * param_2, double * param_3, double * param_4)
// Body     : 004762e0 - 00476410


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* cff1_path_param_t::line_to(CFF::point_t const&) */

void __cdecl cff1_path_param_t::line_to(long param_1,float *param_2,double *param_3,double *param_4)

{
  float *pfVar1;
  float fVar2;
  hb_draw_funcs_t *this;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float local_2c;
  
  dVar8 = *param_4;
  dVar9 = param_4[1];
  if (param_3 != (double *)0x0) {
    dVar8 = dVar8 + *param_3;
    dVar9 = dVar9 + param_3[1];
  }
  local_2c = (float)dVar8 * *(float *)(param_1 + 0x4c);
  fVar7 = (float)dVar9 * *(float *)(param_1 + 0x50);
  pfVar1 = param_2 + 6;
  this = *(hb_draw_funcs_t **)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 4);
  if (*(char *)(param_2 + 1) == '\0') {
    fVar2 = *param_2;
    if (param_2[6] == 0.0) {
      hb_draw_funcs_t::start_path(this,uVar3,pfVar1);
    }
    local_2c = local_2c + fVar2 * fVar7;
    pcVar4 = *(code **)(this + 0x18);
    if (*(long *)(this + 0x38) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    }
    goto LAB_004763af;
  }
  if (*pfVar1 == 0.0) {
    hb_draw_funcs_t::start_path(this,uVar3,pfVar1);
    pcVar4 = *(code **)(this + 0x18);
    lVar5 = *(long *)(this + 0x38);
    if (lVar5 != 0) goto LAB_0047634a;
  }
  else {
    pcVar4 = *(code **)(this + 0x18);
    lVar5 = *(long *)(this + 0x38);
    if (lVar5 != 0) {
LAB_0047634a:
      uVar6 = *(undefined8 *)(lVar5 + 8);
      goto LAB_004763af;
    }
  }
  uVar6 = 0;
LAB_004763af:
  (*pcVar4)(local_2c,this,uVar3,pfVar1,uVar6);
  param_2[9] = local_2c;
  param_2[10] = fVar7;
  return;
}


