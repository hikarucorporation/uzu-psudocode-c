// Function : dsp_add_plus
// Namespace: 
// Entry    : 004f8e30
// Prototype: undefined dsp_add_plus(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, uint param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15)
// Body     : 004f8e30 - 004f8e67


void dsp_add_plus(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,uint param_12,
                 undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  if ((param_12 & 7) == 0) {
    dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,PTR_plus_perf8_00715b28,
            4,param_9,param_10,param_11,(long)(int)param_12,param_15);
    return;
  }
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,PTR_plus_perform_007158e0,
          4,param_9,param_10,param_11,(long)(int)param_12,param_15);
  return;
}


