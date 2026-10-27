// Function : gverb_print
// Namespace: 
// Entry    : 0056b860
// Prototype: undefined gverb_print(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0056b860 - 0056b968


void gverb_print(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  undefined8 uVar1;
  
  uVar1 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               "------------------------------------------------------");
  post(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"[giga.rev~] parameters:");
  post((double)*(float *)(param_9 + 0x48),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "    - maximum room size: %0.0f meters");
  post((double)*(float *)(param_9 + 0x4c),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "    - room size: %0.0f meters");
  post((double)*(float *)(param_9 + 0x50),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "    - decay time: %0.02f seconds");
  post((double)*(float *)(param_9 + 0x90),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "    - high frequency damping: %0.02f");
  post((double)*(float *)(param_9 + 0x34),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "    - input bw (bandwidth): %02.02f");
  post((double)*(float *)(param_9 + 0x38),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "    - dry level: %02.02f");
  post((double)*(float *)(param_9 + 0x40),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "    - early reflections level: %02.02f");
  post((double)*(float *)(param_9 + 0x3c),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "    - late reflections level: %02.02f");
  uVar1 = post((double)*(float *)(param_9 + 0x44),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,"    - wet level: %02.02f");
  post(uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "------------------------------------------------------");
  return;
}


