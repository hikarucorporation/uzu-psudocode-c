// Function : sys_try_reopen_audio
// Namespace: 
// Entry    : 0015bbb0
// Prototype: bool sys_try_reopen_audio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0015bbb0 - 0015bbb5


bool sys_try_reopen_audio
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  bool bVar1;
  
  bVar1 = (bool)(*(code *)PTR_sys_try_reopen_audio_007165d8)();
  return bVar1;
}


