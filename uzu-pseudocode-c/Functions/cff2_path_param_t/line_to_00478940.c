// Function : line_to
// Namespace: cff2_path_param_t
// Entry    : 00478940
// Prototype: undefined line_to(float param_1_00, float param_2, double param_3, double param_4, float * param_5)
// Body     : 00478940 - 00478a63


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* cff2_path_param_t::line_to(CFF::point_t const&) */

void __cdecl
cff2_path_param_t::line_to
          (float param_1_00,float param_2,double param_3,double param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  hb_draw_funcs_t *this;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float local_2c;
  
  local_2c = (float)param_3 * param_1_00;
  fVar7 = (float)param_4 * param_2;
  pfVar1 = param_5 + 6;
  this = *(hb_draw_funcs_t **)(param_5 + 2);
  uVar3 = *(undefined8 *)(param_5 + 4);
  if (*(char *)(param_5 + 1) == '\0') {
    fVar2 = *param_5;
    if (param_5[6] == 0.0) {
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
    goto LAB_004789fc;
  }
  if (*pfVar1 == 0.0) {
    hb_draw_funcs_t::start_path(this,uVar3,pfVar1);
    pcVar4 = *(code **)(this + 0x18);
    lVar5 = *(long *)(this + 0x38);
    if (lVar5 != 0) goto LAB_00478991;
  }
  else {
    pcVar4 = *(code **)(this + 0x18);
    lVar5 = *(long *)(this + 0x38);
    if (lVar5 != 0) {
LAB_00478991:
      uVar6 = *(undefined8 *)(lVar5 + 8);
      goto LAB_004789fc;
    }
  }
  uVar6 = 0;
LAB_004789fc:
  (*pcVar4)(local_2c,fVar7,this,uVar3,pfVar1,uVar6);
  param_5[9] = local_2c;
  param_5[10] = fVar7;
  return;
}


