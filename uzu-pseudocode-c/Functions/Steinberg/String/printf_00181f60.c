// Function : printf
// Namespace: Steinberg:String
// Entry    : 00181f60
// Prototype: String * printf(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, String * param_9, char * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15, ...)
// Body     : 00181f60 - 0018206e


/* WARNING: Unknown calling convention: __cdecl */
/* Steinberg::String::printf(char const*, ...) */

String * __cdecl
Steinberg::String::printf
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          String *param_9,char *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13
          ,undefined8 param_14,undefined1 param_15,...)

{
  char in_AL;
  size_t sVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_10e8;
  undefined1 *local_10e0;
  undefined1 *local_10d8;
  undefined1 local_10c8 [16];
  undefined8 local_10b8;
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined8 local_10a0;
  undefined8 local_1098;
  undefined8 local_1088;
  undefined8 local_1078;
  undefined8 local_1068;
  undefined8 local_1058;
  undefined8 local_1048;
  undefined8 local_1038;
  undefined8 local_1028;
  char local_1018 [4096];
  
  if (in_AL != '\0') {
    local_1098 = param_1_00;
    local_1088 = param_2;
    local_1078 = param_3;
    local_1068 = param_4;
    local_1058 = param_5;
    local_1048 = param_6;
    local_1038 = param_7;
    local_1028 = param_8;
  }
  local_10d8 = local_10c8;
  local_10e0 = &param_15;
  local_10e8 = 0x3000000010;
  local_10b8 = param_11;
  local_10b0 = param_12;
  local_10a8 = param_13;
  local_10a0 = param_14;
  vsnprintf(local_1018,0xfff,param_10,&local_10e8);
  if (*(char **)(param_9 + 8) != local_1018) {
    sVar1 = strlen(local_1018);
    uVar3 = (uint)sVar1;
    uVar2 = resize(param_9,uVar3,0,'\0');
    if ((char)uVar2 != '\0') {
      if ((0 < (int)uVar3) && (*(void **)(param_9 + 8) != (void *)0x0)) {
        memcpy(*(void **)(param_9 + 8),local_1018,sVar1 & 0xffffffff);
      }
      *(uint *)(param_9 + 0x10) = *(uint *)(param_9 + 0x10) & 0x80000000 | uVar3 & 0x3fffffff;
    }
  }
  return param_9;
}


