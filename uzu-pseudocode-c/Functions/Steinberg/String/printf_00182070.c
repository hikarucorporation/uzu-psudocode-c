// Function : printf
// Namespace: Steinberg:String
// Entry    : 00182070
// Prototype: String * printf(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, String * param_9, long param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15, ...)
// Body     : 00182070 - 00182180


/* WARNING: Unknown calling convention: __cdecl */
/* Steinberg::String::printf(char16_t const*, ...) */

String * __cdecl
Steinberg::String::printf
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          String *param_9,long param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14,undefined1 param_15,...)

{
  short *psVar1;
  char in_AL;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_20e8;
  undefined1 *local_20e0;
  undefined1 *local_20d8;
  undefined1 local_20c8 [16];
  undefined8 local_20b8;
  undefined8 local_20b0;
  undefined8 local_20a8;
  undefined8 local_20a0;
  undefined8 local_2098;
  undefined8 local_2088;
  undefined8 local_2078;
  undefined8 local_2068;
  undefined8 local_2058;
  undefined8 local_2048;
  undefined8 local_2038;
  undefined8 local_2028;
  short local_2018 [4100];
  
  if (in_AL != '\0') {
    local_2098 = param_1_00;
    local_2088 = param_2;
    local_2078 = param_3;
    local_2068 = param_4;
    local_2058 = param_5;
    local_2048 = param_6;
    local_2038 = param_7;
    local_2028 = param_8;
  }
  local_20d8 = local_20c8;
  local_20e0 = &param_15;
  local_20e8 = 0x3000000010;
  local_20b8 = param_11;
  local_20b0 = param_12;
  local_20a8 = param_13;
  local_20a0 = param_14;
  vsnwprintf(local_2018,param_10,&local_20e8);
  if (*(short **)(param_9 + 8) != local_2018) {
    uVar4 = 0;
    do {
      psVar1 = (short *)((long)local_2018 + uVar4);
      uVar4 = uVar4 + 2;
    } while (*psVar1 != 0);
    uVar3 = (int)(uVar4 >> 1) - 1;
    uVar2 = resize(param_9,uVar3,1,'\0');
    if ((char)uVar2 != '\0') {
      if ((0 < (int)uVar3) && (*(void **)(param_9 + 8) != (void *)0x0)) {
        memcpy(*(void **)(param_9 + 8),local_2018,(ulong)uVar3 * 2);
      }
      *(uint *)(param_9 + 0x10) =
           (*(uint *)(param_9 + 0x10) & 0x80000000) + (uVar3 & 0x3fffffff) + 0x40000000;
    }
  }
  return param_9;
}


