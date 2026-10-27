// Function : dsp_add_zero
// Namespace: 
// Entry    : 004f59e0
// Prototype: undefined dsp_add_zero(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 004f59e0 - 004f5a11


void dsp_add_zero(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,uint param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  if ((param_10 & 7) == 0) {
    dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,PTR_zero_perf8_00715d48,
            2,param_9,(long)(int)param_10,param_13,param_14,param_15);
    return;
  }
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,PTR_zero_perform_00715e70,
          2,param_9,(long)(int)param_10,param_13,param_14,param_15);
  return;
}


