// Function : buffer_verify_error
// Namespace: 
// Entry    : 003f57b0
// Prototype: undefined buffer_verify_error(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, char * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15, ...)
// Body     : 003f57b0 - 003f58ca


/* WARNING: Unknown calling convention: __cdecl */
/* buffer_verify_error(hb_buffer_t*, hb_font_t*, char const*, ...) */

void __cdecl
buffer_verify_error(undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,
                   undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,
                   undefined8 param_8,long param_9,undefined8 param_10,char *param_11,
                   undefined8 param_12,undefined8 param_13,undefined8 param_14,undefined1 param_15,
                   ...)

{
  undefined *puVar1;
  char in_AL;
  undefined8 local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 local_138 [24];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  char local_88 [104];
  
  puVar1 = PTR_stderr_00715948;
  if (in_AL != '\0') {
    local_108 = param_1_00;
    local_f8 = param_2_00;
    local_e8 = param_3_00;
    local_d8 = param_4;
    local_c8 = param_5;
    local_b8 = param_6;
    local_a8 = param_7;
    local_98 = param_8;
  }
  local_148 = local_138;
  local_150 = &param_15;
  local_158 = 0x3000000018;
  local_120 = param_12;
  local_118 = param_13;
  local_110 = param_14;
  if (*(long *)(param_9 + 0xd0) == 0) {
    fwrite("harfbuzz ",9,1,*(FILE **)PTR_stderr_00715948);
    vfprintf(*(FILE **)puVar1,param_11,&local_158);
    fputc(10,*(FILE **)puVar1);
  }
  else {
    *(int *)(param_9 + 0xe8) = *(int *)(param_9 + 0xe8) + 1;
    vsnprintf(local_88,100,param_11,&local_158);
    (**(code **)(param_9 + 0xd0))(param_9,param_10,local_88,*(undefined8 *)(param_9 + 0xd8));
    *(int *)(param_9 + 0xe8) = *(int *)(param_9 + 0xe8) + -1;
  }
  return;
}


