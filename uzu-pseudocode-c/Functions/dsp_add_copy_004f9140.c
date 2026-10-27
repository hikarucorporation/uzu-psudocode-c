// Function : dsp_add_copy
// Namespace: 
// Entry    : 004f9140
// Prototype: undefined dsp_add_copy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, uint param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 004f9140 - 004f9179


void dsp_add_copy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,uint param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  if ((param_11 & 7) == 0) {
    dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,PTR_copy_perf8_00715d60,
            3,param_9,param_10,(long)(int)param_11,param_14,param_15);
    return;
  }
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,PTR_copy_perform_007158d8,
          3,param_9,param_10,(long)(int)param_11,param_14,param_15);
  return;
}


