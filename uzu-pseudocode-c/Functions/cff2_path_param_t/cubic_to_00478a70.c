// Function : cubic_to
// Namespace: cff2_path_param_t
// Entry    : 00478a70
// Prototype: undefined cubic_to(float param_1_00, float param_2, double param_3, double param_4, double param_5, double param_6, double param_7, double param_8, float * param_9)
// Body     : 00478a70 - 00478c70


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* cff2_path_param_t::cubic_to(CFF::point_t const&, CFF::point_t const&, CFF::point_t const&) */

void __cdecl
cff2_path_param_t::cubic_to
          (float param_1_00,float param_2,double param_3,double param_4,double param_5,
          double param_6,double param_7,double param_8,float *param_9)

{
  float *pfVar1;
  float fVar2;
  hb_draw_funcs_t *this;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_44;
  
  fVar9 = (float)param_3 * param_1_00;
  fVar7 = (float)param_5 * param_1_00;
  local_44 = (float)param_7 * param_1_00;
  fVar8 = (float)param_8 * param_2;
  pfVar1 = param_9 + 6;
  this = *(hb_draw_funcs_t **)(param_9 + 2);
  uVar3 = *(undefined8 *)(param_9 + 4);
  if (*(char *)(param_9 + 1) == '\0') {
    fVar2 = *param_9;
    if (param_9[6] == 0.0) {
      hb_draw_funcs_t::start_path(this,uVar3,pfVar1);
    }
    fVar9 = (float)param_4 * param_2 * fVar2 + fVar9;
    fVar7 = (float)param_6 * param_2 * fVar2 + fVar7;
    local_44 = local_44 + fVar2 * fVar8;
    pcVar4 = *(code **)(this + 0x28);
    if (*(long *)(this + 0x38) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(*(long *)(this + 0x38) + 0x18);
    }
    goto LAB_00478bbc;
  }
  if (*pfVar1 == 0.0) {
    hb_draw_funcs_t::start_path(this,uVar3,pfVar1);
    pcVar4 = *(code **)(this + 0x28);
    lVar5 = *(long *)(this + 0x38);
    if (lVar5 != 0) goto LAB_00478af5;
  }
  else {
    pcVar4 = *(code **)(this + 0x28);
    lVar5 = *(long *)(this + 0x38);
    if (lVar5 != 0) {
LAB_00478af5:
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      goto LAB_00478bbc;
    }
  }
  uVar6 = 0;
LAB_00478bbc:
  (*pcVar4)(fVar9,(float)param_4 * param_2,fVar7,(float)param_6 * param_2,local_44,fVar8,this,uVar3,
            pfVar1,uVar6);
  param_9[9] = local_44;
  param_9[10] = fVar8;
  return;
}


