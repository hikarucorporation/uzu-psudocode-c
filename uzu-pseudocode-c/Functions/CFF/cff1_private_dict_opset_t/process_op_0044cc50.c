// Function : process_op
// Namespace: CFF:cff1_private_dict_opset_t
// Entry    : 0044cc50
// Prototype: undefined process_op(uint param_1, long * param_2, parsed_values_t<CFF::dict_val_t> * param_3)
// Body     : 0044cc50 - 0044cd15


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* CFF::cff1_private_dict_opset_t::process_op(unsigned int, CFF::interp_env_t<CFF::number_t>&,
   CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>&) */

void __cdecl
CFF::cff1_private_dict_opset_t::process_op
          (uint param_1,long *param_2,parsed_values_t<CFF::dict_val_t> *param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_28 = 0;
  local_20 = 0xffff;
  local_1c = 0;
  if (param_1 < 0x16) {
    if ((0x300fc0U >> (param_1 & 0x1f) & 1) == 0) {
      if (param_1 != 0x13) goto LAB_0044cc7c;
      if (*(int *)((long)param_2 + 0x14) == 0) {
        *(undefined1 *)(param_2 + 2) = 1;
        _hb_CrapPool = 0;
        iVar1 = 0;
      }
      else {
        iVar1 = (int)(double)param_2[(ulong)(*(int *)((long)param_2 + 0x14) - 1) + 3];
      }
      *(int *)(param_3 + 0x18) = iVar1;
    }
  }
  else {
LAB_0044cc7c:
    if ((10 < param_1 - 0x109) || ((0x73fU >> (param_1 - 0x109 & 0x1f) & 1) == 0)) {
      dict_opset_t::process_op(param_1,param_2);
      if (*(int *)((long)param_2 + 0x14) != 0) {
        return;
      }
      goto LAB_0044ccba;
    }
  }
  *(undefined4 *)((long)param_2 + 0x14) = 0;
LAB_0044ccba:
  if ((*(uint *)((long)param_2 + 0xc) <= *(uint *)(param_2 + 1)) && ((char)param_2[2] == '\0')) {
    parsed_values_t<CFF::dict_val_t>::add_op(param_3,param_1,param_2,&local_28);
  }
  return;
}


