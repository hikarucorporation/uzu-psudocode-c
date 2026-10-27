// Function : json_extract_get_value_size
// Namespace: 
// Entry    : 0018b180
// Prototype: undefined1[16] json_extract_get_value_size(long * param_1)
// Body     : 0018b180 - 0018b1dc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_extract_get_value_size(json_value_s const*) */

undefined1  [16] __cdecl json_extract_get_value_size(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  switch(param_1[1]) {
  case 0:
    auVar4 = json_extract_get_string_size(*param_1);
    auVar1._8_8_ = auVar4._8_8_;
    auVar1._0_8_ = auVar4._0_8_ + 0x10;
    return auVar1;
  case 1:
    auVar4 = json_extract_get_number_size(*param_1);
    auVar2._8_8_ = auVar4._8_8_;
    auVar2._0_8_ = auVar4._0_8_ + 0x10;
    return auVar2;
  case 2:
    auVar4 = json_extract_get_object_size((long *)*param_1);
    auVar3._8_8_ = auVar4._8_8_;
    auVar3._0_8_ = auVar4._0_8_ + 0x10;
    return auVar3;
  case 3:
    auVar4 = json_extract_get_array_size((long *)*param_1);
    auVar4._0_8_ = auVar4._0_8_ + 0x10;
    return auVar4;
  default:
    return ZEXT816(0x10);
  }
}


