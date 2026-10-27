// Function : canvas_resume_dsp
// Namespace: 
// Entry    : 004ff9b0
// Prototype: undefined canvas_resume_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004ff9b0 - 004ff9b9


void canvas_resume_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                      ,char *param_13,undefined8 param_14)

{
  if ((int)param_9 == 0) {
    return;
  }
  canvas_start_dsp(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14);
  return;
}


