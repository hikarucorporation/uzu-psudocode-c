// Function : compose_hebrew
// Namespace: 
// Entry    : 004235b0
// Prototype: bool compose_hebrew(long * param_1, int param_2, int param_3, undefined4 * param_4)
// Body     : 004235b0 - 00423782


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* compose_hebrew(hb_ot_shape_normalize_context_t const*, unsigned int, unsigned int, unsigned int*)
    */

bool __cdecl compose_hebrew(long *param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  
  lVar2 = param_1[3];
  *param_4 = 0;
  if (((param_2 != 0) && (param_3 != 0)) &&
     (iVar4 = (**(code **)(lVar2 + 0x40))
                        (lVar2,param_2,param_3,param_4,*(undefined8 *)(lVar2 + 0x80)), iVar4 != 0))
  {
    return true;
  }
  if ((*param_1 == 0) || ((*(byte *)(*param_1 + 0xa8) & 0x10) != 0)) {
LAB_0042374f:
    bVar3 = false;
  }
  else {
    bVar3 = false;
    switch(param_3) {
    case 0x5b4:
      if (param_2 != 0x5d9) goto LAB_0042374f;
      *param_4 = 0xfb1d;
      break;
    default:
      goto switchD_0042362c_caseD_5b5;
    case 0x5b7:
      if (param_2 == 0x5d0) {
        *param_4 = 0xfb2e;
      }
      else {
        if (param_2 != 0x5f2) goto LAB_0042374f;
        *param_4 = 0xfb1f;
      }
      break;
    case 0x5b8:
      if (param_2 != 0x5d0) goto LAB_0042374f;
      *param_4 = 0xfb2f;
      break;
    case 0x5b9:
      if (param_2 != 0x5d5) goto LAB_0042374f;
      *param_4 = 0xfb4b;
      break;
    case 0x5bc:
      uVar1 = param_2 - 0x5d0;
      if (uVar1 < 0x1b) {
        *param_4 = *(undefined4 *)
                    (compose_hebrew(hb_ot_shape_normalize_context_t_const*,unsigned_int,unsigned_int,unsigned_int*)
                     ::sDageshForms + (ulong)uVar1 * 4);
        return (0x7db5f7fUL >> ((ulong)uVar1 & 0x3f) & 1) != 0;
      }
      if (param_2 != 0xfb2b) {
        if (param_2 == 0xfb2a) goto LAB_00423746;
        goto LAB_0042374f;
      }
LAB_0042375d:
      *param_4 = 0xfb2d;
      break;
    case 0x5bf:
      if (param_2 == 0x5e4) {
        *param_4 = 0xfb4e;
      }
      else if (param_2 == 0x5db) {
        *param_4 = 0xfb4d;
      }
      else {
        if (param_2 != 0x5d1) goto LAB_0042374f;
        *param_4 = 0xfb4c;
      }
      break;
    case 0x5c1:
      if (param_2 == 0xfb49) {
LAB_00423746:
        *param_4 = 0xfb2c;
      }
      else {
        if (param_2 != 0x5e9) goto LAB_0042374f;
        *param_4 = 0xfb2a;
      }
      break;
    case 0x5c2:
      if (param_2 == 0xfb49) goto LAB_0042375d;
      if (param_2 != 0x5e9) goto LAB_0042374f;
      *param_4 = 0xfb2b;
    }
    bVar3 = true;
  }
switchD_0042362c_caseD_5b5:
  return bVar3;
}


