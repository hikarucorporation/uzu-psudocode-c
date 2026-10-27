// Function : sys_do_close_audio
// Namespace: 
// Entry    : 0015bbf0
// Prototype: undefined8 sys_do_close_audio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
// Body     : 0015bbf0 - 0015bbf5


undefined8
sys_do_close_audio(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_sys_do_close_audio_007165f8)();
  return uVar1;
}


