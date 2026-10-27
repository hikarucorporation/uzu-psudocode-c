// Function : message
// Namespace: hb_buffer_t
// Entry    : 003e19e0
// Prototype: bool message(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, hb_buffer_t * param_9, undefined8 param_10, char * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15, ...)
// Body     : 003e19e0 - 003e1a79


/* WARNING: Unknown calling convention: __cdecl */
/* hb_buffer_t::message(hb_font_t*, char const*, ...) */

bool __cdecl
hb_buffer_t::message
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          hb_buffer_t *param_9,undefined8 param_10,char *param_11,undefined8 param_12,
          undefined8 param_13,undefined8 param_14,undefined1 param_15,...)

{
  char in_AL;
  bool bVar1;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 local_b8 [24];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1_00;
    local_78 = param_2_00;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  if (*(long *)(param_9 + 0xd0) == 0) {
    return true;
  }
  local_c8 = local_b8;
  local_d0 = &param_15;
  local_d8 = 0x3000000018;
  local_a0 = param_12;
  local_98 = param_13;
  local_90 = param_14;
  bVar1 = message_impl(param_9,param_10,param_11,&local_d8);
  return bVar1;
}


