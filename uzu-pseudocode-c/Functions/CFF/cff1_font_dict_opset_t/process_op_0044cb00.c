// Function : process_op
// Namespace: CFF:cff1_font_dict_opset_t
// Entry    : 0044cb00
// Prototype: undefined process_op(int param_1, long * param_2, parsed_values_t<CFF::op_str_t> * param_3)
// Body     : 0044cb00 - 0044cc4c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* CFF::cff1_font_dict_opset_t::process_op(unsigned int, CFF::interp_env_t<CFF::number_t>&,
   CFF::cff1_font_dict_values_t&) */

void __cdecl
CFF::cff1_font_dict_opset_t::process_op
          (int param_1,long *param_2,parsed_values_t<CFF::op_str_t> *param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_1 < 0x107) {
    if (param_1 == 0x12) {
      iVar1 = *(int *)((long)param_2 + 0x14);
      if (iVar1 == 0) {
        *(undefined4 *)(param_3 + 0x18) = 0;
LAB_0044cc1d:
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
LAB_0044cc46:
        iVar1 = 0;
      }
      else {
        if ((int)(double)param_2[(ulong)(iVar1 - 1U) + 3] < 0) {
          *(undefined1 *)(param_2 + 2) = 1;
          *(undefined4 *)(param_3 + 0x18) = 0;
        }
        else {
          *(int *)(param_3 + 0x18) = (int)(double)param_2[(ulong)(iVar1 - 1U) + 3];
        }
        if (iVar1 - 1U == 0) goto LAB_0044cc1d;
        iVar1 = (int)(double)param_2[(ulong)(iVar1 - 2) + 3];
        if (iVar1 < 0) {
          *(undefined1 *)(param_2 + 2) = 1;
          goto LAB_0044cc46;
        }
      }
      *(int *)(param_3 + 0x1c) = iVar1;
    }
    else if (param_1 != 0x105) {
LAB_0044cbe7:
      dict_opset_t::process_op(param_1,param_2);
      if (*(int *)((long)param_2 + 0x14) != 0) {
        return;
      }
      goto LAB_0044cbb1;
    }
  }
  else {
    if (param_1 == 0x107) goto LAB_0044cbab;
    if (param_1 != 0x126) goto LAB_0044cbe7;
    if (*(int *)((long)param_2 + 0x14) == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      _hb_CrapPool = 0;
LAB_0044cc0e:
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(double)param_2[(ulong)(*(int *)((long)param_2 + 0x14) - 1) + 3];
      if (iVar1 < 0) {
        *(undefined1 *)(param_2 + 2) = 1;
        goto LAB_0044cc0e;
      }
    }
    *(int *)(param_3 + 0x24) = iVar1;
  }
LAB_0044cbab:
  *(undefined4 *)((long)param_2 + 0x14) = 0;
LAB_0044cbb1:
  if ((*(uint *)((long)param_2 + 0xc) <= *(uint *)(param_2 + 1)) && ((char)param_2[2] == '\0')) {
    local_28 = 0;
    uStack_20 = 0xffff;
    parsed_values_t<CFF::op_str_t>::add_op(param_3,param_1,param_2,&local_28);
  }
  return;
}


