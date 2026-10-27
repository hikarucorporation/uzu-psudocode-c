// Function : interpret
// Namespace: CFF:dict_interpreter_t_CFF__cff1_private_dict_opset_t_CFF__cff1_private_dict_values_base_t_CFF~337304e9
// Entry    : 0044cd20
// Prototype: undefined8 interpret(dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>> * this, parsed_values_t<CFF::dict_val_t> * param_1)
// Body     : 0044cd20 - 0044cdc3


/* CFF::dict_interpreter_t<CFF::cff1_private_dict_opset_t,
   CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>, CFF::interp_env_t<CFF::number_t>
   >::interpret(CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>&) */

undefined8 __thiscall
CFF::
dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>
::interpret(dict_interpreter_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>,CFF::interp_env_t<CFF::number_t>>
            *this,parsed_values_t<CFF::dict_val_t> *param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 **)(param_1 + 0x20) = &_hb_NullPool;
  plVar6 = *(long **)this;
  uVar3 = (ulong)*(uint *)((long)plVar6 + 0xc);
  uVar7 = *(uint *)(plVar6 + 1);
  while( true ) {
    uVar4 = uVar7;
    uVar5 = (int)uVar3 + 1;
    if (uVar4 < uVar5) break;
    bVar1 = *(byte *)(*plVar6 + uVar3);
    uVar7 = (uint)bVar1;
    *(uint *)((long)plVar6 + 0xc) = uVar5;
    if (bVar1 == 0xc) {
      uVar2 = (int)uVar3 + 2;
      if (uVar4 < uVar2) {
        uVar7 = 0xffff;
      }
      else {
        uVar7 = *(byte *)(*plVar6 + (ulong)uVar5) | 0x100;
        *(uint *)((long)plVar6 + 0xc) = uVar2;
      }
    }
    cff1_private_dict_opset_t::process_op(uVar7,plVar6,param_1);
    plVar6 = *(long **)this;
    uVar3 = (ulong)*(uint *)((long)plVar6 + 0xc);
    if ((*(uint *)(plVar6 + 1) < *(uint *)((long)plVar6 + 0xc)) ||
       (uVar7 = *(uint *)(plVar6 + 1), (char)plVar6[2] != '\0')) break;
  }
  return CONCAT71((int7)(uVar3 >> 8),uVar4 < uVar5);
}


