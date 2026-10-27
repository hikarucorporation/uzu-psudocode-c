// Function : libpd_init_audio
// Namespace: 
// Entry    : 0015da00
// Prototype: undefined8 libpd_init_audio(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, int param_10, int param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0015da00 - 0015da05


undefined8
libpd_init_audio(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int param_9,int param_10,int param_11,undefined8 param_12,undefined8 param_13,
                undefined8 param_14)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_libpd_init_audio_00717500)();
  return uVar1;
}


