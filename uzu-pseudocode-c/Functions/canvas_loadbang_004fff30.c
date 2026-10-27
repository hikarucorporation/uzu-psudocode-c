// Function : canvas_loadbang
// Namespace: 
// Entry    : 004fff30
// Prototype: undefined canvas_loadbang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 004fff30 - 004fff41


void canvas_loadbang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14)

{
  undefined8 extraout_RDX;
  undefined8 uVar1;
  
  uVar1 = canvas_loadbangabstractions
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10,param_11,param_12,param_13,param_14);
  canvas_loadbangsubpatches
            (uVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             extraout_RDX,param_12,param_13,param_14);
  return;
}


