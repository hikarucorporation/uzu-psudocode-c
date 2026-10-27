// Function : dsp_add_scalarcopy
// Namespace: 
// Entry    : 004f93c0
// Prototype: undefined dsp_add_scalarcopy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, uint param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 004f93c0 - 004f93f9


void dsp_add_scalarcopy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,undefined8 param_10,uint param_11,undefined8 param_12,
                       undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  if ((param_11 & 7) == 0) {
    dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
            PTR_scalarcopy_perf8_007155f0,3,param_9,param_10,(long)(int)param_11,param_14,param_15);
    return;
  }
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          PTR_scalarcopy_perform_00715470,3,param_9,param_10,(long)(int)param_11,param_14,param_15);
  return;
}


