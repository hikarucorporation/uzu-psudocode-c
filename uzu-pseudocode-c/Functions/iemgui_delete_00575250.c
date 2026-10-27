// Function : iemgui_delete
// Namespace: 
// Entry    : 00575250
// Prototype: undefined iemgui_delete(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10)
// Body     : 00575250 - 0057525d


void iemgui_delete(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long *param_9,long param_10)

{
  canvas_deletelinesfor
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,param_9);
  return;
}


