// Function : pdfloat_bang
// Namespace: 
// Entry    : 0054b7e0
// Prototype: undefined pdfloat_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054b7e0 - 0054b7f0


void pdfloat_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  outlet_float((ulong)*(uint *)(param_9 + 0x30),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x18));
  return;
}


